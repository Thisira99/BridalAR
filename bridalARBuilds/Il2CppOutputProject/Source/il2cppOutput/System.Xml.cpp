#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
struct Exception_t;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
struct SerializationInfoEnumerator_t810DE600E5F6AA4F2B66A7F56074277CCD8F1540;
struct String_t;
struct StringBuilder_t;
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295;
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct XmlDocumentType_tFD7379E45412FC2EBD65280ED3DE7A1C941A8D9E;
struct XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596;
struct XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF;
struct XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DebuggerDisplayXmlNodeProxy_t75382D048931DB9A7D8EFB35A56EEC1D8241FB07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MissingManifestResourceException_t136A089345909ADB6333D6F4E2AA84C7A00CB3FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlDocumentType_tFD7379E45412FC2EBD65280ED3DE7A1C941A8D9E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlNodeType_tCA25567E42A464038FDA6BA318EC0A9627B4CB95_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlReaderDebuggerDisplayProxy_tCBCA1821E9EDC752D1884A7A4343C3B0C7134AC9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBAB6DC40B1709E21296656960228A17F1BE57FD7____DACC0E6568D9B10337A1A693F10D42C3175E80C378154406C6FBFA989F919F51_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBAB6DC40B1709E21296656960228A17F1BE57FD7____DBBF94CCF4250B303976041627BB8FC302CE57D55373C469F41F97318412037D_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral02E5C3B8AD72F3FC46F6C829AB1FEDDC9B115473;
IL2CPP_EXTERN_C String_t* _stringLiteral0BA9045FCB28C8C8B2ACED641BB5013BAC05D492;
IL2CPP_EXTERN_C String_t* _stringLiteral0E0426234071F961E725D9438C6D5A048A0394B3;
IL2CPP_EXTERN_C String_t* _stringLiteral16C0D1A98D99C5FB32B981C3E41FDB407A083C18;
IL2CPP_EXTERN_C String_t* _stringLiteral1F1BC4D23D8E5661364EBEC728BE303959F6CF91;
IL2CPP_EXTERN_C String_t* _stringLiteral2309CFA4F156DCCB12A14E727DCE560E1426B532;
IL2CPP_EXTERN_C String_t* _stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94;
IL2CPP_EXTERN_C String_t* _stringLiteral2C444E82A2EF8AEC533AC89C8394A988DC706B88;
IL2CPP_EXTERN_C String_t* _stringLiteral37FDAAF1C91F947734553260891C6678930EDDA0;
IL2CPP_EXTERN_C String_t* _stringLiteral38C378162D10735E8E753443B3094057777252AC;
IL2CPP_EXTERN_C String_t* _stringLiteral3EF4F70676F5F18B8797A6624726002F607BB8DE;
IL2CPP_EXTERN_C String_t* _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D;
IL2CPP_EXTERN_C String_t* _stringLiteral47EB169AEE74B181812673783C66416B39F5F464;
IL2CPP_EXTERN_C String_t* _stringLiteral4A962F7AAEC3B50EF4B2CD52A7A2C969B759A960;
IL2CPP_EXTERN_C String_t* _stringLiteral63D27168A6FFA4A02D5FDBA464A248377E88F4F4;
IL2CPP_EXTERN_C String_t* _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51;
IL2CPP_EXTERN_C String_t* _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462;
IL2CPP_EXTERN_C String_t* _stringLiteral81ABCB006928101D1882FA2FBB7BFA00FE053221;
IL2CPP_EXTERN_C String_t* _stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD;
IL2CPP_EXTERN_C String_t* _stringLiteral872479F10B4968F255B608A3698CA1A7EE09888B;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteral909AA3EFEECF6508CFB6F17EDD057508FF1D7D17;
IL2CPP_EXTERN_C String_t* _stringLiteral9465793DB5FEE411F38090ACC397B439BF6CC52C;
IL2CPP_EXTERN_C String_t* _stringLiteral94A9AE3A92C04F7400ADC94B7BCB73FFC0A08DE4;
IL2CPP_EXTERN_C String_t* _stringLiteral99EFCE42C9A728EA7C113BD7034366462E5E09E6;
IL2CPP_EXTERN_C String_t* _stringLiteral9F0051E3370AA31B69F5CBF0E35FBE94ACAE0651;
IL2CPP_EXTERN_C String_t* _stringLiteral9FD9B00B05227B64D8B46A29B6D1B4FEA2C197EF;
IL2CPP_EXTERN_C String_t* _stringLiteralAE1B3CB371C9291D34EB334456EBC01AC8284947;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F;
IL2CPP_EXTERN_C String_t* _stringLiteralB7CFE1337753D3AE49222B506750148BBC1B1149;
IL2CPP_EXTERN_C String_t* _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677;
IL2CPP_EXTERN_C String_t* _stringLiteralCC5753B4554091FA687FA64F4FA303B0C913E2EC;
IL2CPP_EXTERN_C String_t* _stringLiteralD2D2F8D3F9F04A081FFBE6B2AF7917BAAADFC052;
IL2CPP_EXTERN_C String_t* _stringLiteralD4DAA1A26807E1A567D68B161E6A95701A3FD560;
IL2CPP_EXTERN_C String_t* _stringLiteralD5D2875F228D651E1289522AEAAB8C492001C1BE;
IL2CPP_EXTERN_C String_t* _stringLiteralE1356901E9F96E6ACC91632889AE94286AFE4CD4;
IL2CPP_EXTERN_C String_t* _stringLiteralEDC12722FE0763003109C7EDBACB6977C0E31132;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralF91B9F4F51199474999FD40AF7DB23C33195BC0B;
IL2CPP_EXTERN_C String_t* _stringLiteralFDA1C9397356AF77AAE64869A9D6288562F10D4C;
IL2CPP_EXTERN_C String_t* _stringLiteralFE53A3AF35DC43A86F8AA824C5449731805C32DD;
IL2CPP_EXTERN_C const RuntimeMethod* DebuggerDisplayXmlNodeProxy_ToString_mAE6AF3B460B62D08C1090FA5FA67BB80EB091D48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DebuggerDisplayXmlNodeProxy__ctor_mB9B6D906F2EBADBBDBA79FE184D6860363C32356_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Exception_set_HResult_m010A171183E240EBF4F7611E924B533FAB2E471F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Res_GetString_m088600B9D0FC319A206451B009A0583C600B9A83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Res_GetString_mBEE82ACFE97F93A6DDE81E322477CF2713466364_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SR_GetString_mA5E85933B81C0C44BF2C3784451187A0C9514E3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SR_GetString_mBBCFC8C3B18DF600D0FAED49E703251D2250D41B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SerializationEntry_get_Name_mF6151F31B3F43C88AF08F39F178401406642EB67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SerializationEntry_get_Value_mA57713535F866795C180D20067C0E38A85327912_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlCharType_CombineSurrogateChar_m4D32D326745128CD021B4C219295A61B074FB8C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlCharType_InRange_mA7DAF677E841F90A0B3657CB19ACB90A32CDCBF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlCharType_InitInstance_m486814EDE27EF404061078D3EA69301B23F01378_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlCharType_IsHighSurrogate_mB3E741B22E4B47DC85F7F18A411F031D8717BA60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlCharType_IsLowSurrogate_m8D27C4276BE118C7FF3ECC1707EEE026D28FC456_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlCharType_SetProperties_m8964034908DAEC93686ADC1D879E15967B91D4D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlCharType__ctor_mB4A379AC51751894C31365E176E3B9BFB5ABC771_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlCharType_get_Instance_m1279A3FC91B74599A9BC76979E50DBFC07F67C55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlCharType_get_StaticLock_m39193568D86AD7E7A5AA4B3745D64C6F5D60472E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlConvert_CreateException_m5E2DE07EE27F255E64E7A0FE08BA8B1C147EE580_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlConvert_CreateException_mD159B457E4BA66D0656D86E17A7777708A37A708_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlConvert_CreateInvalidCharException_mDD7567983C947053317219EF8F6B7C6CA1DE40FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlConvert_CreateInvalidSurrogatePairException_mF5391689034F1ABE4316BC5E70A2C707546B1B5A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlConvert_EscapeValueForDebuggerDisplay_m4290160B46B7BA2841826618DBBD1403371CA202_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlConvert_VerifyCharData_m343F5EB25CA9DDB41FBB08F1DC1E1A7825762963_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlConvert_VerifyCharData_mF5214AC67F7EEAA0CE5D5546025600FE063100F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlConvert_VerifyXmlChars_m098225D2A1405FA6029DF4A6062EE727533D6AF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlConvert__cctor_m7B068115A3F73B6954E126C91D02F3B338BCBC1C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlDocumentType_get_InternalSubset_mBD8D585ED0401EE1FC02F6FD5445E2109B083FEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlDocumentType_get_Name_m8323D4846265D13C6E393961B2EE0D7FC96812C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlDocumentType_get_NodeType_mF592A32BB36245914C8EC201A2AD5ED0611BCF17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlDocumentType_get_PublicId_m9E81FAF2D0AA9DC847D118813CBEB085F0CE1955_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlDocumentType_get_SystemId_m17B225C509C0F5A4ECBB838AA81D15DED4016909_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlException_BuildCharExceptionArgs_m0420A013644159380BB744A41E3AF1F4CEA5E9D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlException_BuildCharExceptionArgs_m5C3D183AB941552746F7DC656366F28CA5BAFC65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlException_CreateMessage_m7EF05421A745BA0BC494014171B7FE75BE36D056_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlException_FormatUserMessage_m063B26658DDABD7F6364C28217D4A518715FC001_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlException_GetObjectData_m6179AFA2490E6B295B7C192E99A828A45104154D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlException__ctor_m022651219BF5C270D6B851281AACACCB4A6AE5FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlException__ctor_m03120C28C23F76A8DA17B42FB00F599D2FB22B3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlException__ctor_m2FC4E2AB470AD5003F7B9B5B9451CE320AFDDB2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlException__ctor_m39D4A09CD4A3351C21D85A89AAE43ECAD0E910F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlException__ctor_m5BA0E89E2BA57EBA306CA552E59B20E5EA6E9909_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlException__ctor_m9533F222CB16C788C194E7494449C1D96BC781CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlException__ctor_m9E8E4966F92E92928F2334A4B5A6992A20505AD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlException__ctor_mAF9987B6D433F91FBD0101527C492BA66AB25F37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlException_get_Message_m218FC0CDE2D81F3E770F9C48807A9B864492F347_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlNode_get_Value_m21CB160306F9CE778A143C9D753E99F8EF801592_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlNode_get_debuggerDisplayProxy_m3E2D46C8120C46626198C092C4663DA5FE71F373_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlReaderDebuggerDisplayProxy_ToString_mEBDAEFA455D93E9934990687C8ED5421E6537FFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlReaderDebuggerDisplayProxy__ctor_m56B82747E748FBB7BC8D0A1728D526EA23B54C1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlReader__cctor_m9FF3BD38D3644E099B8305E251679A77A0DF493E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlReader_get_Name_m584CCDFC01FC6C2679778096652800364589F784_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlReader_get_debuggerDisplayProxy_mB583F6633EE6F7D376F3DA6298560FF9AC1E9491_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_t4791F64F4B6411D4D033A002CAD365D597AA2451 
{
};
struct U3CPrivateImplementationDetailsU3E_tBAB6DC40B1709E21296656960228A17F1BE57FD7  : public RuntimeObject
{
};
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	bool ___m_isReadOnly;
	int32_t ___cultureID;
	int32_t ___parent_lcid;
	int32_t ___datetime_index;
	int32_t ___number_index;
	int32_t ___default_calendar_type;
	bool ___m_useUserOverride;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo;
	String_t* ___m_name;
	String_t* ___englishname;
	String_t* ___nativename;
	String_t* ___iso3lang;
	String_t* ___iso2lang;
	String_t* ___win3lang;
	String_t* ___territory;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo;
	void* ___textinfo_data;
	int32_t ___m_dataItem;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture;
	bool ___constructed;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData;
	bool ___m_isInherited;
};
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly;
	int32_t ___cultureID;
	int32_t ___parent_lcid;
	int32_t ___datetime_index;
	int32_t ___number_index;
	int32_t ___default_calendar_type;
	int32_t ___m_useUserOverride;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo;
	char* ___m_name;
	char* ___englishname;
	char* ___nativename;
	char* ___iso3lang;
	char* ___iso2lang;
	char* ___win3lang;
	char* ___territory;
	char** ___native_calendar_names;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo;
	void* ___textinfo_data;
	int32_t ___m_dataItem;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture;
	int32_t ___constructed;
	Il2CppSafeArray* ___cached_serialized_form;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData;
	int32_t ___m_isInherited;
};
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly;
	int32_t ___cultureID;
	int32_t ___parent_lcid;
	int32_t ___datetime_index;
	int32_t ___number_index;
	int32_t ___default_calendar_type;
	int32_t ___m_useUserOverride;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo;
	Il2CppChar* ___m_name;
	Il2CppChar* ___englishname;
	Il2CppChar* ___nativename;
	Il2CppChar* ___iso3lang;
	Il2CppChar* ___iso2lang;
	Il2CppChar* ___win3lang;
	Il2CppChar* ___territory;
	Il2CppChar** ___native_calendar_names;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo;
	void* ___textinfo_data;
	int32_t ___m_dataItem;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture;
	int32_t ___constructed;
	Il2CppSafeArray* ___cached_serialized_form;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData;
	int32_t ___m_isInherited;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct Res_t9D2D9AFBC694346FDF3C1FCBE2D6D7AAEADB3B9A  : public RuntimeObject
{
};
struct SR_t89C10D8172151F8A1D55AEE28C31D3233CD919B3  : public RuntimeObject
{
};
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types;
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex;
	int32_t ___m_currMember;
	RuntimeObject* ___m_converter;
	String_t* ___m_fullTypeName;
	String_t* ___m_assemName;
	Type_t* ___objectType;
	bool ___isFullTypeNameSetExplicit;
	bool ___isAssemblyNameSetExplicit;
	bool ___requireSameTokenInPartialTrust;
};
struct SerializationInfoEnumerator_t810DE600E5F6AA4F2B66A7F56074277CCD8F1540  : public RuntimeObject
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____members;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____data;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ____types;
	int32_t ____numItems;
	int32_t ____currItem;
	bool ____current;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct StringBuilder_t  : public RuntimeObject
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars;
	StringBuilder_t* ___m_ChunkPrevious;
	int32_t ___m_ChunkLength;
	int32_t ___m_ChunkOffset;
	int32_t ___m_MaxCapacity;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA  : public RuntimeObject
{
};
struct XmlNameTable_tBDBAACFF3DB40A8E6AF3BDC11F0FF166CF11ABB8  : public RuntimeObject
{
};
struct XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF  : public RuntimeObject
{
};
struct XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD  : public RuntimeObject
{
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct DebuggerDisplayXmlNodeProxy_t75382D048931DB9A7D8EFB35A56EEC1D8241FB07 
{
	XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___node;
};
struct DebuggerDisplayXmlNodeProxy_t75382D048931DB9A7D8EFB35A56EEC1D8241FB07_marshaled_pinvoke
{
	XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___node;
};
struct DebuggerDisplayXmlNodeProxy_t75382D048931DB9A7D8EFB35A56EEC1D8241FB07_marshaled_com
{
	XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___node;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct SerializationEntry_t6A03B35039769EF0EDD14BE879E68F1C104FFF74 
{
	String_t* ____name;
	RuntimeObject* ____value;
	Type_t* ____type;
};
struct SerializationEntry_t6A03B35039769EF0EDD14BE879E68F1C104FFF74_marshaled_pinvoke
{
	char* ____name;
	Il2CppIUnknown* ____value;
	Type_t* ____type;
};
struct SerializationEntry_t6A03B35039769EF0EDD14BE879E68F1C104FFF74_marshaled_com
{
	Il2CppChar* ____name;
	Il2CppIUnknown* ____value;
	Type_t* ____type;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	RuntimeObject* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___charProperties;
};
struct XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_marshaled_pinvoke
{
	Il2CppSafeArray* ___charProperties;
};
struct XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_marshaled_com
{
	Il2CppSafeArray* ___charProperties;
};
struct XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C  : public XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF
{
};
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D6_t6B2CCEB1D7CF8B1F02780951EBD798284272BFE4 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D6_t6B2CCEB1D7CF8B1F02780951EBD798284272BFE4__padding[6];
	};
};
#pragma pack(pop, tp)
struct XmlReaderDebuggerDisplayProxy_tCBCA1821E9EDC752D1884A7A4343C3B0C7134AC9 
{
	XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD* ___reader;
};
struct XmlReaderDebuggerDisplayProxy_tCBCA1821E9EDC752D1884A7A4343C3B0C7134AC9_marshaled_pinvoke
{
	XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD* ___reader;
};
struct XmlReaderDebuggerDisplayProxy_tCBCA1821E9EDC752D1884A7A4343C3B0C7134AC9_marshaled_com
{
	XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD* ___reader;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	intptr_t ___value;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct XmlDocumentType_tFD7379E45412FC2EBD65280ED3DE7A1C941A8D9E  : public XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C
{
	String_t* ___name;
	String_t* ___publicId;
	String_t* ___systemId;
	String_t* ___internalSubset;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct MissingManifestResourceException_t136A089345909ADB6333D6F4E2AA84C7A00CB3FD  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ___res;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___args;
	int32_t ___lineNumber;
	int32_t ___linePosition;
	String_t* ___sourceUri;
	String_t* ___message;
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct U3CPrivateImplementationDetailsU3E_tBAB6DC40B1709E21296656960228A17F1BE57FD7_StaticFields
{
	int64_t ___DACC0E6568D9B10337A1A693F10D42C3175E80C378154406C6FBFA989F919F51;
	__StaticArrayInitTypeSizeU3D6_t6B2CCEB1D7CF8B1F02780951EBD798284272BFE4 ___DBBF94CCF4250B303976041627BB8FC302CE57D55373C469F41F97318412037D;
};
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info;
	RuntimeObject* ___shared_table_lock;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture;
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number;
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX;
	bool ___IsTaiwanSku;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_StaticFields
{
	XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3 ___xmlCharType;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___crt;
	int32_t ___c_EncodedCharLength;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___WhitespaceChars;
};
struct XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD_StaticFields
{
	uint32_t ___IsTextualNodeBitmap;
	uint32_t ___CanReadContentAsBitmap;
	uint32_t ___HasValueBitmap;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray;
};
struct XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_StaticFields
{
	RuntimeObject* ___s_Lock;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_CharProperties;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};



IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetString_mA5E85933B81C0C44BF2C3784451187A0C9514E3C (CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___0_culture, String_t* ___1_name, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m447B585713E5EB3EBF5D9D0710706D01E8A56D75 (RuntimeObject* ___0_provider, String_t* ___1_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XmlReaderDebuggerDisplayProxy__ctor_m56B82747E748FBB7BC8D0A1728D526EA23B54C1A_inline (XmlReaderDebuggerDisplayProxy_tCBCA1821E9EDC752D1884A7A4343C3B0C7134AC9* __this, XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD* ___0_reader, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlConvert_EscapeValueForDebuggerDisplay_m4290160B46B7BA2841826618DBBD1403371CA202 (String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlReaderDebuggerDisplayProxy_ToString_mEBDAEFA455D93E9934990687C8ED5421E6537FFB (XmlReaderDebuggerDisplayProxy_tCBCA1821E9EDC752D1884A7A4343C3B0C7134AC9* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DebuggerDisplayXmlNodeProxy__ctor_mB9B6D906F2EBADBBDBA79FE184D6860363C32356_inline (DebuggerDisplayXmlNodeProxy_t75382D048931DB9A7D8EFB35A56EEC1D8241FB07* __this, XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___0_node, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XmlDocumentType_get_SystemId_m17B225C509C0F5A4ECBB838AA81D15DED4016909_inline (XmlDocumentType_tFD7379E45412FC2EBD65280ED3DE7A1C941A8D9E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XmlDocumentType_get_PublicId_m9E81FAF2D0AA9DC847D118813CBEB085F0CE1955_inline (XmlDocumentType_tFD7379E45412FC2EBD65280ED3DE7A1C941A8D9E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XmlDocumentType_get_InternalSubset_mBD8D585ED0401EE1FC02F6FD5445E2109B083FEF_inline (XmlDocumentType_tFD7379E45412FC2EBD65280ED3DE7A1C941A8D9E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DebuggerDisplayXmlNodeProxy_ToString_mAE6AF3B460B62D08C1090FA5FA67BB80EB091D48 (DebuggerDisplayXmlNodeProxy_t75382D048931DB9A7D8EFB35A56EEC1D8241FB07* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlCharType_get_StaticLock_m39193568D86AD7E7A5AA4B3745D64C6F5D60472E (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlCharType_SetProperties_m8964034908DAEC93686ADC1D879E15967B91D4D4 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_chProps, String_t* ___1_ranges, uint8_t ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_MemoryBarrier_m83873F1E6CEB16C0781941141382DA874A36097D (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XmlCharType__ctor_mB4A379AC51751894C31365E176E3B9BFB5ABC771_inline (XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_charProperties, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlCharType_InitInstance_m486814EDE27EF404061078D3EA69301B23F01378 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlCharType_InRange_mA7DAF677E841F90A0B3657CB19ACB90A32CDCBF2 (int32_t ___0_value, int32_t ___1_start, int32_t ___2_end, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlConvert_VerifyCharData_m343F5EB25CA9DDB41FBB08F1DC1E1A7825762963 (String_t* ___0_data, int32_t ___1_exceptionType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlConvert_VerifyCharData_mF5214AC67F7EEAA0CE5D5546025600FE063100F8 (String_t* ___0_data, int32_t ___1_invCharExceptionType, int32_t ___2_invSurrogateExceptionType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlCharType_IsHighSurrogate_mB3E741B22E4B47DC85F7F18A411F031D8717BA60 (int32_t ___0_ch, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* XmlConvert_CreateException_mD159B457E4BA66D0656D86E17A7777708A37A708 (String_t* ___0_res, int32_t ___1_exceptionType, int32_t ___2_lineNo, int32_t ___3_linePos, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlCharType_IsLowSurrogate_m8D27C4276BE118C7FF3ECC1707EEE026D28FC456 (int32_t ___0_ch, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* XmlConvert_CreateInvalidSurrogatePairException_mF5391689034F1ABE4316BC5E70A2C707546B1B5A (Il2CppChar ___0_low, Il2CppChar ___1_hi, int32_t ___2_exceptionType, int32_t ___3_lineNo, int32_t ___4_linePos, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* XmlConvert_CreateInvalidCharException_mDD7567983C947053317219EF8F6B7C6CA1DE40FE (String_t* ___0_data, int32_t ___1_invCharPos, int32_t ___2_exceptionType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5 (StringBuilder_t* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_mE7CA22532FEF1545B8BC357CB7CAA304BA264703 (StringBuilder_t* __this, String_t* ___0_value, int32_t ___1_startIndex, int32_t ___2_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Res_GetString_mBEE82ACFE97F93A6DDE81E322477CF2713466364 (String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlException__ctor_m03120C28C23F76A8DA17B42FB00F599D2FB22B3F (XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596* __this, String_t* ___0_res, String_t* ___1_arg, int32_t ___2_lineNumber, int32_t ___3_linePosition, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Res_GetString_m088600B9D0FC319A206451B009A0583C600B9A83 (String_t* ___0_name, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlException__ctor_m9533F222CB16C788C194E7494449C1D96BC781CA (XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596* __this, String_t* ___0_res, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_args, int32_t ___2_lineNumber, int32_t ___3_linePosition, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt32_ToString_m464396B0FE2115F3CEA38AEECDDB0FACC3AADADE (uint32_t* __this, String_t* ___0_format, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* XmlConvert_CreateException_m5E2DE07EE27F255E64E7A0FE08BA8B1C147EE580 (String_t* ___0_res, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_args, int32_t ___2_exceptionType, int32_t ___3_lineNo, int32_t ___4_linePos, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* XmlException_BuildCharExceptionArgs_m0420A013644159380BB744A41E3AF1F4CEA5E9D8 (String_t* ___0_data, int32_t ___1_invCharIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3 XmlCharType_get_Instance_m1279A3FC91B74599A9BC76979E50DBFC07F67C55 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___0_array, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___1_fldHandle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemException__ctor_mA2BB392E0F4CD8A4C132984F76B7A9FBDB3B6879 (SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, Type_t* ___1_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializationInfoEnumerator_t810DE600E5F6AA4F2B66A7F56074277CCD8F1540* SerializationInfo_GetEnumerator_m5230A1D4E4B612E90B10E2034C638CD42F667EA6 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializationEntry_t6A03B35039769EF0EDD14BE879E68F1C104FFF74 SerializationInfoEnumerator_get_Current_m820863174CF73089751ACC36BC34DD3188A1929B (SerializationInfoEnumerator_t810DE600E5F6AA4F2B66A7F56074277CCD8F1540* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SerializationEntry_get_Name_mF6151F31B3F43C88AF08F39F178401406642EB67_inline (SerializationEntry_t6A03B35039769EF0EDD14BE879E68F1C104FFF74* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SerializationEntry_get_Value_mA57713535F866795C180D20067C0E38A85327912_inline (SerializationEntry_t6A03B35039769EF0EDD14BE879E68F1C104FFF74* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerializationInfoEnumerator_MoveNext_m4F052C960AE85EFED1048CAAAC538AB3714078A6 (SerializationInfoEnumerator_t810DE600E5F6AA4F2B66A7F56074277CCD8F1540* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlException_CreateMessage_m7EF05421A745BA0BC494014171B7FE75BE36D056 (String_t* ___0_res, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_args, int32_t ___2_lineNumber, int32_t ___3_linePosition, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception_GetObjectData_mD69929DB0BB2512240908B9EEE21778CB7B72DA9 (Exception_t* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m28FE9B110F21DDB8FF5F5E35A0EABD659DB22C2F (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlException__ctor_m39D4A09CD4A3351C21D85A89AAE43ECAD0E910F4 (XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlException__ctor_m022651219BF5C270D6B851281AACACCB4A6AE5FC (XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596* __this, String_t* ___0_message, Exception_t* ___1_innerException, int32_t ___2_lineNumber, int32_t ___3_linePosition, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlException__ctor_m9E8E4966F92E92928F2334A4B5A6992A20505AD7 (XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596* __this, String_t* ___0_message, Exception_t* ___1_innerException, int32_t ___2_lineNumber, int32_t ___3_linePosition, String_t* ___4_sourceUri, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlException_FormatUserMessage_m063B26658DDABD7F6364C28217D4A518715FC001 (String_t* ___0_message, int32_t ___1_lineNumber, int32_t ___2_linePosition, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemException__ctor_m0FC84CACD2A5D66222998AA601A5C41CEC36A611 (SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Exception_set_HResult_m010A171183E240EBF4F7611E924B533FAB2E471F_inline (Exception_t* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlException__ctor_mAF9987B6D433F91FBD0101527C492BA66AB25F37 (XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596* __this, String_t* ___0_res, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_args, Exception_t* ___2_innerException, int32_t ___3_lineNumber, int32_t ___4_linePosition, String_t* ___5_sourceUri, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m3B2730D9F5B0C1C57DCCC8B8DCFB8E5EC4E8979B (int32_t* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* XmlException_BuildCharExceptionArgs_m5C3D183AB941552746F7DC656366F28CA5BAFC65 (Il2CppChar ___0_invChar, Il2CppChar ___1_nextChar, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlCharType_CombineSurrogateChar_m4D32D326745128CD021B4C219295A61B074FB8C7 (int32_t ___0_lowChar, int32_t ___1_highChar, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mFBC28D2E3EB87D497F7E702E4FFAD65F635E44DF (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m3844098E7C18576D263AAF62F69BE5C70BF9A744 (RuntimeObject* ___0_provider, String_t* ___1_format, RuntimeObject* ___2_arg0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_m34499826F048A38EB8216D5844A5DA49F54719C8 (Il2CppChar* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Exception_get_Message_mCFE0D38FDF9001405299AAE43BBE2A9AD806C441 (Exception_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetString_mBBCFC8C3B18DF600D0FAED49E703251D2250D41B (String_t* ___0_name, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetString_mBBCFC8C3B18DF600D0FAED49E703251D2250D41B (String_t* ___0_name, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_GetString_mBBCFC8C3B18DF600D0FAED49E703251D2250D41B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(SR_GetString_mBBCFC8C3B18DF600D0FAED49E703251D2250D41B_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, SR_GetString_mBBCFC8C3B18DF600D0FAED49E703251D2250D41B_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_1 = ___0_name;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___1_args;
		String_t* L_3;
		L_3 = SR_GetString_mA5E85933B81C0C44BF2C3784451187A0C9514E3C(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetString_mA5E85933B81C0C44BF2C3784451187A0C9514E3C (CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___0_culture, String_t* ___1_name, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_GetString_mA5E85933B81C0C44BF2C3784451187A0C9514E3C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(SR_GetString_mA5E85933B81C0C44BF2C3784451187A0C9514E3C_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, SR_GetString_mA5E85933B81C0C44BF2C3784451187A0C9514E3C_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0 = ___0_culture;
		String_t* L_1 = ___1_name;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		String_t* L_3;
		L_3 = String_Format_m447B585713E5EB3EBF5D9D0710706D01E8A56D75(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlReader_get_Name_m584CCDFC01FC6C2679778096652800364589F784 (XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlReader_get_Name_m584CCDFC01FC6C2679778096652800364589F784_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(XmlReader_get_Name_m584CCDFC01FC6C2679778096652800364589F784_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XmlReader_get_Name_m584CCDFC01FC6C2679778096652800364589F784_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		String_t* L_0;
		L_0 = VirtualFuncInvoker0< String_t* >::Invoke(7, __this);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(6, __this);
		return L_2;
	}

IL_0014:
	{
		XmlNameTable_tBDBAACFF3DB40A8E6AF3BDC11F0FF166CF11ABB8* L_3;
		L_3 = VirtualFuncInvoker0< XmlNameTable_tBDBAACFF3DB40A8E6AF3BDC11F0FF166CF11ABB8* >::Invoke(10, __this);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(7, __this);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(6, __this);
		String_t* L_6;
		L_6 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_4, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, L_5, NULL);
		NullCheck(L_3);
		String_t* L_7;
		L_7 = VirtualFuncInvoker1< String_t*, String_t* >::Invoke(4, L_3, L_6);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlReader_get_debuggerDisplayProxy_mB583F6633EE6F7D376F3DA6298560FF9AC1E9491 (XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlReaderDebuggerDisplayProxy_tCBCA1821E9EDC752D1884A7A4343C3B0C7134AC9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlReader_get_debuggerDisplayProxy_mB583F6633EE6F7D376F3DA6298560FF9AC1E9491_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(XmlReader_get_debuggerDisplayProxy_mB583F6633EE6F7D376F3DA6298560FF9AC1E9491_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XmlReader_get_debuggerDisplayProxy_mB583F6633EE6F7D376F3DA6298560FF9AC1E9491_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		XmlReaderDebuggerDisplayProxy_tCBCA1821E9EDC752D1884A7A4343C3B0C7134AC9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		XmlReaderDebuggerDisplayProxy__ctor_m56B82747E748FBB7BC8D0A1728D526EA23B54C1A_inline((&L_0), __this, NULL);
		XmlReaderDebuggerDisplayProxy_tCBCA1821E9EDC752D1884A7A4343C3B0C7134AC9 L_1 = L_0;
		RuntimeObject* L_2 = Box(XmlReaderDebuggerDisplayProxy_tCBCA1821E9EDC752D1884A7A4343C3B0C7134AC9_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlReader__cctor_m9FF3BD38D3644E099B8305E251679A77A0DF493E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlReader__cctor_m9FF3BD38D3644E099B8305E251679A77A0DF493E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(XmlReader__cctor_m9FF3BD38D3644E099B8305E251679A77A0DF493E_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XmlReader__cctor_m9FF3BD38D3644E099B8305E251679A77A0DF493E_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		((XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD_StaticFields*)il2cpp_codegen_static_fields_for(XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD_il2cpp_TypeInfo_var))->___IsTextualNodeBitmap = ((int32_t)24600);
		((XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD_StaticFields*)il2cpp_codegen_static_fields_for(XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD_il2cpp_TypeInfo_var))->___CanReadContentAsBitmap = ((int32_t)123324);
		((XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD_StaticFields*)il2cpp_codegen_static_fields_for(XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD_il2cpp_TypeInfo_var))->___HasValueBitmap = ((int32_t)157084);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C void XmlReaderDebuggerDisplayProxy_tCBCA1821E9EDC752D1884A7A4343C3B0C7134AC9_marshal_pinvoke(const XmlReaderDebuggerDisplayProxy_tCBCA1821E9EDC752D1884A7A4343C3B0C7134AC9& unmarshaled, XmlReaderDebuggerDisplayProxy_tCBCA1821E9EDC752D1884A7A4343C3B0C7134AC9_marshaled_pinvoke& marshaled)
{
	Exception_t* ___readerException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'reader' of type 'XmlReaderDebuggerDisplayProxy': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___readerException, NULL);
}
IL2CPP_EXTERN_C void XmlReaderDebuggerDisplayProxy_tCBCA1821E9EDC752D1884A7A4343C3B0C7134AC9_marshal_pinvoke_back(const XmlReaderDebuggerDisplayProxy_tCBCA1821E9EDC752D1884A7A4343C3B0C7134AC9_marshaled_pinvoke& marshaled, XmlReaderDebuggerDisplayProxy_tCBCA1821E9EDC752D1884A7A4343C3B0C7134AC9& unmarshaled)
{
	Exception_t* ___readerException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'reader' of type 'XmlReaderDebuggerDisplayProxy': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___readerException, NULL);
}
IL2CPP_EXTERN_C void XmlReaderDebuggerDisplayProxy_tCBCA1821E9EDC752D1884A7A4343C3B0C7134AC9_marshal_pinvoke_cleanup(XmlReaderDebuggerDisplayProxy_tCBCA1821E9EDC752D1884A7A4343C3B0C7134AC9_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void XmlReaderDebuggerDisplayProxy_tCBCA1821E9EDC752D1884A7A4343C3B0C7134AC9_marshal_com(const XmlReaderDebuggerDisplayProxy_tCBCA1821E9EDC752D1884A7A4343C3B0C7134AC9& unmarshaled, XmlReaderDebuggerDisplayProxy_tCBCA1821E9EDC752D1884A7A4343C3B0C7134AC9_marshaled_com& marshaled)
{
	Exception_t* ___readerException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'reader' of type 'XmlReaderDebuggerDisplayProxy': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___readerException, NULL);
}
IL2CPP_EXTERN_C void XmlReaderDebuggerDisplayProxy_tCBCA1821E9EDC752D1884A7A4343C3B0C7134AC9_marshal_com_back(const XmlReaderDebuggerDisplayProxy_tCBCA1821E9EDC752D1884A7A4343C3B0C7134AC9_marshaled_com& marshaled, XmlReaderDebuggerDisplayProxy_tCBCA1821E9EDC752D1884A7A4343C3B0C7134AC9& unmarshaled)
{
	Exception_t* ___readerException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'reader' of type 'XmlReaderDebuggerDisplayProxy': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___readerException, NULL);
}
IL2CPP_EXTERN_C void XmlReaderDebuggerDisplayProxy_tCBCA1821E9EDC752D1884A7A4343C3B0C7134AC9_marshal_com_cleanup(XmlReaderDebuggerDisplayProxy_tCBCA1821E9EDC752D1884A7A4343C3B0C7134AC9_marshaled_com& marshaled)
{
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlReaderDebuggerDisplayProxy__ctor_m56B82747E748FBB7BC8D0A1728D526EA23B54C1A (XmlReaderDebuggerDisplayProxy_tCBCA1821E9EDC752D1884A7A4343C3B0C7134AC9* __this, XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlReaderDebuggerDisplayProxy__ctor_m56B82747E748FBB7BC8D0A1728D526EA23B54C1A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(XmlReaderDebuggerDisplayProxy__ctor_m56B82747E748FBB7BC8D0A1728D526EA23B54C1A_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XmlReaderDebuggerDisplayProxy__ctor_m56B82747E748FBB7BC8D0A1728D526EA23B54C1A_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD* L_0 = ___0_reader;
		__this->___reader = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___reader), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void XmlReaderDebuggerDisplayProxy__ctor_m56B82747E748FBB7BC8D0A1728D526EA23B54C1A_AdjustorThunk (RuntimeObject* __this, XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD* ___0_reader, const RuntimeMethod* method)
{
	XmlReaderDebuggerDisplayProxy_tCBCA1821E9EDC752D1884A7A4343C3B0C7134AC9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XmlReaderDebuggerDisplayProxy_tCBCA1821E9EDC752D1884A7A4343C3B0C7134AC9*>(__this + _offset);
	XmlReaderDebuggerDisplayProxy__ctor_m56B82747E748FBB7BC8D0A1728D526EA23B54C1A_inline(_thisAdjusted, ___0_reader, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlReaderDebuggerDisplayProxy_ToString_mEBDAEFA455D93E9934990687C8ED5421E6537FFB (XmlReaderDebuggerDisplayProxy_tCBCA1821E9EDC752D1884A7A4343C3B0C7134AC9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNodeType_tCA25567E42A464038FDA6BA318EC0A9627B4CB95_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlReaderDebuggerDisplayProxy_ToString_mEBDAEFA455D93E9934990687C8ED5421E6537FFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F1BC4D23D8E5661364EBEC728BE303959F6CF91);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C444E82A2EF8AEC533AC89C8394A988DC706B88);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EF4F70676F5F18B8797A6624726002F607BB8DE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral909AA3EFEECF6508CFB6F17EDD057508FF1D7D17);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99EFCE42C9A728EA7C113BD7034366462E5E09E6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9FD9B00B05227B64D8B46A29B6D1B4FEA2C197EF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4DAA1A26807E1A567D68B161E6A95701A3FD560);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(XmlReaderDebuggerDisplayProxy_ToString_mEBDAEFA455D93E9934990687C8ED5421E6537FFB_RuntimeMethod_var);
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XmlReaderDebuggerDisplayProxy_ToString_mEBDAEFA455D93E9934990687C8ED5421E6537FFB_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD* L_0 = __this->___reader;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(4, L_0);
		V_0 = L_1;
		Il2CppFakeBox<int32_t> L_2(XmlNodeType_tCA25567E42A464038FDA6BA318EC0A9627B4CB95_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_3;
		L_3 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_2), NULL);
		V_1 = L_3;
		int32_t L_4 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_4, 1)))
		{
			case 0:
			{
				goto IL_006b;
			}
			case 1:
			{
				goto IL_008c;
			}
			case 2:
			{
				goto IL_00da;
			}
			case 3:
			{
				goto IL_00da;
			}
			case 4:
			{
				goto IL_006b;
			}
			case 5:
			{
				goto IL_017c;
			}
			case 6:
			{
				goto IL_008c;
			}
			case 7:
			{
				goto IL_00da;
			}
			case 8:
			{
				goto IL_017c;
			}
			case 9:
			{
				goto IL_00fd;
			}
			case 10:
			{
				goto IL_017c;
			}
			case 11:
			{
				goto IL_017c;
			}
			case 12:
			{
				goto IL_00da;
			}
			case 13:
			{
				goto IL_00da;
			}
			case 14:
			{
				goto IL_006b;
			}
			case 15:
			{
				goto IL_006b;
			}
			case 16:
			{
				goto IL_00da;
			}
		}
	}
	{
		goto IL_017c;
	}

IL_006b:
	{
		String_t* L_5 = V_1;
		XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD* L_6 = __this->___reader;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(5, L_6);
		String_t* L_8;
		L_8 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_5, _stringLiteral99EFCE42C9A728EA7C113BD7034366462E5E09E6, L_7, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, NULL);
		V_1 = L_8;
		goto IL_017c;
	}

IL_008c:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		String_t* L_11 = V_1;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_11);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_10;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral99EFCE42C9A728EA7C113BD7034366462E5E09E6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_12;
		XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD* L_14 = __this->___reader;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = VirtualFuncInvoker0< String_t* >::Invoke(5, L_14);
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_15);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_13;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral3EF4F70676F5F18B8797A6624726002F607BB8DE);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_16;
		XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD* L_18 = __this->___reader;
		NullCheck(L_18);
		String_t* L_19;
		L_19 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_18);
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		String_t* L_20;
		L_20 = XmlConvert_EscapeValueForDebuggerDisplay_m4290160B46B7BA2841826618DBBD1403371CA202(L_19, NULL);
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_20);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_17;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		String_t* L_22;
		L_22 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_21, NULL);
		V_1 = L_22;
		goto IL_017c;
	}

IL_00da:
	{
		String_t* L_23 = V_1;
		XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD* L_24 = __this->___reader;
		NullCheck(L_24);
		String_t* L_25;
		L_25 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_24);
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		String_t* L_26;
		L_26 = XmlConvert_EscapeValueForDebuggerDisplay_m4290160B46B7BA2841826618DBBD1403371CA202(L_25, NULL);
		String_t* L_27;
		L_27 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_23, _stringLiteral2C444E82A2EF8AEC533AC89C8394A988DC706B88, L_26, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, NULL);
		V_1 = L_27;
		goto IL_017c;
	}

IL_00fd:
	{
		String_t* L_28 = V_1;
		XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD* L_29 = __this->___reader;
		NullCheck(L_29);
		String_t* L_30;
		L_30 = VirtualFuncInvoker0< String_t* >::Invoke(5, L_29);
		String_t* L_31;
		L_31 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_28, _stringLiteral99EFCE42C9A728EA7C113BD7034366462E5E09E6, L_30, _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D, NULL);
		V_1 = L_31;
		String_t* L_32 = V_1;
		XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD* L_33 = __this->___reader;
		NullCheck(L_33);
		String_t* L_34;
		L_34 = VirtualFuncInvoker1< String_t*, String_t* >::Invoke(9, L_33, _stringLiteralD4DAA1A26807E1A567D68B161E6A95701A3FD560);
		String_t* L_35;
		L_35 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_32, _stringLiteral9FD9B00B05227B64D8B46A29B6D1B4FEA2C197EF, L_34, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, NULL);
		V_1 = L_35;
		String_t* L_36 = V_1;
		XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD* L_37 = __this->___reader;
		NullCheck(L_37);
		String_t* L_38;
		L_38 = VirtualFuncInvoker1< String_t*, String_t* >::Invoke(9, L_37, _stringLiteral1F1BC4D23D8E5661364EBEC728BE303959F6CF91);
		String_t* L_39;
		L_39 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_36, _stringLiteral909AA3EFEECF6508CFB6F17EDD057508FF1D7D17, L_38, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, NULL);
		V_1 = L_39;
		String_t* L_40 = V_1;
		XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD* L_41 = __this->___reader;
		NullCheck(L_41);
		String_t* L_42;
		L_42 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_41);
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		String_t* L_43;
		L_43 = XmlConvert_EscapeValueForDebuggerDisplay_m4290160B46B7BA2841826618DBBD1403371CA202(L_42, NULL);
		String_t* L_44;
		L_44 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_40, _stringLiteral2C444E82A2EF8AEC533AC89C8394A988DC706B88, L_43, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, NULL);
		V_1 = L_44;
	}

IL_017c:
	{
		String_t* L_45 = V_1;
		return L_45;
	}
}
IL2CPP_EXTERN_C  String_t* XmlReaderDebuggerDisplayProxy_ToString_mEBDAEFA455D93E9934990687C8ED5421E6537FFB_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XmlReaderDebuggerDisplayProxy_tCBCA1821E9EDC752D1884A7A4343C3B0C7134AC9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XmlReaderDebuggerDisplayProxy_tCBCA1821E9EDC752D1884A7A4343C3B0C7134AC9*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = XmlReaderDebuggerDisplayProxy_ToString_mEBDAEFA455D93E9934990687C8ED5421E6537FFB(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlDocumentType_get_Name_m8323D4846265D13C6E393961B2EE0D7FC96812C2 (XmlDocumentType_tFD7379E45412FC2EBD65280ED3DE7A1C941A8D9E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlDocumentType_get_Name_m8323D4846265D13C6E393961B2EE0D7FC96812C2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(XmlDocumentType_get_Name_m8323D4846265D13C6E393961B2EE0D7FC96812C2_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XmlDocumentType_get_Name_m8323D4846265D13C6E393961B2EE0D7FC96812C2_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		String_t* L_0 = __this->___name;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlDocumentType_get_NodeType_mF592A32BB36245914C8EC201A2AD5ED0611BCF17 (XmlDocumentType_tFD7379E45412FC2EBD65280ED3DE7A1C941A8D9E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlDocumentType_get_NodeType_mF592A32BB36245914C8EC201A2AD5ED0611BCF17_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(XmlDocumentType_get_NodeType_mF592A32BB36245914C8EC201A2AD5ED0611BCF17_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XmlDocumentType_get_NodeType_mF592A32BB36245914C8EC201A2AD5ED0611BCF17_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		return (int32_t)(((int32_t)10));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlDocumentType_get_PublicId_m9E81FAF2D0AA9DC847D118813CBEB085F0CE1955 (XmlDocumentType_tFD7379E45412FC2EBD65280ED3DE7A1C941A8D9E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlDocumentType_get_PublicId_m9E81FAF2D0AA9DC847D118813CBEB085F0CE1955_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(XmlDocumentType_get_PublicId_m9E81FAF2D0AA9DC847D118813CBEB085F0CE1955_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XmlDocumentType_get_PublicId_m9E81FAF2D0AA9DC847D118813CBEB085F0CE1955_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		String_t* L_0 = __this->___publicId;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlDocumentType_get_SystemId_m17B225C509C0F5A4ECBB838AA81D15DED4016909 (XmlDocumentType_tFD7379E45412FC2EBD65280ED3DE7A1C941A8D9E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlDocumentType_get_SystemId_m17B225C509C0F5A4ECBB838AA81D15DED4016909_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(XmlDocumentType_get_SystemId_m17B225C509C0F5A4ECBB838AA81D15DED4016909_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XmlDocumentType_get_SystemId_m17B225C509C0F5A4ECBB838AA81D15DED4016909_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		String_t* L_0 = __this->___systemId;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlDocumentType_get_InternalSubset_mBD8D585ED0401EE1FC02F6FD5445E2109B083FEF (XmlDocumentType_tFD7379E45412FC2EBD65280ED3DE7A1C941A8D9E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlDocumentType_get_InternalSubset_mBD8D585ED0401EE1FC02F6FD5445E2109B083FEF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(XmlDocumentType_get_InternalSubset_mBD8D585ED0401EE1FC02F6FD5445E2109B083FEF_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XmlDocumentType_get_InternalSubset_mBD8D585ED0401EE1FC02F6FD5445E2109B083FEF_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		String_t* L_0 = __this->___internalSubset;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlNode_get_Value_m21CB160306F9CE778A143C9D753E99F8EF801592 (XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNode_get_Value_m21CB160306F9CE778A143C9D753E99F8EF801592_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(XmlNode_get_Value_m21CB160306F9CE778A143C9D753E99F8EF801592_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XmlNode_get_Value_m21CB160306F9CE778A143C9D753E99F8EF801592_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		return (String_t*)NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlNode_get_debuggerDisplayProxy_m3E2D46C8120C46626198C092C4663DA5FE71F373 (XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DebuggerDisplayXmlNodeProxy_t75382D048931DB9A7D8EFB35A56EEC1D8241FB07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNode_get_debuggerDisplayProxy_m3E2D46C8120C46626198C092C4663DA5FE71F373_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(XmlNode_get_debuggerDisplayProxy_m3E2D46C8120C46626198C092C4663DA5FE71F373_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XmlNode_get_debuggerDisplayProxy_m3E2D46C8120C46626198C092C4663DA5FE71F373_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		DebuggerDisplayXmlNodeProxy_t75382D048931DB9A7D8EFB35A56EEC1D8241FB07 L_0;
		memset((&L_0), 0, sizeof(L_0));
		DebuggerDisplayXmlNodeProxy__ctor_mB9B6D906F2EBADBBDBA79FE184D6860363C32356_inline((&L_0), __this, NULL);
		DebuggerDisplayXmlNodeProxy_t75382D048931DB9A7D8EFB35A56EEC1D8241FB07 L_1 = L_0;
		RuntimeObject* L_2 = Box(DebuggerDisplayXmlNodeProxy_t75382D048931DB9A7D8EFB35A56EEC1D8241FB07_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C void DebuggerDisplayXmlNodeProxy_t75382D048931DB9A7D8EFB35A56EEC1D8241FB07_marshal_pinvoke(const DebuggerDisplayXmlNodeProxy_t75382D048931DB9A7D8EFB35A56EEC1D8241FB07& unmarshaled, DebuggerDisplayXmlNodeProxy_t75382D048931DB9A7D8EFB35A56EEC1D8241FB07_marshaled_pinvoke& marshaled)
{
	Exception_t* ___nodeException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'node' of type 'DebuggerDisplayXmlNodeProxy': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___nodeException, NULL);
}
IL2CPP_EXTERN_C void DebuggerDisplayXmlNodeProxy_t75382D048931DB9A7D8EFB35A56EEC1D8241FB07_marshal_pinvoke_back(const DebuggerDisplayXmlNodeProxy_t75382D048931DB9A7D8EFB35A56EEC1D8241FB07_marshaled_pinvoke& marshaled, DebuggerDisplayXmlNodeProxy_t75382D048931DB9A7D8EFB35A56EEC1D8241FB07& unmarshaled)
{
	Exception_t* ___nodeException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'node' of type 'DebuggerDisplayXmlNodeProxy': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___nodeException, NULL);
}
IL2CPP_EXTERN_C void DebuggerDisplayXmlNodeProxy_t75382D048931DB9A7D8EFB35A56EEC1D8241FB07_marshal_pinvoke_cleanup(DebuggerDisplayXmlNodeProxy_t75382D048931DB9A7D8EFB35A56EEC1D8241FB07_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void DebuggerDisplayXmlNodeProxy_t75382D048931DB9A7D8EFB35A56EEC1D8241FB07_marshal_com(const DebuggerDisplayXmlNodeProxy_t75382D048931DB9A7D8EFB35A56EEC1D8241FB07& unmarshaled, DebuggerDisplayXmlNodeProxy_t75382D048931DB9A7D8EFB35A56EEC1D8241FB07_marshaled_com& marshaled)
{
	Exception_t* ___nodeException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'node' of type 'DebuggerDisplayXmlNodeProxy': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___nodeException, NULL);
}
IL2CPP_EXTERN_C void DebuggerDisplayXmlNodeProxy_t75382D048931DB9A7D8EFB35A56EEC1D8241FB07_marshal_com_back(const DebuggerDisplayXmlNodeProxy_t75382D048931DB9A7D8EFB35A56EEC1D8241FB07_marshaled_com& marshaled, DebuggerDisplayXmlNodeProxy_t75382D048931DB9A7D8EFB35A56EEC1D8241FB07& unmarshaled)
{
	Exception_t* ___nodeException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'node' of type 'DebuggerDisplayXmlNodeProxy': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___nodeException, NULL);
}
IL2CPP_EXTERN_C void DebuggerDisplayXmlNodeProxy_t75382D048931DB9A7D8EFB35A56EEC1D8241FB07_marshal_com_cleanup(DebuggerDisplayXmlNodeProxy_t75382D048931DB9A7D8EFB35A56EEC1D8241FB07_marshaled_com& marshaled)
{
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebuggerDisplayXmlNodeProxy__ctor_mB9B6D906F2EBADBBDBA79FE184D6860363C32356 (DebuggerDisplayXmlNodeProxy_t75382D048931DB9A7D8EFB35A56EEC1D8241FB07* __this, XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___0_node, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DebuggerDisplayXmlNodeProxy__ctor_mB9B6D906F2EBADBBDBA79FE184D6860363C32356_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(DebuggerDisplayXmlNodeProxy__ctor_mB9B6D906F2EBADBBDBA79FE184D6860363C32356_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, DebuggerDisplayXmlNodeProxy__ctor_mB9B6D906F2EBADBBDBA79FE184D6860363C32356_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_0 = ___0_node;
		__this->___node = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___node), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void DebuggerDisplayXmlNodeProxy__ctor_mB9B6D906F2EBADBBDBA79FE184D6860363C32356_AdjustorThunk (RuntimeObject* __this, XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___0_node, const RuntimeMethod* method)
{
	DebuggerDisplayXmlNodeProxy_t75382D048931DB9A7D8EFB35A56EEC1D8241FB07* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DebuggerDisplayXmlNodeProxy_t75382D048931DB9A7D8EFB35A56EEC1D8241FB07*>(__this + _offset);
	DebuggerDisplayXmlNodeProxy__ctor_mB9B6D906F2EBADBBDBA79FE184D6860363C32356_inline(_thisAdjusted, ___0_node, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DebuggerDisplayXmlNodeProxy_ToString_mAE6AF3B460B62D08C1090FA5FA67BB80EB091D48 (DebuggerDisplayXmlNodeProxy_t75382D048931DB9A7D8EFB35A56EEC1D8241FB07* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DebuggerDisplayXmlNodeProxy_ToString_mAE6AF3B460B62D08C1090FA5FA67BB80EB091D48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlDocumentType_tFD7379E45412FC2EBD65280ED3DE7A1C941A8D9E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNodeType_tCA25567E42A464038FDA6BA318EC0A9627B4CB95_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C444E82A2EF8AEC533AC89C8394A988DC706B88);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EF4F70676F5F18B8797A6624726002F607BB8DE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9465793DB5FEE411F38090ACC397B439BF6CC52C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99EFCE42C9A728EA7C113BD7034366462E5E09E6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7CFE1337753D3AE49222B506750148BBC1B1149);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(DebuggerDisplayXmlNodeProxy_ToString_mAE6AF3B460B62D08C1090FA5FA67BB80EB091D48_RuntimeMethod_var);
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	XmlDocumentType_tFD7379E45412FC2EBD65280ED3DE7A1C941A8D9E* V_2 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, DebuggerDisplayXmlNodeProxy_ToString_mAE6AF3B460B62D08C1090FA5FA67BB80EB091D48_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_0 = __this->___node;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(6, L_0);
		V_0 = L_1;
		Il2CppFakeBox<int32_t> L_2(XmlNodeType_tCA25567E42A464038FDA6BA318EC0A9627B4CB95_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_3;
		L_3 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_2), NULL);
		V_1 = L_3;
		int32_t L_4 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_4, 1)))
		{
			case 0:
			{
				goto IL_006b;
			}
			case 1:
			{
				goto IL_008c;
			}
			case 2:
			{
				goto IL_00da;
			}
			case 3:
			{
				goto IL_00da;
			}
			case 4:
			{
				goto IL_006b;
			}
			case 5:
			{
				goto IL_016c;
			}
			case 6:
			{
				goto IL_008c;
			}
			case 7:
			{
				goto IL_00da;
			}
			case 8:
			{
				goto IL_016c;
			}
			case 9:
			{
				goto IL_00fd;
			}
			case 10:
			{
				goto IL_016c;
			}
			case 11:
			{
				goto IL_016c;
			}
			case 12:
			{
				goto IL_00da;
			}
			case 13:
			{
				goto IL_00da;
			}
			case 14:
			{
				goto IL_016c;
			}
			case 15:
			{
				goto IL_016c;
			}
			case 16:
			{
				goto IL_00da;
			}
		}
	}
	{
		goto IL_016c;
	}

IL_006b:
	{
		String_t* L_5 = V_1;
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_6 = __this->___node;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(4, L_6);
		String_t* L_8;
		L_8 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_5, _stringLiteral99EFCE42C9A728EA7C113BD7034366462E5E09E6, L_7, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, NULL);
		V_1 = L_8;
		goto IL_016c;
	}

IL_008c:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		String_t* L_11 = V_1;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_11);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_10;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral99EFCE42C9A728EA7C113BD7034366462E5E09E6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_12;
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_14 = __this->___node;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = VirtualFuncInvoker0< String_t* >::Invoke(4, L_14);
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_15);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_13;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral3EF4F70676F5F18B8797A6624726002F607BB8DE);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_16;
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_18 = __this->___node;
		NullCheck(L_18);
		String_t* L_19;
		L_19 = VirtualFuncInvoker0< String_t* >::Invoke(5, L_18);
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		String_t* L_20;
		L_20 = XmlConvert_EscapeValueForDebuggerDisplay_m4290160B46B7BA2841826618DBBD1403371CA202(L_19, NULL);
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_20);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_17;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		String_t* L_22;
		L_22 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_21, NULL);
		V_1 = L_22;
		goto IL_016c;
	}

IL_00da:
	{
		String_t* L_23 = V_1;
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_24 = __this->___node;
		NullCheck(L_24);
		String_t* L_25;
		L_25 = VirtualFuncInvoker0< String_t* >::Invoke(5, L_24);
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		String_t* L_26;
		L_26 = XmlConvert_EscapeValueForDebuggerDisplay_m4290160B46B7BA2841826618DBBD1403371CA202(L_25, NULL);
		String_t* L_27;
		L_27 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_23, _stringLiteral2C444E82A2EF8AEC533AC89C8394A988DC706B88, L_26, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, NULL);
		V_1 = L_27;
		goto IL_016c;
	}

IL_00fd:
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_28 = __this->___node;
		V_2 = ((XmlDocumentType_tFD7379E45412FC2EBD65280ED3DE7A1C941A8D9E*)CastclassClass((RuntimeObject*)L_28, XmlDocumentType_tFD7379E45412FC2EBD65280ED3DE7A1C941A8D9E_il2cpp_TypeInfo_var));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_29 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_30 = L_29;
		String_t* L_31 = V_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_31);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_32 = L_30;
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral99EFCE42C9A728EA7C113BD7034366462E5E09E6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = L_32;
		XmlDocumentType_tFD7379E45412FC2EBD65280ED3DE7A1C941A8D9E* L_34 = V_2;
		NullCheck(L_34);
		String_t* L_35;
		L_35 = VirtualFuncInvoker0< String_t* >::Invoke(4, L_34);
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_35);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_36 = L_33;
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralB7CFE1337753D3AE49222B506750148BBC1B1149);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_37 = L_36;
		XmlDocumentType_tFD7379E45412FC2EBD65280ED3DE7A1C941A8D9E* L_38 = V_2;
		NullCheck(L_38);
		String_t* L_39;
		L_39 = XmlDocumentType_get_SystemId_m17B225C509C0F5A4ECBB838AA81D15DED4016909_inline(L_38, NULL);
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_39);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40 = L_37;
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral9465793DB5FEE411F38090ACC397B439BF6CC52C);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_41 = L_40;
		XmlDocumentType_tFD7379E45412FC2EBD65280ED3DE7A1C941A8D9E* L_42 = V_2;
		NullCheck(L_42);
		String_t* L_43;
		L_43 = XmlDocumentType_get_PublicId_m9E81FAF2D0AA9DC847D118813CBEB085F0CE1955_inline(L_42, NULL);
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)L_43);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_44 = L_41;
		NullCheck(L_44);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral3EF4F70676F5F18B8797A6624726002F607BB8DE);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_45 = L_44;
		XmlDocumentType_tFD7379E45412FC2EBD65280ED3DE7A1C941A8D9E* L_46 = V_2;
		NullCheck(L_46);
		String_t* L_47;
		L_47 = XmlDocumentType_get_InternalSubset_mBD8D585ED0401EE1FC02F6FD5445E2109B083FEF_inline(L_46, NULL);
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		String_t* L_48;
		L_48 = XmlConvert_EscapeValueForDebuggerDisplay_m4290160B46B7BA2841826618DBBD1403371CA202(L_47, NULL);
		NullCheck(L_45);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)L_48);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_49 = L_45;
		NullCheck(L_49);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		String_t* L_50;
		L_50 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_49, NULL);
		V_1 = L_50;
	}

IL_016c:
	{
		String_t* L_51 = V_1;
		return L_51;
	}
}
IL2CPP_EXTERN_C  String_t* DebuggerDisplayXmlNodeProxy_ToString_mAE6AF3B460B62D08C1090FA5FA67BB80EB091D48_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	DebuggerDisplayXmlNodeProxy_t75382D048931DB9A7D8EFB35A56EEC1D8241FB07* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DebuggerDisplayXmlNodeProxy_t75382D048931DB9A7D8EFB35A56EEC1D8241FB07*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = DebuggerDisplayXmlNodeProxy_ToString_mAE6AF3B460B62D08C1090FA5FA67BB80EB091D48(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C void XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_marshal_pinvoke(const XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3& unmarshaled, XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_marshaled_pinvoke& marshaled)
{
	marshaled.___charProperties = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___charProperties);
}
IL2CPP_EXTERN_C void XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_marshal_pinvoke_back(const XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_marshaled_pinvoke& marshaled, XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___charProperties = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___charProperties);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___charProperties), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___charProperties));
}
IL2CPP_EXTERN_C void XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_marshal_pinvoke_cleanup(XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___charProperties);
	marshaled.___charProperties = NULL;
}
IL2CPP_EXTERN_C void XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_marshal_com(const XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3& unmarshaled, XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_marshaled_com& marshaled)
{
	marshaled.___charProperties = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___charProperties);
}
IL2CPP_EXTERN_C void XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_marshal_com_back(const XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_marshaled_com& marshaled, XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___charProperties = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___charProperties);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___charProperties), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___charProperties));
}
IL2CPP_EXTERN_C void XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_marshal_com_cleanup(XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_marshaled_com& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___charProperties);
	marshaled.___charProperties = NULL;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlCharType_get_StaticLock_m39193568D86AD7E7A5AA4B3745D64C6F5D60472E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlCharType_get_StaticLock_m39193568D86AD7E7A5AA4B3745D64C6F5D60472E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(XmlCharType_get_StaticLock_m39193568D86AD7E7A5AA4B3745D64C6F5D60472E_RuntimeMethod_var);
	RuntimeObject* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XmlCharType_get_StaticLock_m39193568D86AD7E7A5AA4B3745D64C6F5D60472E_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ((XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_StaticFields*)il2cpp_codegen_static_fields_for(XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_il2cpp_TypeInfo_var))->___s_Lock;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_1, NULL);
		V_0 = L_1;
		RuntimeObject* L_2 = V_0;
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>((&((XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_StaticFields*)il2cpp_codegen_static_fields_for(XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_il2cpp_TypeInfo_var))->___s_Lock), L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = ((XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_StaticFields*)il2cpp_codegen_static_fields_for(XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_il2cpp_TypeInfo_var))->___s_Lock;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlCharType_InitInstance_m486814EDE27EF404061078D3EA69301B23F01378 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlCharType_InitInstance_m486814EDE27EF404061078D3EA69301B23F01378_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02E5C3B8AD72F3FC46F6C829AB1FEDDC9B115473);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E0426234071F961E725D9438C6D5A048A0394B3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2309CFA4F156DCCB12A14E727DCE560E1426B532);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral81ABCB006928101D1882FA2FBB7BFA00FE053221);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral94A9AE3A92C04F7400ADC94B7BCB73FFC0A08DE4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC5753B4554091FA687FA64F4FA303B0C913E2EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDA1C9397356AF77AAE64869A9D6288562F10D4C);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(XmlCharType_InitInstance_m486814EDE27EF404061078D3EA69301B23F01378_RuntimeMethod_var);
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XmlCharType_InitInstance_m486814EDE27EF404061078D3EA69301B23F01378_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0;
		L_0 = XmlCharType_get_StaticLock_m39193568D86AD7E7A5AA4B3745D64C6F5D60472E(NULL);
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009d:
			{
				STORE_TRY_ID(methodExecutionContext, -1);
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_00a6;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_00a6:
				{
					return;
				}
			}
		});
		try
		{
			STORE_TRY_ID(methodExecutionContext, 0);
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ((XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_StaticFields*)il2cpp_codegen_static_fields_for(XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_il2cpp_TypeInfo_var))->___s_CharProperties;
				il2cpp_codegen_memory_barrier();
				if (!L_4)
				{
					goto IL_001e_1;
				}
			}
			{
				goto IL_00a7;
			}

IL_001e_1:
			{
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)65536));
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = L_5;
				XmlCharType_SetProperties_m8964034908DAEC93686ADC1D879E15967B91D4D4(L_6, _stringLiteral2309CFA4F156DCCB12A14E727DCE560E1426B532, (uint8_t)1, NULL);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = L_6;
				XmlCharType_SetProperties_m8964034908DAEC93686ADC1D879E15967B91D4D4(L_7, _stringLiteral0E0426234071F961E725D9438C6D5A048A0394B3, (uint8_t)2, NULL);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = L_7;
				XmlCharType_SetProperties_m8964034908DAEC93686ADC1D879E15967B91D4D4(L_8, _stringLiteralCC5753B4554091FA687FA64F4FA303B0C913E2EC, (uint8_t)4, NULL);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = L_8;
				XmlCharType_SetProperties_m8964034908DAEC93686ADC1D879E15967B91D4D4(L_9, _stringLiteral02E5C3B8AD72F3FC46F6C829AB1FEDDC9B115473, (uint8_t)8, NULL);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = L_9;
				XmlCharType_SetProperties_m8964034908DAEC93686ADC1D879E15967B91D4D4(L_10, _stringLiteralFDA1C9397356AF77AAE64869A9D6288562F10D4C, (uint8_t)((int32_t)16), NULL);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = L_10;
				XmlCharType_SetProperties_m8964034908DAEC93686ADC1D879E15967B91D4D4(L_11, _stringLiteral02E5C3B8AD72F3FC46F6C829AB1FEDDC9B115473, (uint8_t)((int32_t)32), NULL);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = L_11;
				XmlCharType_SetProperties_m8964034908DAEC93686ADC1D879E15967B91D4D4(L_12, _stringLiteral94A9AE3A92C04F7400ADC94B7BCB73FFC0A08DE4, (uint8_t)((int32_t)64), NULL);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = L_12;
				XmlCharType_SetProperties_m8964034908DAEC93686ADC1D879E15967B91D4D4(L_13, _stringLiteral81ABCB006928101D1882FA2FBB7BFA00FE053221, (uint8_t)((int32_t)128), NULL);
				Thread_MemoryBarrier_m83873F1E6CEB16C0781941141382DA874A36097D(NULL);
				il2cpp_codegen_memory_barrier();
				((XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_StaticFields*)il2cpp_codegen_static_fields_for(XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_il2cpp_TypeInfo_var))->___s_CharProperties = L_13;
				Il2CppCodeGenWriteBarrier((void**)(&((XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_StaticFields*)il2cpp_codegen_static_fields_for(XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_il2cpp_TypeInfo_var))->___s_CharProperties), (void*)L_13);
				goto IL_00a7;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a7:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlCharType_SetProperties_m8964034908DAEC93686ADC1D879E15967B91D4D4 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_chProps, String_t* ___1_ranges, uint8_t ___2_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlCharType_SetProperties_m8964034908DAEC93686ADC1D879E15967B91D4D4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(XmlCharType_SetProperties_m8964034908DAEC93686ADC1D879E15967B91D4D4_RuntimeMethod_var);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XmlCharType_SetProperties_m8964034908DAEC93686ADC1D879E15967B91D4D4_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		V_0 = 0;
		goto IL_0031;
	}

IL_0004:
	{
		CHECK_PAUSE_POINT;
		String_t* L_0 = ___1_ranges;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		Il2CppChar L_2;
		L_2 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_0, L_1, NULL);
		V_1 = L_2;
		String_t* L_3 = ___1_ranges;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Il2CppChar L_5;
		L_5 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_3, ((int32_t)il2cpp_codegen_add(L_4, 1)), NULL);
		V_2 = L_5;
		goto IL_0029;
	}

IL_0018:
	{
		CHECK_PAUSE_POINT;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_chProps;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		uint8_t* L_8 = ((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)));
		int32_t L_9 = *((uint8_t*)L_8);
		uint8_t L_10 = ___2_value;
		*((int8_t*)L_8) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_9|(int32_t)L_10)));
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0029:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_2;
		if ((((int32_t)L_12) <= ((int32_t)L_13)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 2));
	}

IL_0031:
	{
		int32_t L_15 = V_0;
		String_t* L_16 = ___1_ranges;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_16, NULL);
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlCharType__ctor_mB4A379AC51751894C31365E176E3B9BFB5ABC771 (XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_charProperties, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlCharType__ctor_mB4A379AC51751894C31365E176E3B9BFB5ABC771_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(XmlCharType__ctor_mB4A379AC51751894C31365E176E3B9BFB5ABC771_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XmlCharType__ctor_mB4A379AC51751894C31365E176E3B9BFB5ABC771_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_charProperties;
		__this->___charProperties = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___charProperties), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void XmlCharType__ctor_mB4A379AC51751894C31365E176E3B9BFB5ABC771_AdjustorThunk (RuntimeObject* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_charProperties, const RuntimeMethod* method)
{
	XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3*>(__this + _offset);
	XmlCharType__ctor_mB4A379AC51751894C31365E176E3B9BFB5ABC771_inline(_thisAdjusted, ___0_charProperties, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3 XmlCharType_get_Instance_m1279A3FC91B74599A9BC76979E50DBFC07F67C55 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlCharType_get_Instance_m1279A3FC91B74599A9BC76979E50DBFC07F67C55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(XmlCharType_get_Instance_m1279A3FC91B74599A9BC76979E50DBFC07F67C55_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XmlCharType_get_Instance_m1279A3FC91B74599A9BC76979E50DBFC07F67C55_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ((XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_StaticFields*)il2cpp_codegen_static_fields_for(XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_il2cpp_TypeInfo_var))->___s_CharProperties;
		il2cpp_codegen_memory_barrier();
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		XmlCharType_InitInstance_m486814EDE27EF404061078D3EA69301B23F01378(NULL);
	}

IL_000e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ((XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_StaticFields*)il2cpp_codegen_static_fields_for(XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_il2cpp_TypeInfo_var))->___s_CharProperties;
		il2cpp_codegen_memory_barrier();
		XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3 L_2;
		memset((&L_2), 0, sizeof(L_2));
		XmlCharType__ctor_mB4A379AC51751894C31365E176E3B9BFB5ABC771_inline((&L_2), L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlCharType_IsHighSurrogate_mB3E741B22E4B47DC85F7F18A411F031D8717BA60 (int32_t ___0_ch, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlCharType_IsHighSurrogate_mB3E741B22E4B47DC85F7F18A411F031D8717BA60_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(XmlCharType_IsHighSurrogate_mB3E741B22E4B47DC85F7F18A411F031D8717BA60_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XmlCharType_IsHighSurrogate_mB3E741B22E4B47DC85F7F18A411F031D8717BA60_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___0_ch;
		bool L_1;
		L_1 = XmlCharType_InRange_mA7DAF677E841F90A0B3657CB19ACB90A32CDCBF2(L_0, ((int32_t)55296), ((int32_t)56319), NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlCharType_IsLowSurrogate_m8D27C4276BE118C7FF3ECC1707EEE026D28FC456 (int32_t ___0_ch, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlCharType_IsLowSurrogate_m8D27C4276BE118C7FF3ECC1707EEE026D28FC456_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(XmlCharType_IsLowSurrogate_m8D27C4276BE118C7FF3ECC1707EEE026D28FC456_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XmlCharType_IsLowSurrogate_m8D27C4276BE118C7FF3ECC1707EEE026D28FC456_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___0_ch;
		bool L_1;
		L_1 = XmlCharType_InRange_mA7DAF677E841F90A0B3657CB19ACB90A32CDCBF2(L_0, ((int32_t)56320), ((int32_t)57343), NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlCharType_CombineSurrogateChar_m4D32D326745128CD021B4C219295A61B074FB8C7 (int32_t ___0_lowChar, int32_t ___1_highChar, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlCharType_CombineSurrogateChar_m4D32D326745128CD021B4C219295A61B074FB8C7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(XmlCharType_CombineSurrogateChar_m4D32D326745128CD021B4C219295A61B074FB8C7_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XmlCharType_CombineSurrogateChar_m4D32D326745128CD021B4C219295A61B074FB8C7_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___0_lowChar;
		int32_t L_1 = ___1_highChar;
		return ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_0, ((int32_t)56320)))|((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)il2cpp_codegen_subtract(L_1, ((int32_t)55296)))<<((int32_t)10))), ((int32_t)65536)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlCharType_InRange_mA7DAF677E841F90A0B3657CB19ACB90A32CDCBF2 (int32_t ___0_value, int32_t ___1_start, int32_t ___2_end, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlCharType_InRange_mA7DAF677E841F90A0B3657CB19ACB90A32CDCBF2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(XmlCharType_InRange_mA7DAF677E841F90A0B3657CB19ACB90A32CDCBF2_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XmlCharType_InRange_mA7DAF677E841F90A0B3657CB19ACB90A32CDCBF2_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = ___1_start;
		int32_t L_2 = ___2_end;
		int32_t L_3 = ___1_start;
		return (bool)((((int32_t)((!(((uint32_t)((int32_t)il2cpp_codegen_subtract(L_0, L_1))) <= ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlConvert_VerifyXmlChars_m098225D2A1405FA6029DF4A6062EE727533D6AF6 (String_t* ___0_content, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlConvert_VerifyXmlChars_m098225D2A1405FA6029DF4A6062EE727533D6AF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(XmlConvert_VerifyXmlChars_m098225D2A1405FA6029DF4A6062EE727533D6AF6_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XmlConvert_VerifyXmlChars_m098225D2A1405FA6029DF4A6062EE727533D6AF6_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		String_t* L_0 = ___0_content;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAE1B3CB371C9291D34EB334456EBC01AC8284947)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlConvert_VerifyXmlChars_m098225D2A1405FA6029DF4A6062EE727533D6AF6_RuntimeMethod_var)));
	}

IL_000e:
	{
		String_t* L_2 = ___0_content;
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		XmlConvert_VerifyCharData_m343F5EB25CA9DDB41FBB08F1DC1E1A7825762963(L_2, 1, NULL);
		String_t* L_3 = ___0_content;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlConvert_VerifyCharData_m343F5EB25CA9DDB41FBB08F1DC1E1A7825762963 (String_t* ___0_data, int32_t ___1_exceptionType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlConvert_VerifyCharData_m343F5EB25CA9DDB41FBB08F1DC1E1A7825762963_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(XmlConvert_VerifyCharData_m343F5EB25CA9DDB41FBB08F1DC1E1A7825762963_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XmlConvert_VerifyCharData_m343F5EB25CA9DDB41FBB08F1DC1E1A7825762963_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		String_t* L_0 = ___0_data;
		int32_t L_1 = ___1_exceptionType;
		int32_t L_2 = ___1_exceptionType;
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		XmlConvert_VerifyCharData_mF5214AC67F7EEAA0CE5D5546025600FE063100F8(L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlConvert_VerifyCharData_mF5214AC67F7EEAA0CE5D5546025600FE063100F8 (String_t* ___0_data, int32_t ___1_invCharExceptionType, int32_t ___2_invSurrogateExceptionType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlConvert_VerifyCharData_mF5214AC67F7EEAA0CE5D5546025600FE063100F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(XmlConvert_VerifyCharData_mF5214AC67F7EEAA0CE5D5546025600FE063100F8_RuntimeMethod_var);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XmlConvert_VerifyCharData_mF5214AC67F7EEAA0CE5D5546025600FE063100F8_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		String_t* L_0 = ___0_data;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		String_t* L_1 = ___0_data;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_1, NULL);
		if (L_2)
		{
			goto IL_000c;
		}
	}

IL_000b:
	{
		return;
	}

IL_000c:
	{
		V_0 = 0;
		String_t* L_3 = ___0_data;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_3, NULL);
		V_1 = L_4;
		goto IL_001b;
	}

IL_0017:
	{
		CHECK_PAUSE_POINT;
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_001b:
	{
		CHECK_PAUSE_POINT;
		int32_t L_6 = V_0;
		int32_t L_7 = V_1;
		if ((((int32_t)L_6) >= ((int32_t)L_7)))
		{
			goto IL_0036;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = (&((XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_StaticFields*)il2cpp_codegen_static_fields_for(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var))->___xmlCharType)->___charProperties;
		String_t* L_9 = ___0_data;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		Il2CppChar L_11;
		L_11 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_9, L_10, NULL);
		NullCheck(L_8);
		Il2CppChar L_12 = L_11;
		uint8_t L_13 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		if (((int32_t)((int32_t)L_13&((int32_t)16))))
		{
			goto IL_0017;
		}
	}

IL_0036:
	{
		int32_t L_14 = V_0;
		int32_t L_15 = V_1;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_003b;
		}
	}
	{
		return;
	}

IL_003b:
	{
		String_t* L_16 = ___0_data;
		int32_t L_17 = V_0;
		NullCheck(L_16);
		Il2CppChar L_18;
		L_18 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_16, L_17, NULL);
		bool L_19;
		L_19 = XmlCharType_IsHighSurrogate_mB3E741B22E4B47DC85F7F18A411F031D8717BA60(L_18, NULL);
		if (!L_19)
		{
			goto IL_0090;
		}
	}
	{
		int32_t L_20 = V_0;
		int32_t L_21 = V_1;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_add(L_20, 1))) == ((uint32_t)L_21))))
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_22 = ___2_invSurrogateExceptionType;
		int32_t L_23 = V_0;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var)));
		Exception_t* L_24;
		L_24 = XmlConvert_CreateException_mD159B457E4BA66D0656D86E17A7777708A37A708(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFE53A3AF35DC43A86F8AA824C5449731805C32DD)), L_22, 0, ((int32_t)il2cpp_codegen_add(L_23, 1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlConvert_VerifyCharData_mF5214AC67F7EEAA0CE5D5546025600FE063100F8_RuntimeMethod_var)));
	}

IL_005f:
	{
		String_t* L_25 = ___0_data;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		Il2CppChar L_27;
		L_27 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_25, ((int32_t)il2cpp_codegen_add(L_26, 1)), NULL);
		bool L_28;
		L_28 = XmlCharType_IsLowSurrogate_m8D27C4276BE118C7FF3ECC1707EEE026D28FC456(L_27, NULL);
		if (!L_28)
		{
			goto IL_0075;
		}
	}
	{
		int32_t L_29 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_29, 2));
		goto IL_001b;
	}

IL_0075:
	{
		String_t* L_30 = ___0_data;
		int32_t L_31 = V_0;
		NullCheck(L_30);
		Il2CppChar L_32;
		L_32 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_30, ((int32_t)il2cpp_codegen_add(L_31, 1)), NULL);
		String_t* L_33 = ___0_data;
		int32_t L_34 = V_0;
		NullCheck(L_33);
		Il2CppChar L_35;
		L_35 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_33, L_34, NULL);
		int32_t L_36 = ___2_invSurrogateExceptionType;
		int32_t L_37 = V_0;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var)));
		Exception_t* L_38;
		L_38 = XmlConvert_CreateInvalidSurrogatePairException_mF5391689034F1ABE4316BC5E70A2C707546B1B5A(L_32, L_35, L_36, 0, ((int32_t)il2cpp_codegen_add(L_37, 1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_38, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlConvert_VerifyCharData_mF5214AC67F7EEAA0CE5D5546025600FE063100F8_RuntimeMethod_var)));
	}

IL_0090:
	{
		String_t* L_39 = ___0_data;
		int32_t L_40 = V_0;
		int32_t L_41 = ___1_invCharExceptionType;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var)));
		Exception_t* L_42;
		L_42 = XmlConvert_CreateInvalidCharException_mDD7567983C947053317219EF8F6B7C6CA1DE40FE(L_39, L_40, L_41, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_42, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlConvert_VerifyCharData_mF5214AC67F7EEAA0CE5D5546025600FE063100F8_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlConvert_EscapeValueForDebuggerDisplay_m4290160B46B7BA2841826618DBBD1403371CA202 (String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlConvert_EscapeValueForDebuggerDisplay_m4290160B46B7BA2841826618DBBD1403371CA202_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB78F235D4291950A7D101307609C259F3E1F033F);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(XmlConvert_EscapeValueForDebuggerDisplay_m4290160B46B7BA2841826618DBBD1403371CA202_RuntimeMethod_var);
	StringBuilder_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Il2CppChar V_3 = 0x0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XmlConvert_EscapeValueForDebuggerDisplay_m4290160B46B7BA2841826618DBBD1403371CA202_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		V_0 = (StringBuilder_t*)NULL;
		V_1 = 0;
		V_2 = 0;
		goto IL_00ad;
	}

IL_000b:
	{
		CHECK_PAUSE_POINT;
		String_t* L_0 = ___0_value;
		int32_t L_1 = V_1;
		NullCheck(L_0);
		Il2CppChar L_2;
		L_2 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_0, L_1, NULL);
		V_3 = L_2;
		Il2CppChar L_3 = V_3;
		if ((((int32_t)L_3) < ((int32_t)((int32_t)32))))
		{
			goto IL_0020;
		}
	}
	{
		Il2CppChar L_4 = V_3;
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_00a9;
		}
	}

IL_0020:
	{
		StringBuilder_t* L_5 = V_0;
		if (L_5)
		{
			goto IL_0031;
		}
	}
	{
		String_t* L_6 = ___0_value;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_6, NULL);
		StringBuilder_t* L_8 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5(L_8, ((int32_t)il2cpp_codegen_add(L_7, 4)), NULL);
		V_0 = L_8;
	}

IL_0031:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = V_2;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) <= ((int32_t)0)))
		{
			goto IL_0043;
		}
	}
	{
		StringBuilder_t* L_11 = V_0;
		String_t* L_12 = ___0_value;
		int32_t L_13 = V_2;
		int32_t L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_11);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_mE7CA22532FEF1545B8BC357CB7CAA304BA264703(L_11, L_12, L_13, ((int32_t)il2cpp_codegen_subtract(L_14, L_15)), NULL);
	}

IL_0043:
	{
		int32_t L_17 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		Il2CppChar L_18 = V_3;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_18, ((int32_t)9))))
		{
			case 0:
			{
				goto IL_0093;
			}
			case 1:
			{
				goto IL_0085;
			}
			case 2:
			{
				goto IL_00a1;
			}
			case 3:
			{
				goto IL_00a1;
			}
			case 4:
			{
				goto IL_0077;
			}
		}
	}
	{
		Il2CppChar L_19 = V_3;
		if ((!(((uint32_t)L_19) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_00a1;
		}
	}
	{
		StringBuilder_t* L_20 = V_0;
		NullCheck(L_20);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_20, _stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD, NULL);
		goto IL_00a9;
	}

IL_0077:
	{
		StringBuilder_t* L_22 = V_0;
		NullCheck(L_22);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_22, _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F, NULL);
		goto IL_00a9;
	}

IL_0085:
	{
		StringBuilder_t* L_24 = V_0;
		NullCheck(L_24);
		StringBuilder_t* L_25;
		L_25 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_24, _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51, NULL);
		goto IL_00a9;
	}

IL_0093:
	{
		StringBuilder_t* L_26 = V_0;
		NullCheck(L_26);
		StringBuilder_t* L_27;
		L_27 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_26, _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462, NULL);
		goto IL_00a9;
	}

IL_00a1:
	{
		StringBuilder_t* L_28 = V_0;
		Il2CppChar L_29 = V_3;
		NullCheck(L_28);
		StringBuilder_t* L_30;
		L_30 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_28, L_29, NULL);
	}

IL_00a9:
	{
		int32_t L_31 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_00ad:
	{
		int32_t L_32 = V_1;
		String_t* L_33 = ___0_value;
		NullCheck(L_33);
		int32_t L_34;
		L_34 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_33, NULL);
		if ((((int32_t)L_32) < ((int32_t)L_34)))
		{
			goto IL_000b;
		}
	}
	{
		StringBuilder_t* L_35 = V_0;
		if (L_35)
		{
			goto IL_00be;
		}
	}
	{
		String_t* L_36 = ___0_value;
		return L_36;
	}

IL_00be:
	{
		int32_t L_37 = V_1;
		int32_t L_38 = V_2;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_37, L_38))) <= ((int32_t)0)))
		{
			goto IL_00d0;
		}
	}
	{
		StringBuilder_t* L_39 = V_0;
		String_t* L_40 = ___0_value;
		int32_t L_41 = V_2;
		int32_t L_42 = V_1;
		int32_t L_43 = V_2;
		NullCheck(L_39);
		StringBuilder_t* L_44;
		L_44 = StringBuilder_Append_mE7CA22532FEF1545B8BC357CB7CAA304BA264703(L_39, L_40, L_41, ((int32_t)il2cpp_codegen_subtract(L_42, L_43)), NULL);
	}

IL_00d0:
	{
		StringBuilder_t* L_45 = V_0;
		NullCheck(L_45);
		String_t* L_46;
		L_46 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_45);
		return L_46;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* XmlConvert_CreateException_mD159B457E4BA66D0656D86E17A7777708A37A708 (String_t* ___0_res, int32_t ___1_exceptionType, int32_t ___2_lineNo, int32_t ___3_linePos, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlConvert_CreateException_mD159B457E4BA66D0656D86E17A7777708A37A708_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(XmlConvert_CreateException_mD159B457E4BA66D0656D86E17A7777708A37A708_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XmlConvert_CreateException_mD159B457E4BA66D0656D86E17A7777708A37A708_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___1_exceptionType;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_1 = ___1_exceptionType;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0015;
		}
	}
	{
		goto IL_0015;
	}

IL_0009:
	{
		String_t* L_2 = ___0_res;
		String_t* L_3;
		L_3 = Res_GetString_mBEE82ACFE97F93A6DDE81E322477CF2713466364(L_2, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, L_3, NULL);
		return L_4;
	}

IL_0015:
	{
		String_t* L_5 = ___0_res;
		String_t* L_6 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
		int32_t L_7 = ___2_lineNo;
		int32_t L_8 = ___3_linePos;
		XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596* L_9 = (XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596*)il2cpp_codegen_object_new(XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596_il2cpp_TypeInfo_var);
		XmlException__ctor_m03120C28C23F76A8DA17B42FB00F599D2FB22B3F(L_9, L_5, L_6, L_7, L_8, NULL);
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* XmlConvert_CreateException_m5E2DE07EE27F255E64E7A0FE08BA8B1C147EE580 (String_t* ___0_res, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_args, int32_t ___2_exceptionType, int32_t ___3_lineNo, int32_t ___4_linePos, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlConvert_CreateException_m5E2DE07EE27F255E64E7A0FE08BA8B1C147EE580_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(XmlConvert_CreateException_m5E2DE07EE27F255E64E7A0FE08BA8B1C147EE580_RuntimeMethod_var);
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XmlConvert_CreateException_m5E2DE07EE27F255E64E7A0FE08BA8B1C147EE580_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___2_exceptionType;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_1 = ___2_exceptionType;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		goto IL_0018;
	}

IL_0009:
	{
		String_t* L_2 = ___0_res;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = ___1_args;
		V_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)L_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		String_t* L_5;
		L_5 = Res_GetString_m088600B9D0FC319A206451B009A0583C600B9A83(L_2, L_4, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_6, L_5, NULL);
		return L_6;
	}

IL_0018:
	{
		String_t* L_7 = ___0_res;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = ___1_args;
		int32_t L_9 = ___3_lineNo;
		int32_t L_10 = ___4_linePos;
		XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596* L_11 = (XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596*)il2cpp_codegen_object_new(XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596_il2cpp_TypeInfo_var);
		XmlException__ctor_m9533F222CB16C788C194E7494449C1D96BC781CA(L_11, L_7, L_8, L_9, L_10, NULL);
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* XmlConvert_CreateInvalidSurrogatePairException_mF5391689034F1ABE4316BC5E70A2C707546B1B5A (Il2CppChar ___0_low, Il2CppChar ___1_hi, int32_t ___2_exceptionType, int32_t ___3_lineNo, int32_t ___4_linePos, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlConvert_CreateInvalidSurrogatePairException_mF5391689034F1ABE4316BC5E70A2C707546B1B5A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5D2875F228D651E1289522AEAAB8C492001C1BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF91B9F4F51199474999FD40AF7DB23C33195BC0B);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(XmlConvert_CreateInvalidSurrogatePairException_mF5391689034F1ABE4316BC5E70A2C707546B1B5A_RuntimeMethod_var);
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	uint32_t V_1 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XmlConvert_CreateInvalidSurrogatePairException_mF5391689034F1ABE4316BC5E70A2C707546B1B5A_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		Il2CppChar L_2 = ___1_hi;
		V_1 = L_2;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_3;
		L_3 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_4;
		L_4 = UInt32_ToString_m464396B0FE2115F3CEA38AEECDDB0FACC3AADADE((&V_1), _stringLiteralD5D2875F228D651E1289522AEAAB8C492001C1BE, L_3, NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_1;
		Il2CppChar L_6 = ___0_low;
		V_1 = L_6;
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_7;
		L_7 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_8;
		L_8 = UInt32_ToString_m464396B0FE2115F3CEA38AEECDDB0FACC3AADADE((&V_1), _stringLiteralD5D2875F228D651E1289522AEAAB8C492001C1BE, L_7, NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_8);
		V_0 = L_5;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = V_0;
		int32_t L_10 = ___2_exceptionType;
		int32_t L_11 = ___3_lineNo;
		int32_t L_12 = ___4_linePos;
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		Exception_t* L_13;
		L_13 = XmlConvert_CreateException_m5E2DE07EE27F255E64E7A0FE08BA8B1C147EE580(_stringLiteralF91B9F4F51199474999FD40AF7DB23C33195BC0B, L_9, L_10, L_11, L_12, NULL);
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* XmlConvert_CreateInvalidCharException_mDD7567983C947053317219EF8F6B7C6CA1DE40FE (String_t* ___0_data, int32_t ___1_invCharPos, int32_t ___2_exceptionType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlConvert_CreateInvalidCharException_mDD7567983C947053317219EF8F6B7C6CA1DE40FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37FDAAF1C91F947734553260891C6678930EDDA0);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(XmlConvert_CreateInvalidCharException_mDD7567983C947053317219EF8F6B7C6CA1DE40FE_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XmlConvert_CreateInvalidCharException_mDD7567983C947053317219EF8F6B7C6CA1DE40FE_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		String_t* L_0 = ___0_data;
		int32_t L_1 = ___1_invCharPos;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2;
		L_2 = XmlException_BuildCharExceptionArgs_m0420A013644159380BB744A41E3AF1F4CEA5E9D8(L_0, L_1, NULL);
		int32_t L_3 = ___2_exceptionType;
		int32_t L_4 = ___1_invCharPos;
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		Exception_t* L_5;
		L_5 = XmlConvert_CreateException_m5E2DE07EE27F255E64E7A0FE08BA8B1C147EE580(_stringLiteral37FDAAF1C91F947734553260891C6678930EDDA0, L_2, L_3, 0, ((int32_t)il2cpp_codegen_add(L_4, 1)), NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlConvert__cctor_m7B068115A3F73B6954E126C91D02F3B338BCBC1C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBAB6DC40B1709E21296656960228A17F1BE57FD7____DACC0E6568D9B10337A1A693F10D42C3175E80C378154406C6FBFA989F919F51_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBAB6DC40B1709E21296656960228A17F1BE57FD7____DBBF94CCF4250B303976041627BB8FC302CE57D55373C469F41F97318412037D_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlConvert__cctor_m7B068115A3F73B6954E126C91D02F3B338BCBC1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(XmlConvert__cctor_m7B068115A3F73B6954E126C91D02F3B338BCBC1C_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XmlConvert__cctor_m7B068115A3F73B6954E126C91D02F3B338BCBC1C_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3 L_0;
		L_0 = XmlCharType_get_Instance_m1279A3FC91B74599A9BC76979E50DBFC07F67C55(NULL);
		((XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_StaticFields*)il2cpp_codegen_static_fields_for(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var))->___xmlCharType = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&((XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_StaticFields*)il2cpp_codegen_static_fields_for(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var))->___xmlCharType))->___charProperties), (void*)NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)3);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = L_1;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_3 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBAB6DC40B1709E21296656960228A17F1BE57FD7____DBBF94CCF4250B303976041627BB8FC302CE57D55373C469F41F97318412037D_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_2, L_3, NULL);
		((XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_StaticFields*)il2cpp_codegen_static_fields_for(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var))->___crt = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_StaticFields*)il2cpp_codegen_static_fields_for(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var))->___crt), (void*)L_2);
		((XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_StaticFields*)il2cpp_codegen_static_fields_for(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var))->___c_EncodedCharLength = 7;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)4);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_5 = L_4;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_6 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBAB6DC40B1709E21296656960228A17F1BE57FD7____DACC0E6568D9B10337A1A693F10D42C3175E80C378154406C6FBFA989F919F51_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_5, L_6, NULL);
		((XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_StaticFields*)il2cpp_codegen_static_fields_for(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var))->___WhitespaceChars = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_StaticFields*)il2cpp_codegen_static_fields_for(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var))->___WhitespaceChars), (void*)L_5);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlException__ctor_m2FC4E2AB470AD5003F7B9B5B9451CE320AFDDB2F (XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlException__ctor_m2FC4E2AB470AD5003F7B9B5B9451CE320AFDDB2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BA9045FCB28C8C8B2ACED641BB5013BAC05D492);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47EB169AEE74B181812673783C66416B39F5F464);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F0051E3370AA31B69F5CBF0E35FBE94ACAE0651);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD2D2F8D3F9F04A081FFBE6B2AF7917BAAADFC052);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1356901E9F96E6ACC91632889AE94286AFE4CD4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDC12722FE0763003109C7EDBACB6977C0E31132);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(XmlException__ctor_m2FC4E2AB470AD5003F7B9B5B9451CE320AFDDB2F_RuntimeMethod_var);
	String_t* V_0 = NULL;
	SerializationInfoEnumerator_t810DE600E5F6AA4F2B66A7F56074277CCD8F1540* V_1 = NULL;
	SerializationEntry_t6A03B35039769EF0EDD14BE879E68F1C104FFF74 V_2;
	memset((&V_2), 0, sizeof(V_2));
	String_t* V_3 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XmlException__ctor_m2FC4E2AB470AD5003F7B9B5B9451CE320AFDDB2F_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_1 = ___1_context;
		SystemException__ctor_mA2BB392E0F4CD8A4C132984F76B7A9FBDB3B6879(__this, L_0, L_1, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = ___0_info;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		NullCheck(L_2);
		RuntimeObject* L_5;
		L_5 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_2, _stringLiteral9F0051E3370AA31B69F5CBF0E35FBE94ACAE0651, L_4, NULL);
		__this->___res = ((String_t*)CastclassSealed((RuntimeObject*)L_5, String_t_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___res), (void*)((String_t*)CastclassSealed((RuntimeObject*)L_5, String_t_il2cpp_TypeInfo_var)));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_6 = ___0_info;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_0_0_0_var) };
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(L_6);
		RuntimeObject* L_9;
		L_9 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_6, _stringLiteralEDC12722FE0763003109C7EDBACB6977C0E31132, L_8, NULL);
		__this->___args = ((StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)Castclass((RuntimeObject*)L_9, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___args), (void*)((StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)Castclass((RuntimeObject*)L_9, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var)));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_10 = ___0_info;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck(L_10);
		RuntimeObject* L_13;
		L_13 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_10, _stringLiteral0BA9045FCB28C8C8B2ACED641BB5013BAC05D492, L_12, NULL);
		__this->___lineNumber = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_13, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = ___0_info;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralE1356901E9F96E6ACC91632889AE94286AFE4CD4, L_16, NULL);
		__this->___linePosition = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_17, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
		String_t* L_18 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
		__this->___sourceUri = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sourceUri), (void*)L_18);
		V_0 = (String_t*)NULL;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_19 = ___0_info;
		NullCheck(L_19);
		SerializationInfoEnumerator_t810DE600E5F6AA4F2B66A7F56074277CCD8F1540* L_20;
		L_20 = SerializationInfo_GetEnumerator_m5230A1D4E4B612E90B10E2034C638CD42F667EA6(L_19, NULL);
		V_1 = L_20;
		goto IL_00ea;
	}

IL_009e:
	{
		CHECK_PAUSE_POINT;
		SerializationInfoEnumerator_t810DE600E5F6AA4F2B66A7F56074277CCD8F1540* L_21 = V_1;
		NullCheck(L_21);
		SerializationEntry_t6A03B35039769EF0EDD14BE879E68F1C104FFF74 L_22;
		L_22 = SerializationInfoEnumerator_get_Current_m820863174CF73089751ACC36BC34DD3188A1929B(L_21, NULL);
		V_2 = L_22;
		String_t* L_23;
		L_23 = SerializationEntry_get_Name_mF6151F31B3F43C88AF08F39F178401406642EB67_inline((&V_2), NULL);
		V_3 = L_23;
		String_t* L_24 = V_3;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral47EB169AEE74B181812673783C66416B39F5F464, NULL);
		if (L_25)
		{
			goto IL_00c9;
		}
	}
	{
		String_t* L_26 = V_3;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteralD2D2F8D3F9F04A081FFBE6B2AF7917BAAADFC052, NULL);
		if (L_27)
		{
			goto IL_00dd;
		}
	}
	{
		goto IL_00ea;
	}

IL_00c9:
	{
		RuntimeObject* L_28;
		L_28 = SerializationEntry_get_Value_mA57713535F866795C180D20067C0E38A85327912_inline((&V_2), NULL);
		__this->___sourceUri = ((String_t*)CastclassSealed((RuntimeObject*)L_28, String_t_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sourceUri), (void*)((String_t*)CastclassSealed((RuntimeObject*)L_28, String_t_il2cpp_TypeInfo_var)));
		goto IL_00ea;
	}

IL_00dd:
	{
		RuntimeObject* L_29;
		L_29 = SerializationEntry_get_Value_mA57713535F866795C180D20067C0E38A85327912_inline((&V_2), NULL);
		V_0 = ((String_t*)CastclassSealed((RuntimeObject*)L_29, String_t_il2cpp_TypeInfo_var));
	}

IL_00ea:
	{
		SerializationInfoEnumerator_t810DE600E5F6AA4F2B66A7F56074277CCD8F1540* L_30 = V_1;
		NullCheck(L_30);
		bool L_31;
		L_31 = SerializationInfoEnumerator_MoveNext_m4F052C960AE85EFED1048CAAAC538AB3714078A6(L_30, NULL);
		if (L_31)
		{
			goto IL_009e;
		}
	}
	{
		String_t* L_32 = V_0;
		if (L_32)
		{
			goto IL_0119;
		}
	}
	{
		String_t* L_33 = __this->___res;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_34 = __this->___args;
		int32_t L_35 = __this->___lineNumber;
		int32_t L_36 = __this->___linePosition;
		String_t* L_37;
		L_37 = XmlException_CreateMessage_m7EF05421A745BA0BC494014171B7FE75BE36D056(L_33, L_34, L_35, L_36, NULL);
		__this->___message = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___message), (void*)L_37);
		return;
	}

IL_0119:
	{
		__this->___message = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___message), (void*)(String_t*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlException_GetObjectData_m6179AFA2490E6B295B7C192E99A828A45104154D (XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlException_GetObjectData_m6179AFA2490E6B295B7C192E99A828A45104154D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BA9045FCB28C8C8B2ACED641BB5013BAC05D492);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47EB169AEE74B181812673783C66416B39F5F464);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A962F7AAEC3B50EF4B2CD52A7A2C969B759A960);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F0051E3370AA31B69F5CBF0E35FBE94ACAE0651);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD2D2F8D3F9F04A081FFBE6B2AF7917BAAADFC052);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1356901E9F96E6ACC91632889AE94286AFE4CD4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDC12722FE0763003109C7EDBACB6977C0E31132);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(XmlException_GetObjectData_m6179AFA2490E6B295B7C192E99A828A45104154D_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XmlException_GetObjectData_m6179AFA2490E6B295B7C192E99A828A45104154D_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_1 = ___1_context;
		Exception_GetObjectData_mD69929DB0BB2512240908B9EEE21778CB7B72DA9(__this, L_0, L_1, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = ___0_info;
		String_t* L_3 = __this->___res;
		NullCheck(L_2);
		SerializationInfo_AddValue_m28FE9B110F21DDB8FF5F5E35A0EABD659DB22C2F(L_2, _stringLiteral9F0051E3370AA31B69F5CBF0E35FBE94ACAE0651, L_3, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_4 = ___0_info;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = __this->___args;
		NullCheck(L_4);
		SerializationInfo_AddValue_m28FE9B110F21DDB8FF5F5E35A0EABD659DB22C2F(L_4, _stringLiteralEDC12722FE0763003109C7EDBACB6977C0E31132, (RuntimeObject*)L_5, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_6 = ___0_info;
		int32_t L_7 = __this->___lineNumber;
		NullCheck(L_6);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_6, _stringLiteral0BA9045FCB28C8C8B2ACED641BB5013BAC05D492, L_7, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_8 = ___0_info;
		int32_t L_9 = __this->___linePosition;
		NullCheck(L_8);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_8, _stringLiteralE1356901E9F96E6ACC91632889AE94286AFE4CD4, L_9, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_10 = ___0_info;
		String_t* L_11 = __this->___sourceUri;
		NullCheck(L_10);
		SerializationInfo_AddValue_m28FE9B110F21DDB8FF5F5E35A0EABD659DB22C2F(L_10, _stringLiteral47EB169AEE74B181812673783C66416B39F5F464, L_11, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_12 = ___0_info;
		NullCheck(L_12);
		SerializationInfo_AddValue_m28FE9B110F21DDB8FF5F5E35A0EABD659DB22C2F(L_12, _stringLiteralD2D2F8D3F9F04A081FFBE6B2AF7917BAAADFC052, _stringLiteral4A962F7AAEC3B50EF4B2CD52A7A2C969B759A960, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlException__ctor_m5BA0E89E2BA57EBA306CA552E59B20E5EA6E9909 (XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlException__ctor_m5BA0E89E2BA57EBA306CA552E59B20E5EA6E9909_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(XmlException__ctor_m5BA0E89E2BA57EBA306CA552E59B20E5EA6E9909_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XmlException__ctor_m5BA0E89E2BA57EBA306CA552E59B20E5EA6E9909_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		XmlException__ctor_m39D4A09CD4A3351C21D85A89AAE43ECAD0E910F4(__this, (String_t*)NULL, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlException__ctor_m39D4A09CD4A3351C21D85A89AAE43ECAD0E910F4 (XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlException__ctor_m39D4A09CD4A3351C21D85A89AAE43ECAD0E910F4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(XmlException__ctor_m39D4A09CD4A3351C21D85A89AAE43ECAD0E910F4_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XmlException__ctor_m39D4A09CD4A3351C21D85A89AAE43ECAD0E910F4_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		String_t* L_0 = ___0_message;
		XmlException__ctor_m022651219BF5C270D6B851281AACACCB4A6AE5FC(__this, L_0, (Exception_t*)NULL, 0, 0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlException__ctor_m022651219BF5C270D6B851281AACACCB4A6AE5FC (XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596* __this, String_t* ___0_message, Exception_t* ___1_innerException, int32_t ___2_lineNumber, int32_t ___3_linePosition, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlException__ctor_m022651219BF5C270D6B851281AACACCB4A6AE5FC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(XmlException__ctor_m022651219BF5C270D6B851281AACACCB4A6AE5FC_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XmlException__ctor_m022651219BF5C270D6B851281AACACCB4A6AE5FC_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		String_t* L_0 = ___0_message;
		Exception_t* L_1 = ___1_innerException;
		int32_t L_2 = ___2_lineNumber;
		int32_t L_3 = ___3_linePosition;
		XmlException__ctor_m9E8E4966F92E92928F2334A4B5A6992A20505AD7(__this, L_0, L_1, L_2, L_3, (String_t*)NULL, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlException__ctor_m9E8E4966F92E92928F2334A4B5A6992A20505AD7 (XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596* __this, String_t* ___0_message, Exception_t* ___1_innerException, int32_t ___2_lineNumber, int32_t ___3_linePosition, String_t* ___4_sourceUri, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlException__ctor_m9E8E4966F92E92928F2334A4B5A6992A20505AD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral872479F10B4968F255B608A3698CA1A7EE09888B);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(XmlException__ctor_m9E8E4966F92E92928F2334A4B5A6992A20505AD7_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XmlException__ctor_m9E8E4966F92E92928F2334A4B5A6992A20505AD7_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596* G_B2_0 = NULL;
	XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596* G_B3_1 = NULL;
	{
		String_t* L_0 = ___0_message;
		int32_t L_1 = ___2_lineNumber;
		int32_t L_2 = ___3_linePosition;
		String_t* L_3;
		L_3 = XmlException_FormatUserMessage_m063B26658DDABD7F6364C28217D4A518715FC001(L_0, L_1, L_2, NULL);
		Exception_t* L_4 = ___1_innerException;
		SystemException__ctor_m0FC84CACD2A5D66222998AA601A5C41CEC36A611(__this, L_3, L_4, NULL);
		Exception_set_HResult_m010A171183E240EBF4F7611E924B533FAB2E471F_inline(__this, ((int32_t)-2146232000), NULL);
		String_t* L_5 = ___0_message;
		if (!L_5)
		{
			G_B2_0 = __this;
			goto IL_0026;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = _stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94;
		G_B3_1 = G_B1_0;
		goto IL_002b;
	}

IL_0026:
	{
		G_B3_0 = _stringLiteral872479F10B4968F255B608A3698CA1A7EE09888B;
		G_B3_1 = G_B2_0;
	}

IL_002b:
	{
		NullCheck(G_B3_1);
		G_B3_1->___res = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___res), (void*)G_B3_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		String_t* L_8 = ___0_message;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_8);
		__this->___args = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___args), (void*)L_7);
		String_t* L_9 = ___4_sourceUri;
		__this->___sourceUri = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sourceUri), (void*)L_9);
		int32_t L_10 = ___2_lineNumber;
		__this->___lineNumber = L_10;
		int32_t L_11 = ___3_linePosition;
		__this->___linePosition = L_11;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlException__ctor_m03120C28C23F76A8DA17B42FB00F599D2FB22B3F (XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596* __this, String_t* ___0_res, String_t* ___1_arg, int32_t ___2_lineNumber, int32_t ___3_linePosition, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlException__ctor_m03120C28C23F76A8DA17B42FB00F599D2FB22B3F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(XmlException__ctor_m03120C28C23F76A8DA17B42FB00F599D2FB22B3F_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XmlException__ctor_m03120C28C23F76A8DA17B42FB00F599D2FB22B3F_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		String_t* L_0 = ___0_res;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		String_t* L_3 = ___1_arg;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_3);
		int32_t L_4 = ___2_lineNumber;
		int32_t L_5 = ___3_linePosition;
		XmlException__ctor_mAF9987B6D433F91FBD0101527C492BA66AB25F37(__this, L_0, L_2, (Exception_t*)NULL, L_4, L_5, (String_t*)NULL, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlException__ctor_m9533F222CB16C788C194E7494449C1D96BC781CA (XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596* __this, String_t* ___0_res, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_args, int32_t ___2_lineNumber, int32_t ___3_linePosition, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlException__ctor_m9533F222CB16C788C194E7494449C1D96BC781CA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(XmlException__ctor_m9533F222CB16C788C194E7494449C1D96BC781CA_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XmlException__ctor_m9533F222CB16C788C194E7494449C1D96BC781CA_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		String_t* L_0 = ___0_res;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___1_args;
		int32_t L_2 = ___2_lineNumber;
		int32_t L_3 = ___3_linePosition;
		XmlException__ctor_mAF9987B6D433F91FBD0101527C492BA66AB25F37(__this, L_0, L_1, (Exception_t*)NULL, L_2, L_3, (String_t*)NULL, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlException__ctor_mAF9987B6D433F91FBD0101527C492BA66AB25F37 (XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596* __this, String_t* ___0_res, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_args, Exception_t* ___2_innerException, int32_t ___3_lineNumber, int32_t ___4_linePosition, String_t* ___5_sourceUri, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlException__ctor_mAF9987B6D433F91FBD0101527C492BA66AB25F37_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(XmlException__ctor_mAF9987B6D433F91FBD0101527C492BA66AB25F37_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XmlException__ctor_mAF9987B6D433F91FBD0101527C492BA66AB25F37_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		String_t* L_0 = ___0_res;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___1_args;
		int32_t L_2 = ___3_lineNumber;
		int32_t L_3 = ___4_linePosition;
		String_t* L_4;
		L_4 = XmlException_CreateMessage_m7EF05421A745BA0BC494014171B7FE75BE36D056(L_0, L_1, L_2, L_3, NULL);
		Exception_t* L_5 = ___2_innerException;
		SystemException__ctor_m0FC84CACD2A5D66222998AA601A5C41CEC36A611(__this, L_4, L_5, NULL);
		Exception_set_HResult_m010A171183E240EBF4F7611E924B533FAB2E471F_inline(__this, ((int32_t)-2146232000), NULL);
		String_t* L_6 = ___0_res;
		__this->___res = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___res), (void*)L_6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = ___1_args;
		__this->___args = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___args), (void*)L_7);
		String_t* L_8 = ___5_sourceUri;
		__this->___sourceUri = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sourceUri), (void*)L_8);
		int32_t L_9 = ___3_lineNumber;
		__this->___lineNumber = L_9;
		int32_t L_10 = ___4_linePosition;
		__this->___linePosition = L_10;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlException_FormatUserMessage_m063B26658DDABD7F6364C28217D4A518715FC001 (String_t* ___0_message, int32_t ___1_lineNumber, int32_t ___2_linePosition, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlException_FormatUserMessage_m063B26658DDABD7F6364C28217D4A518715FC001_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral872479F10B4968F255B608A3698CA1A7EE09888B);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(XmlException_FormatUserMessage_m063B26658DDABD7F6364C28217D4A518715FC001_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XmlException_FormatUserMessage_m063B26658DDABD7F6364C28217D4A518715FC001_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		String_t* L_0 = ___0_message;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_1 = ___1_lineNumber;
		int32_t L_2 = ___2_linePosition;
		String_t* L_3;
		L_3 = XmlException_CreateMessage_m7EF05421A745BA0BC494014171B7FE75BE36D056(_stringLiteral872479F10B4968F255B608A3698CA1A7EE09888B, (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL, L_1, L_2, NULL);
		return L_3;
	}

IL_0011:
	{
		int32_t L_4 = ___1_lineNumber;
		if (L_4)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_5 = ___2_linePosition;
		if (L_5)
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_6 = ___0_message;
		return L_6;
	}

IL_0019:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		String_t* L_9 = ___0_message;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_9);
		int32_t L_10 = ___1_lineNumber;
		int32_t L_11 = ___2_linePosition;
		String_t* L_12;
		L_12 = XmlException_CreateMessage_m7EF05421A745BA0BC494014171B7FE75BE36D056(_stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94, L_8, L_10, L_11, NULL);
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlException_CreateMessage_m7EF05421A745BA0BC494014171B7FE75BE36D056 (String_t* ___0_res, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_args, int32_t ___2_lineNumber, int32_t ___3_linePosition, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlException_CreateMessage_m7EF05421A745BA0BC494014171B7FE75BE36D056_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63D27168A6FFA4A02D5FDBA464A248377E88F4F4);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(XmlException_CreateMessage_m7EF05421A745BA0BC494014171B7FE75BE36D056_RuntimeMethod_var);
	String_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XmlException_CreateMessage_m7EF05421A745BA0BC494014171B7FE75BE36D056_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{
		STORE_TRY_ID(methodExecutionContext, 0);
		{
			int32_t L_0 = ___2_lineNumber;
			if (L_0)
			{
				goto IL_000f_1;
			}
		}
		{
			String_t* L_1 = ___0_res;
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = ___1_args;
			V_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)L_2;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_1;
			String_t* L_4;
			L_4 = Res_GetString_m088600B9D0FC319A206451B009A0583C600B9A83(L_1, L_3, NULL);
			V_0 = L_4;
			goto IL_0052_1;
		}

IL_000f_1:
		{
			il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
			CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_5;
			L_5 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
			String_t* L_6;
			L_6 = Int32_ToString_m3B2730D9F5B0C1C57DCCC8B8DCFB8E5EC4E8979B((&___2_lineNumber), L_5, NULL);
			V_2 = L_6;
			CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_7;
			L_7 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
			String_t* L_8;
			L_8 = Int32_ToString_m3B2730D9F5B0C1C57DCCC8B8DCFB8E5EC4E8979B((&___3_linePosition), L_7, NULL);
			V_3 = L_8;
			String_t* L_9 = ___0_res;
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = ___1_args;
			V_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)L_10;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = V_1;
			String_t* L_12;
			L_12 = Res_GetString_m088600B9D0FC319A206451B009A0583C600B9A83(L_9, L_11, NULL);
			V_0 = L_12;
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)3);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
			String_t* L_15 = V_0;
			NullCheck(L_14);
			(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_15);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_14;
			String_t* L_17 = V_2;
			NullCheck(L_16);
			(L_16)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_17);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = L_16;
			String_t* L_19 = V_3;
			NullCheck(L_18);
			(L_18)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_19);
			V_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)L_18;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = V_1;
			String_t* L_21;
			L_21 = Res_GetString_m088600B9D0FC319A206451B009A0583C600B9A83(_stringLiteral63D27168A6FFA4A02D5FDBA464A248377E88F4F4, L_20, NULL);
			V_0 = L_21;
		}

IL_0052_1:
		{
			String_t* L_22 = V_0;
			V_4 = L_22;
			goto IL_006c;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingManifestResourceException_t136A089345909ADB6333D6F4E2AA84C7A00CB3FD_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0057;
		}
		throw e;
	}

CATCH_0057:
	{
		STORE_TRY_ID(methodExecutionContext, -1);
		MissingManifestResourceException_t136A089345909ADB6333D6F4E2AA84C7A00CB3FD* L_23 = ((MissingManifestResourceException_t136A089345909ADB6333D6F4E2AA84C7A00CB3FD*)IL2CPP_GET_ACTIVE_EXCEPTION(MissingManifestResourceException_t136A089345909ADB6333D6F4E2AA84C7A00CB3FD*));;
		String_t* L_24 = ___0_res;
		String_t* L_25;
		L_25 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral16C0D1A98D99C5FB32B981C3E41FDB407A083C18)), L_24, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D)), NULL);
		V_4 = L_25;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_006c;
	}

IL_006c:
	{
		String_t* L_26 = V_4;
		return L_26;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* XmlException_BuildCharExceptionArgs_m0420A013644159380BB744A41E3AF1F4CEA5E9D8 (String_t* ___0_data, int32_t ___1_invCharIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlException_BuildCharExceptionArgs_m0420A013644159380BB744A41E3AF1F4CEA5E9D8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(XmlException_BuildCharExceptionArgs_m0420A013644159380BB744A41E3AF1F4CEA5E9D8_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XmlException_BuildCharExceptionArgs_m0420A013644159380BB744A41E3AF1F4CEA5E9D8_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	Il2CppChar G_B2_0 = 0x0;
	Il2CppChar G_B1_0 = 0x0;
	int32_t G_B3_0 = 0;
	Il2CppChar G_B3_1 = 0x0;
	{
		String_t* L_0 = ___0_data;
		int32_t L_1 = ___1_invCharIndex;
		NullCheck(L_0);
		Il2CppChar L_2;
		L_2 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_0, L_1, NULL);
		int32_t L_3 = ___1_invCharIndex;
		String_t* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_4, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_3, 1))) < ((int32_t)L_5)))
		{
			G_B2_0 = L_2;
			goto IL_0015;
		}
		G_B1_0 = L_2;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_001e;
	}

IL_0015:
	{
		String_t* L_6 = ___0_data;
		int32_t L_7 = ___1_invCharIndex;
		NullCheck(L_6);
		Il2CppChar L_8;
		L_8 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_6, ((int32_t)il2cpp_codegen_add(L_7, 1)), NULL);
		G_B3_0 = ((int32_t)(L_8));
		G_B3_1 = G_B2_0;
	}

IL_001e:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9;
		L_9 = XmlException_BuildCharExceptionArgs_m5C3D183AB941552746F7DC656366F28CA5BAFC65(G_B3_1, G_B3_0, NULL);
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* XmlException_BuildCharExceptionArgs_m5C3D183AB941552746F7DC656366F28CA5BAFC65 (Il2CppChar ___0_invChar, Il2CppChar ___1_nextChar, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlException_BuildCharExceptionArgs_m5C3D183AB941552746F7DC656366F28CA5BAFC65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38C378162D10735E8E753443B3094057777252AC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(XmlException_BuildCharExceptionArgs_m5C3D183AB941552746F7DC656366F28CA5BAFC65_RuntimeMethod_var);
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	int32_t V_1 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XmlException_BuildCharExceptionArgs_m5C3D183AB941552746F7DC656366F28CA5BAFC65_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)2);
		V_0 = L_0;
		Il2CppChar L_1 = ___0_invChar;
		bool L_2;
		L_2 = XmlCharType_IsHighSurrogate_mB3E741B22E4B47DC85F7F18A411F031D8717BA60(L_1, NULL);
		if (!L_2)
		{
			goto IL_004a;
		}
	}
	{
		Il2CppChar L_3 = ___1_nextChar;
		if (!L_3)
		{
			goto IL_004a;
		}
	}
	{
		Il2CppChar L_4 = ___1_nextChar;
		Il2CppChar L_5 = ___0_invChar;
		int32_t L_6;
		L_6 = XmlCharType_CombineSurrogateChar_m4D32D326745128CD021B4C219295A61B074FB8C7(L_4, L_5, NULL);
		V_1 = L_6;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = V_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_8 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)2);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_9 = L_8;
		Il2CppChar L_10 = ___0_invChar;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)L_10);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_11 = L_9;
		Il2CppChar L_12 = ___1_nextChar;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)L_12);
		String_t* L_13;
		L_13 = String_CreateString_mFBC28D2E3EB87D497F7E702E4FFAD65F635E44DF(NULL, L_11, NULL);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_13);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = V_0;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_15;
		L_15 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		int32_t L_16 = V_1;
		int32_t L_17 = L_16;
		RuntimeObject* L_18 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_17);
		String_t* L_19;
		L_19 = String_Format_m3844098E7C18576D263AAF62F69BE5C70BF9A744(L_15, _stringLiteral38C378162D10735E8E753443B3094057777252AC, L_18, NULL);
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_19);
		goto IL_007e;
	}

IL_004a:
	{
		Il2CppChar L_20 = ___0_invChar;
		if (L_20)
		{
			goto IL_0057;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = V_0;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		goto IL_0066;
	}

IL_0057:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = V_0;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_23;
		L_23 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		String_t* L_24;
		L_24 = Char_ToString_m34499826F048A38EB8216D5844A5DA49F54719C8((&___0_invChar), L_23, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_24);
	}

IL_0066:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = V_0;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_26;
		L_26 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		Il2CppChar L_27 = ___0_invChar;
		int32_t L_28 = ((int32_t)L_27);
		RuntimeObject* L_29 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_28);
		String_t* L_30;
		L_30 = String_Format_m3844098E7C18576D263AAF62F69BE5C70BF9A744(L_26, _stringLiteral38C378162D10735E8E753443B3094057777252AC, L_29, NULL);
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_30);
	}

IL_007e:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = V_0;
		return L_31;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlException_get_Message_m218FC0CDE2D81F3E770F9C48807A9B864492F347 (XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlException_get_Message_m218FC0CDE2D81F3E770F9C48807A9B864492F347_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(XmlException_get_Message_m218FC0CDE2D81F3E770F9C48807A9B864492F347_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XmlException_get_Message_m218FC0CDE2D81F3E770F9C48807A9B864492F347_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		String_t* L_0 = __this->___message;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		String_t* L_1 = __this->___message;
		return L_1;
	}

IL_000f:
	{
		String_t* L_2;
		L_2 = Exception_get_Message_mCFE0D38FDF9001405299AAE43BBE2A9AD806C441(__this, NULL);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Res_GetString_mBEE82ACFE97F93A6DDE81E322477CF2713466364 (String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Res_GetString_mBEE82ACFE97F93A6DDE81E322477CF2713466364_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Res_GetString_mBEE82ACFE97F93A6DDE81E322477CF2713466364_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Res_GetString_mBEE82ACFE97F93A6DDE81E322477CF2713466364_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		String_t* L_0 = ___0_name;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Res_GetString_m088600B9D0FC319A206451B009A0583C600B9A83 (String_t* ___0_name, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Res_GetString_m088600B9D0FC319A206451B009A0583C600B9A83_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Res_GetString_m088600B9D0FC319A206451B009A0583C600B9A83_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Res_GetString_m088600B9D0FC319A206451B009A0583C600B9A83_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___1_args;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		String_t* L_1 = ___0_name;
		return L_1;
	}

IL_0005:
	{
		String_t* L_2 = ___0_name;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___1_args;
		String_t* L_4;
		L_4 = SR_GetString_mBBCFC8C3B18DF600D0FAED49E703251D2250D41B(L_2, L_3, NULL);
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->____stringLength;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XmlReaderDebuggerDisplayProxy__ctor_m56B82747E748FBB7BC8D0A1728D526EA23B54C1A_inline (XmlReaderDebuggerDisplayProxy_tCBCA1821E9EDC752D1884A7A4343C3B0C7134AC9* __this, XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlReaderDebuggerDisplayProxy__ctor_m56B82747E748FBB7BC8D0A1728D526EA23B54C1A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XmlReaderDebuggerDisplayProxy__ctor_m56B82747E748FBB7BC8D0A1728D526EA23B54C1A_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD* L_0 = ___0_reader;
		__this->___reader = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___reader), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DebuggerDisplayXmlNodeProxy__ctor_mB9B6D906F2EBADBBDBA79FE184D6860363C32356_inline (DebuggerDisplayXmlNodeProxy_t75382D048931DB9A7D8EFB35A56EEC1D8241FB07* __this, XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___0_node, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DebuggerDisplayXmlNodeProxy__ctor_mB9B6D906F2EBADBBDBA79FE184D6860363C32356_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, DebuggerDisplayXmlNodeProxy__ctor_mB9B6D906F2EBADBBDBA79FE184D6860363C32356_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_0 = ___0_node;
		__this->___node = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___node), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XmlDocumentType_get_SystemId_m17B225C509C0F5A4ECBB838AA81D15DED4016909_inline (XmlDocumentType_tFD7379E45412FC2EBD65280ED3DE7A1C941A8D9E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlDocumentType_get_SystemId_m17B225C509C0F5A4ECBB838AA81D15DED4016909_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XmlDocumentType_get_SystemId_m17B225C509C0F5A4ECBB838AA81D15DED4016909_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		String_t* L_0 = __this->___systemId;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XmlDocumentType_get_PublicId_m9E81FAF2D0AA9DC847D118813CBEB085F0CE1955_inline (XmlDocumentType_tFD7379E45412FC2EBD65280ED3DE7A1C941A8D9E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlDocumentType_get_PublicId_m9E81FAF2D0AA9DC847D118813CBEB085F0CE1955_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XmlDocumentType_get_PublicId_m9E81FAF2D0AA9DC847D118813CBEB085F0CE1955_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		String_t* L_0 = __this->___publicId;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XmlDocumentType_get_InternalSubset_mBD8D585ED0401EE1FC02F6FD5445E2109B083FEF_inline (XmlDocumentType_tFD7379E45412FC2EBD65280ED3DE7A1C941A8D9E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlDocumentType_get_InternalSubset_mBD8D585ED0401EE1FC02F6FD5445E2109B083FEF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XmlDocumentType_get_InternalSubset_mBD8D585ED0401EE1FC02F6FD5445E2109B083FEF_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		String_t* L_0 = __this->___internalSubset;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XmlCharType__ctor_mB4A379AC51751894C31365E176E3B9BFB5ABC771_inline (XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_charProperties, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlCharType__ctor_mB4A379AC51751894C31365E176E3B9BFB5ABC771_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, XmlCharType__ctor_mB4A379AC51751894C31365E176E3B9BFB5ABC771_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_charProperties;
		__this->___charProperties = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___charProperties), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SerializationEntry_get_Name_mF6151F31B3F43C88AF08F39F178401406642EB67_inline (SerializationEntry_t6A03B35039769EF0EDD14BE879E68F1C104FFF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationEntry_get_Name_mF6151F31B3F43C88AF08F39F178401406642EB67_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, SerializationEntry_get_Name_mF6151F31B3F43C88AF08F39F178401406642EB67_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		String_t* L_0 = __this->____name;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SerializationEntry_get_Value_mA57713535F866795C180D20067C0E38A85327912_inline (SerializationEntry_t6A03B35039769EF0EDD14BE879E68F1C104FFF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationEntry_get_Value_mA57713535F866795C180D20067C0E38A85327912_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, SerializationEntry_get_Value_mA57713535F866795C180D20067C0E38A85327912_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->____value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Exception_set_HResult_m010A171183E240EBF4F7611E924B533FAB2E471F_inline (Exception_t* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_set_HResult_m010A171183E240EBF4F7611E924B533FAB2E471F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Exception_set_HResult_m010A171183E240EBF4F7611E924B533FAB2E471F_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___0_value;
		__this->____HResult = L_0;
		return;
	}
}
