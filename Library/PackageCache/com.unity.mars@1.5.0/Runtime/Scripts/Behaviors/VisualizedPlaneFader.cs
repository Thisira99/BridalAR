using UnityEngine;

namespace Unity.MARS
{
    /// <summary>
    /// Tracks a dynamically updating AR plane, fading the material in on update, and fading it out again after a period of time
    /// </summary>
    internal class VisualizedPlaneFader : MonoBehaviour
    {
        static int k_AlphaID = Shader.PropertyToID("_VisualAlpha");

        enum FadeState
        {
            fadeIn = 0,
            hold,
            fadeOut,
            faded
        }

#pragma warning disable 649
        [SerializeField]
        [Tooltip("The mesh filter that is watched for updates")]
        MeshFilter m_FilterToWatch;

        [SerializeField]
        [Tooltip("The renderer to adjust visibility on.")]
        MeshRenderer m_Renderer;

        [SerializeField]
        [Range(0f, 1f)]
        [Tooltip("The opacity of visualized planes in the fully faded-out state.")]
        float m_FadedOpacity = 0.2f;
#pragma warning restore 649

        [SerializeField]
        [Tooltip("How long it takes to fade the plane visuals in")]
        float m_VisualFadeIn = 0.5f;

        [SerializeField]
        [Tooltip("How long it takes to fade the plane visuals out")]
        float m_VisualFadeOut = 4.0f;

        [SerializeField]
        [Tooltip("How to hold a plane at full opacity after an update occurs")]
        float m_VisualHoldTime = 2.0f;

        int m_VertCount = 0;
        FadeState m_FadeState = FadeState.fadeIn;

        MaterialPropertyBlock m_RendererBlock;
        float m_FadeTimer = 0.0f;
        float m_FadeAlpha = 0.0f;

        void Start()
        {
            m_RendererBlock = new MaterialPropertyBlock();
            m_RendererBlock.SetFloat(k_AlphaID, 0.0f);
            m_Renderer.SetPropertyBlock(m_RendererBlock);
        }

        void Update()
        {
            // Check for a plane update based on number of vertices changing.
            // We allow fading in/out to neatly transition to one another rather than waiting for each step to complete
            var newVertCount = m_FilterToWatch.sharedMesh.vertexCount;
            if (m_VertCount != m_FilterToWatch.sharedMesh.vertexCount)
            {
                m_VertCount = newVertCount;

                switch (m_FadeState)
                {
                    case FadeState.fadeOut:
                    case FadeState.faded:
                        m_FadeState = FadeState.fadeIn;
                        m_FadeTimer = m_FadeAlpha * m_VisualFadeIn;
                        break;
                    case FadeState.hold:
                        m_FadeTimer = 0.0f;
                        break;
                }
            }

            switch (m_FadeState)
            {
                case FadeState.fadeIn:
                    m_FadeTimer += Time.deltaTime;
                    m_FadeAlpha = Mathf.Lerp(m_FadedOpacity, 1.0f, m_FadeTimer/m_VisualFadeIn);
                    if (m_FadeTimer >= m_VisualFadeIn)
                    {
                        m_FadeState = FadeState.hold;
                        m_FadeTimer = 0.0f;
                    }
                    m_RendererBlock.SetFloat(k_AlphaID, m_FadeAlpha);
                    m_Renderer.SetPropertyBlock(m_RendererBlock);
                    break;
                case FadeState.fadeOut:
                    // Set alpha based on timer
                    m_FadeTimer += Time.deltaTime;
                    m_FadeAlpha = Mathf.Lerp(1.0f, m_FadedOpacity, m_FadeTimer / m_VisualFadeOut);
                    if (m_FadeTimer >= m_VisualFadeOut)
                    {
                        m_FadeState = FadeState.faded;
                        m_FadeTimer = 0.0f;
                    }
                    m_RendererBlock.SetFloat(k_AlphaID, m_FadeAlpha);
                    m_Renderer.SetPropertyBlock(m_RendererBlock);
                    break;
                case FadeState.hold:
                    m_FadeTimer += Time.deltaTime;
                    if (m_FadeTimer >= m_VisualHoldTime)
                    {
                        m_FadeState = FadeState.fadeOut;
                        m_FadeTimer = 0.0f;
                    }
                    break;
            }
        }
    }
}
