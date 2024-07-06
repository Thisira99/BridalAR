Shader "MARS/TriplanarSDF"
{
    Properties
    {
        _SDFTex("Distance (R)", 2D) = "white" {}
        _Threshhold("Cutoff", Range(0,1)) = 0.5
        _AAScale("Anti-alias size", Range(0, 1)) = 0.2
        _Scale("SDF Scale", Float) = 1.0
        _Color("Color", Color) = (1,1,1,1)
        _EdgeGradient("Edge Gradient", Float) = 1
        _EdgeStrength("Edge Strength", Float) = 1
        _VisualAlpha("Plane Finding Alpha", Range(0, 1)) = 1
    }
        SubShader
    {
        Tags {"Queue" = "Transparent" "RenderType" = "Transparent"}
        LOD 100
        ZWrite Off
        Blend SrcAlpha OneMinusSrcAlpha

        Pass
        {
            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag
            #pragma multi_compile_instancing

            #include "UnityCG.cginc"

            struct appdata
            {
                float4 vertex : POSITION;
                float2 uv : TEXCOORD0;
                float2 uv2 : TEXCOORD1;
                float3 normal : NORMAL;
                UNITY_VERTEX_INPUT_INSTANCE_ID
            };

            struct v2f
            {
                float4 vertex : SV_POSITION;
                float4 worldPos : TEXCOORD0;
                float2 uv : TEXCOORD1;
                float3 normal : TEXCOORD2;
            };

            sampler2D _SDFTex;
            float4 _SDFTex_ST;
            fixed4 _Color;
            float _EdgeGradient;
            float _EdgeStrength;
            fixed _Threshhold;
            fixed _AAScale;
            fixed _Scale;
            fixed _VisualAlpha;

            v2f vert(appdata v)
            {
                v2f o;

                UNITY_SETUP_INSTANCE_ID(v);

                o.vertex = UnityObjectToClipPos(v.vertex);
                o.worldPos = mul(unity_ObjectToWorld, v.vertex);
                o.uv = v.uv2;
                o.normal = normalize(mul(float4(v.normal, 0.0), unity_WorldToObject).xyz);
                return o;
            }

            fixed4 frag(v2f i) : SV_Target
            {
                // Instead of blending as with a normal triplanar shader, we just choose the greatest normal contribution.  Textures will jump, but grids will be stable
                float3 absNormal = abs(i.normal);
                float maxNormal = max(max(absNormal.x, absNormal.y), absNormal.z);

                float2 worldCoords = i.worldPos.yz * step(maxNormal, absNormal.x) + i.worldPos.xz * step(maxNormal, absNormal.y) + i.worldPos.xy * step(maxNormal, absNormal.z);
                float distance = 1 - tex2D(_SDFTex, worldCoords * _Scale).r;

                // Let distance to edge pull this value up
                float edgeDistance = 1;
                if (i.uv.y > 0.05)
                {
                    edgeDistance = 1 - (pow(i.uv.y, _EdgeGradient) * _EdgeStrength);
                }
                fixed inRange = 1 - (smoothstep(_Threshhold, _Threshhold + (_AAScale * _Scale), distance) * edgeDistance);
                fixed4 col = _Color;
                col.a *= inRange * _VisualAlpha;
                return col;
            }
            ENDCG
        }
    }
}
