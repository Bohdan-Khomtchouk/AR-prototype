﻿#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.ArgumentNullException
struct ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Int32>[]
struct EntryU5BU5D_tE3A30635C5B794ABD7983F09075F9D4F740716D9;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>[]
struct EntryU5BU5D_t366284FEBCEA6B94DF56118C1904C4A8D963A770;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
struct KeyCollection_tB1E184E62B476E7158FE8C957CD5108B6937A01F;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>
struct KeyCollection_t55AD67378C6CDA23EDE1113C33E4D879B949397D;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t7B108E5949AABED7EBC85ED1016365781619DAB7;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>
struct ValueCollection_t3B653CB27091E18D7CF6A6CDF74B84D5ED7D987F;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>
struct Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_tDDB69E91697CCB64C7993B651487CEEC287DB7E8;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_tAE7A8756D8CF0882DD348DC328FB36FEE0FB7DD0;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.XR.ARSubsystems.TrackableId>
struct IEqualityComparer_1_t1F65F81D43D9715FABDFCA1C70B74FAB7EF7FF0E;
// System.Collections.Generic.KeyNotFoundException
struct KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<System.Int32>>
struct Stack_1_t8ED9361704EE55886287883510EF4B939F0AED1A;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<System.Object>>
struct Stack_1_t83EEA6C9C9B43999F0FB28B378D20F56711A9DB7;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Color32>>
struct Stack_1_tAB00ED192772B336CD7CEC73F2A8E5E43A564E23;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct Stack_1_t0B6ED5C73E83FC760F209CA15A574ACB790B7184;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Vector2>>
struct Stack_1_tF5A24C9426EE280ED418674889292C2C9023A79C;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>
struct Stack_1_t3918258A91BC9F82A72E455813692665DFCC426A;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Vector4>>
struct Stack_1_t132DB7B895008F05941F75827E88B3E17F4F0B71;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.Comparison`1<System.Object>
struct Comparison_1_tD9DBDF7B2E4774B4D35E113A76D75828A24641F4;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Exception
struct Exception_t;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.InvalidOperationException
struct InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1;
// System.NotImplementedException
struct NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4;
// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.Color32[]
struct Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC;
// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<System.Int32>>
struct UnityAction_1_t9F617E4F89335DB02DC3387128A9DFD903C3F584;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<System.Object>>
struct UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Color32>>
struct UnityAction_1_tE3DCD90F58E3904680E8CB55673236424DD51B9D;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct UnityAction_1_t81CC8066FFA7C46AA839E5C8548255B1E557F95A;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Vector2>>
struct UnityAction_1_t8A73E5E38CB0B8D4007EC6DF30D9825B34363F0C;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>
struct UnityAction_1_t1774CF29AA6EF9D1D2B15FDF2C1A13C8B4A3A239;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Vector4>>
struct UnityAction_1_t1FE626F17578115700E45769612596C6BD6C1D76;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.ISubsystemDescriptor
struct ISubsystemDescriptor_t44607A9BE5154ED0C7924B81776A709724545E6C;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.SubsystemDescriptor
struct SubsystemDescriptor_t889FE96B75F157379A8337541A119F08DD9C75D4;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3;
// UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenCallback
struct ColorTweenCallback_tA2357F5ECB0BB12F303C2D6EE5A628CFD14C91C0;
// UnityEngine.UI.CoroutineTween.FloatTween/FloatTweenCallback
struct FloatTweenCallback_t69056DA8AAB3BCDA97012834C1F1F265F7617502;
// UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>d__2<UnityEngine.UI.CoroutineTween.ColorTween>
struct U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB;
// UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>d__2<UnityEngine.UI.CoroutineTween.FloatTween>
struct U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>
struct TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Int32>>
struct ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Object>>
struct ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Color32>>
struct ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Vector2>>
struct ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>
struct ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Vector4>>
struct ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54;
// UnityEngine.UI.ObjectPool`1<System.Object>
struct ObjectPool_1_t5BE4172BA33477BCA8E88EF395C26D7558DEB7E9;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66;
// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF;
// UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>
struct ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11;
// UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>
struct ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E;
// UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>
struct ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13;
// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>
struct ARTrackable_2_t20DDFF842A33D6D4B1F1F5C17DEB3CC5032765F5;
// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>
struct ARTrackable_2_tFF59B3769C01557C3557231CD2A26810E2867CCD;
// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>
struct ARTrackable_2_t88913A417566AF8EAF80C0FF131EC194E7A0E7B4;
// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<System.Object,System.Object>
struct SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9;
// UnityEngine.XR.ARSubsystems.Promise`1/ImmediatePromise<System.Int32Enum>
struct ImmediatePromise_t16B373AE2A03B114E7629932B9CC7A063BD6EACF;
// UnityEngine.XR.ARSubsystems.Promise`1/ImmediatePromise<System.Object>
struct ImmediatePromise_tA93EB63F910034B9183ACBF4D6F4C168A19FC8B1;
// UnityEngine.XR.ARSubsystems.Promise`1<System.Int32Enum>
struct Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068;
// UnityEngine.XR.ARSubsystems.Promise`1<System.Object>
struct Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>
struct TrackingSubsystem_2_t0D6BC19D17058B4CBF6E3E9122F09A5A86A8566C;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRFace,System.Object>
struct TrackingSubsystem_2_t810E285415E1644FA85391E12F95806CEE3C50EB;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>
struct TrackingSubsystem_2_t1EC759A75AE7EFD4E4446A20009C8472E1C8AED1;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>
struct TrackingSubsystem_2_tA3D4B822865BAE0754B253CF8551A3EBB7073851;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enumerator_tDB12EE5618B415F0FB5AEEE49E6F2F41DFB2FD0A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemManager_tA76309B3302C9AA31F3BCFFF64BFD98606F0231F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral04231B44477132B3DBEFE7768A921AE5A13A00FC;
IL2CPP_EXTERN_C String_t* _stringLiteral3342B21D08DB470F1A14F4B1318C15B43E9B7D64;
IL2CPP_EXTERN_C String_t* _stringLiteral82A90AF1B031C38ED3A670A840145127A9847AC4;
IL2CPP_EXTERN_C String_t* _stringLiteral830CB8C252B57EFF127DE755CBF5A089999CEF61;
IL2CPP_EXTERN_C String_t* _stringLiteral86EB3EF4A80C553E3CF57C02680D2F68C1D5641F;
IL2CPP_EXTERN_C String_t* _stringLiteralA413973124713A2B7B3570CE8D97C7151C8628A9;
IL2CPP_EXTERN_C String_t* _stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6;
IL2CPP_EXTERN_C String_t* _stringLiteralDFADDFA065E9D92CFE8B8F06444DD5652DFC1D58;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF_m25BC8791B994BAE33BF9003FFC85124F480EFB17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m3C4C0B0B1AE71E65EF8255E6FC671DDBC829B6AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator__ctor_m1436C7540CC7C5E630A94069A2F8A386DA5B572E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m913D10AD892E19937C638773D208459E9862248D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IndexedSet_1_GetEnumerator_m862DD23AD8DA8A6F6E7BFAC10CF75F0639758E44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IndexedSet_1_Insert_m5C71AFDD8507ABF24809AE66F0461CDB8D0693F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_m8D7EEF45CE20EB27369597A33879F42E459F2D59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_CopyFrom_mE2C04369E83ED4726DE1121E7E05342B6A993A97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Dispose_mB8124101177299FC76251C4E7F6C98BB0E5503C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_GetEnumerator_m3B6CA1981A8CE62A1C67FCEEBE1887CD32906DA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_m49FCF39766C38037835E85C0A677B26599D0BE55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m1CDF66D563B03D37B37264800222D4F3B307EDA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackableCollection_1_TryGetTrackable_m32817DD4F4B8853824F9C48709E001E97D0D34E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackableCollection_1__ctor_mA99D3D41CAA02EF94BD2B96D6DC1B66450E226FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackableCollection_1_get_Item_m2364AB8C6AC2D938F7B1BF95B6CF2EB821E02667_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackableCollection_1_get_count_mDAAAFD7E750C4885E2EE0322FC84C7EC7826C82C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartU3Ed__2_System_Collections_IEnumerator_Reset_m7EE0C78F076E4D95B3838BE82929AAA21433CA5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartU3Ed__2_System_Collections_IEnumerator_Reset_mB7C54CC93F1970C36AF5D027FD9827EEEB31E323_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t ARTrackableManager_4_Awake_m24810E7DBA7D9EAD4C4E4DE28D4DE659567CDCA9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARTrackableManager_4_Awake_mD4E9BB4AB7CCFB56C4B1B0529475C7F6C90839E1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARTrackableManager_4_Awake_mE74D7D15F5EE5CB93D096FE4CA47D8C541C96454_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARTrackableManager_4_CreateGameObject_m0BB9D3FB8FBC3EF6EDDCDC383A3668A9C7E95E64_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARTrackableManager_4_CreateGameObject_m35CEEE7E63CF3FF55EBACE3EC2A3176DC3751ABD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARTrackableManager_4_CreateGameObject_mCA0C5B1A526ED43507DED64466BDB3198C6F6A78_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARTrackableManager_4_CreateTrackable_m784C3D792EBD41DF3A35B8F9808D9C1EB1EB77D6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARTrackableManager_4_CreateTrackable_m9CF29829AB781E0B45441987E4BF924C8ED4321A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARTrackableManager_4_CreateTrackable_mF294EF88541A9EDB3324257B3AB97081E3AF9577_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARTrackableManager_4_DestroyTrackable_m43942090F623942C676C99635C74F91F14D7B329_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARTrackableManager_4_DestroyTrackable_m5C77DDD122C825943130C2C446F6544082A075F0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARTrackableManager_4_DestroyTrackable_mA6474494ED47CBFE2012D28208C70CD244C3C3AD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARTrackableManager_4_GetTrackableName_m3A729E918B8EE0054C786CDE02ECF256277A5D6D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARTrackableManager_4_GetTrackableName_m80A43841E26C94988E274207DD5A22031B949BD2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARTrackableManager_4_GetTrackableName_mB912FE4322116C4BBBD887A8F3BBF1FFFE9FD687_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARTrackableManager_4_Update_m69CCA5EAB13AA706C8E89843B7C8AFD333269A0D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARTrackableManager_4_Update_mCAA957D4837B34BC150341165DAEDBBAD2AF33EB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARTrackableManager_4_Update_mFCCE7C2A3D4569CD1E50995E00066A9A603D706E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Enumerator__ctor_m1436C7540CC7C5E630A94069A2F8A386DA5B572E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IndexedSet_1_GetEnumerator_m862DD23AD8DA8A6F6E7BFAC10CF75F0639758E44_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IndexedSet_1_Insert_m5C71AFDD8507ABF24809AE66F0461CDB8D0693F4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ObjectPool_1_Release_mC1D66E968E7A04252A79426F4F2D45ED0F292B86_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SubsystemLifecycleManager_2_CreateSubsystem_m40BC7594101BBED8B07F752B1B0A3AD7F2971F13_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableChanges_1_Dispose_m1C8DF8C1879FD6A22AD7474E15FB2590BB4F9631_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableChanges_1_Dispose_m7AF1F8FE11710AD279FA5001D21F0624BF0BFBEB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableChanges_1_Dispose_m8CB8D80766E7529B391391E43158D99E39220FF6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableChanges_1_Dispose_mE3DC3C0230641A828B6A91F3CB94441797520834_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableChanges_1__ctor_m47C55466595329D4629E9A78A403D34C94AC30FC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableChanges_1__ctor_m9D3306EC438EE09208F98E4F4049E615CC5E801E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableChanges_1__ctor_mA69A666BCF692D5A8660A564A4450ABF6C80FD90_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableChanges_1__ctor_mD1C95CFBA5AA7D0B4B0E4048D8F7E52246202202_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableCollection_1_TryGetTrackable_m32817DD4F4B8853824F9C48709E001E97D0D34E1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableCollection_1__ctor_mA99D3D41CAA02EF94BD2B96D6DC1B66450E226FF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableCollection_1_get_Item_m2364AB8C6AC2D938F7B1BF95B6CF2EB821E02667_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableCollection_1_get_count_mDAAAFD7E750C4885E2EE0322FC84C7EC7826C82C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TweenRunner_1_StartTween_mA10B864FF4FF1D68D8B117B94B06FF35F5373FA7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TweenRunner_1_StartTween_mCD6A38F2A78EADA8BFD4D710333E6263D32DAEFE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CStartU3Ed__2_MoveNext_m0EE17EEE1FD4E844C9CDA2AA8815CBECBB0DBA9F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CStartU3Ed__2_MoveNext_m60167073DFDFFC72E0494F1178A8927098A64D12_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CStartU3Ed__2_System_Collections_IEnumerator_Reset_m7EE0C78F076E4D95B3838BE82929AAA21433CA5D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CStartU3Ed__2_System_Collections_IEnumerator_Reset_mB7C54CC93F1970C36AF5D027FD9827EEEB31E323_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct  Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tE3A30635C5B794ABD7983F09075F9D4F740716D9* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tB1E184E62B476E7158FE8C957CD5108B6937A01F * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t7B108E5949AABED7EBC85ED1016365781619DAB7 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A, ___entries_1)); }
	inline EntryU5BU5D_tE3A30635C5B794ABD7983F09075F9D4F740716D9* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tE3A30635C5B794ABD7983F09075F9D4F740716D9** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tE3A30635C5B794ABD7983F09075F9D4F740716D9* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A, ___keys_7)); }
	inline KeyCollection_tB1E184E62B476E7158FE8C957CD5108B6937A01F * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tB1E184E62B476E7158FE8C957CD5108B6937A01F ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tB1E184E62B476E7158FE8C957CD5108B6937A01F * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A, ___values_8)); }
	inline ValueCollection_t7B108E5949AABED7EBC85ED1016365781619DAB7 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t7B108E5949AABED7EBC85ED1016365781619DAB7 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t7B108E5949AABED7EBC85ED1016365781619DAB7 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>
struct  Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t366284FEBCEA6B94DF56118C1904C4A8D963A770* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t55AD67378C6CDA23EDE1113C33E4D879B949397D * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t3B653CB27091E18D7CF6A6CDF74B84D5ED7D987F * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319, ___entries_1)); }
	inline EntryU5BU5D_t366284FEBCEA6B94DF56118C1904C4A8D963A770* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t366284FEBCEA6B94DF56118C1904C4A8D963A770** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t366284FEBCEA6B94DF56118C1904C4A8D963A770* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319, ___keys_7)); }
	inline KeyCollection_t55AD67378C6CDA23EDE1113C33E4D879B949397D * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t55AD67378C6CDA23EDE1113C33E4D879B949397D ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t55AD67378C6CDA23EDE1113C33E4D879B949397D * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319, ___values_8)); }
	inline ValueCollection_t3B653CB27091E18D7CF6A6CDF74B84D5ED7D987F * get_values_8() const { return ___values_8; }
	inline ValueCollection_t3B653CB27091E18D7CF6A6CDF74B84D5ED7D987F ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t3B653CB27091E18D7CF6A6CDF74B84D5ED7D987F * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Int32>
struct  List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____items_1)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____items_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Color32>
struct  List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5, ____items_1)); }
	inline Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* get__items_1() const { return ____items_1; }
	inline Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5_StaticFields, ____emptyArray_5)); }
	inline Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct  List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554, ____items_1)); }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* get__items_1() const { return ____items_1; }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554_StaticFields, ____emptyArray_5)); }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct  List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB, ____items_1)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get__items_1() const { return ____items_1; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB_StaticFields, ____emptyArray_5)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct  List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5, ____items_1)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get__items_1() const { return ____items_1; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5_StaticFields, ____emptyArray_5)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct  List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955, ____items_1)); }
	inline Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* get__items_1() const { return ____items_1; }
	inline Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955_StaticFields, ____emptyArray_5)); }
	inline Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.Stack`1<System.Object>
struct  Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163, ____array_0)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// UnityEngine.CustomYieldInstruction
struct  CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Subsystem
struct  Subsystem_t6B987736D8E48098F860AC55D76905DE1F48CE8C  : public RuntimeObject
{
public:
	// UnityEngine.ISubsystemDescriptor UnityEngine.Subsystem::m_subsystemDescriptor
	RuntimeObject* ___m_subsystemDescriptor_0;

public:
	inline static int32_t get_offset_of_m_subsystemDescriptor_0() { return static_cast<int32_t>(offsetof(Subsystem_t6B987736D8E48098F860AC55D76905DE1F48CE8C, ___m_subsystemDescriptor_0)); }
	inline RuntimeObject* get_m_subsystemDescriptor_0() const { return ___m_subsystemDescriptor_0; }
	inline RuntimeObject** get_address_of_m_subsystemDescriptor_0() { return &___m_subsystemDescriptor_0; }
	inline void set_m_subsystemDescriptor_0(RuntimeObject* value)
	{
		___m_subsystemDescriptor_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_subsystemDescriptor_0), (void*)value);
	}
};


// UnityEngine.SubsystemDescriptor
struct  SubsystemDescriptor_t889FE96B75F157379A8337541A119F08DD9C75D4  : public RuntimeObject
{
public:
	// System.String UnityEngine.SubsystemDescriptor::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.SubsystemDescriptor::<subsystemImplementationType>k__BackingField
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SubsystemDescriptor_t889FE96B75F157379A8337541A119F08DD9C75D4, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemImplementationTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SubsystemDescriptor_t889FE96B75F157379A8337541A119F08DD9C75D4, ___U3CsubsystemImplementationTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CsubsystemImplementationTypeU3Ek__BackingField_1() const { return ___U3CsubsystemImplementationTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CsubsystemImplementationTypeU3Ek__BackingField_1() { return &___U3CsubsystemImplementationTypeU3Ek__BackingField_1; }
	inline void set_U3CsubsystemImplementationTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CsubsystemImplementationTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemImplementationTypeU3Ek__BackingField_1), (void*)value);
	}
};


// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct  IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<T> UnityEngine.UI.Collections.IndexedSet`1::m_List
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___m_List_0;
	// System.Collections.Generic.Dictionary`2<T,System.Int32> UnityEngine.UI.Collections.IndexedSet`1::m_Dictionary
	Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * ___m_Dictionary_1;

public:
	inline static int32_t get_offset_of_m_List_0() { return static_cast<int32_t>(offsetof(IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3, ___m_List_0)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_m_List_0() const { return ___m_List_0; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_m_List_0() { return &___m_List_0; }
	inline void set_m_List_0(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___m_List_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_List_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Dictionary_1() { return static_cast<int32_t>(offsetof(IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3, ___m_Dictionary_1)); }
	inline Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * get_m_Dictionary_1() const { return ___m_Dictionary_1; }
	inline Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A ** get_address_of_m_Dictionary_1() { return &___m_Dictionary_1; }
	inline void set_m_Dictionary_1(Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * value)
	{
		___m_Dictionary_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Dictionary_1), (void*)value);
	}
};


// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct  TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172  : public RuntimeObject
{
public:
	// UnityEngine.MonoBehaviour UnityEngine.UI.CoroutineTween.TweenRunner`1::m_CoroutineContainer
	MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * ___m_CoroutineContainer_0;
	// System.Collections.IEnumerator UnityEngine.UI.CoroutineTween.TweenRunner`1::m_Tween
	RuntimeObject* ___m_Tween_1;

public:
	inline static int32_t get_offset_of_m_CoroutineContainer_0() { return static_cast<int32_t>(offsetof(TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172, ___m_CoroutineContainer_0)); }
	inline MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * get_m_CoroutineContainer_0() const { return ___m_CoroutineContainer_0; }
	inline MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 ** get_address_of_m_CoroutineContainer_0() { return &___m_CoroutineContainer_0; }
	inline void set_m_CoroutineContainer_0(MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * value)
	{
		___m_CoroutineContainer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CoroutineContainer_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Tween_1() { return static_cast<int32_t>(offsetof(TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172, ___m_Tween_1)); }
	inline RuntimeObject* get_m_Tween_1() const { return ___m_Tween_1; }
	inline RuntimeObject** get_address_of_m_Tween_1() { return &___m_Tween_1; }
	inline void set_m_Tween_1(RuntimeObject* value)
	{
		___m_Tween_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Tween_1), (void*)value);
	}
};


// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>
struct  TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF  : public RuntimeObject
{
public:
	// UnityEngine.MonoBehaviour UnityEngine.UI.CoroutineTween.TweenRunner`1::m_CoroutineContainer
	MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * ___m_CoroutineContainer_0;
	// System.Collections.IEnumerator UnityEngine.UI.CoroutineTween.TweenRunner`1::m_Tween
	RuntimeObject* ___m_Tween_1;

public:
	inline static int32_t get_offset_of_m_CoroutineContainer_0() { return static_cast<int32_t>(offsetof(TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF, ___m_CoroutineContainer_0)); }
	inline MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * get_m_CoroutineContainer_0() const { return ___m_CoroutineContainer_0; }
	inline MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 ** get_address_of_m_CoroutineContainer_0() { return &___m_CoroutineContainer_0; }
	inline void set_m_CoroutineContainer_0(MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * value)
	{
		___m_CoroutineContainer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CoroutineContainer_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Tween_1() { return static_cast<int32_t>(offsetof(TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF, ___m_Tween_1)); }
	inline RuntimeObject* get_m_Tween_1() const { return ___m_Tween_1; }
	inline RuntimeObject** get_address_of_m_Tween_1() { return &___m_Tween_1; }
	inline void set_m_Tween_1(RuntimeObject* value)
	{
		___m_Tween_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Tween_1), (void*)value);
	}
};


// UnityEngine.UI.ListPool`1<System.Int32>
struct  ListPool_1_t3E619A8E79CAF23BEEF32265E5CEDAB29A8735AF  : public RuntimeObject
{
public:

public:
};

struct ListPool_1_t3E619A8E79CAF23BEEF32265E5CEDAB29A8735AF_StaticFields
{
public:
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::s_ListPool
	ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A * ___s_ListPool_0;

public:
	inline static int32_t get_offset_of_s_ListPool_0() { return static_cast<int32_t>(offsetof(ListPool_1_t3E619A8E79CAF23BEEF32265E5CEDAB29A8735AF_StaticFields, ___s_ListPool_0)); }
	inline ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A * get_s_ListPool_0() const { return ___s_ListPool_0; }
	inline ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A ** get_address_of_s_ListPool_0() { return &___s_ListPool_0; }
	inline void set_s_ListPool_0(ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A * value)
	{
		___s_ListPool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ListPool_0), (void*)value);
	}
};


// UnityEngine.UI.ListPool`1<System.Object>
struct  ListPool_1_t66B0CA6885E680896C9747F9C0E28458D59743BE  : public RuntimeObject
{
public:

public:
};

struct ListPool_1_t66B0CA6885E680896C9747F9C0E28458D59743BE_StaticFields
{
public:
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::s_ListPool
	ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E * ___s_ListPool_0;

public:
	inline static int32_t get_offset_of_s_ListPool_0() { return static_cast<int32_t>(offsetof(ListPool_1_t66B0CA6885E680896C9747F9C0E28458D59743BE_StaticFields, ___s_ListPool_0)); }
	inline ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E * get_s_ListPool_0() const { return ___s_ListPool_0; }
	inline ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E ** get_address_of_s_ListPool_0() { return &___s_ListPool_0; }
	inline void set_s_ListPool_0(ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E * value)
	{
		___s_ListPool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ListPool_0), (void*)value);
	}
};


// UnityEngine.UI.ListPool`1<UnityEngine.Color32>
struct  ListPool_1_tFB4F0894A1EF21042E633BD1514A9258601CB1F1  : public RuntimeObject
{
public:

public:
};

struct ListPool_1_tFB4F0894A1EF21042E633BD1514A9258601CB1F1_StaticFields
{
public:
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::s_ListPool
	ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99 * ___s_ListPool_0;

public:
	inline static int32_t get_offset_of_s_ListPool_0() { return static_cast<int32_t>(offsetof(ListPool_1_tFB4F0894A1EF21042E633BD1514A9258601CB1F1_StaticFields, ___s_ListPool_0)); }
	inline ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99 * get_s_ListPool_0() const { return ___s_ListPool_0; }
	inline ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99 ** get_address_of_s_ListPool_0() { return &___s_ListPool_0; }
	inline void set_s_ListPool_0(ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99 * value)
	{
		___s_ListPool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ListPool_0), (void*)value);
	}
};


// UnityEngine.UI.ListPool`1<UnityEngine.UIVertex>
struct  ListPool_1_tC140413ABBDAF87428D43AA5EFDD842394341CF6  : public RuntimeObject
{
public:

public:
};

struct ListPool_1_tC140413ABBDAF87428D43AA5EFDD842394341CF6_StaticFields
{
public:
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::s_ListPool
	ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1 * ___s_ListPool_0;

public:
	inline static int32_t get_offset_of_s_ListPool_0() { return static_cast<int32_t>(offsetof(ListPool_1_tC140413ABBDAF87428D43AA5EFDD842394341CF6_StaticFields, ___s_ListPool_0)); }
	inline ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1 * get_s_ListPool_0() const { return ___s_ListPool_0; }
	inline ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1 ** get_address_of_s_ListPool_0() { return &___s_ListPool_0; }
	inline void set_s_ListPool_0(ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1 * value)
	{
		___s_ListPool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ListPool_0), (void*)value);
	}
};


// UnityEngine.UI.ListPool`1<UnityEngine.Vector2>
struct  ListPool_1_tEC2CD2FE52DC3A8B1F3E2BF498E60420B6ABDDF8  : public RuntimeObject
{
public:

public:
};

struct ListPool_1_tEC2CD2FE52DC3A8B1F3E2BF498E60420B6ABDDF8_StaticFields
{
public:
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::s_ListPool
	ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1 * ___s_ListPool_0;

public:
	inline static int32_t get_offset_of_s_ListPool_0() { return static_cast<int32_t>(offsetof(ListPool_1_tEC2CD2FE52DC3A8B1F3E2BF498E60420B6ABDDF8_StaticFields, ___s_ListPool_0)); }
	inline ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1 * get_s_ListPool_0() const { return ___s_ListPool_0; }
	inline ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1 ** get_address_of_s_ListPool_0() { return &___s_ListPool_0; }
	inline void set_s_ListPool_0(ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1 * value)
	{
		___s_ListPool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ListPool_0), (void*)value);
	}
};


// UnityEngine.UI.ListPool`1<UnityEngine.Vector3>
struct  ListPool_1_t5E8D36B177BEE61E319DF7927E463DFBAC58E09D  : public RuntimeObject
{
public:

public:
};

struct ListPool_1_t5E8D36B177BEE61E319DF7927E463DFBAC58E09D_StaticFields
{
public:
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::s_ListPool
	ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49 * ___s_ListPool_0;

public:
	inline static int32_t get_offset_of_s_ListPool_0() { return static_cast<int32_t>(offsetof(ListPool_1_t5E8D36B177BEE61E319DF7927E463DFBAC58E09D_StaticFields, ___s_ListPool_0)); }
	inline ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49 * get_s_ListPool_0() const { return ___s_ListPool_0; }
	inline ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49 ** get_address_of_s_ListPool_0() { return &___s_ListPool_0; }
	inline void set_s_ListPool_0(ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49 * value)
	{
		___s_ListPool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ListPool_0), (void*)value);
	}
};


// UnityEngine.UI.ListPool`1<UnityEngine.Vector4>
struct  ListPool_1_tD46C00F7C693AF94203B6B004906149A661AA540  : public RuntimeObject
{
public:

public:
};

struct ListPool_1_tD46C00F7C693AF94203B6B004906149A661AA540_StaticFields
{
public:
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::s_ListPool
	ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54 * ___s_ListPool_0;

public:
	inline static int32_t get_offset_of_s_ListPool_0() { return static_cast<int32_t>(offsetof(ListPool_1_tD46C00F7C693AF94203B6B004906149A661AA540_StaticFields, ___s_ListPool_0)); }
	inline ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54 * get_s_ListPool_0() const { return ___s_ListPool_0; }
	inline ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54 ** get_address_of_s_ListPool_0() { return &___s_ListPool_0; }
	inline void set_s_ListPool_0(ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54 * value)
	{
		___s_ListPool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ListPool_0), (void*)value);
	}
};


// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Int32>>
struct  ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_t8ED9361704EE55886287883510EF4B939F0AED1A * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_t9F617E4F89335DB02DC3387128A9DFD903C3F584 * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_t9F617E4F89335DB02DC3387128A9DFD903C3F584 * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A, ___m_Stack_0)); }
	inline Stack_1_t8ED9361704EE55886287883510EF4B939F0AED1A * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_t8ED9361704EE55886287883510EF4B939F0AED1A ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_t8ED9361704EE55886287883510EF4B939F0AED1A * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Stack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A, ___m_ActionOnGet_1)); }
	inline UnityAction_1_t9F617E4F89335DB02DC3387128A9DFD903C3F584 * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_t9F617E4F89335DB02DC3387128A9DFD903C3F584 ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_t9F617E4F89335DB02DC3387128A9DFD903C3F584 * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnGet_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_t9F617E4F89335DB02DC3387128A9DFD903C3F584 * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_t9F617E4F89335DB02DC3387128A9DFD903C3F584 ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_t9F617E4F89335DB02DC3387128A9DFD903C3F584 * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnRelease_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};


// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Object>>
struct  ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_t83EEA6C9C9B43999F0FB28B378D20F56711A9DB7 * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363 * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363 * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E, ___m_Stack_0)); }
	inline Stack_1_t83EEA6C9C9B43999F0FB28B378D20F56711A9DB7 * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_t83EEA6C9C9B43999F0FB28B378D20F56711A9DB7 ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_t83EEA6C9C9B43999F0FB28B378D20F56711A9DB7 * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Stack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E, ___m_ActionOnGet_1)); }
	inline UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363 * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363 ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363 * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnGet_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363 * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363 ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363 * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnRelease_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};


// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Color32>>
struct  ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_tAB00ED192772B336CD7CEC73F2A8E5E43A564E23 * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_tE3DCD90F58E3904680E8CB55673236424DD51B9D * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_tE3DCD90F58E3904680E8CB55673236424DD51B9D * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99, ___m_Stack_0)); }
	inline Stack_1_tAB00ED192772B336CD7CEC73F2A8E5E43A564E23 * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_tAB00ED192772B336CD7CEC73F2A8E5E43A564E23 ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_tAB00ED192772B336CD7CEC73F2A8E5E43A564E23 * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Stack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99, ___m_ActionOnGet_1)); }
	inline UnityAction_1_tE3DCD90F58E3904680E8CB55673236424DD51B9D * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_tE3DCD90F58E3904680E8CB55673236424DD51B9D ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_tE3DCD90F58E3904680E8CB55673236424DD51B9D * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnGet_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_tE3DCD90F58E3904680E8CB55673236424DD51B9D * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_tE3DCD90F58E3904680E8CB55673236424DD51B9D ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_tE3DCD90F58E3904680E8CB55673236424DD51B9D * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnRelease_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};


// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct  ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_t0B6ED5C73E83FC760F209CA15A574ACB790B7184 * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_t81CC8066FFA7C46AA839E5C8548255B1E557F95A * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_t81CC8066FFA7C46AA839E5C8548255B1E557F95A * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1, ___m_Stack_0)); }
	inline Stack_1_t0B6ED5C73E83FC760F209CA15A574ACB790B7184 * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_t0B6ED5C73E83FC760F209CA15A574ACB790B7184 ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_t0B6ED5C73E83FC760F209CA15A574ACB790B7184 * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Stack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1, ___m_ActionOnGet_1)); }
	inline UnityAction_1_t81CC8066FFA7C46AA839E5C8548255B1E557F95A * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_t81CC8066FFA7C46AA839E5C8548255B1E557F95A ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_t81CC8066FFA7C46AA839E5C8548255B1E557F95A * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnGet_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_t81CC8066FFA7C46AA839E5C8548255B1E557F95A * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_t81CC8066FFA7C46AA839E5C8548255B1E557F95A ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_t81CC8066FFA7C46AA839E5C8548255B1E557F95A * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnRelease_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};


// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Vector2>>
struct  ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_tF5A24C9426EE280ED418674889292C2C9023A79C * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_t8A73E5E38CB0B8D4007EC6DF30D9825B34363F0C * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_t8A73E5E38CB0B8D4007EC6DF30D9825B34363F0C * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1, ___m_Stack_0)); }
	inline Stack_1_tF5A24C9426EE280ED418674889292C2C9023A79C * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_tF5A24C9426EE280ED418674889292C2C9023A79C ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_tF5A24C9426EE280ED418674889292C2C9023A79C * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Stack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1, ___m_ActionOnGet_1)); }
	inline UnityAction_1_t8A73E5E38CB0B8D4007EC6DF30D9825B34363F0C * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_t8A73E5E38CB0B8D4007EC6DF30D9825B34363F0C ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_t8A73E5E38CB0B8D4007EC6DF30D9825B34363F0C * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnGet_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_t8A73E5E38CB0B8D4007EC6DF30D9825B34363F0C * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_t8A73E5E38CB0B8D4007EC6DF30D9825B34363F0C ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_t8A73E5E38CB0B8D4007EC6DF30D9825B34363F0C * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnRelease_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};


// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>
struct  ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_t3918258A91BC9F82A72E455813692665DFCC426A * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_t1774CF29AA6EF9D1D2B15FDF2C1A13C8B4A3A239 * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_t1774CF29AA6EF9D1D2B15FDF2C1A13C8B4A3A239 * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49, ___m_Stack_0)); }
	inline Stack_1_t3918258A91BC9F82A72E455813692665DFCC426A * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_t3918258A91BC9F82A72E455813692665DFCC426A ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_t3918258A91BC9F82A72E455813692665DFCC426A * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Stack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49, ___m_ActionOnGet_1)); }
	inline UnityAction_1_t1774CF29AA6EF9D1D2B15FDF2C1A13C8B4A3A239 * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_t1774CF29AA6EF9D1D2B15FDF2C1A13C8B4A3A239 ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_t1774CF29AA6EF9D1D2B15FDF2C1A13C8B4A3A239 * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnGet_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_t1774CF29AA6EF9D1D2B15FDF2C1A13C8B4A3A239 * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_t1774CF29AA6EF9D1D2B15FDF2C1A13C8B4A3A239 ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_t1774CF29AA6EF9D1D2B15FDF2C1A13C8B4A3A239 * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnRelease_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};


// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Vector4>>
struct  ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_t132DB7B895008F05941F75827E88B3E17F4F0B71 * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_t1FE626F17578115700E45769612596C6BD6C1D76 * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_t1FE626F17578115700E45769612596C6BD6C1D76 * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54, ___m_Stack_0)); }
	inline Stack_1_t132DB7B895008F05941F75827E88B3E17F4F0B71 * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_t132DB7B895008F05941F75827E88B3E17F4F0B71 ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_t132DB7B895008F05941F75827E88B3E17F4F0B71 * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Stack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54, ___m_ActionOnGet_1)); }
	inline UnityAction_1_t1FE626F17578115700E45769612596C6BD6C1D76 * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_t1FE626F17578115700E45769612596C6BD6C1D76 ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_t1FE626F17578115700E45769612596C6BD6C1D76 * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnGet_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_t1FE626F17578115700E45769612596C6BD6C1D76 * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_t1FE626F17578115700E45769612596C6BD6C1D76 ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_t1FE626F17578115700E45769612596C6BD6C1D76 * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnRelease_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};


// UnityEngine.UI.ObjectPool`1<System.Object>
struct  ObjectPool_1_t5BE4172BA33477BCA8E88EF395C26D7558DEB7E9  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_t5BE4172BA33477BCA8E88EF395C26D7558DEB7E9, ___m_Stack_0)); }
	inline Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Stack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_t5BE4172BA33477BCA8E88EF395C26D7558DEB7E9, ___m_ActionOnGet_1)); }
	inline UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnGet_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_t5BE4172BA33477BCA8E88EF395C26D7558DEB7E9, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnRelease_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_t5BE4172BA33477BCA8E88EF395C26D7558DEB7E9, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};


// UnityEngine.YieldInstruction
struct  YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
};

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<System.Object>
struct  Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___list_0)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_list_0() const { return ___list_0; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int16
struct  Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.SubsystemDescriptor`1<System.Object>
struct  SubsystemDescriptor_1_t951C98846FCA6E211E4065CE53CF8AFB40DB5E24  : public SubsystemDescriptor_t889FE96B75F157379A8337541A119F08DD9C75D4
{
public:

public:
};


// UnityEngine.Subsystem`1<System.Object>
struct  Subsystem_1_t730D4B66354D4BECD6DEDE1050EA133DF9B7A61F  : public Subsystem_t6B987736D8E48098F860AC55D76905DE1F48CE8C
{
public:

public:
};


// UnityEngine.UI.CoroutineTween.FloatTween
struct  FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A 
{
public:
	// UnityEngine.UI.CoroutineTween.FloatTween_FloatTweenCallback UnityEngine.UI.CoroutineTween.FloatTween::m_Target
	FloatTweenCallback_t69056DA8AAB3BCDA97012834C1F1F265F7617502 * ___m_Target_0;
	// System.Single UnityEngine.UI.CoroutineTween.FloatTween::m_StartValue
	float ___m_StartValue_1;
	// System.Single UnityEngine.UI.CoroutineTween.FloatTween::m_TargetValue
	float ___m_TargetValue_2;
	// System.Single UnityEngine.UI.CoroutineTween.FloatTween::m_Duration
	float ___m_Duration_3;
	// System.Boolean UnityEngine.UI.CoroutineTween.FloatTween::m_IgnoreTimeScale
	bool ___m_IgnoreTimeScale_4;

public:
	inline static int32_t get_offset_of_m_Target_0() { return static_cast<int32_t>(offsetof(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A, ___m_Target_0)); }
	inline FloatTweenCallback_t69056DA8AAB3BCDA97012834C1F1F265F7617502 * get_m_Target_0() const { return ___m_Target_0; }
	inline FloatTweenCallback_t69056DA8AAB3BCDA97012834C1F1F265F7617502 ** get_address_of_m_Target_0() { return &___m_Target_0; }
	inline void set_m_Target_0(FloatTweenCallback_t69056DA8AAB3BCDA97012834C1F1F265F7617502 * value)
	{
		___m_Target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Target_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_StartValue_1() { return static_cast<int32_t>(offsetof(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A, ___m_StartValue_1)); }
	inline float get_m_StartValue_1() const { return ___m_StartValue_1; }
	inline float* get_address_of_m_StartValue_1() { return &___m_StartValue_1; }
	inline void set_m_StartValue_1(float value)
	{
		___m_StartValue_1 = value;
	}

	inline static int32_t get_offset_of_m_TargetValue_2() { return static_cast<int32_t>(offsetof(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A, ___m_TargetValue_2)); }
	inline float get_m_TargetValue_2() const { return ___m_TargetValue_2; }
	inline float* get_address_of_m_TargetValue_2() { return &___m_TargetValue_2; }
	inline void set_m_TargetValue_2(float value)
	{
		___m_TargetValue_2 = value;
	}

	inline static int32_t get_offset_of_m_Duration_3() { return static_cast<int32_t>(offsetof(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A, ___m_Duration_3)); }
	inline float get_m_Duration_3() const { return ___m_Duration_3; }
	inline float* get_address_of_m_Duration_3() { return &___m_Duration_3; }
	inline void set_m_Duration_3(float value)
	{
		___m_Duration_3 = value;
	}

	inline static int32_t get_offset_of_m_IgnoreTimeScale_4() { return static_cast<int32_t>(offsetof(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A, ___m_IgnoreTimeScale_4)); }
	inline bool get_m_IgnoreTimeScale_4() const { return ___m_IgnoreTimeScale_4; }
	inline bool* get_address_of_m_IgnoreTimeScale_4() { return &___m_IgnoreTimeScale_4; }
	inline void set_m_IgnoreTimeScale_4(bool value)
	{
		___m_IgnoreTimeScale_4 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.CoroutineTween.FloatTween
struct FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A_marshaled_pinvoke
{
	FloatTweenCallback_t69056DA8AAB3BCDA97012834C1F1F265F7617502 * ___m_Target_0;
	float ___m_StartValue_1;
	float ___m_TargetValue_2;
	float ___m_Duration_3;
	int32_t ___m_IgnoreTimeScale_4;
};
// Native definition for COM marshalling of UnityEngine.UI.CoroutineTween.FloatTween
struct FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A_marshaled_com
{
	FloatTweenCallback_t69056DA8AAB3BCDA97012834C1F1F265F7617502 * ___m_Target_0;
	float ___m_StartValue_1;
	float ___m_TargetValue_2;
	float ___m_Duration_3;
	int32_t ___m_IgnoreTimeScale_4;
};

// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>
struct  TrackableCollection_1_t4F672148E28A41F14EAE569661A96270A528E608 
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.TrackableCollection`1::m_Trackables
	Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 * ___m_Trackables_0;

public:
	inline static int32_t get_offset_of_m_Trackables_0() { return static_cast<int32_t>(offsetof(TrackableCollection_1_t4F672148E28A41F14EAE569661A96270A528E608, ___m_Trackables_0)); }
	inline Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 * get_m_Trackables_0() const { return ___m_Trackables_0; }
	inline Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 ** get_address_of_m_Trackables_0() { return &___m_Trackables_0; }
	inline void set_m_Trackables_0(Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 * value)
	{
		___m_Trackables_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Trackables_0), (void*)value);
	}
};


// UnityEngine.XR.ARKit.ARKitFaceSubsystem_Provider_Triangle`1<System.Int16>
struct  Triangle_1_tCD59927E3208F060470B94D888FF2CF608DC4250 
{
public:
	// T UnityEngine.XR.ARKit.ARKitFaceSubsystem_Provider_Triangle`1::a
	int16_t ___a_0;
	// T UnityEngine.XR.ARKit.ARKitFaceSubsystem_Provider_Triangle`1::b
	int16_t ___b_1;
	// T UnityEngine.XR.ARKit.ARKitFaceSubsystem_Provider_Triangle`1::c
	int16_t ___c_2;

public:
	inline static int32_t get_offset_of_a_0() { return static_cast<int32_t>(offsetof(Triangle_1_tCD59927E3208F060470B94D888FF2CF608DC4250, ___a_0)); }
	inline int16_t get_a_0() const { return ___a_0; }
	inline int16_t* get_address_of_a_0() { return &___a_0; }
	inline void set_a_0(int16_t value)
	{
		___a_0 = value;
	}

	inline static int32_t get_offset_of_b_1() { return static_cast<int32_t>(offsetof(Triangle_1_tCD59927E3208F060470B94D888FF2CF608DC4250, ___b_1)); }
	inline int16_t get_b_1() const { return ___b_1; }
	inline int16_t* get_address_of_b_1() { return &___b_1; }
	inline void set_b_1(int16_t value)
	{
		___b_1 = value;
	}

	inline static int32_t get_offset_of_c_2() { return static_cast<int32_t>(offsetof(Triangle_1_tCD59927E3208F060470B94D888FF2CF608DC4250, ___c_2)); }
	inline int16_t get_c_2() const { return ___c_2; }
	inline int16_t* get_address_of_c_2() { return &___c_2; }
	inline void set_c_2(int16_t value)
	{
		___c_2 = value;
	}
};


// UnityEngine.XR.ARKit.ARKitFaceSubsystem_Provider_Triangle`1<System.Int32>
struct  Triangle_1_t86D2DD77A26E9EE28D2CD4D01ED1FEF8F6FE5E82 
{
public:
	// T UnityEngine.XR.ARKit.ARKitFaceSubsystem_Provider_Triangle`1::a
	int32_t ___a_0;
	// T UnityEngine.XR.ARKit.ARKitFaceSubsystem_Provider_Triangle`1::b
	int32_t ___b_1;
	// T UnityEngine.XR.ARKit.ARKitFaceSubsystem_Provider_Triangle`1::c
	int32_t ___c_2;

public:
	inline static int32_t get_offset_of_a_0() { return static_cast<int32_t>(offsetof(Triangle_1_t86D2DD77A26E9EE28D2CD4D01ED1FEF8F6FE5E82, ___a_0)); }
	inline int32_t get_a_0() const { return ___a_0; }
	inline int32_t* get_address_of_a_0() { return &___a_0; }
	inline void set_a_0(int32_t value)
	{
		___a_0 = value;
	}

	inline static int32_t get_offset_of_b_1() { return static_cast<int32_t>(offsetof(Triangle_1_t86D2DD77A26E9EE28D2CD4D01ED1FEF8F6FE5E82, ___b_1)); }
	inline int32_t get_b_1() const { return ___b_1; }
	inline int32_t* get_address_of_b_1() { return &___b_1; }
	inline void set_b_1(int32_t value)
	{
		___b_1 = value;
	}

	inline static int32_t get_offset_of_c_2() { return static_cast<int32_t>(offsetof(Triangle_1_t86D2DD77A26E9EE28D2CD4D01ED1FEF8F6FE5E82, ___c_2)); }
	inline int32_t get_c_2() const { return ___c_2; }
	inline int32_t* get_address_of_c_2() { return &___c_2; }
	inline void set_c_2(int32_t value)
	{
		___c_2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.Promise`1<System.Object>
struct  Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4  : public CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D
{
public:
	// T UnityEngine.XR.ARSubsystems.Promise`1::<result>k__BackingField
	RuntimeObject * ___U3CresultU3Ek__BackingField_0;
	// System.Boolean UnityEngine.XR.ARSubsystems.Promise`1::m_Complete
	bool ___m_Complete_1;

public:
	inline static int32_t get_offset_of_U3CresultU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4, ___U3CresultU3Ek__BackingField_0)); }
	inline RuntimeObject * get_U3CresultU3Ek__BackingField_0() const { return ___U3CresultU3Ek__BackingField_0; }
	inline RuntimeObject ** get_address_of_U3CresultU3Ek__BackingField_0() { return &___U3CresultU3Ek__BackingField_0; }
	inline void set_U3CresultU3Ek__BackingField_0(RuntimeObject * value)
	{
		___U3CresultU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CresultU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Complete_1() { return static_cast<int32_t>(offsetof(Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4, ___m_Complete_1)); }
	inline bool get_m_Complete_1() const { return ___m_Complete_1; }
	inline bool* get_address_of_m_Complete_1() { return &___m_Complete_1; }
	inline void set_m_Complete_1(bool value)
	{
		___m_Complete_1 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableId
struct  TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 
{
public:
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId1
	uint64_t ___m_SubId1_1;
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId2
	uint64_t ___m_SubId2_2;

public:
	inline static int32_t get_offset_of_m_SubId1_1() { return static_cast<int32_t>(offsetof(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47, ___m_SubId1_1)); }
	inline uint64_t get_m_SubId1_1() const { return ___m_SubId1_1; }
	inline uint64_t* get_address_of_m_SubId1_1() { return &___m_SubId1_1; }
	inline void set_m_SubId1_1(uint64_t value)
	{
		___m_SubId1_1 = value;
	}

	inline static int32_t get_offset_of_m_SubId2_2() { return static_cast<int32_t>(offsetof(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47, ___m_SubId2_2)); }
	inline uint64_t get_m_SubId2_2() const { return ___m_SubId2_2; }
	inline uint64_t* get_address_of_m_SubId2_2() { return &___m_SubId2_2; }
	inline void set_m_SubId2_2(uint64_t value)
	{
		___m_SubId2_2 = value;
	}
};

struct TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::s_InvalidId
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___s_InvalidId_0;

public:
	inline static int32_t get_offset_of_s_InvalidId_0() { return static_cast<int32_t>(offsetof(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_StaticFields, ___s_InvalidId_0)); }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  get_s_InvalidId_0() const { return ___s_InvalidId_0; }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * get_address_of_s_InvalidId_0() { return &___s_InvalidId_0; }
	inline void set_s_InvalidId_0(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  value)
	{
		___s_InvalidId_0 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>
struct  KeyValuePair_2_tE370629D71E4468BE162EB67B39EF5299AAAFBB3 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tE370629D71E4468BE162EB67B39EF5299AAAFBB3, ___key_0)); }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  get_key_0() const { return ___key_0; }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tE370629D71E4468BE162EB67B39EF5299AAAFBB3, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*INT*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*INT*/* ___native_trace_ips_15;
};

// System.Int32Enum
struct  Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// Unity.Collections.Allocator
struct  Allocator_t62A091275262E7067EAAD565B67764FA877D58D6 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t62A091275262E7067EAAD565B67764FA877D58D6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Collections.NativeArrayOptions
struct  NativeArrayOptions_t23897F2D7CA2F1B58D2539C64062DD7C77615B6A 
{
public:
	// System.Int32 Unity.Collections.NativeArrayOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NativeArrayOptions_t23897F2D7CA2F1B58D2539C64062DD7C77615B6A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Coroutine
struct  Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Pose
struct  Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 
{
public:
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29, ___position_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_position_0() const { return ___position_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29, ___rotation_1)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_rotation_1() const { return ___rotation_1; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___rotation_1 = value;
	}
};

struct Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_StaticFields
{
public:
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___k_Identity_2;

public:
	inline static int32_t get_offset_of_k_Identity_2() { return static_cast<int32_t>(offsetof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_StaticFields, ___k_Identity_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_k_Identity_2() const { return ___k_Identity_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_k_Identity_2() { return &___k_Identity_2; }
	inline void set_k_Identity_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___k_Identity_2 = value;
	}
};


// UnityEngine.UI.CoroutineTween.ColorTween_ColorTweenMode
struct  ColorTweenMode_tDCE018D37330F576ACCD00D16CAF91AE55315F2F 
{
public:
	// System.Int32 UnityEngine.UI.CoroutineTween.ColorTween_ColorTweenMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ColorTweenMode_tDCE018D37330F576ACCD00D16CAF91AE55315F2F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2<UnityEngine.UI.CoroutineTween.FloatTween>
struct  U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// T UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2::tweenInfo
	FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A  ___tweenInfo_2;
	// System.Single UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2::<elapsedTime>5__2
	float ___U3CelapsedTimeU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_tweenInfo_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E, ___tweenInfo_2)); }
	inline FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A  get_tweenInfo_2() const { return ___tweenInfo_2; }
	inline FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * get_address_of_tweenInfo_2() { return &___tweenInfo_2; }
	inline void set_tweenInfo_2(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A  value)
	{
		___tweenInfo_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___tweenInfo_2))->___m_Target_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CelapsedTimeU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E, ___U3CelapsedTimeU3E5__2_3)); }
	inline float get_U3CelapsedTimeU3E5__2_3() const { return ___U3CelapsedTimeU3E5__2_3; }
	inline float* get_address_of_U3CelapsedTimeU3E5__2_3() { return &___U3CelapsedTimeU3E5__2_3; }
	inline void set_U3CelapsedTimeU3E5__2_3(float value)
	{
		___U3CelapsedTimeU3E5__2_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.PlaneAlignment
struct  PlaneAlignment_t8959E33A181E8A5B46387DDC30F957DD14B48783 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.PlaneAlignment::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlaneAlignment_t8959E33A181E8A5B46387DDC30F957DD14B48783, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.Promise`1_ImmediatePromise<System.Object>
struct  ImmediatePromise_tA93EB63F910034B9183ACBF4D6F4C168A19FC8B1  : public Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackingState
struct  TrackingState_t124D9E603E4E0453A85409CF7762EE8C946233F6 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.TrackingState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingState_t124D9E603E4E0453A85409CF7762EE8C946233F6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>
struct  TrackingSubsystem_2_t0D6BC19D17058B4CBF6E3E9122F09A5A86A8566C  : public Subsystem_1_t730D4B66354D4BECD6DEDE1050EA133DF9B7A61F
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackingSubsystem`2::m_Running
	bool ___m_Running_1;

public:
	inline static int32_t get_offset_of_m_Running_1() { return static_cast<int32_t>(offsetof(TrackingSubsystem_2_t0D6BC19D17058B4CBF6E3E9122F09A5A86A8566C, ___m_Running_1)); }
	inline bool get_m_Running_1() const { return ___m_Running_1; }
	inline bool* get_address_of_m_Running_1() { return &___m_Running_1; }
	inline void set_m_Running_1(bool value)
	{
		___m_Running_1 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRFace,System.Object>
struct  TrackingSubsystem_2_t810E285415E1644FA85391E12F95806CEE3C50EB  : public Subsystem_1_t730D4B66354D4BECD6DEDE1050EA133DF9B7A61F
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackingSubsystem`2::m_Running
	bool ___m_Running_1;

public:
	inline static int32_t get_offset_of_m_Running_1() { return static_cast<int32_t>(offsetof(TrackingSubsystem_2_t810E285415E1644FA85391E12F95806CEE3C50EB, ___m_Running_1)); }
	inline bool get_m_Running_1() const { return ___m_Running_1; }
	inline bool* get_address_of_m_Running_1() { return &___m_Running_1; }
	inline void set_m_Running_1(bool value)
	{
		___m_Running_1 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>
struct  TrackingSubsystem_2_t1EC759A75AE7EFD4E4446A20009C8472E1C8AED1  : public Subsystem_1_t730D4B66354D4BECD6DEDE1050EA133DF9B7A61F
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackingSubsystem`2::m_Running
	bool ___m_Running_1;

public:
	inline static int32_t get_offset_of_m_Running_1() { return static_cast<int32_t>(offsetof(TrackingSubsystem_2_t1EC759A75AE7EFD4E4446A20009C8472E1C8AED1, ___m_Running_1)); }
	inline bool get_m_Running_1() const { return ___m_Running_1; }
	inline bool* get_address_of_m_Running_1() { return &___m_Running_1; }
	inline void set_m_Running_1(bool value)
	{
		___m_Running_1 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>
struct  TrackingSubsystem_2_tA3D4B822865BAE0754B253CF8551A3EBB7073851  : public Subsystem_1_t730D4B66354D4BECD6DEDE1050EA133DF9B7A61F
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackingSubsystem`2::m_Running
	bool ___m_Running_1;

public:
	inline static int32_t get_offset_of_m_Running_1() { return static_cast<int32_t>(offsetof(TrackingSubsystem_2_tA3D4B822865BAE0754B253CF8551A3EBB7073851, ___m_Running_1)); }
	inline bool get_m_Running_1() const { return ___m_Running_1; }
	inline bool* get_address_of_m_Running_1() { return &___m_Running_1; }
	inline void set_m_Running_1(bool value)
	{
		___m_Running_1 = value;
	}
};


// System.Collections.Generic.Dictionary`2_Enumerator<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>
struct  Enumerator_t05190B8C9CB39286397757C04499EED7BB9E206E 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::dictionary
	Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::current
	KeyValuePair_2_tE370629D71E4468BE162EB67B39EF5299AAAFBB3  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t05190B8C9CB39286397757C04499EED7BB9E206E, ___dictionary_0)); }
	inline Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t05190B8C9CB39286397757C04499EED7BB9E206E, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t05190B8C9CB39286397757C04499EED7BB9E206E, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t05190B8C9CB39286397757C04499EED7BB9E206E, ___current_3)); }
	inline KeyValuePair_2_tE370629D71E4468BE162EB67B39EF5299AAAFBB3  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tE370629D71E4468BE162EB67B39EF5299AAAFBB3 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tE370629D71E4468BE162EB67B39EF5299AAAFBB3  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t05190B8C9CB39286397757C04499EED7BB9E206E, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.BoundedPlane>
struct  NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
// Native definition for COM marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>
struct  NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
// Native definition for COM marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRFace>
struct  NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
// Native definition for COM marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRPointCloud>
struct  NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
// Native definition for COM marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>
struct  NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
// Native definition for COM marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif

// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.UI.CoroutineTween.ColorTween
struct  ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 
{
public:
	// UnityEngine.UI.CoroutineTween.ColorTween_ColorTweenCallback UnityEngine.UI.CoroutineTween.ColorTween::m_Target
	ColorTweenCallback_tA2357F5ECB0BB12F303C2D6EE5A628CFD14C91C0 * ___m_Target_0;
	// UnityEngine.Color UnityEngine.UI.CoroutineTween.ColorTween::m_StartColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_StartColor_1;
	// UnityEngine.Color UnityEngine.UI.CoroutineTween.ColorTween::m_TargetColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_TargetColor_2;
	// UnityEngine.UI.CoroutineTween.ColorTween_ColorTweenMode UnityEngine.UI.CoroutineTween.ColorTween::m_TweenMode
	int32_t ___m_TweenMode_3;
	// System.Single UnityEngine.UI.CoroutineTween.ColorTween::m_Duration
	float ___m_Duration_4;
	// System.Boolean UnityEngine.UI.CoroutineTween.ColorTween::m_IgnoreTimeScale
	bool ___m_IgnoreTimeScale_5;

public:
	inline static int32_t get_offset_of_m_Target_0() { return static_cast<int32_t>(offsetof(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228, ___m_Target_0)); }
	inline ColorTweenCallback_tA2357F5ECB0BB12F303C2D6EE5A628CFD14C91C0 * get_m_Target_0() const { return ___m_Target_0; }
	inline ColorTweenCallback_tA2357F5ECB0BB12F303C2D6EE5A628CFD14C91C0 ** get_address_of_m_Target_0() { return &___m_Target_0; }
	inline void set_m_Target_0(ColorTweenCallback_tA2357F5ECB0BB12F303C2D6EE5A628CFD14C91C0 * value)
	{
		___m_Target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Target_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_StartColor_1() { return static_cast<int32_t>(offsetof(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228, ___m_StartColor_1)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_StartColor_1() const { return ___m_StartColor_1; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_StartColor_1() { return &___m_StartColor_1; }
	inline void set_m_StartColor_1(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_StartColor_1 = value;
	}

	inline static int32_t get_offset_of_m_TargetColor_2() { return static_cast<int32_t>(offsetof(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228, ___m_TargetColor_2)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_TargetColor_2() const { return ___m_TargetColor_2; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_TargetColor_2() { return &___m_TargetColor_2; }
	inline void set_m_TargetColor_2(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_TargetColor_2 = value;
	}

	inline static int32_t get_offset_of_m_TweenMode_3() { return static_cast<int32_t>(offsetof(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228, ___m_TweenMode_3)); }
	inline int32_t get_m_TweenMode_3() const { return ___m_TweenMode_3; }
	inline int32_t* get_address_of_m_TweenMode_3() { return &___m_TweenMode_3; }
	inline void set_m_TweenMode_3(int32_t value)
	{
		___m_TweenMode_3 = value;
	}

	inline static int32_t get_offset_of_m_Duration_4() { return static_cast<int32_t>(offsetof(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228, ___m_Duration_4)); }
	inline float get_m_Duration_4() const { return ___m_Duration_4; }
	inline float* get_address_of_m_Duration_4() { return &___m_Duration_4; }
	inline void set_m_Duration_4(float value)
	{
		___m_Duration_4 = value;
	}

	inline static int32_t get_offset_of_m_IgnoreTimeScale_5() { return static_cast<int32_t>(offsetof(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228, ___m_IgnoreTimeScale_5)); }
	inline bool get_m_IgnoreTimeScale_5() const { return ___m_IgnoreTimeScale_5; }
	inline bool* get_address_of_m_IgnoreTimeScale_5() { return &___m_IgnoreTimeScale_5; }
	inline void set_m_IgnoreTimeScale_5(bool value)
	{
		___m_IgnoreTimeScale_5 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.CoroutineTween.ColorTween
struct ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228_marshaled_pinvoke
{
	ColorTweenCallback_tA2357F5ECB0BB12F303C2D6EE5A628CFD14C91C0 * ___m_Target_0;
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_StartColor_1;
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_TargetColor_2;
	int32_t ___m_TweenMode_3;
	float ___m_Duration_4;
	int32_t ___m_IgnoreTimeScale_5;
};
// Native definition for COM marshalling of UnityEngine.UI.CoroutineTween.ColorTween
struct ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228_marshaled_com
{
	ColorTweenCallback_tA2357F5ECB0BB12F303C2D6EE5A628CFD14C91C0 * ___m_Target_0;
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_StartColor_1;
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_TargetColor_2;
	int32_t ___m_TweenMode_3;
	float ___m_Duration_4;
	int32_t ___m_IgnoreTimeScale_5;
};

// UnityEngine.XR.ARSubsystems.BoundedPlane
struct  BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::m_TrackableId
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___m_TrackableId_0;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::m_SubsumedById
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___m_SubsumedById_1;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::m_Center
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_Center_2;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.BoundedPlane::m_Pose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_Pose_3;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::m_Size
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_Size_4;
	// UnityEngine.XR.ARSubsystems.PlaneAlignment UnityEngine.XR.ARSubsystems.BoundedPlane::m_Alignment
	int32_t ___m_Alignment_5;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.BoundedPlane::m_TrackingState
	int32_t ___m_TrackingState_6;
	// System.IntPtr UnityEngine.XR.ARSubsystems.BoundedPlane::m_NativePtr
	intptr_t ___m_NativePtr_7;

public:
	inline static int32_t get_offset_of_m_TrackableId_0() { return static_cast<int32_t>(offsetof(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227, ___m_TrackableId_0)); }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  get_m_TrackableId_0() const { return ___m_TrackableId_0; }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * get_address_of_m_TrackableId_0() { return &___m_TrackableId_0; }
	inline void set_m_TrackableId_0(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  value)
	{
		___m_TrackableId_0 = value;
	}

	inline static int32_t get_offset_of_m_SubsumedById_1() { return static_cast<int32_t>(offsetof(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227, ___m_SubsumedById_1)); }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  get_m_SubsumedById_1() const { return ___m_SubsumedById_1; }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * get_address_of_m_SubsumedById_1() { return &___m_SubsumedById_1; }
	inline void set_m_SubsumedById_1(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  value)
	{
		___m_SubsumedById_1 = value;
	}

	inline static int32_t get_offset_of_m_Center_2() { return static_cast<int32_t>(offsetof(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227, ___m_Center_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_Center_2() const { return ___m_Center_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_Center_2() { return &___m_Center_2; }
	inline void set_m_Center_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_Center_2 = value;
	}

	inline static int32_t get_offset_of_m_Pose_3() { return static_cast<int32_t>(offsetof(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227, ___m_Pose_3)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_Pose_3() const { return ___m_Pose_3; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_Pose_3() { return &___m_Pose_3; }
	inline void set_m_Pose_3(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_Pose_3 = value;
	}

	inline static int32_t get_offset_of_m_Size_4() { return static_cast<int32_t>(offsetof(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227, ___m_Size_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_Size_4() const { return ___m_Size_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_Size_4() { return &___m_Size_4; }
	inline void set_m_Size_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_Size_4 = value;
	}

	inline static int32_t get_offset_of_m_Alignment_5() { return static_cast<int32_t>(offsetof(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227, ___m_Alignment_5)); }
	inline int32_t get_m_Alignment_5() const { return ___m_Alignment_5; }
	inline int32_t* get_address_of_m_Alignment_5() { return &___m_Alignment_5; }
	inline void set_m_Alignment_5(int32_t value)
	{
		___m_Alignment_5 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_6() { return static_cast<int32_t>(offsetof(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227, ___m_TrackingState_6)); }
	inline int32_t get_m_TrackingState_6() const { return ___m_TrackingState_6; }
	inline int32_t* get_address_of_m_TrackingState_6() { return &___m_TrackingState_6; }
	inline void set_m_TrackingState_6(int32_t value)
	{
		___m_TrackingState_6 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_7() { return static_cast<int32_t>(offsetof(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227, ___m_NativePtr_7)); }
	inline intptr_t get_m_NativePtr_7() const { return ___m_NativePtr_7; }
	inline intptr_t* get_address_of_m_NativePtr_7() { return &___m_NativePtr_7; }
	inline void set_m_NativePtr_7(intptr_t value)
	{
		___m_NativePtr_7 = value;
	}
};


// UnityEngine.XR.ARSubsystems.Promise`1<System.Int32Enum>
struct  Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068  : public CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D
{
public:
	// T UnityEngine.XR.ARSubsystems.Promise`1::<result>k__BackingField
	int32_t ___U3CresultU3Ek__BackingField_0;
	// System.Boolean UnityEngine.XR.ARSubsystems.Promise`1::m_Complete
	bool ___m_Complete_1;

public:
	inline static int32_t get_offset_of_U3CresultU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068, ___U3CresultU3Ek__BackingField_0)); }
	inline int32_t get_U3CresultU3Ek__BackingField_0() const { return ___U3CresultU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CresultU3Ek__BackingField_0() { return &___U3CresultU3Ek__BackingField_0; }
	inline void set_U3CresultU3Ek__BackingField_0(int32_t value)
	{
		___U3CresultU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Complete_1() { return static_cast<int32_t>(offsetof(Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068, ___m_Complete_1)); }
	inline bool get_m_Complete_1() const { return ___m_Complete_1; }
	inline bool* get_address_of_m_Complete_1() { return &___m_Complete_1; }
	inline void set_m_Complete_1(bool value)
	{
		___m_Complete_1 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRFace
struct  XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRFace::m_TrackableId
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___m_TrackableId_0;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRFace::m_Pose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_Pose_1;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRFace::m_TrackingState
	int32_t ___m_TrackingState_2;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRFace::m_NativePtr
	intptr_t ___m_NativePtr_3;

public:
	inline static int32_t get_offset_of_m_TrackableId_0() { return static_cast<int32_t>(offsetof(XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7, ___m_TrackableId_0)); }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  get_m_TrackableId_0() const { return ___m_TrackableId_0; }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * get_address_of_m_TrackableId_0() { return &___m_TrackableId_0; }
	inline void set_m_TrackableId_0(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  value)
	{
		___m_TrackableId_0 = value;
	}

	inline static int32_t get_offset_of_m_Pose_1() { return static_cast<int32_t>(offsetof(XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7, ___m_Pose_1)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_Pose_1() const { return ___m_Pose_1; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_Pose_1() { return &___m_Pose_1; }
	inline void set_m_Pose_1(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_Pose_1 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_2() { return static_cast<int32_t>(offsetof(XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7, ___m_TrackingState_2)); }
	inline int32_t get_m_TrackingState_2() const { return ___m_TrackingState_2; }
	inline int32_t* get_address_of_m_TrackingState_2() { return &___m_TrackingState_2; }
	inline void set_m_TrackingState_2(int32_t value)
	{
		___m_TrackingState_2 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_3() { return static_cast<int32_t>(offsetof(XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7, ___m_NativePtr_3)); }
	inline intptr_t get_m_NativePtr_3() const { return ___m_NativePtr_3; }
	inline intptr_t* get_address_of_m_NativePtr_3() { return &___m_NativePtr_3; }
	inline void set_m_NativePtr_3(intptr_t value)
	{
		___m_NativePtr_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRPointCloud
struct  XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRPointCloud::m_TrackableId
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___m_TrackableId_0;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRPointCloud::m_Pose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_Pose_1;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRPointCloud::m_TrackingState
	int32_t ___m_TrackingState_2;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRPointCloud::m_NativePtr
	intptr_t ___m_NativePtr_3;

public:
	inline static int32_t get_offset_of_m_TrackableId_0() { return static_cast<int32_t>(offsetof(XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0, ___m_TrackableId_0)); }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  get_m_TrackableId_0() const { return ___m_TrackableId_0; }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * get_address_of_m_TrackableId_0() { return &___m_TrackableId_0; }
	inline void set_m_TrackableId_0(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  value)
	{
		___m_TrackableId_0 = value;
	}

	inline static int32_t get_offset_of_m_Pose_1() { return static_cast<int32_t>(offsetof(XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0, ___m_Pose_1)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_Pose_1() const { return ___m_Pose_1; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_Pose_1() { return &___m_Pose_1; }
	inline void set_m_Pose_1(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_Pose_1 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_2() { return static_cast<int32_t>(offsetof(XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0, ___m_TrackingState_2)); }
	inline int32_t get_m_TrackingState_2() const { return ___m_TrackingState_2; }
	inline int32_t* get_address_of_m_TrackingState_2() { return &___m_TrackingState_2; }
	inline void set_m_TrackingState_2(int32_t value)
	{
		___m_TrackingState_2 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_3() { return static_cast<int32_t>(offsetof(XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0, ___m_NativePtr_3)); }
	inline intptr_t get_m_NativePtr_3() const { return ___m_NativePtr_3; }
	inline intptr_t* get_address_of_m_NativePtr_3() { return &___m_NativePtr_3; }
	inline void set_m_NativePtr_3(intptr_t value)
	{
		___m_NativePtr_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRReferencePoint
struct  XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRReferencePoint::m_Id
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___m_Id_0;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRReferencePoint::m_Pose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_Pose_1;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRReferencePoint::m_TrackingState
	int32_t ___m_TrackingState_2;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRReferencePoint::m_NativePtr
	intptr_t ___m_NativePtr_3;

public:
	inline static int32_t get_offset_of_m_Id_0() { return static_cast<int32_t>(offsetof(XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9, ___m_Id_0)); }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  get_m_Id_0() const { return ___m_Id_0; }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * get_address_of_m_Id_0() { return &___m_Id_0; }
	inline void set_m_Id_0(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  value)
	{
		___m_Id_0 = value;
	}

	inline static int32_t get_offset_of_m_Pose_1() { return static_cast<int32_t>(offsetof(XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9, ___m_Pose_1)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_Pose_1() const { return ___m_Pose_1; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_Pose_1() { return &___m_Pose_1; }
	inline void set_m_Pose_1(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_Pose_1 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_2() { return static_cast<int32_t>(offsetof(XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9, ___m_TrackingState_2)); }
	inline int32_t get_m_TrackingState_2() const { return ___m_TrackingState_2; }
	inline int32_t* get_address_of_m_TrackingState_2() { return &___m_TrackingState_2; }
	inline void set_m_TrackingState_2(int32_t value)
	{
		___m_TrackingState_2 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_3() { return static_cast<int32_t>(offsetof(XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9, ___m_NativePtr_3)); }
	inline intptr_t get_m_NativePtr_3() const { return ___m_NativePtr_3; }
	inline intptr_t* get_address_of_m_NativePtr_3() { return &___m_NativePtr_3; }
	inline void set_m_NativePtr_3(intptr_t value)
	{
		___m_NativePtr_3 = value;
	}
};


// System.ArgumentException
struct  ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.Collections.Generic.KeyNotFoundException
struct  KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.Comparison`1<System.Object>
struct  Comparison_1_tD9DBDF7B2E4774B4D35E113A76D75828A24641F4  : public MulticastDelegate_t
{
public:

public:
};


// System.InvalidOperationException
struct  InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.NotImplementedException
struct  NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.NotSupportedException
struct  NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// Unity.Collections.NativeArray`1_Enumerator<UnityEngine.XR.ARSubsystems.BoundedPlane>
struct  Enumerator_tE1C3D515CC85EE05C8130CBC6C35308AE32EC631 
{
public:
	// Unity.Collections.NativeArray`1<T> Unity.Collections.NativeArray`1_Enumerator::m_Array
	NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  ___m_Array_0;
	// System.Int32 Unity.Collections.NativeArray`1_Enumerator::m_Index
	int32_t ___m_Index_1;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(Enumerator_tE1C3D515CC85EE05C8130CBC6C35308AE32EC631, ___m_Array_0)); }
	inline NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  get_m_Array_0() const { return ___m_Array_0; }
	inline NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 * get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  value)
	{
		___m_Array_0 = value;
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(Enumerator_tE1C3D515CC85EE05C8130CBC6C35308AE32EC631, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}
};


// Unity.Collections.NativeArray`1_Enumerator<UnityEngine.XR.ARSubsystems.TrackableId>
struct  Enumerator_tDB12EE5618B415F0FB5AEEE49E6F2F41DFB2FD0A 
{
public:
	// Unity.Collections.NativeArray`1<T> Unity.Collections.NativeArray`1_Enumerator::m_Array
	NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  ___m_Array_0;
	// System.Int32 Unity.Collections.NativeArray`1_Enumerator::m_Index
	int32_t ___m_Index_1;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(Enumerator_tDB12EE5618B415F0FB5AEEE49E6F2F41DFB2FD0A, ___m_Array_0)); }
	inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  get_m_Array_0() const { return ___m_Array_0; }
	inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  value)
	{
		___m_Array_0 = value;
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(Enumerator_tDB12EE5618B415F0FB5AEEE49E6F2F41DFB2FD0A, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}
};


// Unity.Collections.NativeArray`1_Enumerator<UnityEngine.XR.ARSubsystems.XRPointCloud>
struct  Enumerator_t1B7E0D23EF4C33682EFE99D8F58153FDA8CB6ACD 
{
public:
	// Unity.Collections.NativeArray`1<T> Unity.Collections.NativeArray`1_Enumerator::m_Array
	NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  ___m_Array_0;
	// System.Int32 Unity.Collections.NativeArray`1_Enumerator::m_Index
	int32_t ___m_Index_1;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(Enumerator_t1B7E0D23EF4C33682EFE99D8F58153FDA8CB6ACD, ___m_Array_0)); }
	inline NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  get_m_Array_0() const { return ___m_Array_0; }
	inline NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 * get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  value)
	{
		___m_Array_0 = value;
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(Enumerator_t1B7E0D23EF4C33682EFE99D8F58153FDA8CB6ACD, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}
};


// Unity.Collections.NativeArray`1_Enumerator<UnityEngine.XR.ARSubsystems.XRReferencePoint>
struct  Enumerator_t533CE786298995A804A1B61701D6400CF4483B1E 
{
public:
	// Unity.Collections.NativeArray`1<T> Unity.Collections.NativeArray`1_Enumerator::m_Array
	NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  ___m_Array_0;
	// System.Int32 Unity.Collections.NativeArray`1_Enumerator::m_Index
	int32_t ___m_Index_1;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(Enumerator_t533CE786298995A804A1B61701D6400CF4483B1E, ___m_Array_0)); }
	inline NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  get_m_Array_0() const { return ___m_Array_0; }
	inline NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 * get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  value)
	{
		___m_Array_0 = value;
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(Enumerator_t533CE786298995A804A1B61701D6400CF4483B1E, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<System.Int32>>
struct  UnityAction_1_t9F617E4F89335DB02DC3387128A9DFD903C3F584  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<System.Object>>
struct  UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Color32>>
struct  UnityAction_1_tE3DCD90F58E3904680E8CB55673236424DD51B9D  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct  UnityAction_1_t81CC8066FFA7C46AA839E5C8548255B1E557F95A  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Vector2>>
struct  UnityAction_1_t8A73E5E38CB0B8D4007EC6DF30D9825B34363F0C  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>
struct  UnityAction_1_t1774CF29AA6EF9D1D2B15FDF2C1A13C8B4A3A239  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Vector4>>
struct  UnityAction_1_t1FE626F17578115700E45769612596C6BD6C1D76  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Object>
struct  UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2<UnityEngine.UI.CoroutineTween.ColorTween>
struct  U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// T UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2::tweenInfo
	ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228  ___tweenInfo_2;
	// System.Single UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2::<elapsedTime>5__2
	float ___U3CelapsedTimeU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_tweenInfo_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB, ___tweenInfo_2)); }
	inline ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228  get_tweenInfo_2() const { return ___tweenInfo_2; }
	inline ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * get_address_of_tweenInfo_2() { return &___tweenInfo_2; }
	inline void set_tweenInfo_2(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228  value)
	{
		___tweenInfo_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___tweenInfo_2))->___m_Target_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CelapsedTimeU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB, ___U3CelapsedTimeU3E5__2_3)); }
	inline float get_U3CelapsedTimeU3E5__2_3() const { return ___U3CelapsedTimeU3E5__2_3; }
	inline float* get_address_of_U3CelapsedTimeU3E5__2_3() { return &___U3CelapsedTimeU3E5__2_3; }
	inline void set_U3CelapsedTimeU3E5__2_3(float value)
	{
		___U3CelapsedTimeU3E5__2_3 = value;
	}
};


// UnityEngine.XR.ARFoundation.TrackableCollection`1_Enumerator<System.Object>
struct  Enumerator_t3CA35B0FF0588CA447157731D78AC026FF3FA6ED 
{
public:
	// System.Collections.Generic.Dictionary`2_Enumerator<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.TrackableCollection`1_Enumerator::m_Enumerator
	Enumerator_t05190B8C9CB39286397757C04499EED7BB9E206E  ___m_Enumerator_0;

public:
	inline static int32_t get_offset_of_m_Enumerator_0() { return static_cast<int32_t>(offsetof(Enumerator_t3CA35B0FF0588CA447157731D78AC026FF3FA6ED, ___m_Enumerator_0)); }
	inline Enumerator_t05190B8C9CB39286397757C04499EED7BB9E206E  get_m_Enumerator_0() const { return ___m_Enumerator_0; }
	inline Enumerator_t05190B8C9CB39286397757C04499EED7BB9E206E * get_address_of_m_Enumerator_0() { return &___m_Enumerator_0; }
	inline void set_m_Enumerator_0(Enumerator_t05190B8C9CB39286397757C04499EED7BB9E206E  value)
	{
		___m_Enumerator_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Enumerator_0))->___dictionary_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_Enumerator_0))->___current_3))->___value_1), (void*)NULL);
		#endif
	}
};


// UnityEngine.XR.ARSubsystems.Promise`1_ImmediatePromise<System.Int32Enum>
struct  ImmediatePromise_t16B373AE2A03B114E7629932B9CC7A063BD6EACF  : public Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>
struct  TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  ___m_Removed_3;

public:
	inline static int32_t get_offset_of_U3CisCreatedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE, ___U3CisCreatedU3Ek__BackingField_0)); }
	inline bool get_U3CisCreatedU3Ek__BackingField_0() const { return ___U3CisCreatedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisCreatedU3Ek__BackingField_0() { return &___U3CisCreatedU3Ek__BackingField_0; }
	inline void set_U3CisCreatedU3Ek__BackingField_0(bool value)
	{
		___U3CisCreatedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Added_1() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE, ___m_Added_1)); }
	inline NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  get_m_Added_1() const { return ___m_Added_1; }
	inline NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 * get_address_of_m_Added_1() { return &___m_Added_1; }
	inline void set_m_Added_1(NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  value)
	{
		___m_Added_1 = value;
	}

	inline static int32_t get_offset_of_m_Updated_2() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE, ___m_Updated_2)); }
	inline NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  get_m_Updated_2() const { return ___m_Updated_2; }
	inline NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 * get_address_of_m_Updated_2() { return &___m_Updated_2; }
	inline void set_m_Updated_2(NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  value)
	{
		___m_Updated_2 = value;
	}

	inline static int32_t get_offset_of_m_Removed_3() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE, ___m_Removed_3)); }
	inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  get_m_Removed_3() const { return ___m_Removed_3; }
	inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * get_address_of_m_Removed_3() { return &___m_Removed_3; }
	inline void set_m_Removed_3(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  value)
	{
		___m_Removed_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>
struct  TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5  ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5  ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  ___m_Removed_3;

public:
	inline static int32_t get_offset_of_U3CisCreatedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6, ___U3CisCreatedU3Ek__BackingField_0)); }
	inline bool get_U3CisCreatedU3Ek__BackingField_0() const { return ___U3CisCreatedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisCreatedU3Ek__BackingField_0() { return &___U3CisCreatedU3Ek__BackingField_0; }
	inline void set_U3CisCreatedU3Ek__BackingField_0(bool value)
	{
		___U3CisCreatedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Added_1() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6, ___m_Added_1)); }
	inline NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5  get_m_Added_1() const { return ___m_Added_1; }
	inline NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5 * get_address_of_m_Added_1() { return &___m_Added_1; }
	inline void set_m_Added_1(NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5  value)
	{
		___m_Added_1 = value;
	}

	inline static int32_t get_offset_of_m_Updated_2() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6, ___m_Updated_2)); }
	inline NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5  get_m_Updated_2() const { return ___m_Updated_2; }
	inline NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5 * get_address_of_m_Updated_2() { return &___m_Updated_2; }
	inline void set_m_Updated_2(NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5  value)
	{
		___m_Updated_2 = value;
	}

	inline static int32_t get_offset_of_m_Removed_3() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6, ___m_Removed_3)); }
	inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  get_m_Removed_3() const { return ___m_Removed_3; }
	inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * get_address_of_m_Removed_3() { return &___m_Removed_3; }
	inline void set_m_Removed_3(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  value)
	{
		___m_Removed_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>
struct  TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  ___m_Removed_3;

public:
	inline static int32_t get_offset_of_U3CisCreatedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB, ___U3CisCreatedU3Ek__BackingField_0)); }
	inline bool get_U3CisCreatedU3Ek__BackingField_0() const { return ___U3CisCreatedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisCreatedU3Ek__BackingField_0() { return &___U3CisCreatedU3Ek__BackingField_0; }
	inline void set_U3CisCreatedU3Ek__BackingField_0(bool value)
	{
		___U3CisCreatedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Added_1() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB, ___m_Added_1)); }
	inline NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  get_m_Added_1() const { return ___m_Added_1; }
	inline NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 * get_address_of_m_Added_1() { return &___m_Added_1; }
	inline void set_m_Added_1(NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  value)
	{
		___m_Added_1 = value;
	}

	inline static int32_t get_offset_of_m_Updated_2() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB, ___m_Updated_2)); }
	inline NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  get_m_Updated_2() const { return ___m_Updated_2; }
	inline NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 * get_address_of_m_Updated_2() { return &___m_Updated_2; }
	inline void set_m_Updated_2(NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  value)
	{
		___m_Updated_2 = value;
	}

	inline static int32_t get_offset_of_m_Removed_3() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB, ___m_Removed_3)); }
	inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  get_m_Removed_3() const { return ___m_Removed_3; }
	inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * get_address_of_m_Removed_3() { return &___m_Removed_3; }
	inline void set_m_Removed_3(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  value)
	{
		___m_Removed_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>
struct  TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  ___m_Removed_3;

public:
	inline static int32_t get_offset_of_U3CisCreatedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF, ___U3CisCreatedU3Ek__BackingField_0)); }
	inline bool get_U3CisCreatedU3Ek__BackingField_0() const { return ___U3CisCreatedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisCreatedU3Ek__BackingField_0() { return &___U3CisCreatedU3Ek__BackingField_0; }
	inline void set_U3CisCreatedU3Ek__BackingField_0(bool value)
	{
		___U3CisCreatedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Added_1() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF, ___m_Added_1)); }
	inline NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  get_m_Added_1() const { return ___m_Added_1; }
	inline NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 * get_address_of_m_Added_1() { return &___m_Added_1; }
	inline void set_m_Added_1(NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  value)
	{
		___m_Added_1 = value;
	}

	inline static int32_t get_offset_of_m_Updated_2() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF, ___m_Updated_2)); }
	inline NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  get_m_Updated_2() const { return ___m_Updated_2; }
	inline NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 * get_address_of_m_Updated_2() { return &___m_Updated_2; }
	inline void set_m_Updated_2(NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  value)
	{
		___m_Updated_2 = value;
	}

	inline static int32_t get_offset_of_m_Removed_3() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF, ___m_Removed_3)); }
	inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  get_m_Removed_3() const { return ___m_Removed_3; }
	inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * get_address_of_m_Removed_3() { return &___m_Removed_3; }
	inline void set_m_Removed_3(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  value)
	{
		___m_Removed_3 = value;
	}
};


// System.ArgumentNullException
struct  ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct  ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Camera UnityEngine.XR.ARFoundation.ARSessionOrigin::m_Camera
	Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___m_Camera_4;
	// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARSessionOrigin::<trackablesParent>k__BackingField
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___U3CtrackablesParentU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARSessionOrigin::m_ContentOffsetGameObject
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_ContentOffsetGameObject_6;

public:
	inline static int32_t get_offset_of_m_Camera_4() { return static_cast<int32_t>(offsetof(ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF, ___m_Camera_4)); }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * get_m_Camera_4() const { return ___m_Camera_4; }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 ** get_address_of_m_Camera_4() { return &___m_Camera_4; }
	inline void set_m_Camera_4(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * value)
	{
		___m_Camera_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Camera_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtrackablesParentU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF, ___U3CtrackablesParentU3Ek__BackingField_5)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_U3CtrackablesParentU3Ek__BackingField_5() const { return ___U3CtrackablesParentU3Ek__BackingField_5; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_U3CtrackablesParentU3Ek__BackingField_5() { return &___U3CtrackablesParentU3Ek__BackingField_5; }
	inline void set_U3CtrackablesParentU3Ek__BackingField_5(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___U3CtrackablesParentU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtrackablesParentU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_ContentOffsetGameObject_6() { return static_cast<int32_t>(offsetof(ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF, ___m_ContentOffsetGameObject_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_ContentOffsetGameObject_6() const { return ___m_ContentOffsetGameObject_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_ContentOffsetGameObject_6() { return &___m_ContentOffsetGameObject_6; }
	inline void set_m_ContentOffsetGameObject_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_ContentOffsetGameObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ContentOffsetGameObject_6), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>
struct  ARTrackable_2_t20DDFF842A33D6D4B1F1F5C17DEB3CC5032765F5  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::m_DestroyOnRemoval
	bool ___m_DestroyOnRemoval_4;
	// TSessionRelativeData UnityEngine.XR.ARFoundation.ARTrackable`2::<sessionRelativeData>k__BackingField
	BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  ___U3CsessionRelativeDataU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_m_DestroyOnRemoval_4() { return static_cast<int32_t>(offsetof(ARTrackable_2_t20DDFF842A33D6D4B1F1F5C17DEB3CC5032765F5, ___m_DestroyOnRemoval_4)); }
	inline bool get_m_DestroyOnRemoval_4() const { return ___m_DestroyOnRemoval_4; }
	inline bool* get_address_of_m_DestroyOnRemoval_4() { return &___m_DestroyOnRemoval_4; }
	inline void set_m_DestroyOnRemoval_4(bool value)
	{
		___m_DestroyOnRemoval_4 = value;
	}

	inline static int32_t get_offset_of_U3CsessionRelativeDataU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ARTrackable_2_t20DDFF842A33D6D4B1F1F5C17DEB3CC5032765F5, ___U3CsessionRelativeDataU3Ek__BackingField_5)); }
	inline BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  get_U3CsessionRelativeDataU3Ek__BackingField_5() const { return ___U3CsessionRelativeDataU3Ek__BackingField_5; }
	inline BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 * get_address_of_U3CsessionRelativeDataU3Ek__BackingField_5() { return &___U3CsessionRelativeDataU3Ek__BackingField_5; }
	inline void set_U3CsessionRelativeDataU3Ek__BackingField_5(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  value)
	{
		___U3CsessionRelativeDataU3Ek__BackingField_5 = value;
	}
};


// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>
struct  ARTrackable_2_tFF59B3769C01557C3557231CD2A26810E2867CCD  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::m_DestroyOnRemoval
	bool ___m_DestroyOnRemoval_4;
	// TSessionRelativeData UnityEngine.XR.ARFoundation.ARTrackable`2::<sessionRelativeData>k__BackingField
	XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  ___U3CsessionRelativeDataU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_m_DestroyOnRemoval_4() { return static_cast<int32_t>(offsetof(ARTrackable_2_tFF59B3769C01557C3557231CD2A26810E2867CCD, ___m_DestroyOnRemoval_4)); }
	inline bool get_m_DestroyOnRemoval_4() const { return ___m_DestroyOnRemoval_4; }
	inline bool* get_address_of_m_DestroyOnRemoval_4() { return &___m_DestroyOnRemoval_4; }
	inline void set_m_DestroyOnRemoval_4(bool value)
	{
		___m_DestroyOnRemoval_4 = value;
	}

	inline static int32_t get_offset_of_U3CsessionRelativeDataU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ARTrackable_2_tFF59B3769C01557C3557231CD2A26810E2867CCD, ___U3CsessionRelativeDataU3Ek__BackingField_5)); }
	inline XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  get_U3CsessionRelativeDataU3Ek__BackingField_5() const { return ___U3CsessionRelativeDataU3Ek__BackingField_5; }
	inline XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 * get_address_of_U3CsessionRelativeDataU3Ek__BackingField_5() { return &___U3CsessionRelativeDataU3Ek__BackingField_5; }
	inline void set_U3CsessionRelativeDataU3Ek__BackingField_5(XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  value)
	{
		___U3CsessionRelativeDataU3Ek__BackingField_5 = value;
	}
};


// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>
struct  ARTrackable_2_t88913A417566AF8EAF80C0FF131EC194E7A0E7B4  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::m_DestroyOnRemoval
	bool ___m_DestroyOnRemoval_4;
	// TSessionRelativeData UnityEngine.XR.ARFoundation.ARTrackable`2::<sessionRelativeData>k__BackingField
	XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  ___U3CsessionRelativeDataU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_m_DestroyOnRemoval_4() { return static_cast<int32_t>(offsetof(ARTrackable_2_t88913A417566AF8EAF80C0FF131EC194E7A0E7B4, ___m_DestroyOnRemoval_4)); }
	inline bool get_m_DestroyOnRemoval_4() const { return ___m_DestroyOnRemoval_4; }
	inline bool* get_address_of_m_DestroyOnRemoval_4() { return &___m_DestroyOnRemoval_4; }
	inline void set_m_DestroyOnRemoval_4(bool value)
	{
		___m_DestroyOnRemoval_4 = value;
	}

	inline static int32_t get_offset_of_U3CsessionRelativeDataU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ARTrackable_2_t88913A417566AF8EAF80C0FF131EC194E7A0E7B4, ___U3CsessionRelativeDataU3Ek__BackingField_5)); }
	inline XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  get_U3CsessionRelativeDataU3Ek__BackingField_5() const { return ___U3CsessionRelativeDataU3Ek__BackingField_5; }
	inline XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * get_address_of_U3CsessionRelativeDataU3Ek__BackingField_5() { return &___U3CsessionRelativeDataU3Ek__BackingField_5; }
	inline void set_U3CsessionRelativeDataU3Ek__BackingField_5(XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  value)
	{
		___U3CsessionRelativeDataU3Ek__BackingField_5 = value;
	}
};


// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<System.Object,System.Object>
struct  SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2::<subsystem>k__BackingField
	RuntimeObject * ___U3CsubsystemU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CsubsystemU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9, ___U3CsubsystemU3Ek__BackingField_4)); }
	inline RuntimeObject * get_U3CsubsystemU3Ek__BackingField_4() const { return ___U3CsubsystemU3Ek__BackingField_4; }
	inline RuntimeObject ** get_address_of_U3CsubsystemU3Ek__BackingField_4() { return &___U3CsubsystemU3Ek__BackingField_4; }
	inline void set_U3CsubsystemU3Ek__BackingField_4(RuntimeObject * value)
	{
		___U3CsubsystemU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemU3Ek__BackingField_4), (void*)value);
	}
};

struct SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9_StaticFields
{
public:
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2::s_SubsystemDescriptors
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___s_SubsystemDescriptors_5;

public:
	inline static int32_t get_offset_of_s_SubsystemDescriptors_5() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9_StaticFields, ___s_SubsystemDescriptors_5)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_s_SubsystemDescriptors_5() const { return ___s_SubsystemDescriptors_5; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_s_SubsystemDescriptors_5() { return &___s_SubsystemDescriptors_5; }
	inline void set_s_SubsystemDescriptors_5(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___s_SubsystemDescriptors_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemDescriptors_5), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>
struct  ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11  : public SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9
{
public:
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`4::<sessionOrigin>k__BackingField
	ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * ___U3CsessionOriginU3Ek__BackingField_6;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`4::m_Trackables
	Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 * ___m_Trackables_7;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`4::m_PendingAdds
	Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 * ___m_PendingAdds_8;

public:
	inline static int32_t get_offset_of_U3CsessionOriginU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11, ___U3CsessionOriginU3Ek__BackingField_6)); }
	inline ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * get_U3CsessionOriginU3Ek__BackingField_6() const { return ___U3CsessionOriginU3Ek__BackingField_6; }
	inline ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF ** get_address_of_U3CsessionOriginU3Ek__BackingField_6() { return &___U3CsessionOriginU3Ek__BackingField_6; }
	inline void set_U3CsessionOriginU3Ek__BackingField_6(ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * value)
	{
		___U3CsessionOriginU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsessionOriginU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Trackables_7() { return static_cast<int32_t>(offsetof(ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11, ___m_Trackables_7)); }
	inline Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 * get_m_Trackables_7() const { return ___m_Trackables_7; }
	inline Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 ** get_address_of_m_Trackables_7() { return &___m_Trackables_7; }
	inline void set_m_Trackables_7(Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 * value)
	{
		___m_Trackables_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Trackables_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_PendingAdds_8() { return static_cast<int32_t>(offsetof(ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11, ___m_PendingAdds_8)); }
	inline Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 * get_m_PendingAdds_8() const { return ___m_PendingAdds_8; }
	inline Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 ** get_address_of_m_PendingAdds_8() { return &___m_PendingAdds_8; }
	inline void set_m_PendingAdds_8(Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 * value)
	{
		___m_PendingAdds_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PendingAdds_8), (void*)value);
	}
};

struct ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11_StaticFields
{
public:
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`4::s_Added
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___s_Added_9;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`4::s_Updated
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___s_Updated_10;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`4::s_Removed
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___s_Removed_11;

public:
	inline static int32_t get_offset_of_s_Added_9() { return static_cast<int32_t>(offsetof(ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11_StaticFields, ___s_Added_9)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_s_Added_9() const { return ___s_Added_9; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_s_Added_9() { return &___s_Added_9; }
	inline void set_s_Added_9(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___s_Added_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Added_9), (void*)value);
	}

	inline static int32_t get_offset_of_s_Updated_10() { return static_cast<int32_t>(offsetof(ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11_StaticFields, ___s_Updated_10)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_s_Updated_10() const { return ___s_Updated_10; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_s_Updated_10() { return &___s_Updated_10; }
	inline void set_s_Updated_10(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___s_Updated_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Updated_10), (void*)value);
	}

	inline static int32_t get_offset_of_s_Removed_11() { return static_cast<int32_t>(offsetof(ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11_StaticFields, ___s_Removed_11)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_s_Removed_11() const { return ___s_Removed_11; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_s_Removed_11() { return &___s_Removed_11; }
	inline void set_s_Removed_11(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___s_Removed_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Removed_11), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>
struct  ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E  : public SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9
{
public:
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`4::<sessionOrigin>k__BackingField
	ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * ___U3CsessionOriginU3Ek__BackingField_6;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`4::m_Trackables
	Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 * ___m_Trackables_7;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`4::m_PendingAdds
	Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 * ___m_PendingAdds_8;

public:
	inline static int32_t get_offset_of_U3CsessionOriginU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E, ___U3CsessionOriginU3Ek__BackingField_6)); }
	inline ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * get_U3CsessionOriginU3Ek__BackingField_6() const { return ___U3CsessionOriginU3Ek__BackingField_6; }
	inline ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF ** get_address_of_U3CsessionOriginU3Ek__BackingField_6() { return &___U3CsessionOriginU3Ek__BackingField_6; }
	inline void set_U3CsessionOriginU3Ek__BackingField_6(ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * value)
	{
		___U3CsessionOriginU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsessionOriginU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Trackables_7() { return static_cast<int32_t>(offsetof(ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E, ___m_Trackables_7)); }
	inline Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 * get_m_Trackables_7() const { return ___m_Trackables_7; }
	inline Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 ** get_address_of_m_Trackables_7() { return &___m_Trackables_7; }
	inline void set_m_Trackables_7(Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 * value)
	{
		___m_Trackables_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Trackables_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_PendingAdds_8() { return static_cast<int32_t>(offsetof(ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E, ___m_PendingAdds_8)); }
	inline Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 * get_m_PendingAdds_8() const { return ___m_PendingAdds_8; }
	inline Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 ** get_address_of_m_PendingAdds_8() { return &___m_PendingAdds_8; }
	inline void set_m_PendingAdds_8(Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 * value)
	{
		___m_PendingAdds_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PendingAdds_8), (void*)value);
	}
};

struct ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E_StaticFields
{
public:
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`4::s_Added
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___s_Added_9;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`4::s_Updated
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___s_Updated_10;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`4::s_Removed
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___s_Removed_11;

public:
	inline static int32_t get_offset_of_s_Added_9() { return static_cast<int32_t>(offsetof(ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E_StaticFields, ___s_Added_9)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_s_Added_9() const { return ___s_Added_9; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_s_Added_9() { return &___s_Added_9; }
	inline void set_s_Added_9(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___s_Added_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Added_9), (void*)value);
	}

	inline static int32_t get_offset_of_s_Updated_10() { return static_cast<int32_t>(offsetof(ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E_StaticFields, ___s_Updated_10)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_s_Updated_10() const { return ___s_Updated_10; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_s_Updated_10() { return &___s_Updated_10; }
	inline void set_s_Updated_10(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___s_Updated_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Updated_10), (void*)value);
	}

	inline static int32_t get_offset_of_s_Removed_11() { return static_cast<int32_t>(offsetof(ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E_StaticFields, ___s_Removed_11)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_s_Removed_11() const { return ___s_Removed_11; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_s_Removed_11() { return &___s_Removed_11; }
	inline void set_s_Removed_11(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___s_Removed_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Removed_11), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>
struct  ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13  : public SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9
{
public:
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`4::<sessionOrigin>k__BackingField
	ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * ___U3CsessionOriginU3Ek__BackingField_6;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`4::m_Trackables
	Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 * ___m_Trackables_7;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`4::m_PendingAdds
	Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 * ___m_PendingAdds_8;

public:
	inline static int32_t get_offset_of_U3CsessionOriginU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13, ___U3CsessionOriginU3Ek__BackingField_6)); }
	inline ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * get_U3CsessionOriginU3Ek__BackingField_6() const { return ___U3CsessionOriginU3Ek__BackingField_6; }
	inline ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF ** get_address_of_U3CsessionOriginU3Ek__BackingField_6() { return &___U3CsessionOriginU3Ek__BackingField_6; }
	inline void set_U3CsessionOriginU3Ek__BackingField_6(ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * value)
	{
		___U3CsessionOriginU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsessionOriginU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Trackables_7() { return static_cast<int32_t>(offsetof(ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13, ___m_Trackables_7)); }
	inline Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 * get_m_Trackables_7() const { return ___m_Trackables_7; }
	inline Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 ** get_address_of_m_Trackables_7() { return &___m_Trackables_7; }
	inline void set_m_Trackables_7(Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 * value)
	{
		___m_Trackables_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Trackables_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_PendingAdds_8() { return static_cast<int32_t>(offsetof(ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13, ___m_PendingAdds_8)); }
	inline Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 * get_m_PendingAdds_8() const { return ___m_PendingAdds_8; }
	inline Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 ** get_address_of_m_PendingAdds_8() { return &___m_PendingAdds_8; }
	inline void set_m_PendingAdds_8(Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 * value)
	{
		___m_PendingAdds_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PendingAdds_8), (void*)value);
	}
};

struct ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13_StaticFields
{
public:
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`4::s_Added
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___s_Added_9;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`4::s_Updated
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___s_Updated_10;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`4::s_Removed
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___s_Removed_11;

public:
	inline static int32_t get_offset_of_s_Added_9() { return static_cast<int32_t>(offsetof(ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13_StaticFields, ___s_Added_9)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_s_Added_9() const { return ___s_Added_9; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_s_Added_9() { return &___s_Added_9; }
	inline void set_s_Added_9(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___s_Added_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Added_9), (void*)value);
	}

	inline static int32_t get_offset_of_s_Updated_10() { return static_cast<int32_t>(offsetof(ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13_StaticFields, ___s_Updated_10)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_s_Updated_10() const { return ___s_Updated_10; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_s_Updated_10() { return &___s_Updated_10; }
	inline void set_s_Updated_10(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___s_Updated_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Updated_10), (void*)value);
	}

	inline static int32_t get_offset_of_s_Removed_11() { return static_cast<int32_t>(offsetof(ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13_StaticFields, ___s_Removed_11)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_s_Removed_11() const { return ___s_Removed_11; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_s_Removed_11() { return &___s_Removed_11; }
	inline void set_s_Removed_11(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___s_Removed_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Removed_11), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::.ctor(System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableCollection_1__ctor_mA99D3D41CAA02EF94BD2B96D6DC1B66450E226FF_gshared (TrackableCollection_1_t4F672148E28A41F14EAE569661A96270A528E608 * __this, Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 * ___trackables0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m15E3130603CE5400743CCCDEE7600FB9EEFAE5C0_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<!0> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::get_added()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  TrackableChanges_1_get_added_m63AFCF25226B28A1F645793B0148358240C9309E_gshared_inline (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1/Enumerator<!0> Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE1C3D515CC85EE05C8130CBC6C35308AE32EC631  NativeArray_1_GetEnumerator_m134216B041C923A2FFC455F2EB4736502264810B_gshared (NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 * __this, const RuntimeMethod* method);
// !0 Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.ARSubsystems.BoundedPlane>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  Enumerator_get_Current_m234FF4100EBB54A511CBA98EB0CF385CDEF01E7F_gshared (Enumerator_tE1C3D515CC85EE05C8130CBC6C35308AE32EC631 * __this, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.ARSubsystems.BoundedPlane>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m51A0BF01366C74EF8F4BE33C3FD9FDC66142ED37_gshared (Enumerator_tE1C3D515CC85EE05C8130CBC6C35308AE32EC631 * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<!0> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::get_updated()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  TrackableChanges_1_get_updated_m1D7AFC816EACE233551588E18E321BDA0F3919A8_gshared_inline (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::get_removed()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_mFC97F3FE78DFC548F04543CF1246DC1EC61B8214_gshared_inline (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1/Enumerator<!0> Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tDB12EE5618B415F0FB5AEEE49E6F2F41DFB2FD0A  NativeArray_1_GetEnumerator_m3B6CA1981A8CE62A1C67FCEEBE1887CD32906DA2_gshared (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * __this, const RuntimeMethod* method);
// !0 Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.ARSubsystems.TrackableId>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  Enumerator_get_Current_m913D10AD892E19937C638773D208459E9862248D_gshared (Enumerator_tDB12EE5618B415F0FB5AEEE49E6F2F41DFB2FD0A * __this, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.ARSubsystems.TrackableId>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m3C4C0B0B1AE71E65EF8255E6FC671DDBC829B6AA_gshared (Enumerator_tDB12EE5618B415F0FB5AEEE49E6F2F41DFB2FD0A * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m765EEDB3D86CE4EADC667B84C18E793D14144E1D_gshared (RuntimeObject * ___original0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___parent1, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<!0> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::get_added()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  TrackableChanges_1_get_added_mBB3A80E298216A6D8826422F62A11A1A4CB7CBD9_gshared_inline (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1/Enumerator<!0> Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t1B7E0D23EF4C33682EFE99D8F58153FDA8CB6ACD  NativeArray_1_GetEnumerator_m2C26DDBD2232F1DC6F216C47B66A5CCEC71C8292_gshared (NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 * __this, const RuntimeMethod* method);
// !0 Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.ARSubsystems.XRPointCloud>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  Enumerator_get_Current_mAAA11BD869C8818266133A03BEC94087AB76BB57_gshared (Enumerator_t1B7E0D23EF4C33682EFE99D8F58153FDA8CB6ACD * __this, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.ARSubsystems.XRPointCloud>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mD818C7168685197B0033FF034038DE1441498637_gshared (Enumerator_t1B7E0D23EF4C33682EFE99D8F58153FDA8CB6ACD * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<!0> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::get_updated()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  TrackableChanges_1_get_updated_m80DB51775906B404AEE4C7454E7A517ECFD6A003_gshared_inline (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::get_removed()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_mC49E91CAF67469CDD76DBCF18D1423DC3971AF99_gshared_inline (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<!0> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::get_added()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  TrackableChanges_1_get_added_mC31FEFAAC8F70ABBBC324DC618B0DFAB08AAE934_gshared_inline (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1/Enumerator<!0> Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t533CE786298995A804A1B61701D6400CF4483B1E  NativeArray_1_GetEnumerator_m0AE193D90C66BD2CB22C49D77323F1BD7775FBF9_gshared (NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 * __this, const RuntimeMethod* method);
// !0 Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.ARSubsystems.XRReferencePoint>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  Enumerator_get_Current_m1E16327F75D3A7E6496D252BD730CE3B55858FE7_gshared (Enumerator_t533CE786298995A804A1B61701D6400CF4483B1E * __this, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.ARSubsystems.XRReferencePoint>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m345699420F154E8E5508CE0A44444F14EFD566B2_gshared (Enumerator_t533CE786298995A804A1B61701D6400CF4483B1E * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<!0> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::get_updated()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  TrackableChanges_1_get_updated_m54C710EFD531DFB25ABA289B60FAA4181D479DDF_gshared_inline (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::get_removed()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_m9781A441FA95E17CBDB3C4687247859A562AF077_gshared_inline (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator<System.Object>::.ctor(System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m1436C7540CC7C5E630A94069A2F8A386DA5B572E_gshared (Enumerator_t3CA35B0FF0588CA447157731D78AC026FF3FA6ED * __this, Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 * ___trackables0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m4A5F7800BC01B3A27EEFCA56FAB672DEFB1EC0BF_gshared (Enumerator_t05190B8C9CB39286397757C04499EED7BB9E206E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mF64DBEA38614B8A6E085DFC09DD2745BE2ACB9BE_gshared (Enumerator_t3CA35B0FF0588CA447157731D78AC026FF3FA6ED * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR KeyValuePair_2_tE370629D71E4468BE162EB67B39EF5299AAAFBB3  Enumerator_get_Current_mDB91F5D20CC6A0F868AEB29B4864813567BAE7DF_gshared_inline (Enumerator_t05190B8C9CB39286397757C04499EED7BB9E206E * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>::get_Value()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m3A9E6AF4065028FDA3445474F46893E9387CBC29_gshared_inline (KeyValuePair_2_tE370629D71E4468BE162EB67B39EF5299AAAFBB3 * __this, const RuntimeMethod* method);
// TTrackable UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator<System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m6D82C8CA15561A8D32BA77CB304C80AF57C4C77E_gshared (Enumerator_t3CA35B0FF0588CA447157731D78AC026FF3FA6ED * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mDD09D00434936641131DA87032FE91597056CE77_gshared (Enumerator_t05190B8C9CB39286397757C04499EED7BB9E206E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mF07BD32148859A94677FFD43184E38A82F7916C1_gshared (Enumerator_t3CA35B0FF0588CA447157731D78AC026FF3FA6ED * __this, const RuntimeMethod* method);
// UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator<TTrackable> UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t3CA35B0FF0588CA447157731D78AC026FF3FA6ED  TrackableCollection_1_GetEnumerator_mBAA3D036F160A053757196D57318EC6B3F368D02_gshared (TrackableCollection_1_t4F672148E28A41F14EAE569661A96270A528E608 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::get_count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrackableCollection_1_get_count_mDAAAFD7E750C4885E2EE0322FC84C7EC7826C82C_gshared (TrackableCollection_1_t4F672148E28A41F14EAE569661A96270A528E608 * __this, const RuntimeMethod* method);
// TTrackable UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::get_Item(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TrackableCollection_1_get_Item_m2364AB8C6AC2D938F7B1BF95B6CF2EB821E02667_gshared (TrackableCollection_1_t4F672148E28A41F14EAE569661A96270A528E608 * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::TryGetTrackable(UnityEngine.XR.ARSubsystems.TrackableId,TTrackable&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableCollection_1_TryGetTrackable_m32817DD4F4B8853824F9C48709E001E97D0D34E1_gshared (TrackableCollection_1_t4F672148E28A41F14EAE569661A96270A528E608 * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId0, RuntimeObject ** ___trackable1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitFaceSubsystem/Provider/Triangle`1<System.Int16>::.ctor(T,T,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Triangle_1__ctor_m011AFB3ABB2AC3FEC81F8522192D5FF737DFE81B_gshared (Triangle_1_tCD59927E3208F060470B94D888FF2CF608DC4250 * __this, int16_t ___a0, int16_t ___b1, int16_t ___c2, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitFaceSubsystem/Provider/Triangle`1<System.Int32>::.ctor(T,T,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Triangle_1__ctor_mB4BDC3BFB2B7CD411ABA356B7D5FD1D9E26661B6_gshared (Triangle_1_t86D2DD77A26E9EE28D2CD4D01ED1FEF8F6FE5E82 * __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::get_isCreated()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_mA423E6EE5F48904DF767922DF13E2E0CF69535C6_gshared_inline (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::set_isCreated(System.Boolean)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m13ACF4058532E679A8DE069092C203B86CBDCAE0_gshared_inline (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m49FCF39766C38037835E85C0A677B26599D0BE55_gshared (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<!!0> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.XR.ARSubsystems.TrackableId>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_m8D7EEF45CE20EB27369597A33879F42E459F2D59_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>::CopyFrom(Unity.Collections.NativeArray`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_CopyFrom_mE2C04369E83ED4726DE1121E7E05342B6A993A97_gshared (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * __this, NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  ___array0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_mD1C95CFBA5AA7D0B4B0E4048D8F7E52246202202_gshared (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m4DFF1BE1612C27B903F9B66C2B03D09D6E711762_gshared (NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mB8124101177299FC76251C4E7F6C98BB0E5503C7_gshared (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_Dispose_m7AF1F8FE11710AD279FA5001D21F0624BF0BFBEB_gshared (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::get_added()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5  TrackableChanges_1_get_added_m6C3AA173D63B8181A147527E5D607363D4D7E3B9_gshared_inline (TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::get_updated()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5  TrackableChanges_1_get_updated_m4DD6B31059055267B3F98F003F7891F74052267D_gshared_inline (TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::get_removed()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_m7C323DBD29E884085A21A82E9D5ABC458EF49AED_gshared_inline (TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::get_isCreated()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_mD2D689F21DCB8E4F238E18F88981D142C946CC69_gshared_inline (TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::set_isCreated(System.Boolean)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m032D3E111CF433FC5556450F581911649722CA1B_gshared_inline (TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_m9D3306EC438EE09208F98E4F4049E615CC5E801E_gshared (TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRFace>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m343FC4D068AE0BA3141FDF70567F8BD2A752FF2D_gshared (NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_Dispose_m8CB8D80766E7529B391391E43158D99E39220FF6_gshared (TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::get_isCreated()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_m6BDB6E85EF722CE4F115552E754E059F9BBA87B8_gshared_inline (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::set_isCreated(System.Boolean)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_mE659C5BCD61914E799B4D6AAE6AD5AD7B9DDCE76_gshared_inline (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_mA69A666BCF692D5A8660A564A4450ABF6C80FD90_gshared (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mAF31B95CE89FF647372855A4ECFB9FCDDE39C38B_gshared (NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_Dispose_mE3DC3C0230641A828B6A91F3CB94441797520834_gshared (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::get_isCreated()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_m81592B6012FD82C68A023EC52FFAB3B4A35C6A3D_gshared_inline (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::set_isCreated(System.Boolean)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m3B57EAEC482D7B5D700E044B8720F89F25B13DC5_gshared_inline (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_m47C55466595329D4629E9A78A403D34C94AC30FC_gshared (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m79A1BBDC8A7E6F17C8B48E7CB3ED027A3180039E_gshared (NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_Dispose_m1C8DF8C1879FD6A22AD7474E15FB2590BB4F9631_gshared (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, const RuntimeMethod* method);

// System.Void System.NotImplementedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4 (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mD023A89A5C1F740F43F0A9CD6C49DC21230B3CEE (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.UI.CoroutineTween.ColorTween::ValidTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColorTween_ValidTarget_mA5469658CB631C87CF97FC5AE2B9089A06678696 (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.UI.CoroutineTween.ColorTween::get_ignoreTimeScale()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool ColorTween_get_ignoreTimeScale_mF935C53CA27D67D47AE0021A0DB8D92C392EF56B_inline (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E (const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledDeltaTime_mA0AE7A144C88AE8AABB42DF17B0F3F0714BA06B2 (const RuntimeMethod* method);
// System.Single UnityEngine.UI.CoroutineTween.ColorTween::get_duration()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float ColorTween_get_duration_m7E952A00A8A606D7886422812EFB24A6D5BFB508_inline (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m1E5F736941A7E6DC4DBCA88A1E38FE9FBFE0C42B (float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.CoroutineTween.ColorTween::TweenValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorTween_TweenValue_m4EF3CDDDDC3986BA6D06D4DB785310B131958749 (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * __this, float ___floatPercentage0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33 (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.UI.CoroutineTween.FloatTween::ValidTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FloatTween_ValidTarget_m7DFE9AC7C8C0EBEF441D80472635CF4F38632E5E (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.UI.CoroutineTween.FloatTween::get_ignoreTimeScale()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool FloatTween_get_ignoreTimeScale_m8281CB2B12F1697A512D2E2515F5DA058B429FD0_inline (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * __this, const RuntimeMethod* method);
// System.Single UnityEngine.UI.CoroutineTween.FloatTween::get_duration()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float FloatTween_get_duration_m17CD4518038CD642D714B3633236133D309EF13B_inline (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.CoroutineTween.FloatTween::TweenValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatTween_TweenValue_m78FEB902E18BE0882BC487BC29B6EA3905E4F05C (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * __this, float ___floatPercentage0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_mDEE60F1B28281974BA9880EC448682F3DAABB1EF (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_m3CDD6C046CC660D4CD6583FCE97F88A9735FD5FA (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::.ctor(System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable>)
inline void TrackableCollection_1__ctor_mA99D3D41CAA02EF94BD2B96D6DC1B66450E226FF (TrackableCollection_1_t4F672148E28A41F14EAE569661A96270A528E608 * __this, Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 * ___trackables0, const RuntimeMethod* method)
{
	((  void (*) (TrackableCollection_1_t4F672148E28A41F14EAE569661A96270A528E608 *, Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *, const RuntimeMethod*))TrackableCollection_1__ctor_mA99D3D41CAA02EF94BD2B96D6DC1B66450E226FF_gshared)(__this, ___trackables0, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.XR.ARFoundation.ARSessionOrigin>()
inline ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * Component_GetComponent_TisARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF_m25BC8791B994BAE33BF9003FFC85124F480EFB17 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m15E3130603CE5400743CCCDEE7600FB9EEFAE5C0_gshared)(__this, method);
}
// Unity.Collections.NativeArray`1<!0> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::get_added()
inline NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  TrackableChanges_1_get_added_m63AFCF25226B28A1F645793B0148358240C9309E_inline (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  (*) (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE *, const RuntimeMethod*))TrackableChanges_1_get_added_m63AFCF25226B28A1F645793B0148358240C9309E_gshared_inline)(__this, method);
}
// Unity.Collections.NativeArray`1/Enumerator<!0> Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::GetEnumerator()
inline Enumerator_tE1C3D515CC85EE05C8130CBC6C35308AE32EC631  NativeArray_1_GetEnumerator_m134216B041C923A2FFC455F2EB4736502264810B (NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tE1C3D515CC85EE05C8130CBC6C35308AE32EC631  (*) (NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 *, const RuntimeMethod*))NativeArray_1_GetEnumerator_m134216B041C923A2FFC455F2EB4736502264810B_gshared)(__this, method);
}
// !0 Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.ARSubsystems.BoundedPlane>::get_Current()
inline BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  Enumerator_get_Current_m234FF4100EBB54A511CBA98EB0CF385CDEF01E7F (Enumerator_tE1C3D515CC85EE05C8130CBC6C35308AE32EC631 * __this, const RuntimeMethod* method)
{
	return ((  BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  (*) (Enumerator_tE1C3D515CC85EE05C8130CBC6C35308AE32EC631 *, const RuntimeMethod*))Enumerator_get_Current_m234FF4100EBB54A511CBA98EB0CF385CDEF01E7F_gshared)(__this, method);
}
// System.Boolean Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.ARSubsystems.BoundedPlane>::MoveNext()
inline bool Enumerator_MoveNext_m51A0BF01366C74EF8F4BE33C3FD9FDC66142ED37 (Enumerator_tE1C3D515CC85EE05C8130CBC6C35308AE32EC631 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tE1C3D515CC85EE05C8130CBC6C35308AE32EC631 *, const RuntimeMethod*))Enumerator_MoveNext_m51A0BF01366C74EF8F4BE33C3FD9FDC66142ED37_gshared)(__this, method);
}
// Unity.Collections.NativeArray`1<!0> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::get_updated()
inline NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  TrackableChanges_1_get_updated_m1D7AFC816EACE233551588E18E321BDA0F3919A8_inline (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  (*) (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE *, const RuntimeMethod*))TrackableChanges_1_get_updated_m1D7AFC816EACE233551588E18E321BDA0F3919A8_gshared_inline)(__this, method);
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::get_removed()
inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_mFC97F3FE78DFC548F04543CF1246DC1EC61B8214_inline (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  (*) (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE *, const RuntimeMethod*))TrackableChanges_1_get_removed_mFC97F3FE78DFC548F04543CF1246DC1EC61B8214_gshared_inline)(__this, method);
}
// Unity.Collections.NativeArray`1/Enumerator<!0> Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>::GetEnumerator()
inline Enumerator_tDB12EE5618B415F0FB5AEEE49E6F2F41DFB2FD0A  NativeArray_1_GetEnumerator_m3B6CA1981A8CE62A1C67FCEEBE1887CD32906DA2 (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tDB12EE5618B415F0FB5AEEE49E6F2F41DFB2FD0A  (*) (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *, const RuntimeMethod*))NativeArray_1_GetEnumerator_m3B6CA1981A8CE62A1C67FCEEBE1887CD32906DA2_gshared)(__this, method);
}
// !0 Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.ARSubsystems.TrackableId>::get_Current()
inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  Enumerator_get_Current_m913D10AD892E19937C638773D208459E9862248D (Enumerator_tDB12EE5618B415F0FB5AEEE49E6F2F41DFB2FD0A * __this, const RuntimeMethod* method)
{
	return ((  TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  (*) (Enumerator_tDB12EE5618B415F0FB5AEEE49E6F2F41DFB2FD0A *, const RuntimeMethod*))Enumerator_get_Current_m913D10AD892E19937C638773D208459E9862248D_gshared)(__this, method);
}
// System.Boolean Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.ARSubsystems.TrackableId>::MoveNext()
inline bool Enumerator_MoveNext_m3C4C0B0B1AE71E65EF8255E6FC671DDBC829B6AA (Enumerator_tDB12EE5618B415F0FB5AEEE49E6F2F41DFB2FD0A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tDB12EE5618B415F0FB5AEEE49E6F2F41DFB2FD0A *, const RuntimeMethod*))Enumerator_MoveNext_m3C4C0B0B1AE71E65EF8255E6FC671DDBC829B6AA_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
inline RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
inline bool Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34 (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.String UnityEngine.XR.ARSubsystems.TrackableId::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TrackableId_ToString_mBA49191865E57697F4279D2781B182590726A215 (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mA4DFA8F4471418C248E95B55070665EF344B4B2D (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARSessionOrigin::get_trackablesParent()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ARSessionOrigin_get_trackablesParent_m37049D7E75CF694834A140C2EACB15D2D1098505_inline (ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Transform)
inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m1CDF66D563B03D37B37264800222D4F3B307EDA0 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___original0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m765EEDB3D86CE4EADC667B84C18E793D14144E1D_gshared)(___original0, ___parent1, method);
}
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, String_t* ___value0, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::get_trackableId()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  BoundedPlane_get_trackableId_mD2A3DCDA61898E637ACAE0A0F4A832931378071A_inline (BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___obj0, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<!0> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::get_added()
inline NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  TrackableChanges_1_get_added_mBB3A80E298216A6D8826422F62A11A1A4CB7CBD9_inline (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  (*) (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *, const RuntimeMethod*))TrackableChanges_1_get_added_mBB3A80E298216A6D8826422F62A11A1A4CB7CBD9_gshared_inline)(__this, method);
}
// Unity.Collections.NativeArray`1/Enumerator<!0> Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::GetEnumerator()
inline Enumerator_t1B7E0D23EF4C33682EFE99D8F58153FDA8CB6ACD  NativeArray_1_GetEnumerator_m2C26DDBD2232F1DC6F216C47B66A5CCEC71C8292 (NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t1B7E0D23EF4C33682EFE99D8F58153FDA8CB6ACD  (*) (NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 *, const RuntimeMethod*))NativeArray_1_GetEnumerator_m2C26DDBD2232F1DC6F216C47B66A5CCEC71C8292_gshared)(__this, method);
}
// !0 Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.ARSubsystems.XRPointCloud>::get_Current()
inline XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  Enumerator_get_Current_mAAA11BD869C8818266133A03BEC94087AB76BB57 (Enumerator_t1B7E0D23EF4C33682EFE99D8F58153FDA8CB6ACD * __this, const RuntimeMethod* method)
{
	return ((  XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  (*) (Enumerator_t1B7E0D23EF4C33682EFE99D8F58153FDA8CB6ACD *, const RuntimeMethod*))Enumerator_get_Current_mAAA11BD869C8818266133A03BEC94087AB76BB57_gshared)(__this, method);
}
// System.Boolean Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.ARSubsystems.XRPointCloud>::MoveNext()
inline bool Enumerator_MoveNext_mD818C7168685197B0033FF034038DE1441498637 (Enumerator_t1B7E0D23EF4C33682EFE99D8F58153FDA8CB6ACD * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t1B7E0D23EF4C33682EFE99D8F58153FDA8CB6ACD *, const RuntimeMethod*))Enumerator_MoveNext_mD818C7168685197B0033FF034038DE1441498637_gshared)(__this, method);
}
// Unity.Collections.NativeArray`1<!0> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::get_updated()
inline NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  TrackableChanges_1_get_updated_m80DB51775906B404AEE4C7454E7A517ECFD6A003_inline (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  (*) (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *, const RuntimeMethod*))TrackableChanges_1_get_updated_m80DB51775906B404AEE4C7454E7A517ECFD6A003_gshared_inline)(__this, method);
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::get_removed()
inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_mC49E91CAF67469CDD76DBCF18D1423DC3971AF99_inline (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  (*) (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *, const RuntimeMethod*))TrackableChanges_1_get_removed_mC49E91CAF67469CDD76DBCF18D1423DC3971AF99_gshared_inline)(__this, method);
}
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRPointCloud::get_trackableId()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  XRPointCloud_get_trackableId_mA394197EAD026665FC02A1118CBBB46FF6873EF1_inline (XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<!0> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::get_added()
inline NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  TrackableChanges_1_get_added_mC31FEFAAC8F70ABBBC324DC618B0DFAB08AAE934_inline (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  (*) (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *, const RuntimeMethod*))TrackableChanges_1_get_added_mC31FEFAAC8F70ABBBC324DC618B0DFAB08AAE934_gshared_inline)(__this, method);
}
// Unity.Collections.NativeArray`1/Enumerator<!0> Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::GetEnumerator()
inline Enumerator_t533CE786298995A804A1B61701D6400CF4483B1E  NativeArray_1_GetEnumerator_m0AE193D90C66BD2CB22C49D77323F1BD7775FBF9 (NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t533CE786298995A804A1B61701D6400CF4483B1E  (*) (NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 *, const RuntimeMethod*))NativeArray_1_GetEnumerator_m0AE193D90C66BD2CB22C49D77323F1BD7775FBF9_gshared)(__this, method);
}
// !0 Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.ARSubsystems.XRReferencePoint>::get_Current()
inline XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  Enumerator_get_Current_m1E16327F75D3A7E6496D252BD730CE3B55858FE7 (Enumerator_t533CE786298995A804A1B61701D6400CF4483B1E * __this, const RuntimeMethod* method)
{
	return ((  XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  (*) (Enumerator_t533CE786298995A804A1B61701D6400CF4483B1E *, const RuntimeMethod*))Enumerator_get_Current_m1E16327F75D3A7E6496D252BD730CE3B55858FE7_gshared)(__this, method);
}
// System.Boolean Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.ARSubsystems.XRReferencePoint>::MoveNext()
inline bool Enumerator_MoveNext_m345699420F154E8E5508CE0A44444F14EFD566B2 (Enumerator_t533CE786298995A804A1B61701D6400CF4483B1E * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t533CE786298995A804A1B61701D6400CF4483B1E *, const RuntimeMethod*))Enumerator_MoveNext_m345699420F154E8E5508CE0A44444F14EFD566B2_gshared)(__this, method);
}
// Unity.Collections.NativeArray`1<!0> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::get_updated()
inline NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  TrackableChanges_1_get_updated_m54C710EFD531DFB25ABA289B60FAA4181D479DDF_inline (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  (*) (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *, const RuntimeMethod*))TrackableChanges_1_get_updated_m54C710EFD531DFB25ABA289B60FAA4181D479DDF_gshared_inline)(__this, method);
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::get_removed()
inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_m9781A441FA95E17CBDB3C4687247859A562AF077_inline (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  (*) (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *, const RuntimeMethod*))TrackableChanges_1_get_removed_m9781A441FA95E17CBDB3C4687247859A562AF077_gshared_inline)(__this, method);
}
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRReferencePoint::get_trackableId()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  XRReferencePoint_get_trackableId_m6D53542802F2444CE58861B8868274F9A8296D88_inline (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * __this, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.BoundedPlane::get_trackingState()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t BoundedPlane_get_trackingState_m9B6467E433564ABE4BED9328F7B23AB05905B008_inline (BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.Pose UnityEngine.XR.ARSubsystems.BoundedPlane::get_pose()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  BoundedPlane_get_pose_m30B084D1F307CB46894BE4FAD448788001A0F0DF_inline (BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRPointCloud::get_trackingState()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t XRPointCloud_get_trackingState_m0CE633649849B59E4AEA7875F62F0B34CA61FC96_inline (XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 * __this, const RuntimeMethod* method);
// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRPointCloud::get_pose()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  XRPointCloud_get_pose_m09C2DF1AD7F1220B547BD2EBCCA6E35F85A87EB0_inline (XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 * __this, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRReferencePoint::get_trackingState()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t XRReferencePoint_get_trackingState_mBA0DB4050B734039D22D0ECF69CD6E8896DF52B8_inline (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * __this, const RuntimeMethod* method);
// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRReferencePoint::get_pose()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  XRReferencePoint_get_pose_mA4320629B8C7AE23D97FCD8E2C5FB9C9FB6AED9C_inline (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ___handle0, const RuntimeMethod* method);
// System.String UnityEngine.SubsystemDescriptor::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SubsystemDescriptor_get_id_mD414791818F2583B9B07DBE6921387970B42471E (SubsystemDescriptor_t889FE96B75F157379A8337541A119F08DD9C75D4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarningFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarningFormat_m29C3DA389E1AA2C1C48C9100F1E83EAE72772FDB (String_t* ___format0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator<System.Object>::.ctor(System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable>)
inline void Enumerator__ctor_m1436C7540CC7C5E630A94069A2F8A386DA5B572E (Enumerator_t3CA35B0FF0588CA447157731D78AC026FF3FA6ED * __this, Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 * ___trackables0, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t3CA35B0FF0588CA447157731D78AC026FF3FA6ED *, Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *, const RuntimeMethod*))Enumerator__ctor_m1436C7540CC7C5E630A94069A2F8A386DA5B572E_gshared)(__this, ___trackables0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>::MoveNext()
inline bool Enumerator_MoveNext_m4A5F7800BC01B3A27EEFCA56FAB672DEFB1EC0BF (Enumerator_t05190B8C9CB39286397757C04499EED7BB9E206E * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t05190B8C9CB39286397757C04499EED7BB9E206E *, const RuntimeMethod*))Enumerator_MoveNext_m4A5F7800BC01B3A27EEFCA56FAB672DEFB1EC0BF_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator<System.Object>::MoveNext()
inline bool Enumerator_MoveNext_mF64DBEA38614B8A6E085DFC09DD2745BE2ACB9BE (Enumerator_t3CA35B0FF0588CA447157731D78AC026FF3FA6ED * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t3CA35B0FF0588CA447157731D78AC026FF3FA6ED *, const RuntimeMethod*))Enumerator_MoveNext_mF64DBEA38614B8A6E085DFC09DD2745BE2ACB9BE_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>::get_Current()
inline KeyValuePair_2_tE370629D71E4468BE162EB67B39EF5299AAAFBB3  Enumerator_get_Current_mDB91F5D20CC6A0F868AEB29B4864813567BAE7DF_inline (Enumerator_t05190B8C9CB39286397757C04499EED7BB9E206E * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tE370629D71E4468BE162EB67B39EF5299AAAFBB3  (*) (Enumerator_t05190B8C9CB39286397757C04499EED7BB9E206E *, const RuntimeMethod*))Enumerator_get_Current_mDB91F5D20CC6A0F868AEB29B4864813567BAE7DF_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>::get_Value()
inline RuntimeObject * KeyValuePair_2_get_Value_m3A9E6AF4065028FDA3445474F46893E9387CBC29_inline (KeyValuePair_2_tE370629D71E4468BE162EB67B39EF5299AAAFBB3 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (KeyValuePair_2_tE370629D71E4468BE162EB67B39EF5299AAAFBB3 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m3A9E6AF4065028FDA3445474F46893E9387CBC29_gshared_inline)(__this, method);
}
// TTrackable UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator<System.Object>::get_Current()
inline RuntimeObject * Enumerator_get_Current_m6D82C8CA15561A8D32BA77CB304C80AF57C4C77E (Enumerator_t3CA35B0FF0588CA447157731D78AC026FF3FA6ED * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Enumerator_t3CA35B0FF0588CA447157731D78AC026FF3FA6ED *, const RuntimeMethod*))Enumerator_get_Current_m6D82C8CA15561A8D32BA77CB304C80AF57C4C77E_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>::Dispose()
inline void Enumerator_Dispose_mDD09D00434936641131DA87032FE91597056CE77 (Enumerator_t05190B8C9CB39286397757C04499EED7BB9E206E * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t05190B8C9CB39286397757C04499EED7BB9E206E *, const RuntimeMethod*))Enumerator_Dispose_mDD09D00434936641131DA87032FE91597056CE77_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator<System.Object>::Dispose()
inline void Enumerator_Dispose_mF07BD32148859A94677FFD43184E38A82F7916C1 (Enumerator_t3CA35B0FF0588CA447157731D78AC026FF3FA6ED * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t3CA35B0FF0588CA447157731D78AC026FF3FA6ED *, const RuntimeMethod*))Enumerator_Dispose_mF07BD32148859A94677FFD43184E38A82F7916C1_gshared)(__this, method);
}
// UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator<TTrackable> UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::GetEnumerator()
inline Enumerator_t3CA35B0FF0588CA447157731D78AC026FF3FA6ED  TrackableCollection_1_GetEnumerator_mBAA3D036F160A053757196D57318EC6B3F368D02 (TrackableCollection_1_t4F672148E28A41F14EAE569661A96270A528E608 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t3CA35B0FF0588CA447157731D78AC026FF3FA6ED  (*) (TrackableCollection_1_t4F672148E28A41F14EAE569661A96270A528E608 *, const RuntimeMethod*))TrackableCollection_1_GetEnumerator_mBAA3D036F160A053757196D57318EC6B3F368D02_gshared)(__this, method);
}
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706 (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::get_count()
inline int32_t TrackableCollection_1_get_count_mDAAAFD7E750C4885E2EE0322FC84C7EC7826C82C (TrackableCollection_1_t4F672148E28A41F14EAE569661A96270A528E608 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TrackableCollection_1_t4F672148E28A41F14EAE569661A96270A528E608 *, const RuntimeMethod*))TrackableCollection_1_get_count_mDAAAFD7E750C4885E2EE0322FC84C7EC7826C82C_gshared)(__this, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyNotFoundException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyNotFoundException__ctor_m62266FD7195B82ED3C3005991CDDA4C0C655F48C (KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// TTrackable UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::get_Item(UnityEngine.XR.ARSubsystems.TrackableId)
inline RuntimeObject * TrackableCollection_1_get_Item_m2364AB8C6AC2D938F7B1BF95B6CF2EB821E02667 (TrackableCollection_1_t4F672148E28A41F14EAE569661A96270A528E608 * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId0, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (TrackableCollection_1_t4F672148E28A41F14EAE569661A96270A528E608 *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , const RuntimeMethod*))TrackableCollection_1_get_Item_m2364AB8C6AC2D938F7B1BF95B6CF2EB821E02667_gshared)(__this, ___trackableId0, method);
}
// System.Boolean UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::TryGetTrackable(UnityEngine.XR.ARSubsystems.TrackableId,TTrackable&)
inline bool TrackableCollection_1_TryGetTrackable_m32817DD4F4B8853824F9C48709E001E97D0D34E1 (TrackableCollection_1_t4F672148E28A41F14EAE569661A96270A528E608 * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId0, RuntimeObject ** ___trackable1, const RuntimeMethod* method)
{
	return ((  bool (*) (TrackableCollection_1_t4F672148E28A41F14EAE569661A96270A528E608 *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , RuntimeObject **, const RuntimeMethod*))TrackableCollection_1_TryGetTrackable_m32817DD4F4B8853824F9C48709E001E97D0D34E1_gshared)(__this, ___trackableId0, ___trackable1, method);
}
// System.Void UnityEngine.XR.ARKit.ARKitFaceSubsystem/Provider/Triangle`1<System.Int16>::.ctor(T,T,T)
inline void Triangle_1__ctor_m011AFB3ABB2AC3FEC81F8522192D5FF737DFE81B (Triangle_1_tCD59927E3208F060470B94D888FF2CF608DC4250 * __this, int16_t ___a0, int16_t ___b1, int16_t ___c2, const RuntimeMethod* method)
{
	((  void (*) (Triangle_1_tCD59927E3208F060470B94D888FF2CF608DC4250 *, int16_t, int16_t, int16_t, const RuntimeMethod*))Triangle_1__ctor_m011AFB3ABB2AC3FEC81F8522192D5FF737DFE81B_gshared)(__this, ___a0, ___b1, ___c2, method);
}
// System.Void UnityEngine.XR.ARKit.ARKitFaceSubsystem/Provider/Triangle`1<System.Int32>::.ctor(T,T,T)
inline void Triangle_1__ctor_mB4BDC3BFB2B7CD411ABA356B7D5FD1D9E26661B6 (Triangle_1_t86D2DD77A26E9EE28D2CD4D01ED1FEF8F6FE5E82 * __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, const RuntimeMethod* method)
{
	((  void (*) (Triangle_1_t86D2DD77A26E9EE28D2CD4D01ED1FEF8F6FE5E82 *, int32_t, int32_t, int32_t, const RuntimeMethod*))Triangle_1__ctor_mB4BDC3BFB2B7CD411ABA356B7D5FD1D9E26661B6_gshared)(__this, ___a0, ___b1, ___c2, method);
}
// System.Void UnityEngine.CustomYieldInstruction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomYieldInstruction__ctor_m06E2B5BC73763FE2E734FAA600D567701EA21EC5 (CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::get_isCreated()
inline bool TrackableChanges_1_get_isCreated_mA423E6EE5F48904DF767922DF13E2E0CF69535C6_inline (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE *, const RuntimeMethod*))TrackableChanges_1_get_isCreated_mA423E6EE5F48904DF767922DF13E2E0CF69535C6_gshared_inline)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::set_isCreated(System.Boolean)
inline void TrackableChanges_1_set_isCreated_m13ACF4058532E679A8DE069092C203B86CBDCAE0_inline (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, bool ___value0, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE *, bool, const RuntimeMethod*))TrackableChanges_1_set_isCreated_m13ACF4058532E679A8DE069092C203B86CBDCAE0_gshared_inline)(__this, ___value0, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m49FCF39766C38037835E85C0A677B26599D0BE55 (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m49FCF39766C38037835E85C0A677B26599D0BE55_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// Unity.Collections.NativeArray`1<!!0> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.XR.ARSubsystems.TrackableId>(System.Void*,System.Int32,Unity.Collections.Allocator)
inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_m8D7EEF45CE20EB27369597A33879F42E459F2D59 (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_m8D7EEF45CE20EB27369597A33879F42E459F2D59_gshared)(___dataPointer0, ___length1, ___allocator2, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>::CopyFrom(Unity.Collections.NativeArray`1<!0>)
inline void NativeArray_1_CopyFrom_mE2C04369E83ED4726DE1121E7E05342B6A993A97 (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * __this, NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  ___array0, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *, NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 , const RuntimeMethod*))NativeArray_1_CopyFrom_mE2C04369E83ED4726DE1121E7E05342B6A993A97_gshared)(__this, ___array0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,T,System.Int32,Unity.Collections.Allocator)
inline void TrackableChanges_1__ctor_mD1C95CFBA5AA7D0B4B0E4048D8F7E52246202202 (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE *, void*, int32_t, void*, int32_t, void*, int32_t, BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 , int32_t, int32_t, const RuntimeMethod*))TrackableChanges_1__ctor_mD1C95CFBA5AA7D0B4B0E4048D8F7E52246202202_gshared)(__this, ___addedPtr0, ___addedCount1, ___updatedPtr2, ___updatedCount3, ___removedPtr4, ___removedCount5, ___defaultT6, ___stride7, ___allocator8, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::Dispose()
inline void NativeArray_1_Dispose_m4DFF1BE1612C27B903F9B66C2B03D09D6E711762 (NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 *, const RuntimeMethod*))NativeArray_1_Dispose_m4DFF1BE1612C27B903F9B66C2B03D09D6E711762_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>::Dispose()
inline void NativeArray_1_Dispose_mB8124101177299FC76251C4E7F6C98BB0E5503C7 (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *, const RuntimeMethod*))NativeArray_1_Dispose_mB8124101177299FC76251C4E7F6C98BB0E5503C7_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::Dispose()
inline void TrackableChanges_1_Dispose_m7AF1F8FE11710AD279FA5001D21F0624BF0BFBEB (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE *, const RuntimeMethod*))TrackableChanges_1_Dispose_m7AF1F8FE11710AD279FA5001D21F0624BF0BFBEB_gshared)(__this, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::get_added()
inline NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5  TrackableChanges_1_get_added_m6C3AA173D63B8181A147527E5D607363D4D7E3B9_inline (TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5  (*) (TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 *, const RuntimeMethod*))TrackableChanges_1_get_added_m6C3AA173D63B8181A147527E5D607363D4D7E3B9_gshared_inline)(__this, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::get_updated()
inline NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5  TrackableChanges_1_get_updated_m4DD6B31059055267B3F98F003F7891F74052267D_inline (TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5  (*) (TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 *, const RuntimeMethod*))TrackableChanges_1_get_updated_m4DD6B31059055267B3F98F003F7891F74052267D_gshared_inline)(__this, method);
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::get_removed()
inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_m7C323DBD29E884085A21A82E9D5ABC458EF49AED_inline (TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  (*) (TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 *, const RuntimeMethod*))TrackableChanges_1_get_removed_m7C323DBD29E884085A21A82E9D5ABC458EF49AED_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::get_isCreated()
inline bool TrackableChanges_1_get_isCreated_mD2D689F21DCB8E4F238E18F88981D142C946CC69_inline (TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 *, const RuntimeMethod*))TrackableChanges_1_get_isCreated_mD2D689F21DCB8E4F238E18F88981D142C946CC69_gshared_inline)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::set_isCreated(System.Boolean)
inline void TrackableChanges_1_set_isCreated_m032D3E111CF433FC5556450F581911649722CA1B_inline (TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 * __this, bool ___value0, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 *, bool, const RuntimeMethod*))TrackableChanges_1_set_isCreated_m032D3E111CF433FC5556450F581911649722CA1B_gshared_inline)(__this, ___value0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,T,System.Int32,Unity.Collections.Allocator)
inline void TrackableChanges_1__ctor_m9D3306EC438EE09208F98E4F4049E615CC5E801E (TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 *, void*, int32_t, void*, int32_t, void*, int32_t, XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7 , int32_t, int32_t, const RuntimeMethod*))TrackableChanges_1__ctor_m9D3306EC438EE09208F98E4F4049E615CC5E801E_gshared)(__this, ___addedPtr0, ___addedCount1, ___updatedPtr2, ___updatedCount3, ___removedPtr4, ___removedCount5, ___defaultT6, ___stride7, ___allocator8, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRFace>::Dispose()
inline void NativeArray_1_Dispose_m343FC4D068AE0BA3141FDF70567F8BD2A752FF2D (NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5 *, const RuntimeMethod*))NativeArray_1_Dispose_m343FC4D068AE0BA3141FDF70567F8BD2A752FF2D_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::Dispose()
inline void TrackableChanges_1_Dispose_m8CB8D80766E7529B391391E43158D99E39220FF6 (TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 * __this, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 *, const RuntimeMethod*))TrackableChanges_1_Dispose_m8CB8D80766E7529B391391E43158D99E39220FF6_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::get_isCreated()
inline bool TrackableChanges_1_get_isCreated_m6BDB6E85EF722CE4F115552E754E059F9BBA87B8_inline (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *, const RuntimeMethod*))TrackableChanges_1_get_isCreated_m6BDB6E85EF722CE4F115552E754E059F9BBA87B8_gshared_inline)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::set_isCreated(System.Boolean)
inline void TrackableChanges_1_set_isCreated_mE659C5BCD61914E799B4D6AAE6AD5AD7B9DDCE76_inline (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, bool ___value0, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *, bool, const RuntimeMethod*))TrackableChanges_1_set_isCreated_mE659C5BCD61914E799B4D6AAE6AD5AD7B9DDCE76_gshared_inline)(__this, ___value0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,T,System.Int32,Unity.Collections.Allocator)
inline void TrackableChanges_1__ctor_mA69A666BCF692D5A8660A564A4450ABF6C80FD90 (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *, void*, int32_t, void*, int32_t, void*, int32_t, XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 , int32_t, int32_t, const RuntimeMethod*))TrackableChanges_1__ctor_mA69A666BCF692D5A8660A564A4450ABF6C80FD90_gshared)(__this, ___addedPtr0, ___addedCount1, ___updatedPtr2, ___updatedCount3, ___removedPtr4, ___removedCount5, ___defaultT6, ___stride7, ___allocator8, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::Dispose()
inline void NativeArray_1_Dispose_mAF31B95CE89FF647372855A4ECFB9FCDDE39C38B (NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 *, const RuntimeMethod*))NativeArray_1_Dispose_mAF31B95CE89FF647372855A4ECFB9FCDDE39C38B_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::Dispose()
inline void TrackableChanges_1_Dispose_mE3DC3C0230641A828B6A91F3CB94441797520834 (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *, const RuntimeMethod*))TrackableChanges_1_Dispose_mE3DC3C0230641A828B6A91F3CB94441797520834_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::get_isCreated()
inline bool TrackableChanges_1_get_isCreated_m81592B6012FD82C68A023EC52FFAB3B4A35C6A3D_inline (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *, const RuntimeMethod*))TrackableChanges_1_get_isCreated_m81592B6012FD82C68A023EC52FFAB3B4A35C6A3D_gshared_inline)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::set_isCreated(System.Boolean)
inline void TrackableChanges_1_set_isCreated_m3B57EAEC482D7B5D700E044B8720F89F25B13DC5_inline (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, bool ___value0, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *, bool, const RuntimeMethod*))TrackableChanges_1_set_isCreated_m3B57EAEC482D7B5D700E044B8720F89F25B13DC5_gshared_inline)(__this, ___value0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,T,System.Int32,Unity.Collections.Allocator)
inline void TrackableChanges_1__ctor_m47C55466595329D4629E9A78A403D34C94AC30FC (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *, void*, int32_t, void*, int32_t, void*, int32_t, XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 , int32_t, int32_t, const RuntimeMethod*))TrackableChanges_1__ctor_m47C55466595329D4629E9A78A403D34C94AC30FC_gshared)(__this, ___addedPtr0, ___addedCount1, ___updatedPtr2, ___updatedCount3, ___removedPtr4, ___removedCount5, ___defaultT6, ___stride7, ___allocator8, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::Dispose()
inline void NativeArray_1_Dispose_m79A1BBDC8A7E6F17C8B48E7CB3ED027A3180039E (NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 *, const RuntimeMethod*))NativeArray_1_Dispose_m79A1BBDC8A7E6F17C8B48E7CB3ED027A3180039E_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::Dispose()
inline void TrackableChanges_1_Dispose_m1C8DF8C1879FD6A22AD7474E15FB2590BB4F9631 (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *, const RuntimeMethod*))TrackableChanges_1_Dispose_m1C8DF8C1879FD6A22AD7474E15FB2590BB4F9631_gshared)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedSet_1_Add_m0DBD135B8F3890966228AD853997DDA56594BBB5_gshared (IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		RuntimeObject * L_1 = ___item0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_2 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		RuntimeObject * L_3 = ___item0;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_4 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_4);
		int32_t L_5 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		NullCheck((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_2);
		((  void (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_2, (RuntimeObject *)L_3, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return;
	}
}
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::AddUnique(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IndexedSet_1_AddUnique_m90A07ACAD8A4E562C11674ED9598E5DE3AFE5F48_gshared (IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	{
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_0 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		RuntimeObject * L_1 = ___item0;
		NullCheck((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_0);
		bool L_2 = ((  bool (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_3 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		RuntimeObject * L_4 = ___item0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_3);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_3, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_5 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		RuntimeObject * L_6 = ___item0;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_7 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_7);
		int32_t L_8 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		NullCheck((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_5);
		((  void (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_5, (RuntimeObject *)L_6, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return (bool)1;
	}
}
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IndexedSet_1_Remove_m8C62E0808CB2D9452B58F1CB736C431F04CA1F4B_gshared (IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)(-1);
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_0 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		RuntimeObject * L_1 = ___item0;
		NullCheck((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_0);
		bool L_2 = ((  bool (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, RuntimeObject *, int32_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_0, (RuntimeObject *)L_1, (int32_t*)(int32_t*)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (L_2)
		{
			goto IL_0014;
		}
	}
	{
		return (bool)0;
	}

IL_0014:
	{
		int32_t L_3 = V_0;
		NullCheck((IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 *)__this);
		((  void (*) (IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 *)__this, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		return (bool)1;
	}
}
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IndexedSet_1_GetEnumerator_m862DD23AD8DA8A6F6E7BFAC10CF75F0639758E44_gshared (IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IndexedSet_1_GetEnumerator_m862DD23AD8DA8A6F6E7BFAC10CF75F0639758E44_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_0 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, IndexedSet_1_GetEnumerator_m862DD23AD8DA8A6F6E7BFAC10CF75F0639758E44_RuntimeMethod_var);
	}
}
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_mCF3FE522F4B06100050E73BCDE298D8F8D7A3EE8_gshared (IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 *)__this);
		RuntimeObject* L_0 = ((  RuntimeObject* (*) (IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		return L_0;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedSet_1_Clear_m689CFB50CED51E5F519BEEF51B8D8C6FFBF41FB9_gshared (IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 * __this, const RuntimeMethod* method)
{
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_1 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		NullCheck((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_1);
		((  void (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return;
	}
}
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IndexedSet_1_Contains_mCA290D982CEDEE20068188B38AC28A45CDDC9D13_gshared (IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	{
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_0 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		RuntimeObject * L_1 = ___item0;
		NullCheck((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_0);
		bool L_2 = ((  bool (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return L_2;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedSet_1_CopyTo_m4254FBBA5B5B56B791828D193E5F4CA665CF7852_gshared (IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method)
{
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = ___array0;
		int32_t L_2 = ___arrayIndex1;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		return;
	}
}
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IndexedSet_1_get_Count_mA8B3EBDB71AD001C6D39FA35D79D7516C1C267E4_gshared (IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 * __this, const RuntimeMethod* method)
{
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		int32_t L_1 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		return L_1;
	}
}
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IndexedSet_1_get_IsReadOnly_m01297860A8BC8B4B6C66DC72C406933ED9D9937D_gshared (IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IndexedSet_1_IndexOf_m6BB93EC59B8E7F835F15A3340E9884CAB29401AB_gshared (IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)(-1);
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_0 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		RuntimeObject * L_1 = ___item0;
		NullCheck((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_0);
		bool L_2 = ((  bool (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, RuntimeObject *, int32_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_0, (RuntimeObject *)L_1, (int32_t*)(int32_t*)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_3 = V_0;
		return L_3;
	}

IL_0014:
	{
		return (-1);
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedSet_1_Insert_m5C71AFDD8507ABF24809AE66F0461CDB8D0693F4_gshared (IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 * __this, int32_t ___index0, RuntimeObject * ___item1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IndexedSet_1_Insert_m5C71AFDD8507ABF24809AE66F0461CDB8D0693F4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mD023A89A5C1F740F43F0A9CD6C49DC21230B3CEE(L_0, (String_t*)_stringLiteralDFADDFA065E9D92CFE8B8F06444DD5652DFC1D58, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, IndexedSet_1_Insert_m5C71AFDD8507ABF24809AE66F0461CDB8D0693F4_RuntimeMethod_var);
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedSet_1_RemoveAt_mBFCEF1CBBC140206B5DFCAE8205161429441E0EA_gshared (IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject * V_2 = NULL;
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_1 = ___index0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		V_0 = (RuntimeObject *)L_2;
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_3 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		RuntimeObject * L_4 = V_0;
		NullCheck((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_3);
		((  bool (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_3, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		int32_t L_5 = ___index0;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_6 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_6);
		int32_t L_7 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)1))))))
		{
			goto IL_0037;
		}
	}
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_8 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_9 = ___index0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_8);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_8, (int32_t)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12));
		return;
	}

IL_0037:
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_10 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_10);
		int32_t L_11 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		V_1 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)1));
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_12 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_13 = V_1;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_12);
		RuntimeObject * L_14 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_12, (int32_t)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		V_2 = (RuntimeObject *)L_14;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_15 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_16 = ___index0;
		RuntimeObject * L_17 = V_2;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_15);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_15, (int32_t)L_16, (RuntimeObject *)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13));
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_18 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		RuntimeObject * L_19 = V_2;
		int32_t L_20 = ___index0;
		NullCheck((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_18);
		((  void (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_18, (RuntimeObject *)L_19, (int32_t)L_20, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_21 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_22 = V_1;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_21);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_21, (int32_t)L_22, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12));
		return;
	}
}
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * IndexedSet_1_get_Item_m982CBDB4CDA1A497EC25A60EC17AB8F7B2D51BC0_gshared (IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_1 = ___index0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return L_2;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedSet_1_set_Item_m507562D8C316C7A1C0E521284172D4DB5D8A46BA_gshared (IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_1 = ___index0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		V_0 = (RuntimeObject *)L_2;
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_3 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		RuntimeObject * L_4 = V_0;
		NullCheck((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_3);
		((  bool (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_3, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_5 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_6 = ___index0;
		RuntimeObject * L_7 = ___value1;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_5);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_5, (int32_t)L_6, (RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13));
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_8 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		RuntimeObject * L_9 = V_0;
		int32_t L_10 = ___index0;
		NullCheck((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_8);
		((  void (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_8, (RuntimeObject *)L_9, (int32_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedSet_1_Sort_m0365BC9CE6449DBD358C479FB244D07FE72F36E7_gshared (IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 * __this, Comparison_1_tD9DBDF7B2E4774B4D35E113A76D75828A24641F4 * ___sortLayoutFunction0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		Comparison_1_tD9DBDF7B2E4774B4D35E113A76D75828A24641F4 * L_1 = ___sortLayoutFunction0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, Comparison_1_tD9DBDF7B2E4774B4D35E113A76D75828A24641F4 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (Comparison_1_tD9DBDF7B2E4774B4D35E113A76D75828A24641F4 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		V_0 = (int32_t)0;
		goto IL_002e;
	}

IL_0010:
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_2 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_3 = V_0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_2);
		RuntimeObject * L_4 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_2, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		V_1 = (RuntimeObject *)L_4;
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_5 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		RuntimeObject * L_6 = V_1;
		int32_t L_7 = V_0;
		NullCheck((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_5);
		((  void (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_5, (RuntimeObject *)L_6, (int32_t)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
		int32_t L_8 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_002e:
	{
		int32_t L_9 = V_0;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_10 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_10);
		int32_t L_11 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0010;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedSet_1__ctor_mA9E3CAA05341D4863E3080C31170AB64AAED0573_gshared (IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 * __this, const RuntimeMethod* method)
{
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 16));
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17));
		__this->set_m_List_0(L_0);
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_1 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 18));
		((  void (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 19)->methodPointer)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 19));
		__this->set_m_Dictionary_1(L_1);
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2<UnityEngine.UI.CoroutineTween.ColorTween>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2__ctor_m6FC80299A2464A5F19E422273392ADBEE6805533_gshared (U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2<UnityEngine.UI.CoroutineTween.ColorTween>::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2_System_IDisposable_Dispose_m3AFD56D8AAA6B170D4C5FEF021CC672C2F885C9A_gshared (U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2<UnityEngine.UI.CoroutineTween.ColorTween>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartU3Ed__2_MoveNext_m60167073DFDFFC72E0494F1178A8927098A64D12_gshared (U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ed__2_MoveNext_m60167073DFDFFC72E0494F1178A8927098A64D12_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	float G_B8_0 = 0.0f;
	U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB * G_B8_1 = NULL;
	float G_B7_0 = 0.0f;
	U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB * G_B7_1 = NULL;
	float G_B9_0 = 0.0f;
	float G_B9_1 = 0.0f;
	U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB * G_B9_2 = NULL;
	{
		int32_t L_0 = (int32_t)__this->get_U3CU3E1__state_0();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_00a8;
		}
	}
	{
		return (bool)0;
	}

IL_0013:
	{
		__this->set_U3CU3E1__state_0((-1));
		ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * L_3 = (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)__this->get_address_of_tweenInfo_2();
		bool L_4 = ColorTween_ValidTarget_mA5469658CB631C87CF97FC5AE2B9089A06678696((ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_002f;
		}
	}
	{
		return (bool)0;
	}

IL_002f:
	{
		__this->set_U3CelapsedTimeU3E5__2_3((0.0f));
		goto IL_00af;
	}

IL_003c:
	{
		float L_5 = (float)__this->get_U3CelapsedTimeU3E5__2_3();
		ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * L_6 = (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)__this->get_address_of_tweenInfo_2();
		bool L_7 = ColorTween_get_ignoreTimeScale_mF935C53CA27D67D47AE0021A0DB8D92C392EF56B_inline((ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)L_6, /*hidden argument*/NULL);
		G_B7_0 = L_5;
		G_B7_1 = ((U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB *)(__this));
		if (L_7)
		{
			G_B8_0 = L_5;
			G_B8_1 = ((U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB *)(__this));
			goto IL_005d;
		}
	}
	{
		float L_8 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		G_B9_0 = L_8;
		G_B9_1 = G_B7_0;
		G_B9_2 = ((U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB *)(G_B7_1));
		goto IL_0062;
	}

IL_005d:
	{
		float L_9 = Time_get_unscaledDeltaTime_mA0AE7A144C88AE8AABB42DF17B0F3F0714BA06B2(/*hidden argument*/NULL);
		G_B9_0 = L_9;
		G_B9_1 = G_B8_0;
		G_B9_2 = ((U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB *)(G_B8_1));
	}

IL_0062:
	{
		NullCheck(G_B9_2);
		G_B9_2->set_U3CelapsedTimeU3E5__2_3(((float)il2cpp_codegen_add((float)G_B9_1, (float)G_B9_0)));
		float L_10 = (float)__this->get_U3CelapsedTimeU3E5__2_3();
		ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * L_11 = (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)__this->get_address_of_tweenInfo_2();
		float L_12 = ColorTween_get_duration_m7E952A00A8A606D7886422812EFB24A6D5BFB508_inline((ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_13 = Mathf_Clamp01_m1E5F736941A7E6DC4DBCA88A1E38FE9FBFE0C42B((float)((float)((float)L_10/(float)L_12)), /*hidden argument*/NULL);
		V_1 = (float)L_13;
		ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * L_14 = (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)__this->get_address_of_tweenInfo_2();
		float L_15 = V_1;
		ColorTween_TweenValue_m4EF3CDDDDC3986BA6D06D4DB785310B131958749((ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)L_14, (float)L_15, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00a8:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00af:
	{
		float L_16 = (float)__this->get_U3CelapsedTimeU3E5__2_3();
		ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * L_17 = (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)__this->get_address_of_tweenInfo_2();
		float L_18 = ColorTween_get_duration_m7E952A00A8A606D7886422812EFB24A6D5BFB508_inline((ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)L_17, /*hidden argument*/NULL);
		if ((((float)L_16) < ((float)L_18)))
		{
			goto IL_003c;
		}
	}
	{
		ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * L_19 = (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)__this->get_address_of_tweenInfo_2();
		ColorTween_TweenValue_m4EF3CDDDDC3986BA6D06D4DB785310B131958749((ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)L_19, (float)(1.0f), /*hidden argument*/NULL);
		return (bool)0;
	}
}
// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2<UnityEngine.UI.CoroutineTween.ColorTween>::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF79BB0AA7D52BC685ED74FE04086C3155BE46893_gshared (U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2<UnityEngine.UI.CoroutineTween.ColorTween>::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2_System_Collections_IEnumerator_Reset_m7EE0C78F076E4D95B3838BE82929AAA21433CA5D_gshared (U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ed__2_System_Collections_IEnumerator_Reset_m7EE0C78F076E4D95B3838BE82929AAA21433CA5D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CStartU3Ed__2_System_Collections_IEnumerator_Reset_m7EE0C78F076E4D95B3838BE82929AAA21433CA5D_RuntimeMethod_var);
	}
}
// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2<UnityEngine.UI.CoroutineTween.ColorTween>::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ed__2_System_Collections_IEnumerator_get_Current_mC5F1F242C0EE5549C75A5721204FD9207EB716A6_gshared (U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U3CU3E2__current_1();
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
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2<UnityEngine.UI.CoroutineTween.FloatTween>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2__ctor_m2AE86242B5268C78D780861B343B1227E2479CE2_gshared (U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2<UnityEngine.UI.CoroutineTween.FloatTween>::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2_System_IDisposable_Dispose_mBD909D28E90E3EB5172683C41EDB69A5CEC3B29A_gshared (U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2<UnityEngine.UI.CoroutineTween.FloatTween>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartU3Ed__2_MoveNext_m0EE17EEE1FD4E844C9CDA2AA8815CBECBB0DBA9F_gshared (U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ed__2_MoveNext_m0EE17EEE1FD4E844C9CDA2AA8815CBECBB0DBA9F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	float G_B8_0 = 0.0f;
	U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E * G_B8_1 = NULL;
	float G_B7_0 = 0.0f;
	U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E * G_B7_1 = NULL;
	float G_B9_0 = 0.0f;
	float G_B9_1 = 0.0f;
	U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E * G_B9_2 = NULL;
	{
		int32_t L_0 = (int32_t)__this->get_U3CU3E1__state_0();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_00a8;
		}
	}
	{
		return (bool)0;
	}

IL_0013:
	{
		__this->set_U3CU3E1__state_0((-1));
		FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * L_3 = (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)__this->get_address_of_tweenInfo_2();
		bool L_4 = FloatTween_ValidTarget_m7DFE9AC7C8C0EBEF441D80472635CF4F38632E5E((FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_002f;
		}
	}
	{
		return (bool)0;
	}

IL_002f:
	{
		__this->set_U3CelapsedTimeU3E5__2_3((0.0f));
		goto IL_00af;
	}

IL_003c:
	{
		float L_5 = (float)__this->get_U3CelapsedTimeU3E5__2_3();
		FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * L_6 = (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)__this->get_address_of_tweenInfo_2();
		bool L_7 = FloatTween_get_ignoreTimeScale_m8281CB2B12F1697A512D2E2515F5DA058B429FD0_inline((FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)L_6, /*hidden argument*/NULL);
		G_B7_0 = L_5;
		G_B7_1 = ((U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E *)(__this));
		if (L_7)
		{
			G_B8_0 = L_5;
			G_B8_1 = ((U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E *)(__this));
			goto IL_005d;
		}
	}
	{
		float L_8 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		G_B9_0 = L_8;
		G_B9_1 = G_B7_0;
		G_B9_2 = ((U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E *)(G_B7_1));
		goto IL_0062;
	}

IL_005d:
	{
		float L_9 = Time_get_unscaledDeltaTime_mA0AE7A144C88AE8AABB42DF17B0F3F0714BA06B2(/*hidden argument*/NULL);
		G_B9_0 = L_9;
		G_B9_1 = G_B8_0;
		G_B9_2 = ((U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E *)(G_B8_1));
	}

IL_0062:
	{
		NullCheck(G_B9_2);
		G_B9_2->set_U3CelapsedTimeU3E5__2_3(((float)il2cpp_codegen_add((float)G_B9_1, (float)G_B9_0)));
		float L_10 = (float)__this->get_U3CelapsedTimeU3E5__2_3();
		FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * L_11 = (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)__this->get_address_of_tweenInfo_2();
		float L_12 = FloatTween_get_duration_m17CD4518038CD642D714B3633236133D309EF13B_inline((FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_13 = Mathf_Clamp01_m1E5F736941A7E6DC4DBCA88A1E38FE9FBFE0C42B((float)((float)((float)L_10/(float)L_12)), /*hidden argument*/NULL);
		V_1 = (float)L_13;
		FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * L_14 = (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)__this->get_address_of_tweenInfo_2();
		float L_15 = V_1;
		FloatTween_TweenValue_m78FEB902E18BE0882BC487BC29B6EA3905E4F05C((FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)L_14, (float)L_15, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00a8:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00af:
	{
		float L_16 = (float)__this->get_U3CelapsedTimeU3E5__2_3();
		FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * L_17 = (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)__this->get_address_of_tweenInfo_2();
		float L_18 = FloatTween_get_duration_m17CD4518038CD642D714B3633236133D309EF13B_inline((FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)L_17, /*hidden argument*/NULL);
		if ((((float)L_16) < ((float)L_18)))
		{
			goto IL_003c;
		}
	}
	{
		FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * L_19 = (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)__this->get_address_of_tweenInfo_2();
		FloatTween_TweenValue_m78FEB902E18BE0882BC487BC29B6EA3905E4F05C((FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)L_19, (float)(1.0f), /*hidden argument*/NULL);
		return (bool)0;
	}
}
// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2<UnityEngine.UI.CoroutineTween.FloatTween>::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD32BEE6827A03105EAE2BB0DD9D3D46620BD131C_gshared (U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2<UnityEngine.UI.CoroutineTween.FloatTween>::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2_System_Collections_IEnumerator_Reset_mB7C54CC93F1970C36AF5D027FD9827EEEB31E323_gshared (U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ed__2_System_Collections_IEnumerator_Reset_mB7C54CC93F1970C36AF5D027FD9827EEEB31E323_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CStartU3Ed__2_System_Collections_IEnumerator_Reset_mB7C54CC93F1970C36AF5D027FD9827EEEB31E323_RuntimeMethod_var);
	}
}
// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2<UnityEngine.UI.CoroutineTween.FloatTween>::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ed__2_System_Collections_IEnumerator_get_Current_mD96F6DCD598679604A87A46CC51E64FD2B23019A_gshared (U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U3CU3E2__current_1();
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
// System.Collections.IEnumerator UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>::Start(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenRunner_1_Start_mC2568158E444C4708AB2AE4A41715412B27675D4_gshared (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228  ___tweenInfo0, const RuntimeMethod* method)
{
	{
		U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB * L_0 = (U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		((  void (*) (U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)(L_0, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB * L_1 = (U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB *)L_0;
		ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228  L_2 = ___tweenInfo0;
		NullCheck(L_1);
		L_1->set_tweenInfo_2(L_2);
		return L_1;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>::Init(UnityEngine.MonoBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1_Init_mB9D1917305679C4620D9F3D8DEE2215DFCAB3057_gshared (TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * __this, MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * ___coroutineContainer0, const RuntimeMethod* method)
{
	{
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_0 = ___coroutineContainer0;
		__this->set_m_CoroutineContainer_0(L_0);
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>::StartTween(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1_StartTween_mA10B864FF4FF1D68D8B117B94B06FF35F5373FA7_gshared (TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * __this, ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228  ___info0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TweenRunner_1_StartTween_mA10B864FF4FF1D68D8B117B94B06FF35F5373FA7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_0 = (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)__this->get_m_CoroutineContainer_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568((RuntimeObject *)_stringLiteralA413973124713A2B7B3570CE8D97C7151C8628A9, /*hidden argument*/NULL);
		return;
	}

IL_0019:
	{
		NullCheck((TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 *)__this);
		((  void (*) (TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_2 = (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)__this->get_m_CoroutineContainer_0();
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_2);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_2, /*hidden argument*/NULL);
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_3);
		bool L_4 = GameObject_get_activeInHierarchy_mDEE60F1B28281974BA9880EC448682F3DAABB1EF((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0044;
		}
	}
	{
		ColorTween_TweenValue_m4EF3CDDDDC3986BA6D06D4DB785310B131958749((ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)(&___info0), (float)(1.0f), /*hidden argument*/NULL);
		return;
	}

IL_0044:
	{
		ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228  L_5 = ___info0;
		RuntimeObject* L_6 = ((  RuntimeObject* (*) (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 )L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_m_Tween_1(L_6);
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_7 = (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)__this->get_m_CoroutineContainer_0();
		RuntimeObject* L_8 = (RuntimeObject*)__this->get_m_Tween_1();
		NullCheck((MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)L_7);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7((MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)L_7, (RuntimeObject*)L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>::StopTween()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1_StopTween_m144D05B742FE3B45CAF9E39F351DFE015B8D72A9_gshared (TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_m_Tween_1();
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_1 = (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)__this->get_m_CoroutineContainer_0();
		RuntimeObject* L_2 = (RuntimeObject*)__this->get_m_Tween_1();
		NullCheck((MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)L_1);
		MonoBehaviour_StopCoroutine_m3CDD6C046CC660D4CD6583FCE97F88A9735FD5FA((MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)L_1, (RuntimeObject*)L_2, /*hidden argument*/NULL);
		__this->set_m_Tween_1((RuntimeObject*)NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1__ctor_mDFB148DCD4CD644010BDFD27F1D0DABA9BB528F7_gshared (TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
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
// System.Collections.IEnumerator UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>::Start(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenRunner_1_Start_m138F7317CB8D005AE5859487FBD18C15E5171F76_gshared (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A  ___tweenInfo0, const RuntimeMethod* method)
{
	{
		U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E * L_0 = (U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		((  void (*) (U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)(L_0, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E * L_1 = (U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E *)L_0;
		FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A  L_2 = ___tweenInfo0;
		NullCheck(L_1);
		L_1->set_tweenInfo_2(L_2);
		return L_1;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>::Init(UnityEngine.MonoBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1_Init_m36554C1037EC37B2D67A1BDE9B4D2407FE2C7657_gshared (TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF * __this, MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * ___coroutineContainer0, const RuntimeMethod* method)
{
	{
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_0 = ___coroutineContainer0;
		__this->set_m_CoroutineContainer_0(L_0);
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>::StartTween(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1_StartTween_mCD6A38F2A78EADA8BFD4D710333E6263D32DAEFE_gshared (TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF * __this, FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A  ___info0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TweenRunner_1_StartTween_mCD6A38F2A78EADA8BFD4D710333E6263D32DAEFE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_0 = (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)__this->get_m_CoroutineContainer_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568((RuntimeObject *)_stringLiteralA413973124713A2B7B3570CE8D97C7151C8628A9, /*hidden argument*/NULL);
		return;
	}

IL_0019:
	{
		NullCheck((TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF *)__this);
		((  void (*) (TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_2 = (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)__this->get_m_CoroutineContainer_0();
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_2);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_2, /*hidden argument*/NULL);
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_3);
		bool L_4 = GameObject_get_activeInHierarchy_mDEE60F1B28281974BA9880EC448682F3DAABB1EF((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0044;
		}
	}
	{
		FloatTween_TweenValue_m78FEB902E18BE0882BC487BC29B6EA3905E4F05C((FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)(&___info0), (float)(1.0f), /*hidden argument*/NULL);
		return;
	}

IL_0044:
	{
		FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A  L_5 = ___info0;
		RuntimeObject* L_6 = ((  RuntimeObject* (*) (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A )L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_m_Tween_1(L_6);
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_7 = (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)__this->get_m_CoroutineContainer_0();
		RuntimeObject* L_8 = (RuntimeObject*)__this->get_m_Tween_1();
		NullCheck((MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)L_7);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7((MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)L_7, (RuntimeObject*)L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>::StopTween()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1_StopTween_m7EA08229E2A074D42B52A1F63C74871F48B3A748_gshared (TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_m_Tween_1();
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_1 = (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)__this->get_m_CoroutineContainer_0();
		RuntimeObject* L_2 = (RuntimeObject*)__this->get_m_Tween_1();
		NullCheck((MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)L_1);
		MonoBehaviour_StopCoroutine_m3CDD6C046CC660D4CD6583FCE97F88A9735FD5FA((MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)L_1, (RuntimeObject*)L_2, /*hidden argument*/NULL);
		__this->set_m_Tween_1((RuntimeObject*)NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1__ctor_mBCECADAAC67B34851BF7AE7F23AAA7BEDD17CDAE_gshared (TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF * __this, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.UI.ListPool`1<System.Int32>::Clear(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Clear_mDFC87A2C3A59C78CE3F2BFBF6394BAF88A791973_gshared (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___l0, const RuntimeMethod* method)
{
	{
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_0 = ___l0;
		NullCheck((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_0);
		((  void (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<System.Int32>::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ListPool_1_Get_mE24C8BF45625DFCEC780B128AF4F5CACCDAD4E84_gshared (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A * L_0 = ((ListPool_1_t3E619A8E79CAF23BEEF32265E5CEDAB29A8735AF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		NullCheck((ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A *)L_0);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_1 = ((  List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * (*) (ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return L_1;
	}
}
// System.Void UnityEngine.UI.ListPool`1<System.Int32>::Release(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Release_m21C2836B76CF178B2B4EADBAB1F8E2CEFE1D7A3B_gshared (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___toRelease0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A * L_0 = ((ListPool_1_t3E619A8E79CAF23BEEF32265E5CEDAB29A8735AF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_1 = ___toRelease0;
		NullCheck((ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A *)L_0);
		((  void (*) (ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A *, List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A *)L_0, (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<System.Int32>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1__cctor_mEDDF3833673FBF22292A8CE001267CE47A06D4E7_gshared (const RuntimeMethod* method)
{
	{
		UnityAction_1_t9F617E4F89335DB02DC3387128A9DFD903C3F584 * L_0 = (UnityAction_1_t9F617E4F89335DB02DC3387128A9DFD903C3F584 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((  void (*) (UnityAction_1_t9F617E4F89335DB02DC3387128A9DFD903C3F584 *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(L_0, (RuntimeObject *)NULL, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A * L_1 = (ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A *, UnityAction_1_t9F617E4F89335DB02DC3387128A9DFD903C3F584 *, UnityAction_1_t9F617E4F89335DB02DC3387128A9DFD903C3F584 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(L_1, (UnityAction_1_t9F617E4F89335DB02DC3387128A9DFD903C3F584 *)NULL, (UnityAction_1_t9F617E4F89335DB02DC3387128A9DFD903C3F584 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		((ListPool_1_t3E619A8E79CAF23BEEF32265E5CEDAB29A8735AF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_s_ListPool_0(L_1);
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
// System.Void UnityEngine.UI.ListPool`1<System.Object>::Clear(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Clear_m4B97511A75755BD2A11A6213F00B2E36ADF3F0B8_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___l0, const RuntimeMethod* method)
{
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = ___l0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<System.Object>::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ListPool_1_Get_mEE963F0CFA2D9BE7F593624F2825F9C8E326217D_gshared (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E * L_0 = ((ListPool_1_t66B0CA6885E680896C9747F9C0E28458D59743BE_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		NullCheck((ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E *)L_0);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_1 = ((  List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * (*) (ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return L_1;
	}
}
// System.Void UnityEngine.UI.ListPool`1<System.Object>::Release(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Release_mA153831D5786A134340D88D3C5C14451A188C6B6_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___toRelease0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E * L_0 = ((ListPool_1_t66B0CA6885E680896C9747F9C0E28458D59743BE_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_1 = ___toRelease0;
		NullCheck((ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E *)L_0);
		((  void (*) (ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E *, List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E *)L_0, (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<System.Object>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1__cctor_m2378D0E35B8BFADD0DBC1896B035099042BF39E9_gshared (const RuntimeMethod* method)
{
	{
		UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363 * L_0 = (UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((  void (*) (UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363 *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(L_0, (RuntimeObject *)NULL, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E * L_1 = (ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E *, UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363 *, UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(L_1, (UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363 *)NULL, (UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		((ListPool_1_t66B0CA6885E680896C9747F9C0E28458D59743BE_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_s_ListPool_0(L_1);
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
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Color32>::Clear(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Clear_m7E0463074AFDE74F6941D20F82B563D9855CA51F_gshared (List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 * ___l0, const RuntimeMethod* method)
{
	{
		List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 * L_0 = ___l0;
		NullCheck((List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 *)L_0);
		((  void (*) (List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<UnityEngine.Color32>::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 * ListPool_1_Get_mFA5B1FE71203BEA07EC99A8187CAFC9801601275_gshared (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99 * L_0 = ((ListPool_1_tFB4F0894A1EF21042E633BD1514A9258601CB1F1_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		NullCheck((ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99 *)L_0);
		List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 * L_1 = ((  List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 * (*) (ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return L_1;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Color32>::Release(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Release_m13C60947514129CCE106341D6F821D7CC8CB7927_gshared (List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 * ___toRelease0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99 * L_0 = ((ListPool_1_tFB4F0894A1EF21042E633BD1514A9258601CB1F1_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 * L_1 = ___toRelease0;
		NullCheck((ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99 *)L_0);
		((  void (*) (ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99 *, List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99 *)L_0, (List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Color32>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1__cctor_m6F6BB1DEAEBDCC1348DB47B9E0E10C0A1E36F68C_gshared (const RuntimeMethod* method)
{
	{
		UnityAction_1_tE3DCD90F58E3904680E8CB55673236424DD51B9D * L_0 = (UnityAction_1_tE3DCD90F58E3904680E8CB55673236424DD51B9D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((  void (*) (UnityAction_1_tE3DCD90F58E3904680E8CB55673236424DD51B9D *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(L_0, (RuntimeObject *)NULL, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99 * L_1 = (ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99 *, UnityAction_1_tE3DCD90F58E3904680E8CB55673236424DD51B9D *, UnityAction_1_tE3DCD90F58E3904680E8CB55673236424DD51B9D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(L_1, (UnityAction_1_tE3DCD90F58E3904680E8CB55673236424DD51B9D *)NULL, (UnityAction_1_tE3DCD90F58E3904680E8CB55673236424DD51B9D *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		((ListPool_1_tFB4F0894A1EF21042E633BD1514A9258601CB1F1_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_s_ListPool_0(L_1);
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
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.UIVertex>::Clear(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Clear_mCA5F9E34875E7BE7BF5093AA41CB68AA14782B9A_gshared (List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 * ___l0, const RuntimeMethod* method)
{
	{
		List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 * L_0 = ___l0;
		NullCheck((List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 *)L_0);
		((  void (*) (List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<UnityEngine.UIVertex>::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 * ListPool_1_Get_m269C301744C63E55CDD01465B1BDCD0FA9802244_gshared (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1 * L_0 = ((ListPool_1_tC140413ABBDAF87428D43AA5EFDD842394341CF6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		NullCheck((ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1 *)L_0);
		List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 * L_1 = ((  List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 * (*) (ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return L_1;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.UIVertex>::Release(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Release_m6653E07E399B9C444F12BEEE866B60F2F99F8D69_gshared (List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 * ___toRelease0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1 * L_0 = ((ListPool_1_tC140413ABBDAF87428D43AA5EFDD842394341CF6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 * L_1 = ___toRelease0;
		NullCheck((ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1 *)L_0);
		((  void (*) (ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1 *, List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1 *)L_0, (List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.UIVertex>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1__cctor_mB9695B98AC5B1F1D1A9B8E899684DAECA74B5E8C_gshared (const RuntimeMethod* method)
{
	{
		UnityAction_1_t81CC8066FFA7C46AA839E5C8548255B1E557F95A * L_0 = (UnityAction_1_t81CC8066FFA7C46AA839E5C8548255B1E557F95A *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((  void (*) (UnityAction_1_t81CC8066FFA7C46AA839E5C8548255B1E557F95A *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(L_0, (RuntimeObject *)NULL, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1 * L_1 = (ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1 *, UnityAction_1_t81CC8066FFA7C46AA839E5C8548255B1E557F95A *, UnityAction_1_t81CC8066FFA7C46AA839E5C8548255B1E557F95A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(L_1, (UnityAction_1_t81CC8066FFA7C46AA839E5C8548255B1E557F95A *)NULL, (UnityAction_1_t81CC8066FFA7C46AA839E5C8548255B1E557F95A *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		((ListPool_1_tC140413ABBDAF87428D43AA5EFDD842394341CF6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_s_ListPool_0(L_1);
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
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector2>::Clear(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Clear_m3C051B0DE1D02A52725D7579945480EED3C9FE8E_gshared (List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * ___l0, const RuntimeMethod* method)
{
	{
		List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * L_0 = ___l0;
		NullCheck((List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB *)L_0);
		((  void (*) (List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<UnityEngine.Vector2>::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * ListPool_1_Get_m11B7B6B7B0A7397CE137967BD7B5DE5A89B50FD0_gshared (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1 * L_0 = ((ListPool_1_tEC2CD2FE52DC3A8B1F3E2BF498E60420B6ABDDF8_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		NullCheck((ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1 *)L_0);
		List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * L_1 = ((  List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * (*) (ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return L_1;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector2>::Release(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Release_mE0437FA6DA0DDBF3E142087FD60E5C1546D00378_gshared (List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * ___toRelease0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1 * L_0 = ((ListPool_1_tEC2CD2FE52DC3A8B1F3E2BF498E60420B6ABDDF8_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * L_1 = ___toRelease0;
		NullCheck((ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1 *)L_0);
		((  void (*) (ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1 *, List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1 *)L_0, (List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector2>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1__cctor_m72914A2BE483C25F9A1F466683250D88B2E3CE07_gshared (const RuntimeMethod* method)
{
	{
		UnityAction_1_t8A73E5E38CB0B8D4007EC6DF30D9825B34363F0C * L_0 = (UnityAction_1_t8A73E5E38CB0B8D4007EC6DF30D9825B34363F0C *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((  void (*) (UnityAction_1_t8A73E5E38CB0B8D4007EC6DF30D9825B34363F0C *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(L_0, (RuntimeObject *)NULL, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1 * L_1 = (ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1 *, UnityAction_1_t8A73E5E38CB0B8D4007EC6DF30D9825B34363F0C *, UnityAction_1_t8A73E5E38CB0B8D4007EC6DF30D9825B34363F0C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(L_1, (UnityAction_1_t8A73E5E38CB0B8D4007EC6DF30D9825B34363F0C *)NULL, (UnityAction_1_t8A73E5E38CB0B8D4007EC6DF30D9825B34363F0C *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		((ListPool_1_tEC2CD2FE52DC3A8B1F3E2BF498E60420B6ABDDF8_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_s_ListPool_0(L_1);
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
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector3>::Clear(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Clear_mAB96DA37D0FB4B06F1603AA1070DD09866B3B220_gshared (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * ___l0, const RuntimeMethod* method)
{
	{
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_0 = ___l0;
		NullCheck((List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *)L_0);
		((  void (*) (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<UnityEngine.Vector3>::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * ListPool_1_Get_m37FA5515EC4738DA642BD39C6776AAD939257066_gshared (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49 * L_0 = ((ListPool_1_t5E8D36B177BEE61E319DF7927E463DFBAC58E09D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		NullCheck((ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49 *)L_0);
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_1 = ((  List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * (*) (ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return L_1;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector3>::Release(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Release_mEEEA52258097A3C1D70BCA0C1E44F2FE2D7FA5F0_gshared (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * ___toRelease0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49 * L_0 = ((ListPool_1_t5E8D36B177BEE61E319DF7927E463DFBAC58E09D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_1 = ___toRelease0;
		NullCheck((ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49 *)L_0);
		((  void (*) (ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49 *, List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49 *)L_0, (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector3>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1__cctor_m9BC9B0BFB33F3DF6E196D870C49E7D8227EDA837_gshared (const RuntimeMethod* method)
{
	{
		UnityAction_1_t1774CF29AA6EF9D1D2B15FDF2C1A13C8B4A3A239 * L_0 = (UnityAction_1_t1774CF29AA6EF9D1D2B15FDF2C1A13C8B4A3A239 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((  void (*) (UnityAction_1_t1774CF29AA6EF9D1D2B15FDF2C1A13C8B4A3A239 *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(L_0, (RuntimeObject *)NULL, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49 * L_1 = (ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49 *, UnityAction_1_t1774CF29AA6EF9D1D2B15FDF2C1A13C8B4A3A239 *, UnityAction_1_t1774CF29AA6EF9D1D2B15FDF2C1A13C8B4A3A239 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(L_1, (UnityAction_1_t1774CF29AA6EF9D1D2B15FDF2C1A13C8B4A3A239 *)NULL, (UnityAction_1_t1774CF29AA6EF9D1D2B15FDF2C1A13C8B4A3A239 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		((ListPool_1_t5E8D36B177BEE61E319DF7927E463DFBAC58E09D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_s_ListPool_0(L_1);
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
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector4>::Clear(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Clear_m548445516D0160B74B6DD63031666DFF0A8D0047_gshared (List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 * ___l0, const RuntimeMethod* method)
{
	{
		List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 * L_0 = ___l0;
		NullCheck((List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 *)L_0);
		((  void (*) (List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<UnityEngine.Vector4>::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 * ListPool_1_Get_mFF001445D71845169AA17846983938A308ABCBEB_gshared (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54 * L_0 = ((ListPool_1_tD46C00F7C693AF94203B6B004906149A661AA540_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		NullCheck((ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54 *)L_0);
		List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 * L_1 = ((  List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 * (*) (ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return L_1;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector4>::Release(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Release_m9C3BDAB2B2F59B29C028861D014CDFABA3B7F648_gshared (List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 * ___toRelease0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54 * L_0 = ((ListPool_1_tD46C00F7C693AF94203B6B004906149A661AA540_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 * L_1 = ___toRelease0;
		NullCheck((ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54 *)L_0);
		((  void (*) (ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54 *, List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54 *)L_0, (List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector4>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1__cctor_m672E25A57B4521532BFB0CC9717C346E57B88DFD_gshared (const RuntimeMethod* method)
{
	{
		UnityAction_1_t1FE626F17578115700E45769612596C6BD6C1D76 * L_0 = (UnityAction_1_t1FE626F17578115700E45769612596C6BD6C1D76 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((  void (*) (UnityAction_1_t1FE626F17578115700E45769612596C6BD6C1D76 *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(L_0, (RuntimeObject *)NULL, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54 * L_1 = (ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54 *, UnityAction_1_t1FE626F17578115700E45769612596C6BD6C1D76 *, UnityAction_1_t1FE626F17578115700E45769612596C6BD6C1D76 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(L_1, (UnityAction_1_t1FE626F17578115700E45769612596C6BD6C1D76 *)NULL, (UnityAction_1_t1FE626F17578115700E45769612596C6BD6C1D76 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		((ListPool_1_tD46C00F7C693AF94203B6B004906149A661AA540_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_s_ListPool_0(L_1);
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
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ObjectPool_1_get_countAll_mC773F09A80F4F0FE9AF2A3831AF76CCBED566D3F_gshared (ObjectPool_1_t5BE4172BA33477BCA8E88EF395C26D7558DEB7E9 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_U3CcountAllU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::set_countAll(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_1_set_countAll_mAF458EE2DD8B26D48576D0FFA139136AAA5180BF_gshared (ObjectPool_1_t5BE4172BA33477BCA8E88EF395C26D7558DEB7E9 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CcountAllU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_1__ctor_m5A29AD1D0B7DD5C4F207B1659FF168D4BF7C0D01_gshared (ObjectPool_1_t5BE4172BA33477BCA8E88EF395C26D7558DEB7E9 * __this, UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___actionOnGet0, UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___actionOnRelease1, const RuntimeMethod* method)
{
	{
		Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * L_0 = (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0));
		((  void (*) (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		__this->set_m_Stack_0(L_0);
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_1 = ___actionOnGet0;
		__this->set_m_ActionOnGet_1(L_1);
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_2 = ___actionOnRelease1;
		__this->set_m_ActionOnRelease_2(L_2);
		return;
	}
}
// T UnityEngine.UI.ObjectPool`1<System.Object>::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ObjectPool_1_Get_m6478DC644CCD8FE64CF24AF5490B2E1054FB4F78_gshared (ObjectPool_1_t5BE4172BA33477BCA8E88EF395C26D7558DEB7E9 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	int32_t V_1 = 0;
	{
		Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * L_0 = (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)__this->get_m_Stack_0();
		NullCheck((Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_0);
		int32_t L_1 = ((  int32_t (*) (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		V_0 = (RuntimeObject *)L_2;
		NullCheck((ObjectPool_1_t5BE4172BA33477BCA8E88EF395C26D7558DEB7E9 *)__this);
		int32_t L_3 = ((  int32_t (*) (ObjectPool_1_t5BE4172BA33477BCA8E88EF395C26D7558DEB7E9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((ObjectPool_1_t5BE4172BA33477BCA8E88EF395C26D7558DEB7E9 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_1 = (int32_t)L_3;
		int32_t L_4 = V_1;
		NullCheck((ObjectPool_1_t5BE4172BA33477BCA8E88EF395C26D7558DEB7E9 *)__this);
		((  void (*) (ObjectPool_1_t5BE4172BA33477BCA8E88EF395C26D7558DEB7E9 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((ObjectPool_1_t5BE4172BA33477BCA8E88EF395C26D7558DEB7E9 *)__this, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		goto IL_0031;
	}

IL_0025:
	{
		Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * L_5 = (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)__this->get_m_Stack_0();
		NullCheck((Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_5);
		RuntimeObject * L_6 = ((  RuntimeObject * (*) (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		V_0 = (RuntimeObject *)L_6;
	}

IL_0031:
	{
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_7 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)__this->get_m_ActionOnGet_1();
		if (!L_7)
		{
			goto IL_0045;
		}
	}
	{
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_8 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)__this->get_m_ActionOnGet_1();
		RuntimeObject * L_9 = V_0;
		NullCheck((UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_8);
		((  void (*) (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
	}

IL_0045:
	{
		RuntimeObject * L_10 = V_0;
		return L_10;
	}
}
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::Release(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_1_Release_mC1D66E968E7A04252A79426F4F2D45ED0F292B86_gshared (ObjectPool_1_t5BE4172BA33477BCA8E88EF395C26D7558DEB7E9 * __this, RuntimeObject * ___element0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectPool_1_Release_mC1D66E968E7A04252A79426F4F2D45ED0F292B86_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * L_0 = (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)__this->get_m_Stack_0();
		NullCheck((Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_0);
		int32_t L_1 = ((  int32_t (*) (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * L_2 = (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)__this->get_m_Stack_0();
		NullCheck((Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_2);
		RuntimeObject * L_3 = ((  RuntimeObject * (*) (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		RuntimeObject * L_4 = ___element0;
		if ((!(((RuntimeObject*)(RuntimeObject *)L_3) == ((RuntimeObject*)(RuntimeObject *)L_4))))
		{
			goto IL_0030;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29((RuntimeObject *)_stringLiteral04231B44477132B3DBEFE7768A921AE5A13A00FC, /*hidden argument*/NULL);
	}

IL_0030:
	{
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_5 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)__this->get_m_ActionOnRelease_2();
		if (!L_5)
		{
			goto IL_0044;
		}
	}
	{
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_6 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)__this->get_m_ActionOnRelease_2();
		RuntimeObject * L_7 = ___element0;
		NullCheck((UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_6);
		((  void (*) (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_6, (RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
	}

IL_0044:
	{
		Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * L_8 = (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)__this->get_m_Stack_0();
		RuntimeObject * L_9 = ___element0;
		NullCheck((Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_8);
		((  void (*) (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
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
// UnityEngine.XR.ARFoundation.TrackableCollection`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>::get_trackables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableCollection_1_t4F672148E28A41F14EAE569661A96270A528E608  ARTrackableManager_4_get_trackables_mDE5DA4C0F7F66BFA082D748E0A52480168863105_gshared (ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11 * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 * L_0 = (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)__this->get_m_Trackables_7();
		TrackableCollection_1_t4F672148E28A41F14EAE569661A96270A528E608  L_1;
		memset((&L_1), 0, sizeof(L_1));
		TrackableCollection_1__ctor_mA99D3D41CAA02EF94BD2B96D6DC1B66450E226FF((&L_1), (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		return L_1;
	}
}
// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>::get_sessionOrigin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * ARTrackableManager_4_get_sessionOrigin_m588C473FA27721FE2EB4272371CF6F81F37548D3_gshared (ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11 * __this, const RuntimeMethod* method)
{
	{
		ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * L_0 = (ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF *)__this->get_U3CsessionOriginU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>::set_sessionOrigin(UnityEngine.XR.ARFoundation.ARSessionOrigin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackableManager_4_set_sessionOrigin_mED37EFCF538C17AEDC22F283210117A51E6FAE9B_gshared (ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11 * __this, ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * ___value0, const RuntimeMethod* method)
{
	{
		ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * L_0 = ___value0;
		__this->set_U3CsessionOriginU3Ek__BackingField_6(L_0);
		return;
	}
}
// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>::GetPrefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ARTrackableManager_4_GetPrefab_m263E07B78AED520FD200DF314B144881F6F8D554_gshared (ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11 * __this, const RuntimeMethod* method)
{
	{
		return (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackableManager_4_Awake_m24810E7DBA7D9EAD4C4E4DE28D4DE659567CDCA9_gshared (ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARTrackableManager_4_Awake_m24810E7DBA7D9EAD4C4E4DE28D4DE659567CDCA9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 * L_0 = (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		__this->set_m_Trackables_7(L_0);
		Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 * L_1 = (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		__this->set_m_PendingAdds_8(L_1);
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this);
		ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * L_2 = Component_GetComponent_TisARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF_m25BC8791B994BAE33BF9003FFC85124F480EFB17((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this, /*hidden argument*/Component_GetComponent_TisARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF_m25BC8791B994BAE33BF9003FFC85124F480EFB17_RuntimeMethod_var);
		NullCheck((ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11 *)__this);
		((  void (*) (ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11 *, ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11 *)__this, (ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackableManager_4_Update_m69CCA5EAB13AA706C8E89843B7C8AFD333269A0D_gshared (ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARTrackableManager_4_Update_m69CCA5EAB13AA706C8E89843B7C8AFD333269A0D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Enumerator_tE1C3D515CC85EE05C8130CBC6C35308AE32EC631  V_2;
	memset((&V_2), 0, sizeof(V_2));
	BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  V_3;
	memset((&V_3), 0, sizeof(V_3));
	BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  V_4;
	memset((&V_4), 0, sizeof(V_4));
	NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Enumerator_tDB12EE5618B415F0FB5AEEE49E6F2F41DFB2FD0A  V_6;
	memset((&V_6), 0, sizeof(V_6));
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  V_7;
	memset((&V_7), 0, sizeof(V_7));
	RuntimeObject * V_8 = NULL;
	Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  V_9;
	memset((&V_9), 0, sizeof(V_9));
	RuntimeObject * V_10 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 5);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		NullCheck((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this);
		RuntimeObject * L_0 = ((  RuntimeObject * (*) (SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		return;
	}

IL_000e:
	{
		NullCheck((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		NullCheck((TrackingSubsystem_2_t0D6BC19D17058B4CBF6E3E9122F09A5A86A8566C *)L_1);
		TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE  L_2 = VirtFuncInvoker1< TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE , int32_t >::Invoke(8 /* UnityEngine.XR.ARSubsystems.TrackableChanges`1<!0> UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>::GetChanges(Unity.Collections.Allocator) */, (TrackingSubsystem_2_t0D6BC19D17058B4CBF6E3E9122F09A5A86A8566C *)L_1, (int32_t)2);
		V_0 = (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE )L_2;
	}

IL_0020:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8));
			List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_3 = ((ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8)))->get_s_Added_9();
			NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  L_4 = TrackableChanges_1_get_added_m63AFCF25226B28A1F645793B0148358240C9309E_inline((TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE *)(TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
			V_1 = (NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 )L_4;
			int32_t L_5 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 *)(NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 *)(&V_1))->___m_Length_1);
			((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_3, (int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12));
			NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  L_6 = TrackableChanges_1_get_added_m63AFCF25226B28A1F645793B0148358240C9309E_inline((TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE *)(TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
			V_1 = (NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 )L_6;
			Enumerator_tE1C3D515CC85EE05C8130CBC6C35308AE32EC631  L_7 = NativeArray_1_GetEnumerator_m134216B041C923A2FFC455F2EB4736502264810B((NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 *)(NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13));
			V_2 = (Enumerator_tE1C3D515CC85EE05C8130CBC6C35308AE32EC631 )L_7;
		}

IL_0049:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0064;
			}

IL_004b:
			{
				BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  L_8 = Enumerator_get_Current_m234FF4100EBB54A511CBA98EB0CF385CDEF01E7F((Enumerator_tE1C3D515CC85EE05C8130CBC6C35308AE32EC631 *)(Enumerator_tE1C3D515CC85EE05C8130CBC6C35308AE32EC631 *)(&V_2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
				V_3 = (BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 )L_8;
				IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8));
				List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_9 = ((ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8)))->get_s_Added_9();
				BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  L_10 = V_3;
				NullCheck((ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11 *)__this);
				RuntimeObject * L_11 = ((  RuntimeObject * (*) (ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11 *, BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11 *)__this, (BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 )L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
				NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_9);
				((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_9, (RuntimeObject *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16));
			}

IL_0064:
			{
				bool L_12 = Enumerator_MoveNext_m51A0BF01366C74EF8F4BE33C3FD9FDC66142ED37((Enumerator_tE1C3D515CC85EE05C8130CBC6C35308AE32EC631 *)(Enumerator_tE1C3D515CC85EE05C8130CBC6C35308AE32EC631 *)(&V_2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17));
				if (L_12)
				{
					goto IL_004b;
				}
			}

IL_006d:
			{
				IL2CPP_LEAVE(0x7D, FINALLY_006f);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_006f;
		}

FINALLY_006f:
		{ // begin finally (depth: 2)
			Il2CppFakeBox<Enumerator_tE1C3D515CC85EE05C8130CBC6C35308AE32EC631 > L_13(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 18), (&V_2));
			const VirtualInvokeData& il2cpp_virtual_invoke_data__119 = il2cpp_codegen_get_interface_invoke_data(0, (&L_13), IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var);
			((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__119.methodPtr)((RuntimeObject*)(&L_13), /*hidden argument*/il2cpp_virtual_invoke_data__119.method);
			V_2 = L_13.m_Value;
			IL2CPP_END_FINALLY(111)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(111)
		{
			IL2CPP_JUMP_TBL(0x7D, IL_007d)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_007d:
		{
			IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8));
			List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_14 = ((ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8)))->get_s_Updated_10();
			NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  L_15 = TrackableChanges_1_get_updated_m1D7AFC816EACE233551588E18E321BDA0F3919A8_inline((TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE *)(TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 19));
			V_1 = (NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 )L_15;
			int32_t L_16 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 *)(NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 *)(&V_1))->___m_Length_1);
			((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_14, (int32_t)L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12));
			NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  L_17 = TrackableChanges_1_get_updated_m1D7AFC816EACE233551588E18E321BDA0F3919A8_inline((TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE *)(TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 19));
			V_1 = (NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 )L_17;
			Enumerator_tE1C3D515CC85EE05C8130CBC6C35308AE32EC631  L_18 = NativeArray_1_GetEnumerator_m134216B041C923A2FFC455F2EB4736502264810B((NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 *)(NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13));
			V_2 = (Enumerator_tE1C3D515CC85EE05C8130CBC6C35308AE32EC631 )L_18;
		}

IL_00a6:
		try
		{ // begin try (depth: 2)
			{
				goto IL_00c3;
			}

IL_00a8:
			{
				BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  L_19 = Enumerator_get_Current_m234FF4100EBB54A511CBA98EB0CF385CDEF01E7F((Enumerator_tE1C3D515CC85EE05C8130CBC6C35308AE32EC631 *)(Enumerator_tE1C3D515CC85EE05C8130CBC6C35308AE32EC631 *)(&V_2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
				V_4 = (BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 )L_19;
				IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8));
				List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_20 = ((ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8)))->get_s_Updated_10();
				BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  L_21 = V_4;
				NullCheck((ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11 *)__this);
				RuntimeObject * L_22 = ((  RuntimeObject * (*) (ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11 *, BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11 *)__this, (BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 )L_21, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
				NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_20);
				((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_20, (RuntimeObject *)L_22, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16));
			}

IL_00c3:
			{
				bool L_23 = Enumerator_MoveNext_m51A0BF01366C74EF8F4BE33C3FD9FDC66142ED37((Enumerator_tE1C3D515CC85EE05C8130CBC6C35308AE32EC631 *)(Enumerator_tE1C3D515CC85EE05C8130CBC6C35308AE32EC631 *)(&V_2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17));
				if (L_23)
				{
					goto IL_00a8;
				}
			}

IL_00cc:
			{
				IL2CPP_LEAVE(0xDC, FINALLY_00ce);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00ce;
		}

FINALLY_00ce:
		{ // begin finally (depth: 2)
			Il2CppFakeBox<Enumerator_tE1C3D515CC85EE05C8130CBC6C35308AE32EC631 > L_24(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 18), (&V_2));
			const VirtualInvokeData& il2cpp_virtual_invoke_data__214 = il2cpp_codegen_get_interface_invoke_data(0, (&L_24), IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var);
			((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__214.methodPtr)((RuntimeObject*)(&L_24), /*hidden argument*/il2cpp_virtual_invoke_data__214.method);
			V_2 = L_24.m_Value;
			IL2CPP_END_FINALLY(206)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(206)
		{
			IL2CPP_JUMP_TBL(0xDC, IL_00dc)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_00dc:
		{
			IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8));
			List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_25 = ((ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8)))->get_s_Removed_11();
			NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_26 = TrackableChanges_1_get_removed_mFC97F3FE78DFC548F04543CF1246DC1EC61B8214_inline((TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE *)(TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 20));
			V_5 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )L_26;
			int32_t L_27 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)(&V_5))->___m_Length_1);
			((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_25, (int32_t)L_27, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12));
			NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_28 = TrackableChanges_1_get_removed_mFC97F3FE78DFC548F04543CF1246DC1EC61B8214_inline((TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE *)(TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 20));
			V_5 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )L_28;
			Enumerator_tDB12EE5618B415F0FB5AEEE49E6F2F41DFB2FD0A  L_29 = NativeArray_1_GetEnumerator_m3B6CA1981A8CE62A1C67FCEEBE1887CD32906DA2((NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)(&V_5), /*hidden argument*/NativeArray_1_GetEnumerator_m3B6CA1981A8CE62A1C67FCEEBE1887CD32906DA2_RuntimeMethod_var);
			V_6 = (Enumerator_tDB12EE5618B415F0FB5AEEE49E6F2F41DFB2FD0A )L_29;
		}

IL_0108:
		try
		{ // begin try (depth: 2)
			{
				goto IL_013e;
			}

IL_010a:
			{
				TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_30 = Enumerator_get_Current_m913D10AD892E19937C638773D208459E9862248D((Enumerator_tDB12EE5618B415F0FB5AEEE49E6F2F41DFB2FD0A *)(Enumerator_tDB12EE5618B415F0FB5AEEE49E6F2F41DFB2FD0A *)(&V_6), /*hidden argument*/Enumerator_get_Current_m913D10AD892E19937C638773D208459E9862248D_RuntimeMethod_var);
				V_7 = (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_30;
				Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 * L_31 = (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)__this->get_m_Trackables_7();
				TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_32 = V_7;
				NullCheck((Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)L_31);
				bool L_33 = ((  bool (*) (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , RuntimeObject **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21)->methodPointer)((Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)L_31, (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_32, (RuntimeObject **)(RuntimeObject **)(&V_8), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21));
				if (!L_33)
				{
					goto IL_013e;
				}
			}

IL_0124:
			{
				Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 * L_34 = (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)__this->get_m_Trackables_7();
				TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_35 = V_7;
				NullCheck((Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)L_34);
				((  bool (*) (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 22)->methodPointer)((Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)L_34, (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_35, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 22));
				IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8));
				List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_36 = ((ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8)))->get_s_Removed_11();
				RuntimeObject * L_37 = V_8;
				NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_36);
				((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_36, (RuntimeObject *)L_37, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16));
			}

IL_013e:
			{
				bool L_38 = Enumerator_MoveNext_m3C4C0B0B1AE71E65EF8255E6FC671DDBC829B6AA((Enumerator_tDB12EE5618B415F0FB5AEEE49E6F2F41DFB2FD0A *)(Enumerator_tDB12EE5618B415F0FB5AEEE49E6F2F41DFB2FD0A *)(&V_6), /*hidden argument*/Enumerator_MoveNext_m3C4C0B0B1AE71E65EF8255E6FC671DDBC829B6AA_RuntimeMethod_var);
				if (L_38)
				{
					goto IL_010a;
				}
			}

IL_0147:
			{
				IL2CPP_LEAVE(0x165, FINALLY_0149);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0149;
		}

FINALLY_0149:
		{ // begin finally (depth: 2)
			Il2CppFakeBox<Enumerator_tDB12EE5618B415F0FB5AEEE49E6F2F41DFB2FD0A > L_39(Enumerator_tDB12EE5618B415F0FB5AEEE49E6F2F41DFB2FD0A_il2cpp_TypeInfo_var, (&V_6));
			const VirtualInvokeData& il2cpp_virtual_invoke_data__337 = il2cpp_codegen_get_interface_invoke_data(0, (&L_39), IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var);
			((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__337.methodPtr)((RuntimeObject*)(&L_39), /*hidden argument*/il2cpp_virtual_invoke_data__337.method);
			V_6 = L_39.m_Value;
			IL2CPP_END_FINALLY(329)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(329)
		{
			IL2CPP_END_CLEANUP(0x165, FINALLY_0157);
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0157;
	}

FINALLY_0157:
	{ // begin finally (depth: 1)
		Il2CppFakeBox<TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE > L_40(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 23), (&V_0));
		const VirtualInvokeData& il2cpp_virtual_invoke_data__351 = il2cpp_codegen_get_interface_invoke_data(0, (&L_40), IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var);
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__351.methodPtr)((RuntimeObject*)(&L_40), /*hidden argument*/il2cpp_virtual_invoke_data__351.method);
		V_0 = L_40.m_Value;
		IL2CPP_END_FINALLY(343)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(343)
	{
		IL2CPP_JUMP_TBL(0x165, IL_0165)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0165:
	{
	}

IL_0166:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8));
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_41 = ((ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8)))->get_s_Added_9();
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_42 = ((ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8)))->get_s_Updated_10();
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_43 = ((ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8)))->get_s_Removed_11();
		NullCheck((ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11 *)__this);
		VirtActionInvoker3< List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * >::Invoke(14 /* System.Void UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>::OnTrackablesChanged(System.Collections.Generic.List`1<TTrackable>,System.Collections.Generic.List`1<TTrackable>,System.Collections.Generic.List`1<TTrackable>) */, (ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11 *)__this, (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_41, (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_42, (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_43);
		IL2CPP_LEAVE(0x1B6, FINALLY_017d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_017d;
	}

FINALLY_017d:
	{ // begin finally (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8));
			List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_44 = ((ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8)))->get_s_Removed_11();
			NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_44);
			Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  L_45 = ((  Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 25)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_44, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 25));
			V_9 = (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD )L_45;
		}

IL_0189:
		try
		{ // begin try (depth: 2)
			{
				goto IL_019c;
			}

IL_018b:
			{
				RuntimeObject * L_46 = Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_inline((Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD *)(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD *)(&V_9), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 26));
				V_10 = (RuntimeObject *)L_46;
				RuntimeObject * L_47 = V_10;
				NullCheck((ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11 *)__this);
				((  void (*) (ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 27)->methodPointer)((ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11 *)__this, (RuntimeObject *)L_47, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 27));
			}

IL_019c:
			{
				bool L_48 = Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34((Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD *)(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD *)(&V_9), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 28));
				if (L_48)
				{
					goto IL_018b;
				}
			}

IL_01a5:
			{
				IL2CPP_LEAVE(0x1B5, FINALLY_01a7);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_01a7;
		}

FINALLY_01a7:
		{ // begin finally (depth: 2)
			Il2CppFakeBox<Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD > L_49(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 29), (&V_9));
			const VirtualInvokeData& il2cpp_virtual_invoke_data__431 = il2cpp_codegen_get_interface_invoke_data(0, (&L_49), IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var);
			((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__431.methodPtr)((RuntimeObject*)(&L_49), /*hidden argument*/il2cpp_virtual_invoke_data__431.method);
			V_9 = L_49.m_Value;
			IL2CPP_END_FINALLY(423)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(423)
		{
			IL2CPP_JUMP_TBL(0x1B5, IL_01b5)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_01b5:
		{
			IL2CPP_END_FINALLY(381)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(381)
	{
		IL2CPP_JUMP_TBL(0x1B6, IL_01b6)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_01b6:
	{
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>::OnTrackablesChanged(System.Collections.Generic.List`1<TTrackable>,System.Collections.Generic.List`1<TTrackable>,System.Collections.Generic.List`1<TTrackable>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackableManager_4_OnTrackablesChanged_mB475EAE4C17CC805832975E516E86DC5EFDCDBCE_gshared (ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11 * __this, List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___added0, List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___updated1, List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___removed2, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>::OnAfterSetSessionRelativeData(TTrackable,TSessionRelativeData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackableManager_4_OnAfterSetSessionRelativeData_m9394A88FD30AD78D35D4E0696FAE5DFD153E9154_gshared (ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11 * __this, RuntimeObject * ___trackable0, BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  ___sessionRelativeData1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// TTrackable UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>::CreateTrackableImmediate(TSessionRelativeData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ARTrackableManager_4_CreateTrackableImmediate_m2854245DA55B3834B5FD9219BE03DF6DDD85A906_gshared (ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11 * __this, BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  ___sessionRelativeData0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  L_0 = ___sessionRelativeData0;
		NullCheck((ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11 *)__this);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11 *, BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11 *)__this, (BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		V_0 = (RuntimeObject *)L_1;
		Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 * L_2 = (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)__this->get_m_PendingAdds_8();
		RuntimeObject * L_3 = V_0;
		NullCheck((ARTrackable_2_t20DDFF842A33D6D4B1F1F5C17DEB3CC5032765F5 *)L_3);
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_4 = ((  TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  (*) (ARTrackable_2_t20DDFF842A33D6D4B1F1F5C17DEB3CC5032765F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 31)->methodPointer)((ARTrackable_2_t20DDFF842A33D6D4B1F1F5C17DEB3CC5032765F5 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 31));
		RuntimeObject * L_5 = V_0;
		NullCheck((Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)L_2);
		((  void (*) (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 32)->methodPointer)((Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)L_2, (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_4, (RuntimeObject *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 32));
		RuntimeObject * L_6 = V_0;
		return L_6;
	}
}
// System.Boolean UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>::DestroyPendingTrackable(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARTrackableManager_4_DestroyPendingTrackable_m1CFF1C6B239A82D8F60EB6C8B0E7EE8DE87C6109_gshared (ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11 * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 * L_0 = (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)__this->get_m_PendingAdds_8();
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_1 = ___trackableId0;
		NullCheck((Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)L_0);
		bool L_2 = ((  bool (*) (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , RuntimeObject **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21)->methodPointer)((Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)L_0, (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_1, (RuntimeObject **)(RuntimeObject **)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21));
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 * L_3 = (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)__this->get_m_PendingAdds_8();
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_4 = ___trackableId0;
		NullCheck((Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)L_3);
		((  bool (*) (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 22)->methodPointer)((Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)L_3, (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 22));
		Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 * L_5 = (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)__this->get_m_Trackables_7();
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_6 = ___trackableId0;
		NullCheck((Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)L_5);
		((  bool (*) (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 22)->methodPointer)((Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)L_5, (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 22));
		RuntimeObject * L_7 = V_0;
		NullCheck((ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11 *)__this);
		((  void (*) (ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 27)->methodPointer)((ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11 *)__this, (RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 27));
		return (bool)1;
	}

IL_0033:
	{
		return (bool)0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>::ClearAndSetCapacity(System.Collections.Generic.List`1<TTrackable>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackableManager_4_ClearAndSetCapacity_mDC3B05178F0886F22D221501A97798AF527AC2B5_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___list0, int32_t ___capacity1, const RuntimeMethod* method)
{
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = ___list0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 33)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 33));
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_1 = ___list0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_1);
		int32_t L_2 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 34)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 34));
		int32_t L_3 = ___capacity1;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_0016;
		}
	}
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_4 = ___list0;
		int32_t L_5 = ___capacity1;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_4);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 35)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_4, (int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 35));
	}

IL_0016:
	{
		return;
	}
}
// System.String UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>::GetTrackableName(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ARTrackableManager_4_GetTrackableName_mB912FE4322116C4BBBD887A8F3BBF1FFFE9FD687_gshared (ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11 * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARTrackableManager_4_GetTrackableName_mB912FE4322116C4BBBD887A8F3BBF1FFFE9FD687_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NullCheck((ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11 *)__this);
		String_t* L_0 = VirtFuncInvoker0< String_t* >::Invoke(10 /* System.String UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>::get_gameObjectName() */, (ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11 *)__this);
		String_t* L_1 = TrackableId_ToString_mBA49191865E57697F4279D2781B182590726A215((TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 *)(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 *)(&___trackableId0), /*hidden argument*/NULL);
		String_t* L_2 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923((String_t*)L_0, (String_t*)_stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6, (String_t*)L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>::CreateGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ARTrackableManager_4_CreateGameObject_mCA0C5B1A526ED43507DED64466BDB3198C6F6A78_gshared (ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARTrackableManager_4_CreateGameObject_mCA0C5B1A526ED43507DED64466BDB3198C6F6A78_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	{
		NullCheck((ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11 *)__this);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = VirtFuncInvoker0< GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * >::Invoke(11 /* UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>::GetPrefab() */, (ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11 *)__this);
		V_0 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mA4DFA8F4471418C248E95B55070665EF344B4B2D(L_3, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_3;
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_4, /*hidden argument*/NULL);
		NullCheck((ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11 *)__this);
		ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * L_6 = ((  ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * (*) (ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 38)->methodPointer)((ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 38));
		NullCheck((ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF *)L_6);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = ARSessionOrigin_get_trackablesParent_m37049D7E75CF694834A140C2EACB15D2D1098505_inline((ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF *)L_6, /*hidden argument*/NULL);
		NullCheck((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_5);
		Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_5, (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_7, /*hidden argument*/NULL);
		return L_4;
	}

IL_002c:
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = V_0;
		NullCheck((ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11 *)__this);
		ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * L_9 = ((  ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * (*) (ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 38)->methodPointer)((ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 38));
		NullCheck((ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF *)L_9);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = ARSessionOrigin_get_trackablesParent_m37049D7E75CF694834A140C2EACB15D2D1098505_inline((ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF *)L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m1CDF66D563B03D37B37264800222D4F3B307EDA0((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_8, (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_10, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m1CDF66D563B03D37B37264800222D4F3B307EDA0_RuntimeMethod_var);
		return L_11;
	}
}
// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>::CreateGameObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ARTrackableManager_4_CreateGameObject_m5E05C9E15A673A0FBEA639E0D4DA6FDBCF9D9D8C_gshared (ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		NullCheck((ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11 *)__this);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 39)->methodPointer)((ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 39));
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_0;
		String_t* L_2 = ___name0;
		NullCheck((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_1);
		Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_1, (String_t*)L_2, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>::CreateGameObject(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ARTrackableManager_4_CreateGameObject_m6E6208AF8CCDAC77A7563789A7D948E2198A7B11_gshared (ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11 * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId0, const RuntimeMethod* method)
{
	{
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_0 = ___trackableId0;
		NullCheck((ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11 *)__this);
		String_t* L_1 = ((  String_t* (*) (ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11 *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 40)->methodPointer)((ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11 *)__this, (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 40));
		NullCheck((ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11 *)__this);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11 *, String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 41)->methodPointer)((ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11 *)__this, (String_t*)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 41));
		return L_2;
	}
}
// TTrackable UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>::CreateTrackable(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ARTrackableManager_4_CreateTrackable_m9CF29829AB781E0B45441987E4BF924C8ED4321A_gshared (ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11 * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARTrackableManager_4_CreateTrackable_m9CF29829AB781E0B45441987E4BF924C8ED4321A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_0 = ___trackableId0;
		NullCheck((ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11 *)__this);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11 *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 42)->methodPointer)((ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11 *)__this, (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 42));
		V_0 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_1;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = V_0;
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_2);
		RuntimeObject * L_3 = ((  RuntimeObject * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 43)->methodPointer)((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 43));
		V_1 = (RuntimeObject *)L_3;
		RuntimeObject * L_4 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = V_0;
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_6);
		RuntimeObject * L_7 = ((  RuntimeObject * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 44)->methodPointer)((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 44));
		V_1 = (RuntimeObject *)L_7;
	}

IL_0024:
	{
		RuntimeObject * L_8 = V_1;
		return L_8;
	}
}
// TTrackable UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>::GetOrCreateTrackable(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ARTrackableManager_4_GetOrCreateTrackable_mC3B8D69E9742EF79408D179E04FCC0B8E76D6B3C_gshared (ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11 * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 * L_0 = (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)__this->get_m_Trackables_7();
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_1 = ___trackableId0;
		NullCheck((Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)L_0);
		bool L_2 = ((  bool (*) (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , RuntimeObject **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21)->methodPointer)((Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)L_0, (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_1, (RuntimeObject **)(RuntimeObject **)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21));
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 * L_3 = (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)__this->get_m_PendingAdds_8();
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_4 = ___trackableId0;
		NullCheck((Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)L_3);
		((  bool (*) (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 22)->methodPointer)((Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)L_3, (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 22));
		goto IL_0034;
	}

IL_001f:
	{
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_5 = ___trackableId0;
		NullCheck((ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11 *)__this);
		RuntimeObject * L_6 = ((  RuntimeObject * (*) (ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11 *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 45)->methodPointer)((ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11 *)__this, (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 45));
		V_0 = (RuntimeObject *)L_6;
		Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 * L_7 = (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)__this->get_m_Trackables_7();
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_8 = ___trackableId0;
		RuntimeObject * L_9 = V_0;
		NullCheck((Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)L_7);
		((  void (*) (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 32)->methodPointer)((Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)L_7, (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 32));
	}

IL_0034:
	{
		RuntimeObject * L_10 = V_0;
		return L_10;
	}
}
// TTrackable UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>::CreateOrUpdateTrackable(TSessionRelativeData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ARTrackableManager_4_CreateOrUpdateTrackable_mD6B8F635218947A817FE2E709E9FA7F4408902A5_gshared (ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11 * __this, BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  ___sessionRelativeData0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_0 = BoundedPlane_get_trackableId_mD2A3DCDA61898E637ACAE0A0F4A832931378071A_inline((BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 *)(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 *)(&___sessionRelativeData0), /*hidden argument*/NULL);
		NullCheck((ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11 *)__this);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11 *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 47)->methodPointer)((ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11 *)__this, (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 47));
		V_0 = (RuntimeObject *)L_1;
		RuntimeObject * L_2 = V_0;
		BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  L_3 = ___sessionRelativeData0;
		NullCheck((ARTrackable_2_t20DDFF842A33D6D4B1F1F5C17DEB3CC5032765F5 *)L_2);
		((  void (*) (ARTrackable_2_t20DDFF842A33D6D4B1F1F5C17DEB3CC5032765F5 *, BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 48)->methodPointer)((ARTrackable_2_t20DDFF842A33D6D4B1F1F5C17DEB3CC5032765F5 *)L_2, (BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 )L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 48));
		RuntimeObject * L_4 = V_0;
		BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  L_5 = ___sessionRelativeData0;
		NullCheck((ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11 *)__this);
		VirtActionInvoker2< RuntimeObject *, BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  >::Invoke(15 /* System.Void UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>::OnAfterSetSessionRelativeData(TTrackable,TSessionRelativeData) */, (ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11 *)__this, (RuntimeObject *)L_4, (BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 )L_5);
		RuntimeObject * L_6 = V_0;
		NullCheck((ARTrackable_2_t20DDFF842A33D6D4B1F1F5C17DEB3CC5032765F5 *)L_6);
		VirtActionInvoker0::Invoke(4 /* System.Void UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>::OnAfterSetSessionRelativeData() */, (ARTrackable_2_t20DDFF842A33D6D4B1F1F5C17DEB3CC5032765F5 *)L_6);
		RuntimeObject * L_7 = V_0;
		return L_7;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>::DestroyTrackable(TTrackable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackableManager_4_DestroyTrackable_m43942090F623942C676C99635C74F91F14D7B329_gshared (ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11 * __this, RuntimeObject * ___trackable0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARTrackableManager_4_DestroyTrackable_m43942090F623942C676C99635C74F91F14D7B329_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___trackable0;
		NullCheck((ARTrackable_2_t20DDFF842A33D6D4B1F1F5C17DEB3CC5032765F5 *)L_0);
		bool L_1 = ((  bool (*) (ARTrackable_2_t20DDFF842A33D6D4B1F1F5C17DEB3CC5032765F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 51)->methodPointer)((ARTrackable_2_t20DDFF842A33D6D4B1F1F5C17DEB3CC5032765F5 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 51));
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject * L_2 = ___trackable0;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_2);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_3, /*hidden argument*/NULL);
	}

IL_001d:
	{
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackableManager_4__ctor_mE8C03EE76B3FBF2654AAA30BFB9820D8879FC2EE_gshared (ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 52)->methodPointer)((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 52));
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackableManager_4__cctor_mBE01F9BA2034BB1ABD6EEAFFBFD32480EAE6E50B_gshared (const RuntimeMethod* method)
{
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 53));
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 54)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 54));
		((ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 8)))->set_s_Added_9(L_0);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_1 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 53));
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 54)->methodPointer)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 54));
		((ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 8)))->set_s_Updated_10(L_1);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_2 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 53));
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 54)->methodPointer)(L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 54));
		((ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 8)))->set_s_Removed_11(L_2);
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
// UnityEngine.XR.ARFoundation.TrackableCollection`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::get_trackables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableCollection_1_t4F672148E28A41F14EAE569661A96270A528E608  ARTrackableManager_4_get_trackables_mEBE20ABFD56D97C275BF603BDDD66CBBF7BAA874_gshared (ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 * L_0 = (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)__this->get_m_Trackables_7();
		TrackableCollection_1_t4F672148E28A41F14EAE569661A96270A528E608  L_1;
		memset((&L_1), 0, sizeof(L_1));
		TrackableCollection_1__ctor_mA99D3D41CAA02EF94BD2B96D6DC1B66450E226FF((&L_1), (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		return L_1;
	}
}
// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::get_sessionOrigin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * ARTrackableManager_4_get_sessionOrigin_m892201565A27DF3560D50CE75D03430240ADB5B5_gshared (ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E * __this, const RuntimeMethod* method)
{
	{
		ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * L_0 = (ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF *)__this->get_U3CsessionOriginU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::set_sessionOrigin(UnityEngine.XR.ARFoundation.ARSessionOrigin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackableManager_4_set_sessionOrigin_m9B5A1BA5BEC958947F00B0EEFBDC2F8C1D4CB36D_gshared (ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E * __this, ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * ___value0, const RuntimeMethod* method)
{
	{
		ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * L_0 = ___value0;
		__this->set_U3CsessionOriginU3Ek__BackingField_6(L_0);
		return;
	}
}
// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::GetPrefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ARTrackableManager_4_GetPrefab_m2AF25399D2CC10D0046342A934C2176D74D3A0A1_gshared (ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E * __this, const RuntimeMethod* method)
{
	{
		return (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackableManager_4_Awake_mD4E9BB4AB7CCFB56C4B1B0529475C7F6C90839E1_gshared (ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARTrackableManager_4_Awake_mD4E9BB4AB7CCFB56C4B1B0529475C7F6C90839E1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 * L_0 = (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		__this->set_m_Trackables_7(L_0);
		Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 * L_1 = (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		__this->set_m_PendingAdds_8(L_1);
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this);
		ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * L_2 = Component_GetComponent_TisARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF_m25BC8791B994BAE33BF9003FFC85124F480EFB17((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this, /*hidden argument*/Component_GetComponent_TisARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF_m25BC8791B994BAE33BF9003FFC85124F480EFB17_RuntimeMethod_var);
		NullCheck((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *)__this);
		((  void (*) (ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *, ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *)__this, (ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackableManager_4_Update_mCAA957D4837B34BC150341165DAEDBBAD2AF33EB_gshared (ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARTrackableManager_4_Update_mCAA957D4837B34BC150341165DAEDBBAD2AF33EB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Enumerator_t1B7E0D23EF4C33682EFE99D8F58153FDA8CB6ACD  V_2;
	memset((&V_2), 0, sizeof(V_2));
	XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  V_3;
	memset((&V_3), 0, sizeof(V_3));
	XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  V_4;
	memset((&V_4), 0, sizeof(V_4));
	NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Enumerator_tDB12EE5618B415F0FB5AEEE49E6F2F41DFB2FD0A  V_6;
	memset((&V_6), 0, sizeof(V_6));
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  V_7;
	memset((&V_7), 0, sizeof(V_7));
	RuntimeObject * V_8 = NULL;
	Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  V_9;
	memset((&V_9), 0, sizeof(V_9));
	RuntimeObject * V_10 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 5);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		NullCheck((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this);
		RuntimeObject * L_0 = ((  RuntimeObject * (*) (SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		return;
	}

IL_000e:
	{
		NullCheck((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		NullCheck((TrackingSubsystem_2_t1EC759A75AE7EFD4E4446A20009C8472E1C8AED1 *)L_1);
		TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB  L_2 = VirtFuncInvoker1< TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB , int32_t >::Invoke(8 /* UnityEngine.XR.ARSubsystems.TrackableChanges`1<!0> UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::GetChanges(Unity.Collections.Allocator) */, (TrackingSubsystem_2_t1EC759A75AE7EFD4E4446A20009C8472E1C8AED1 *)L_1, (int32_t)2);
		V_0 = (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB )L_2;
	}

IL_0020:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8));
			List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_3 = ((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8)))->get_s_Added_9();
			NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  L_4 = TrackableChanges_1_get_added_mBB3A80E298216A6D8826422F62A11A1A4CB7CBD9_inline((TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *)(TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
			V_1 = (NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 )L_4;
			int32_t L_5 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 *)(NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 *)(&V_1))->___m_Length_1);
			((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_3, (int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12));
			NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  L_6 = TrackableChanges_1_get_added_mBB3A80E298216A6D8826422F62A11A1A4CB7CBD9_inline((TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *)(TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
			V_1 = (NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 )L_6;
			Enumerator_t1B7E0D23EF4C33682EFE99D8F58153FDA8CB6ACD  L_7 = NativeArray_1_GetEnumerator_m2C26DDBD2232F1DC6F216C47B66A5CCEC71C8292((NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 *)(NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13));
			V_2 = (Enumerator_t1B7E0D23EF4C33682EFE99D8F58153FDA8CB6ACD )L_7;
		}

IL_0049:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0064;
			}

IL_004b:
			{
				XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  L_8 = Enumerator_get_Current_mAAA11BD869C8818266133A03BEC94087AB76BB57((Enumerator_t1B7E0D23EF4C33682EFE99D8F58153FDA8CB6ACD *)(Enumerator_t1B7E0D23EF4C33682EFE99D8F58153FDA8CB6ACD *)(&V_2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
				V_3 = (XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 )L_8;
				IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8));
				List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_9 = ((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8)))->get_s_Added_9();
				XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  L_10 = V_3;
				NullCheck((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *)__this);
				RuntimeObject * L_11 = ((  RuntimeObject * (*) (ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *, XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *)__this, (XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 )L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
				NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_9);
				((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_9, (RuntimeObject *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16));
			}

IL_0064:
			{
				bool L_12 = Enumerator_MoveNext_mD818C7168685197B0033FF034038DE1441498637((Enumerator_t1B7E0D23EF4C33682EFE99D8F58153FDA8CB6ACD *)(Enumerator_t1B7E0D23EF4C33682EFE99D8F58153FDA8CB6ACD *)(&V_2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17));
				if (L_12)
				{
					goto IL_004b;
				}
			}

IL_006d:
			{
				IL2CPP_LEAVE(0x7D, FINALLY_006f);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_006f;
		}

FINALLY_006f:
		{ // begin finally (depth: 2)
			Il2CppFakeBox<Enumerator_t1B7E0D23EF4C33682EFE99D8F58153FDA8CB6ACD > L_13(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 18), (&V_2));
			const VirtualInvokeData& il2cpp_virtual_invoke_data__119 = il2cpp_codegen_get_interface_invoke_data(0, (&L_13), IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var);
			((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__119.methodPtr)((RuntimeObject*)(&L_13), /*hidden argument*/il2cpp_virtual_invoke_data__119.method);
			V_2 = L_13.m_Value;
			IL2CPP_END_FINALLY(111)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(111)
		{
			IL2CPP_JUMP_TBL(0x7D, IL_007d)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_007d:
		{
			IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8));
			List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_14 = ((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8)))->get_s_Updated_10();
			NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  L_15 = TrackableChanges_1_get_updated_m80DB51775906B404AEE4C7454E7A517ECFD6A003_inline((TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *)(TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 19));
			V_1 = (NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 )L_15;
			int32_t L_16 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 *)(NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 *)(&V_1))->___m_Length_1);
			((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_14, (int32_t)L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12));
			NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  L_17 = TrackableChanges_1_get_updated_m80DB51775906B404AEE4C7454E7A517ECFD6A003_inline((TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *)(TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 19));
			V_1 = (NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 )L_17;
			Enumerator_t1B7E0D23EF4C33682EFE99D8F58153FDA8CB6ACD  L_18 = NativeArray_1_GetEnumerator_m2C26DDBD2232F1DC6F216C47B66A5CCEC71C8292((NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 *)(NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13));
			V_2 = (Enumerator_t1B7E0D23EF4C33682EFE99D8F58153FDA8CB6ACD )L_18;
		}

IL_00a6:
		try
		{ // begin try (depth: 2)
			{
				goto IL_00c3;
			}

IL_00a8:
			{
				XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  L_19 = Enumerator_get_Current_mAAA11BD869C8818266133A03BEC94087AB76BB57((Enumerator_t1B7E0D23EF4C33682EFE99D8F58153FDA8CB6ACD *)(Enumerator_t1B7E0D23EF4C33682EFE99D8F58153FDA8CB6ACD *)(&V_2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
				V_4 = (XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 )L_19;
				IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8));
				List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_20 = ((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8)))->get_s_Updated_10();
				XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  L_21 = V_4;
				NullCheck((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *)__this);
				RuntimeObject * L_22 = ((  RuntimeObject * (*) (ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *, XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *)__this, (XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 )L_21, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
				NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_20);
				((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_20, (RuntimeObject *)L_22, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16));
			}

IL_00c3:
			{
				bool L_23 = Enumerator_MoveNext_mD818C7168685197B0033FF034038DE1441498637((Enumerator_t1B7E0D23EF4C33682EFE99D8F58153FDA8CB6ACD *)(Enumerator_t1B7E0D23EF4C33682EFE99D8F58153FDA8CB6ACD *)(&V_2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17));
				if (L_23)
				{
					goto IL_00a8;
				}
			}

IL_00cc:
			{
				IL2CPP_LEAVE(0xDC, FINALLY_00ce);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00ce;
		}

FINALLY_00ce:
		{ // begin finally (depth: 2)
			Il2CppFakeBox<Enumerator_t1B7E0D23EF4C33682EFE99D8F58153FDA8CB6ACD > L_24(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 18), (&V_2));
			const VirtualInvokeData& il2cpp_virtual_invoke_data__214 = il2cpp_codegen_get_interface_invoke_data(0, (&L_24), IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var);
			((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__214.methodPtr)((RuntimeObject*)(&L_24), /*hidden argument*/il2cpp_virtual_invoke_data__214.method);
			V_2 = L_24.m_Value;
			IL2CPP_END_FINALLY(206)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(206)
		{
			IL2CPP_JUMP_TBL(0xDC, IL_00dc)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_00dc:
		{
			IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8));
			List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_25 = ((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8)))->get_s_Removed_11();
			NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_26 = TrackableChanges_1_get_removed_mC49E91CAF67469CDD76DBCF18D1423DC3971AF99_inline((TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *)(TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 20));
			V_5 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )L_26;
			int32_t L_27 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)(&V_5))->___m_Length_1);
			((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_25, (int32_t)L_27, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12));
			NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_28 = TrackableChanges_1_get_removed_mC49E91CAF67469CDD76DBCF18D1423DC3971AF99_inline((TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *)(TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 20));
			V_5 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )L_28;
			Enumerator_tDB12EE5618B415F0FB5AEEE49E6F2F41DFB2FD0A  L_29 = NativeArray_1_GetEnumerator_m3B6CA1981A8CE62A1C67FCEEBE1887CD32906DA2((NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)(&V_5), /*hidden argument*/NativeArray_1_GetEnumerator_m3B6CA1981A8CE62A1C67FCEEBE1887CD32906DA2_RuntimeMethod_var);
			V_6 = (Enumerator_tDB12EE5618B415F0FB5AEEE49E6F2F41DFB2FD0A )L_29;
		}

IL_0108:
		try
		{ // begin try (depth: 2)
			{
				goto IL_013e;
			}

IL_010a:
			{
				TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_30 = Enumerator_get_Current_m913D10AD892E19937C638773D208459E9862248D((Enumerator_tDB12EE5618B415F0FB5AEEE49E6F2F41DFB2FD0A *)(Enumerator_tDB12EE5618B415F0FB5AEEE49E6F2F41DFB2FD0A *)(&V_6), /*hidden argument*/Enumerator_get_Current_m913D10AD892E19937C638773D208459E9862248D_RuntimeMethod_var);
				V_7 = (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_30;
				Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 * L_31 = (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)__this->get_m_Trackables_7();
				TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_32 = V_7;
				NullCheck((Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)L_31);
				bool L_33 = ((  bool (*) (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , RuntimeObject **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21)->methodPointer)((Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)L_31, (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_32, (RuntimeObject **)(RuntimeObject **)(&V_8), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21));
				if (!L_33)
				{
					goto IL_013e;
				}
			}

IL_0124:
			{
				Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 * L_34 = (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)__this->get_m_Trackables_7();
				TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_35 = V_7;
				NullCheck((Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)L_34);
				((  bool (*) (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 22)->methodPointer)((Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)L_34, (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_35, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 22));
				IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8));
				List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_36 = ((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8)))->get_s_Removed_11();
				RuntimeObject * L_37 = V_8;
				NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_36);
				((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_36, (RuntimeObject *)L_37, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16));
			}

IL_013e:
			{
				bool L_38 = Enumerator_MoveNext_m3C4C0B0B1AE71E65EF8255E6FC671DDBC829B6AA((Enumerator_tDB12EE5618B415F0FB5AEEE49E6F2F41DFB2FD0A *)(Enumerator_tDB12EE5618B415F0FB5AEEE49E6F2F41DFB2FD0A *)(&V_6), /*hidden argument*/Enumerator_MoveNext_m3C4C0B0B1AE71E65EF8255E6FC671DDBC829B6AA_RuntimeMethod_var);
				if (L_38)
				{
					goto IL_010a;
				}
			}

IL_0147:
			{
				IL2CPP_LEAVE(0x165, FINALLY_0149);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0149;
		}

FINALLY_0149:
		{ // begin finally (depth: 2)
			Il2CppFakeBox<Enumerator_tDB12EE5618B415F0FB5AEEE49E6F2F41DFB2FD0A > L_39(Enumerator_tDB12EE5618B415F0FB5AEEE49E6F2F41DFB2FD0A_il2cpp_TypeInfo_var, (&V_6));
			const VirtualInvokeData& il2cpp_virtual_invoke_data__337 = il2cpp_codegen_get_interface_invoke_data(0, (&L_39), IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var);
			((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__337.methodPtr)((RuntimeObject*)(&L_39), /*hidden argument*/il2cpp_virtual_invoke_data__337.method);
			V_6 = L_39.m_Value;
			IL2CPP_END_FINALLY(329)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(329)
		{
			IL2CPP_END_CLEANUP(0x165, FINALLY_0157);
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0157;
	}

FINALLY_0157:
	{ // begin finally (depth: 1)
		Il2CppFakeBox<TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB > L_40(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 23), (&V_0));
		const VirtualInvokeData& il2cpp_virtual_invoke_data__351 = il2cpp_codegen_get_interface_invoke_data(0, (&L_40), IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var);
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__351.methodPtr)((RuntimeObject*)(&L_40), /*hidden argument*/il2cpp_virtual_invoke_data__351.method);
		V_0 = L_40.m_Value;
		IL2CPP_END_FINALLY(343)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(343)
	{
		IL2CPP_JUMP_TBL(0x165, IL_0165)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0165:
	{
	}

IL_0166:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8));
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_41 = ((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8)))->get_s_Added_9();
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_42 = ((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8)))->get_s_Updated_10();
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_43 = ((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8)))->get_s_Removed_11();
		NullCheck((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *)__this);
		VirtActionInvoker3< List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * >::Invoke(14 /* System.Void UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::OnTrackablesChanged(System.Collections.Generic.List`1<TTrackable>,System.Collections.Generic.List`1<TTrackable>,System.Collections.Generic.List`1<TTrackable>) */, (ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *)__this, (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_41, (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_42, (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_43);
		IL2CPP_LEAVE(0x1B6, FINALLY_017d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_017d;
	}

FINALLY_017d:
	{ // begin finally (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8));
			List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_44 = ((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8)))->get_s_Removed_11();
			NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_44);
			Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  L_45 = ((  Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 25)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_44, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 25));
			V_9 = (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD )L_45;
		}

IL_0189:
		try
		{ // begin try (depth: 2)
			{
				goto IL_019c;
			}

IL_018b:
			{
				RuntimeObject * L_46 = Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_inline((Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD *)(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD *)(&V_9), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 26));
				V_10 = (RuntimeObject *)L_46;
				RuntimeObject * L_47 = V_10;
				NullCheck((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *)__this);
				((  void (*) (ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 27)->methodPointer)((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *)__this, (RuntimeObject *)L_47, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 27));
			}

IL_019c:
			{
				bool L_48 = Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34((Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD *)(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD *)(&V_9), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 28));
				if (L_48)
				{
					goto IL_018b;
				}
			}

IL_01a5:
			{
				IL2CPP_LEAVE(0x1B5, FINALLY_01a7);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_01a7;
		}

FINALLY_01a7:
		{ // begin finally (depth: 2)
			Il2CppFakeBox<Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD > L_49(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 29), (&V_9));
			const VirtualInvokeData& il2cpp_virtual_invoke_data__431 = il2cpp_codegen_get_interface_invoke_data(0, (&L_49), IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var);
			((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__431.methodPtr)((RuntimeObject*)(&L_49), /*hidden argument*/il2cpp_virtual_invoke_data__431.method);
			V_9 = L_49.m_Value;
			IL2CPP_END_FINALLY(423)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(423)
		{
			IL2CPP_JUMP_TBL(0x1B5, IL_01b5)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_01b5:
		{
			IL2CPP_END_FINALLY(381)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(381)
	{
		IL2CPP_JUMP_TBL(0x1B6, IL_01b6)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_01b6:
	{
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::OnTrackablesChanged(System.Collections.Generic.List`1<TTrackable>,System.Collections.Generic.List`1<TTrackable>,System.Collections.Generic.List`1<TTrackable>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackableManager_4_OnTrackablesChanged_m34033A9D69C3705FDF08CFA840279230CF33161E_gshared (ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E * __this, List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___added0, List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___updated1, List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___removed2, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::OnAfterSetSessionRelativeData(TTrackable,TSessionRelativeData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackableManager_4_OnAfterSetSessionRelativeData_m38E25115F46983A9A0D31957B64C46C1F5DF73D7_gshared (ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E * __this, RuntimeObject * ___trackable0, XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  ___sessionRelativeData1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// TTrackable UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::CreateTrackableImmediate(TSessionRelativeData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ARTrackableManager_4_CreateTrackableImmediate_mCA36D9E90162DEF068DFB7D88477A2E759B54667_gshared (ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E * __this, XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  ___sessionRelativeData0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  L_0 = ___sessionRelativeData0;
		NullCheck((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *)__this);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *, XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *)__this, (XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		V_0 = (RuntimeObject *)L_1;
		Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 * L_2 = (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)__this->get_m_PendingAdds_8();
		RuntimeObject * L_3 = V_0;
		NullCheck((ARTrackable_2_tFF59B3769C01557C3557231CD2A26810E2867CCD *)L_3);
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_4 = ((  TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  (*) (ARTrackable_2_tFF59B3769C01557C3557231CD2A26810E2867CCD *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 31)->methodPointer)((ARTrackable_2_tFF59B3769C01557C3557231CD2A26810E2867CCD *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 31));
		RuntimeObject * L_5 = V_0;
		NullCheck((Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)L_2);
		((  void (*) (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 32)->methodPointer)((Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)L_2, (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_4, (RuntimeObject *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 32));
		RuntimeObject * L_6 = V_0;
		return L_6;
	}
}
// System.Boolean UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::DestroyPendingTrackable(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARTrackableManager_4_DestroyPendingTrackable_mB88D4ABB39893E76847DDE6CDEA885F977C554DB_gshared (ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 * L_0 = (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)__this->get_m_PendingAdds_8();
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_1 = ___trackableId0;
		NullCheck((Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)L_0);
		bool L_2 = ((  bool (*) (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , RuntimeObject **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21)->methodPointer)((Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)L_0, (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_1, (RuntimeObject **)(RuntimeObject **)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21));
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 * L_3 = (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)__this->get_m_PendingAdds_8();
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_4 = ___trackableId0;
		NullCheck((Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)L_3);
		((  bool (*) (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 22)->methodPointer)((Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)L_3, (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 22));
		Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 * L_5 = (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)__this->get_m_Trackables_7();
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_6 = ___trackableId0;
		NullCheck((Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)L_5);
		((  bool (*) (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 22)->methodPointer)((Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)L_5, (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 22));
		RuntimeObject * L_7 = V_0;
		NullCheck((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *)__this);
		((  void (*) (ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 27)->methodPointer)((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *)__this, (RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 27));
		return (bool)1;
	}

IL_0033:
	{
		return (bool)0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::ClearAndSetCapacity(System.Collections.Generic.List`1<TTrackable>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackableManager_4_ClearAndSetCapacity_mC67D963FB26EFC585804556D424D414F0F149AE7_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___list0, int32_t ___capacity1, const RuntimeMethod* method)
{
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = ___list0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 33)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 33));
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_1 = ___list0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_1);
		int32_t L_2 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 34)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 34));
		int32_t L_3 = ___capacity1;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_0016;
		}
	}
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_4 = ___list0;
		int32_t L_5 = ___capacity1;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_4);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 35)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_4, (int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 35));
	}

IL_0016:
	{
		return;
	}
}
// System.String UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::GetTrackableName(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ARTrackableManager_4_GetTrackableName_m80A43841E26C94988E274207DD5A22031B949BD2_gshared (ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARTrackableManager_4_GetTrackableName_m80A43841E26C94988E274207DD5A22031B949BD2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NullCheck((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *)__this);
		String_t* L_0 = VirtFuncInvoker0< String_t* >::Invoke(10 /* System.String UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::get_gameObjectName() */, (ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *)__this);
		String_t* L_1 = TrackableId_ToString_mBA49191865E57697F4279D2781B182590726A215((TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 *)(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 *)(&___trackableId0), /*hidden argument*/NULL);
		String_t* L_2 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923((String_t*)L_0, (String_t*)_stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6, (String_t*)L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::CreateGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ARTrackableManager_4_CreateGameObject_m0BB9D3FB8FBC3EF6EDDCDC383A3668A9C7E95E64_gshared (ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARTrackableManager_4_CreateGameObject_m0BB9D3FB8FBC3EF6EDDCDC383A3668A9C7E95E64_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	{
		NullCheck((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *)__this);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = VirtFuncInvoker0< GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * >::Invoke(11 /* UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::GetPrefab() */, (ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *)__this);
		V_0 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mA4DFA8F4471418C248E95B55070665EF344B4B2D(L_3, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_3;
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_4, /*hidden argument*/NULL);
		NullCheck((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *)__this);
		ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * L_6 = ((  ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * (*) (ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 38)->methodPointer)((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 38));
		NullCheck((ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF *)L_6);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = ARSessionOrigin_get_trackablesParent_m37049D7E75CF694834A140C2EACB15D2D1098505_inline((ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF *)L_6, /*hidden argument*/NULL);
		NullCheck((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_5);
		Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_5, (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_7, /*hidden argument*/NULL);
		return L_4;
	}

IL_002c:
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = V_0;
		NullCheck((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *)__this);
		ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * L_9 = ((  ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * (*) (ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 38)->methodPointer)((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 38));
		NullCheck((ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF *)L_9);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = ARSessionOrigin_get_trackablesParent_m37049D7E75CF694834A140C2EACB15D2D1098505_inline((ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF *)L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m1CDF66D563B03D37B37264800222D4F3B307EDA0((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_8, (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_10, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m1CDF66D563B03D37B37264800222D4F3B307EDA0_RuntimeMethod_var);
		return L_11;
	}
}
// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::CreateGameObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ARTrackableManager_4_CreateGameObject_mF55FDACB92066B6E097F1B817672EFDCF1032778_gshared (ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		NullCheck((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *)__this);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 39)->methodPointer)((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 39));
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_0;
		String_t* L_2 = ___name0;
		NullCheck((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_1);
		Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_1, (String_t*)L_2, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::CreateGameObject(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ARTrackableManager_4_CreateGameObject_mDADD5ADF43002AF26784F9C6485CB0221DE3B8D9_gshared (ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId0, const RuntimeMethod* method)
{
	{
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_0 = ___trackableId0;
		NullCheck((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *)__this);
		String_t* L_1 = ((  String_t* (*) (ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 40)->methodPointer)((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *)__this, (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 40));
		NullCheck((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *)__this);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *, String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 41)->methodPointer)((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *)__this, (String_t*)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 41));
		return L_2;
	}
}
// TTrackable UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::CreateTrackable(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ARTrackableManager_4_CreateTrackable_m784C3D792EBD41DF3A35B8F9808D9C1EB1EB77D6_gshared (ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARTrackableManager_4_CreateTrackable_m784C3D792EBD41DF3A35B8F9808D9C1EB1EB77D6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_0 = ___trackableId0;
		NullCheck((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *)__this);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 42)->methodPointer)((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *)__this, (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 42));
		V_0 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_1;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = V_0;
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_2);
		RuntimeObject * L_3 = ((  RuntimeObject * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 43)->methodPointer)((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 43));
		V_1 = (RuntimeObject *)L_3;
		RuntimeObject * L_4 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = V_0;
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_6);
		RuntimeObject * L_7 = ((  RuntimeObject * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 44)->methodPointer)((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 44));
		V_1 = (RuntimeObject *)L_7;
	}

IL_0024:
	{
		RuntimeObject * L_8 = V_1;
		return L_8;
	}
}
// TTrackable UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::GetOrCreateTrackable(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ARTrackableManager_4_GetOrCreateTrackable_m33D766F1519A10786601D0AA4C4F7E8B101AA0C1_gshared (ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 * L_0 = (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)__this->get_m_Trackables_7();
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_1 = ___trackableId0;
		NullCheck((Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)L_0);
		bool L_2 = ((  bool (*) (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , RuntimeObject **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21)->methodPointer)((Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)L_0, (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_1, (RuntimeObject **)(RuntimeObject **)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21));
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 * L_3 = (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)__this->get_m_PendingAdds_8();
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_4 = ___trackableId0;
		NullCheck((Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)L_3);
		((  bool (*) (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 22)->methodPointer)((Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)L_3, (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 22));
		goto IL_0034;
	}

IL_001f:
	{
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_5 = ___trackableId0;
		NullCheck((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *)__this);
		RuntimeObject * L_6 = ((  RuntimeObject * (*) (ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 45)->methodPointer)((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *)__this, (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 45));
		V_0 = (RuntimeObject *)L_6;
		Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 * L_7 = (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)__this->get_m_Trackables_7();
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_8 = ___trackableId0;
		RuntimeObject * L_9 = V_0;
		NullCheck((Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)L_7);
		((  void (*) (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 32)->methodPointer)((Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)L_7, (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 32));
	}

IL_0034:
	{
		RuntimeObject * L_10 = V_0;
		return L_10;
	}
}
// TTrackable UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::CreateOrUpdateTrackable(TSessionRelativeData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ARTrackableManager_4_CreateOrUpdateTrackable_m4BBD5964487FF41BF86C544D43BD32BD50F502D5_gshared (ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E * __this, XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  ___sessionRelativeData0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_0 = XRPointCloud_get_trackableId_mA394197EAD026665FC02A1118CBBB46FF6873EF1_inline((XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 *)(XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 *)(&___sessionRelativeData0), /*hidden argument*/NULL);
		NullCheck((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *)__this);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 47)->methodPointer)((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *)__this, (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 47));
		V_0 = (RuntimeObject *)L_1;
		RuntimeObject * L_2 = V_0;
		XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  L_3 = ___sessionRelativeData0;
		NullCheck((ARTrackable_2_tFF59B3769C01557C3557231CD2A26810E2867CCD *)L_2);
		((  void (*) (ARTrackable_2_tFF59B3769C01557C3557231CD2A26810E2867CCD *, XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 48)->methodPointer)((ARTrackable_2_tFF59B3769C01557C3557231CD2A26810E2867CCD *)L_2, (XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 )L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 48));
		RuntimeObject * L_4 = V_0;
		XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  L_5 = ___sessionRelativeData0;
		NullCheck((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *)__this);
		VirtActionInvoker2< RuntimeObject *, XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  >::Invoke(15 /* System.Void UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::OnAfterSetSessionRelativeData(TTrackable,TSessionRelativeData) */, (ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *)__this, (RuntimeObject *)L_4, (XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 )L_5);
		RuntimeObject * L_6 = V_0;
		NullCheck((ARTrackable_2_tFF59B3769C01557C3557231CD2A26810E2867CCD *)L_6);
		VirtActionInvoker0::Invoke(4 /* System.Void UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::OnAfterSetSessionRelativeData() */, (ARTrackable_2_tFF59B3769C01557C3557231CD2A26810E2867CCD *)L_6);
		RuntimeObject * L_7 = V_0;
		return L_7;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::DestroyTrackable(TTrackable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackableManager_4_DestroyTrackable_m5C77DDD122C825943130C2C446F6544082A075F0_gshared (ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E * __this, RuntimeObject * ___trackable0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARTrackableManager_4_DestroyTrackable_m5C77DDD122C825943130C2C446F6544082A075F0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___trackable0;
		NullCheck((ARTrackable_2_tFF59B3769C01557C3557231CD2A26810E2867CCD *)L_0);
		bool L_1 = ((  bool (*) (ARTrackable_2_tFF59B3769C01557C3557231CD2A26810E2867CCD *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 51)->methodPointer)((ARTrackable_2_tFF59B3769C01557C3557231CD2A26810E2867CCD *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 51));
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject * L_2 = ___trackable0;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_2);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_3, /*hidden argument*/NULL);
	}

IL_001d:
	{
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackableManager_4__ctor_m8614FAC9615C64E6CCB0A0C83C9567D69DB04794_gshared (ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E * __this, const RuntimeMethod* method)
{
	{
		NullCheck((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 52)->methodPointer)((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 52));
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackableManager_4__cctor_mF634280B75354D207BA476C0A356D928CADB0BFD_gshared (const RuntimeMethod* method)
{
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 53));
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 54)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 54));
		((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 8)))->set_s_Added_9(L_0);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_1 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 53));
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 54)->methodPointer)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 54));
		((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 8)))->set_s_Updated_10(L_1);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_2 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 53));
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 54)->methodPointer)(L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 54));
		((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 8)))->set_s_Removed_11(L_2);
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
// UnityEngine.XR.ARFoundation.TrackableCollection`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::get_trackables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableCollection_1_t4F672148E28A41F14EAE569661A96270A528E608  ARTrackableManager_4_get_trackables_m6CE4280BC89E0B96C1B6EDB67FDAE107FFB748DE_gshared (ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 * L_0 = (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)__this->get_m_Trackables_7();
		TrackableCollection_1_t4F672148E28A41F14EAE569661A96270A528E608  L_1;
		memset((&L_1), 0, sizeof(L_1));
		TrackableCollection_1__ctor_mA99D3D41CAA02EF94BD2B96D6DC1B66450E226FF((&L_1), (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		return L_1;
	}
}
// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::get_sessionOrigin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * ARTrackableManager_4_get_sessionOrigin_m39BF6390C2FAD618E1A7A5452B5F6CD3BE7A7D87_gshared (ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 * __this, const RuntimeMethod* method)
{
	{
		ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * L_0 = (ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF *)__this->get_U3CsessionOriginU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::set_sessionOrigin(UnityEngine.XR.ARFoundation.ARSessionOrigin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackableManager_4_set_sessionOrigin_m189DBA06B0D6D01E951CF0674C2054A0EB5D3B99_gshared (ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 * __this, ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * ___value0, const RuntimeMethod* method)
{
	{
		ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * L_0 = ___value0;
		__this->set_U3CsessionOriginU3Ek__BackingField_6(L_0);
		return;
	}
}
// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::GetPrefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ARTrackableManager_4_GetPrefab_mE7E2DCC7682486B1E3658018B205D6CCB78F8F18_gshared (ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 * __this, const RuntimeMethod* method)
{
	{
		return (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackableManager_4_Awake_mE74D7D15F5EE5CB93D096FE4CA47D8C541C96454_gshared (ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARTrackableManager_4_Awake_mE74D7D15F5EE5CB93D096FE4CA47D8C541C96454_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 * L_0 = (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		__this->set_m_Trackables_7(L_0);
		Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 * L_1 = (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		__this->set_m_PendingAdds_8(L_1);
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this);
		ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * L_2 = Component_GetComponent_TisARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF_m25BC8791B994BAE33BF9003FFC85124F480EFB17((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this, /*hidden argument*/Component_GetComponent_TisARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF_m25BC8791B994BAE33BF9003FFC85124F480EFB17_RuntimeMethod_var);
		NullCheck((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *)__this);
		((  void (*) (ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *, ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *)__this, (ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackableManager_4_Update_mFCCE7C2A3D4569CD1E50995E00066A9A603D706E_gshared (ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARTrackableManager_4_Update_mFCCE7C2A3D4569CD1E50995E00066A9A603D706E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Enumerator_t533CE786298995A804A1B61701D6400CF4483B1E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  V_3;
	memset((&V_3), 0, sizeof(V_3));
	XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  V_4;
	memset((&V_4), 0, sizeof(V_4));
	NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Enumerator_tDB12EE5618B415F0FB5AEEE49E6F2F41DFB2FD0A  V_6;
	memset((&V_6), 0, sizeof(V_6));
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  V_7;
	memset((&V_7), 0, sizeof(V_7));
	RuntimeObject * V_8 = NULL;
	Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  V_9;
	memset((&V_9), 0, sizeof(V_9));
	RuntimeObject * V_10 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 5);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		NullCheck((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this);
		RuntimeObject * L_0 = ((  RuntimeObject * (*) (SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		return;
	}

IL_000e:
	{
		NullCheck((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		NullCheck((TrackingSubsystem_2_tA3D4B822865BAE0754B253CF8551A3EBB7073851 *)L_1);
		TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF  L_2 = VirtFuncInvoker1< TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF , int32_t >::Invoke(8 /* UnityEngine.XR.ARSubsystems.TrackableChanges`1<!0> UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::GetChanges(Unity.Collections.Allocator) */, (TrackingSubsystem_2_tA3D4B822865BAE0754B253CF8551A3EBB7073851 *)L_1, (int32_t)2);
		V_0 = (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF )L_2;
	}

IL_0020:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8));
			List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_3 = ((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8)))->get_s_Added_9();
			NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  L_4 = TrackableChanges_1_get_added_mC31FEFAAC8F70ABBBC324DC618B0DFAB08AAE934_inline((TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *)(TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
			V_1 = (NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 )L_4;
			int32_t L_5 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 *)(NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 *)(&V_1))->___m_Length_1);
			((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_3, (int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12));
			NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  L_6 = TrackableChanges_1_get_added_mC31FEFAAC8F70ABBBC324DC618B0DFAB08AAE934_inline((TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *)(TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
			V_1 = (NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 )L_6;
			Enumerator_t533CE786298995A804A1B61701D6400CF4483B1E  L_7 = NativeArray_1_GetEnumerator_m0AE193D90C66BD2CB22C49D77323F1BD7775FBF9((NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 *)(NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13));
			V_2 = (Enumerator_t533CE786298995A804A1B61701D6400CF4483B1E )L_7;
		}

IL_0049:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0064;
			}

IL_004b:
			{
				XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  L_8 = Enumerator_get_Current_m1E16327F75D3A7E6496D252BD730CE3B55858FE7((Enumerator_t533CE786298995A804A1B61701D6400CF4483B1E *)(Enumerator_t533CE786298995A804A1B61701D6400CF4483B1E *)(&V_2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
				V_3 = (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 )L_8;
				IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8));
				List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_9 = ((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8)))->get_s_Added_9();
				XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  L_10 = V_3;
				NullCheck((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *)__this);
				RuntimeObject * L_11 = ((  RuntimeObject * (*) (ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *, XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *)__this, (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 )L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
				NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_9);
				((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_9, (RuntimeObject *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16));
			}

IL_0064:
			{
				bool L_12 = Enumerator_MoveNext_m345699420F154E8E5508CE0A44444F14EFD566B2((Enumerator_t533CE786298995A804A1B61701D6400CF4483B1E *)(Enumerator_t533CE786298995A804A1B61701D6400CF4483B1E *)(&V_2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17));
				if (L_12)
				{
					goto IL_004b;
				}
			}

IL_006d:
			{
				IL2CPP_LEAVE(0x7D, FINALLY_006f);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_006f;
		}

FINALLY_006f:
		{ // begin finally (depth: 2)
			Il2CppFakeBox<Enumerator_t533CE786298995A804A1B61701D6400CF4483B1E > L_13(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 18), (&V_2));
			const VirtualInvokeData& il2cpp_virtual_invoke_data__119 = il2cpp_codegen_get_interface_invoke_data(0, (&L_13), IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var);
			((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__119.methodPtr)((RuntimeObject*)(&L_13), /*hidden argument*/il2cpp_virtual_invoke_data__119.method);
			V_2 = L_13.m_Value;
			IL2CPP_END_FINALLY(111)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(111)
		{
			IL2CPP_JUMP_TBL(0x7D, IL_007d)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_007d:
		{
			IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8));
			List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_14 = ((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8)))->get_s_Updated_10();
			NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  L_15 = TrackableChanges_1_get_updated_m54C710EFD531DFB25ABA289B60FAA4181D479DDF_inline((TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *)(TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 19));
			V_1 = (NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 )L_15;
			int32_t L_16 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 *)(NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 *)(&V_1))->___m_Length_1);
			((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_14, (int32_t)L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12));
			NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  L_17 = TrackableChanges_1_get_updated_m54C710EFD531DFB25ABA289B60FAA4181D479DDF_inline((TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *)(TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 19));
			V_1 = (NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 )L_17;
			Enumerator_t533CE786298995A804A1B61701D6400CF4483B1E  L_18 = NativeArray_1_GetEnumerator_m0AE193D90C66BD2CB22C49D77323F1BD7775FBF9((NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 *)(NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13));
			V_2 = (Enumerator_t533CE786298995A804A1B61701D6400CF4483B1E )L_18;
		}

IL_00a6:
		try
		{ // begin try (depth: 2)
			{
				goto IL_00c3;
			}

IL_00a8:
			{
				XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  L_19 = Enumerator_get_Current_m1E16327F75D3A7E6496D252BD730CE3B55858FE7((Enumerator_t533CE786298995A804A1B61701D6400CF4483B1E *)(Enumerator_t533CE786298995A804A1B61701D6400CF4483B1E *)(&V_2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
				V_4 = (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 )L_19;
				IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8));
				List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_20 = ((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8)))->get_s_Updated_10();
				XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  L_21 = V_4;
				NullCheck((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *)__this);
				RuntimeObject * L_22 = ((  RuntimeObject * (*) (ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *, XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *)__this, (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 )L_21, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
				NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_20);
				((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_20, (RuntimeObject *)L_22, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16));
			}

IL_00c3:
			{
				bool L_23 = Enumerator_MoveNext_m345699420F154E8E5508CE0A44444F14EFD566B2((Enumerator_t533CE786298995A804A1B61701D6400CF4483B1E *)(Enumerator_t533CE786298995A804A1B61701D6400CF4483B1E *)(&V_2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17));
				if (L_23)
				{
					goto IL_00a8;
				}
			}

IL_00cc:
			{
				IL2CPP_LEAVE(0xDC, FINALLY_00ce);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00ce;
		}

FINALLY_00ce:
		{ // begin finally (depth: 2)
			Il2CppFakeBox<Enumerator_t533CE786298995A804A1B61701D6400CF4483B1E > L_24(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 18), (&V_2));
			const VirtualInvokeData& il2cpp_virtual_invoke_data__214 = il2cpp_codegen_get_interface_invoke_data(0, (&L_24), IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var);
			((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__214.methodPtr)((RuntimeObject*)(&L_24), /*hidden argument*/il2cpp_virtual_invoke_data__214.method);
			V_2 = L_24.m_Value;
			IL2CPP_END_FINALLY(206)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(206)
		{
			IL2CPP_JUMP_TBL(0xDC, IL_00dc)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_00dc:
		{
			IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8));
			List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_25 = ((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8)))->get_s_Removed_11();
			NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_26 = TrackableChanges_1_get_removed_m9781A441FA95E17CBDB3C4687247859A562AF077_inline((TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *)(TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 20));
			V_5 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )L_26;
			int32_t L_27 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)(&V_5))->___m_Length_1);
			((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_25, (int32_t)L_27, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12));
			NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_28 = TrackableChanges_1_get_removed_m9781A441FA95E17CBDB3C4687247859A562AF077_inline((TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *)(TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 20));
			V_5 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )L_28;
			Enumerator_tDB12EE5618B415F0FB5AEEE49E6F2F41DFB2FD0A  L_29 = NativeArray_1_GetEnumerator_m3B6CA1981A8CE62A1C67FCEEBE1887CD32906DA2((NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)(&V_5), /*hidden argument*/NativeArray_1_GetEnumerator_m3B6CA1981A8CE62A1C67FCEEBE1887CD32906DA2_RuntimeMethod_var);
			V_6 = (Enumerator_tDB12EE5618B415F0FB5AEEE49E6F2F41DFB2FD0A )L_29;
		}

IL_0108:
		try
		{ // begin try (depth: 2)
			{
				goto IL_013e;
			}

IL_010a:
			{
				TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_30 = Enumerator_get_Current_m913D10AD892E19937C638773D208459E9862248D((Enumerator_tDB12EE5618B415F0FB5AEEE49E6F2F41DFB2FD0A *)(Enumerator_tDB12EE5618B415F0FB5AEEE49E6F2F41DFB2FD0A *)(&V_6), /*hidden argument*/Enumerator_get_Current_m913D10AD892E19937C638773D208459E9862248D_RuntimeMethod_var);
				V_7 = (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_30;
				Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 * L_31 = (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)__this->get_m_Trackables_7();
				TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_32 = V_7;
				NullCheck((Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)L_31);
				bool L_33 = ((  bool (*) (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , RuntimeObject **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21)->methodPointer)((Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)L_31, (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_32, (RuntimeObject **)(RuntimeObject **)(&V_8), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21));
				if (!L_33)
				{
					goto IL_013e;
				}
			}

IL_0124:
			{
				Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 * L_34 = (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)__this->get_m_Trackables_7();
				TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_35 = V_7;
				NullCheck((Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)L_34);
				((  bool (*) (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 22)->methodPointer)((Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)L_34, (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_35, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 22));
				IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8));
				List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_36 = ((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8)))->get_s_Removed_11();
				RuntimeObject * L_37 = V_8;
				NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_36);
				((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_36, (RuntimeObject *)L_37, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16));
			}

IL_013e:
			{
				bool L_38 = Enumerator_MoveNext_m3C4C0B0B1AE71E65EF8255E6FC671DDBC829B6AA((Enumerator_tDB12EE5618B415F0FB5AEEE49E6F2F41DFB2FD0A *)(Enumerator_tDB12EE5618B415F0FB5AEEE49E6F2F41DFB2FD0A *)(&V_6), /*hidden argument*/Enumerator_MoveNext_m3C4C0B0B1AE71E65EF8255E6FC671DDBC829B6AA_RuntimeMethod_var);
				if (L_38)
				{
					goto IL_010a;
				}
			}

IL_0147:
			{
				IL2CPP_LEAVE(0x165, FINALLY_0149);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0149;
		}

FINALLY_0149:
		{ // begin finally (depth: 2)
			Il2CppFakeBox<Enumerator_tDB12EE5618B415F0FB5AEEE49E6F2F41DFB2FD0A > L_39(Enumerator_tDB12EE5618B415F0FB5AEEE49E6F2F41DFB2FD0A_il2cpp_TypeInfo_var, (&V_6));
			const VirtualInvokeData& il2cpp_virtual_invoke_data__337 = il2cpp_codegen_get_interface_invoke_data(0, (&L_39), IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var);
			((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__337.methodPtr)((RuntimeObject*)(&L_39), /*hidden argument*/il2cpp_virtual_invoke_data__337.method);
			V_6 = L_39.m_Value;
			IL2CPP_END_FINALLY(329)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(329)
		{
			IL2CPP_END_CLEANUP(0x165, FINALLY_0157);
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0157;
	}

FINALLY_0157:
	{ // begin finally (depth: 1)
		Il2CppFakeBox<TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF > L_40(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 23), (&V_0));
		const VirtualInvokeData& il2cpp_virtual_invoke_data__351 = il2cpp_codegen_get_interface_invoke_data(0, (&L_40), IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var);
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__351.methodPtr)((RuntimeObject*)(&L_40), /*hidden argument*/il2cpp_virtual_invoke_data__351.method);
		V_0 = L_40.m_Value;
		IL2CPP_END_FINALLY(343)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(343)
	{
		IL2CPP_JUMP_TBL(0x165, IL_0165)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0165:
	{
	}

IL_0166:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8));
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_41 = ((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8)))->get_s_Added_9();
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_42 = ((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8)))->get_s_Updated_10();
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_43 = ((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8)))->get_s_Removed_11();
		NullCheck((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *)__this);
		VirtActionInvoker3< List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * >::Invoke(14 /* System.Void UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::OnTrackablesChanged(System.Collections.Generic.List`1<TTrackable>,System.Collections.Generic.List`1<TTrackable>,System.Collections.Generic.List`1<TTrackable>) */, (ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *)__this, (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_41, (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_42, (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_43);
		IL2CPP_LEAVE(0x1B6, FINALLY_017d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_017d;
	}

FINALLY_017d:
	{ // begin finally (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8));
			List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_44 = ((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8)))->get_s_Removed_11();
			NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_44);
			Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  L_45 = ((  Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 25)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_44, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 25));
			V_9 = (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD )L_45;
		}

IL_0189:
		try
		{ // begin try (depth: 2)
			{
				goto IL_019c;
			}

IL_018b:
			{
				RuntimeObject * L_46 = Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_inline((Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD *)(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD *)(&V_9), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 26));
				V_10 = (RuntimeObject *)L_46;
				RuntimeObject * L_47 = V_10;
				NullCheck((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *)__this);
				((  void (*) (ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 27)->methodPointer)((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *)__this, (RuntimeObject *)L_47, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 27));
			}

IL_019c:
			{
				bool L_48 = Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34((Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD *)(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD *)(&V_9), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 28));
				if (L_48)
				{
					goto IL_018b;
				}
			}

IL_01a5:
			{
				IL2CPP_LEAVE(0x1B5, FINALLY_01a7);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_01a7;
		}

FINALLY_01a7:
		{ // begin finally (depth: 2)
			Il2CppFakeBox<Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD > L_49(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 29), (&V_9));
			const VirtualInvokeData& il2cpp_virtual_invoke_data__431 = il2cpp_codegen_get_interface_invoke_data(0, (&L_49), IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var);
			((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__431.methodPtr)((RuntimeObject*)(&L_49), /*hidden argument*/il2cpp_virtual_invoke_data__431.method);
			V_9 = L_49.m_Value;
			IL2CPP_END_FINALLY(423)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(423)
		{
			IL2CPP_JUMP_TBL(0x1B5, IL_01b5)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_01b5:
		{
			IL2CPP_END_FINALLY(381)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(381)
	{
		IL2CPP_JUMP_TBL(0x1B6, IL_01b6)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_01b6:
	{
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::OnTrackablesChanged(System.Collections.Generic.List`1<TTrackable>,System.Collections.Generic.List`1<TTrackable>,System.Collections.Generic.List`1<TTrackable>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackableManager_4_OnTrackablesChanged_mEE77BD11633108F80C07BECBB0F8FADDA12C03C8_gshared (ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 * __this, List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___added0, List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___updated1, List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___removed2, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::OnAfterSetSessionRelativeData(TTrackable,TSessionRelativeData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackableManager_4_OnAfterSetSessionRelativeData_m4FA9343E6D237386B87C185EB9197BB0FFADD3EA_gshared (ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 * __this, RuntimeObject * ___trackable0, XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  ___sessionRelativeData1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// TTrackable UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::CreateTrackableImmediate(TSessionRelativeData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ARTrackableManager_4_CreateTrackableImmediate_m11F02086CC33E98CDF78DD77A0E62C9A8FFB6339_gshared (ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 * __this, XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  ___sessionRelativeData0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  L_0 = ___sessionRelativeData0;
		NullCheck((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *)__this);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *, XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *)__this, (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		V_0 = (RuntimeObject *)L_1;
		Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 * L_2 = (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)__this->get_m_PendingAdds_8();
		RuntimeObject * L_3 = V_0;
		NullCheck((ARTrackable_2_t88913A417566AF8EAF80C0FF131EC194E7A0E7B4 *)L_3);
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_4 = ((  TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  (*) (ARTrackable_2_t88913A417566AF8EAF80C0FF131EC194E7A0E7B4 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 31)->methodPointer)((ARTrackable_2_t88913A417566AF8EAF80C0FF131EC194E7A0E7B4 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 31));
		RuntimeObject * L_5 = V_0;
		NullCheck((Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)L_2);
		((  void (*) (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 32)->methodPointer)((Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)L_2, (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_4, (RuntimeObject *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 32));
		RuntimeObject * L_6 = V_0;
		return L_6;
	}
}
// System.Boolean UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::DestroyPendingTrackable(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARTrackableManager_4_DestroyPendingTrackable_m654D1A0BD40A323AFA8DA8E44CAB579207C8F027_gshared (ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 * L_0 = (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)__this->get_m_PendingAdds_8();
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_1 = ___trackableId0;
		NullCheck((Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)L_0);
		bool L_2 = ((  bool (*) (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , RuntimeObject **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21)->methodPointer)((Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)L_0, (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_1, (RuntimeObject **)(RuntimeObject **)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21));
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 * L_3 = (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)__this->get_m_PendingAdds_8();
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_4 = ___trackableId0;
		NullCheck((Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)L_3);
		((  bool (*) (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 22)->methodPointer)((Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)L_3, (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 22));
		Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 * L_5 = (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)__this->get_m_Trackables_7();
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_6 = ___trackableId0;
		NullCheck((Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)L_5);
		((  bool (*) (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 22)->methodPointer)((Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)L_5, (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 22));
		RuntimeObject * L_7 = V_0;
		NullCheck((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *)__this);
		((  void (*) (ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 27)->methodPointer)((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *)__this, (RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 27));
		return (bool)1;
	}

IL_0033:
	{
		return (bool)0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::ClearAndSetCapacity(System.Collections.Generic.List`1<TTrackable>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackableManager_4_ClearAndSetCapacity_mC8ADC7FCBB09C3F5639249F689AEA8BC1E587087_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___list0, int32_t ___capacity1, const RuntimeMethod* method)
{
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = ___list0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 33)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 33));
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_1 = ___list0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_1);
		int32_t L_2 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 34)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 34));
		int32_t L_3 = ___capacity1;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_0016;
		}
	}
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_4 = ___list0;
		int32_t L_5 = ___capacity1;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_4);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 35)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_4, (int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 35));
	}

IL_0016:
	{
		return;
	}
}
// System.String UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::GetTrackableName(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ARTrackableManager_4_GetTrackableName_m3A729E918B8EE0054C786CDE02ECF256277A5D6D_gshared (ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARTrackableManager_4_GetTrackableName_m3A729E918B8EE0054C786CDE02ECF256277A5D6D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NullCheck((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *)__this);
		String_t* L_0 = VirtFuncInvoker0< String_t* >::Invoke(10 /* System.String UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::get_gameObjectName() */, (ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *)__this);
		String_t* L_1 = TrackableId_ToString_mBA49191865E57697F4279D2781B182590726A215((TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 *)(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 *)(&___trackableId0), /*hidden argument*/NULL);
		String_t* L_2 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923((String_t*)L_0, (String_t*)_stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6, (String_t*)L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::CreateGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ARTrackableManager_4_CreateGameObject_m35CEEE7E63CF3FF55EBACE3EC2A3176DC3751ABD_gshared (ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARTrackableManager_4_CreateGameObject_m35CEEE7E63CF3FF55EBACE3EC2A3176DC3751ABD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	{
		NullCheck((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *)__this);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = VirtFuncInvoker0< GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * >::Invoke(11 /* UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::GetPrefab() */, (ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *)__this);
		V_0 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mA4DFA8F4471418C248E95B55070665EF344B4B2D(L_3, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_3;
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_4, /*hidden argument*/NULL);
		NullCheck((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *)__this);
		ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * L_6 = ((  ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * (*) (ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 38)->methodPointer)((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 38));
		NullCheck((ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF *)L_6);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = ARSessionOrigin_get_trackablesParent_m37049D7E75CF694834A140C2EACB15D2D1098505_inline((ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF *)L_6, /*hidden argument*/NULL);
		NullCheck((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_5);
		Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_5, (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_7, /*hidden argument*/NULL);
		return L_4;
	}

IL_002c:
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = V_0;
		NullCheck((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *)__this);
		ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * L_9 = ((  ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * (*) (ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 38)->methodPointer)((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 38));
		NullCheck((ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF *)L_9);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = ARSessionOrigin_get_trackablesParent_m37049D7E75CF694834A140C2EACB15D2D1098505_inline((ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF *)L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m1CDF66D563B03D37B37264800222D4F3B307EDA0((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_8, (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_10, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m1CDF66D563B03D37B37264800222D4F3B307EDA0_RuntimeMethod_var);
		return L_11;
	}
}
// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::CreateGameObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ARTrackableManager_4_CreateGameObject_mF0B085C646AE5F5F93D4AAEB69C1A4E4B32881EF_gshared (ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		NullCheck((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *)__this);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 39)->methodPointer)((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 39));
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_0;
		String_t* L_2 = ___name0;
		NullCheck((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_1);
		Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_1, (String_t*)L_2, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::CreateGameObject(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ARTrackableManager_4_CreateGameObject_m235D391A6EF80B8CD7A14829479EB8D0A7ED873A_gshared (ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId0, const RuntimeMethod* method)
{
	{
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_0 = ___trackableId0;
		NullCheck((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *)__this);
		String_t* L_1 = ((  String_t* (*) (ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 40)->methodPointer)((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *)__this, (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 40));
		NullCheck((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *)__this);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *, String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 41)->methodPointer)((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *)__this, (String_t*)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 41));
		return L_2;
	}
}
// TTrackable UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::CreateTrackable(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ARTrackableManager_4_CreateTrackable_mF294EF88541A9EDB3324257B3AB97081E3AF9577_gshared (ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARTrackableManager_4_CreateTrackable_mF294EF88541A9EDB3324257B3AB97081E3AF9577_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_0 = ___trackableId0;
		NullCheck((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *)__this);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 42)->methodPointer)((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *)__this, (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 42));
		V_0 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_1;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = V_0;
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_2);
		RuntimeObject * L_3 = ((  RuntimeObject * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 43)->methodPointer)((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 43));
		V_1 = (RuntimeObject *)L_3;
		RuntimeObject * L_4 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = V_0;
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_6);
		RuntimeObject * L_7 = ((  RuntimeObject * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 44)->methodPointer)((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 44));
		V_1 = (RuntimeObject *)L_7;
	}

IL_0024:
	{
		RuntimeObject * L_8 = V_1;
		return L_8;
	}
}
// TTrackable UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::GetOrCreateTrackable(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ARTrackableManager_4_GetOrCreateTrackable_m607170CD099E0A52BA50DB3BC522B84305FE9E32_gshared (ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 * L_0 = (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)__this->get_m_Trackables_7();
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_1 = ___trackableId0;
		NullCheck((Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)L_0);
		bool L_2 = ((  bool (*) (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , RuntimeObject **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21)->methodPointer)((Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)L_0, (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_1, (RuntimeObject **)(RuntimeObject **)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21));
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 * L_3 = (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)__this->get_m_PendingAdds_8();
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_4 = ___trackableId0;
		NullCheck((Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)L_3);
		((  bool (*) (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 22)->methodPointer)((Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)L_3, (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 22));
		goto IL_0034;
	}

IL_001f:
	{
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_5 = ___trackableId0;
		NullCheck((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *)__this);
		RuntimeObject * L_6 = ((  RuntimeObject * (*) (ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 45)->methodPointer)((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *)__this, (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 45));
		V_0 = (RuntimeObject *)L_6;
		Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 * L_7 = (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)__this->get_m_Trackables_7();
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_8 = ___trackableId0;
		RuntimeObject * L_9 = V_0;
		NullCheck((Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)L_7);
		((  void (*) (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 32)->methodPointer)((Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)L_7, (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 32));
	}

IL_0034:
	{
		RuntimeObject * L_10 = V_0;
		return L_10;
	}
}
// TTrackable UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::CreateOrUpdateTrackable(TSessionRelativeData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ARTrackableManager_4_CreateOrUpdateTrackable_m7CA67CD541A3A99C2EA242B24217B4E933923459_gshared (ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 * __this, XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  ___sessionRelativeData0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_0 = XRReferencePoint_get_trackableId_m6D53542802F2444CE58861B8868274F9A8296D88_inline((XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 *)(XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 *)(&___sessionRelativeData0), /*hidden argument*/NULL);
		NullCheck((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *)__this);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 47)->methodPointer)((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *)__this, (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 47));
		V_0 = (RuntimeObject *)L_1;
		RuntimeObject * L_2 = V_0;
		XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  L_3 = ___sessionRelativeData0;
		NullCheck((ARTrackable_2_t88913A417566AF8EAF80C0FF131EC194E7A0E7B4 *)L_2);
		((  void (*) (ARTrackable_2_t88913A417566AF8EAF80C0FF131EC194E7A0E7B4 *, XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 48)->methodPointer)((ARTrackable_2_t88913A417566AF8EAF80C0FF131EC194E7A0E7B4 *)L_2, (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 )L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 48));
		RuntimeObject * L_4 = V_0;
		XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  L_5 = ___sessionRelativeData0;
		NullCheck((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *)__this);
		VirtActionInvoker2< RuntimeObject *, XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  >::Invoke(15 /* System.Void UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::OnAfterSetSessionRelativeData(TTrackable,TSessionRelativeData) */, (ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *)__this, (RuntimeObject *)L_4, (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 )L_5);
		RuntimeObject * L_6 = V_0;
		NullCheck((ARTrackable_2_t88913A417566AF8EAF80C0FF131EC194E7A0E7B4 *)L_6);
		VirtActionInvoker0::Invoke(4 /* System.Void UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::OnAfterSetSessionRelativeData() */, (ARTrackable_2_t88913A417566AF8EAF80C0FF131EC194E7A0E7B4 *)L_6);
		RuntimeObject * L_7 = V_0;
		return L_7;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::DestroyTrackable(TTrackable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackableManager_4_DestroyTrackable_mA6474494ED47CBFE2012D28208C70CD244C3C3AD_gshared (ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 * __this, RuntimeObject * ___trackable0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARTrackableManager_4_DestroyTrackable_mA6474494ED47CBFE2012D28208C70CD244C3C3AD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___trackable0;
		NullCheck((ARTrackable_2_t88913A417566AF8EAF80C0FF131EC194E7A0E7B4 *)L_0);
		bool L_1 = ((  bool (*) (ARTrackable_2_t88913A417566AF8EAF80C0FF131EC194E7A0E7B4 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 51)->methodPointer)((ARTrackable_2_t88913A417566AF8EAF80C0FF131EC194E7A0E7B4 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 51));
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject * L_2 = ___trackable0;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_2);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_3, /*hidden argument*/NULL);
	}

IL_001d:
	{
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackableManager_4__ctor_mDCE43C733D585FF120193156AC2D620707EBFD86_gshared (ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 52)->methodPointer)((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 52));
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackableManager_4__cctor_m9BB2F81F00E707AE117C25D0B5DC2C4AF577A113_gshared (const RuntimeMethod* method)
{
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 53));
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 54)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 54));
		((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 8)))->set_s_Added_9(L_0);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_1 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 53));
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 54)->methodPointer)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 54));
		((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 8)))->set_s_Updated_10(L_1);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_2 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 53));
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 54)->methodPointer)(L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 54));
		((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 8)))->set_s_Removed_11(L_2);
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
// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>::get_destroyOnRemoval()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARTrackable_2_get_destroyOnRemoval_m240C0563C87E1FF691989A8CE61CB3BEEA7237A5_gshared (ARTrackable_2_t20DDFF842A33D6D4B1F1F5C17DEB3CC5032765F5 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_m_DestroyOnRemoval_4();
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>::set_destroyOnRemoval(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackable_2_set_destroyOnRemoval_m616C98B07DC47EAB910998F60A7D651C7CFAD550_gshared (ARTrackable_2_t20DDFF842A33D6D4B1F1F5C17DEB3CC5032765F5 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_m_DestroyOnRemoval_4(L_0);
		return;
	}
}
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>::get_trackableId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ARTrackable_2_get_trackableId_m3EDA2FA0A4FE8D9E144C84539D8271369C9F1194_gshared (ARTrackable_2_t20DDFF842A33D6D4B1F1F5C17DEB3CC5032765F5 * __this, const RuntimeMethod* method)
{
	BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NullCheck((ARTrackable_2_t20DDFF842A33D6D4B1F1F5C17DEB3CC5032765F5 *)__this);
		BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  L_0 = ((  BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  (*) (ARTrackable_2_t20DDFF842A33D6D4B1F1F5C17DEB3CC5032765F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ARTrackable_2_t20DDFF842A33D6D4B1F1F5C17DEB3CC5032765F5 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		V_0 = (BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 )L_0;
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_1 = BoundedPlane_get_trackableId_mD2A3DCDA61898E637ACAE0A0F4A832931378071A_inline((BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 *)(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 *)(&V_0), /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARTrackable_2_get_trackingState_m8DDA904451BEE31E04C5D68271338034F142501E_gshared (ARTrackable_2_t20DDFF842A33D6D4B1F1F5C17DEB3CC5032765F5 * __this, const RuntimeMethod* method)
{
	BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NullCheck((ARTrackable_2_t20DDFF842A33D6D4B1F1F5C17DEB3CC5032765F5 *)__this);
		BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  L_0 = ((  BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  (*) (ARTrackable_2_t20DDFF842A33D6D4B1F1F5C17DEB3CC5032765F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ARTrackable_2_t20DDFF842A33D6D4B1F1F5C17DEB3CC5032765F5 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		V_0 = (BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 )L_0;
		int32_t L_1 = BoundedPlane_get_trackingState_m9B6467E433564ABE4BED9328F7B23AB05905B008_inline((BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 *)(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 *)(&V_0), /*hidden argument*/NULL);
		return L_1;
	}
}
// TSessionRelativeData UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>::get_sessionRelativeData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  ARTrackable_2_get_sessionRelativeData_mFE48024B4CEE3C171C6A4F39A8B56E9FE102FF44_gshared (ARTrackable_2_t20DDFF842A33D6D4B1F1F5C17DEB3CC5032765F5 * __this, const RuntimeMethod* method)
{
	{
		BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  L_0 = (BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 )__this->get_U3CsessionRelativeDataU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>::set_sessionRelativeData(TSessionRelativeData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackable_2_set_sessionRelativeData_mBD6C92E155183720E5EBB39F2115AA368E15B390_gshared (ARTrackable_2_t20DDFF842A33D6D4B1F1F5C17DEB3CC5032765F5 * __this, BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  ___value0, const RuntimeMethod* method)
{
	{
		BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  L_0 = ___value0;
		__this->set_U3CsessionRelativeDataU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>::OnAfterSetSessionRelativeData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackable_2_OnAfterSetSessionRelativeData_mFF22CB848681F14A580185B0788D954384122C99_gshared (ARTrackable_2_t20DDFF842A33D6D4B1F1F5C17DEB3CC5032765F5 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>::SetSessionRelativeData(TSessionRelativeData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackable_2_SetSessionRelativeData_m2080F3BBE132623AAC60340CF5D614180851BFF1_gshared (ARTrackable_2_t20DDFF842A33D6D4B1F1F5C17DEB3CC5032765F5 * __this, BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  ___sessionRelativeData0, const RuntimeMethod* method)
{
	{
		BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  L_0 = ___sessionRelativeData0;
		NullCheck((ARTrackable_2_t20DDFF842A33D6D4B1F1F5C17DEB3CC5032765F5 *)__this);
		((  void (*) (ARTrackable_2_t20DDFF842A33D6D4B1F1F5C17DEB3CC5032765F5 *, BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((ARTrackable_2_t20DDFF842A33D6D4B1F1F5C17DEB3CC5032765F5 *)__this, (BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this, /*hidden argument*/NULL);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_2 = BoundedPlane_get_pose_m30B084D1F307CB46894BE4FAD448788001A0F0DF_inline((BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 *)(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 *)(&___sessionRelativeData0), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_2.get_position_0();
		NullCheck((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_1);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_1, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_3, /*hidden argument*/NULL);
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this, /*hidden argument*/NULL);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_5 = BoundedPlane_get_pose_m30B084D1F307CB46894BE4FAD448788001A0F0DF_inline((BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 *)(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 *)(&___sessionRelativeData0), /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_6 = (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 )L_5.get_rotation_1();
		NullCheck((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_4);
		Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_4, (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 )L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackable_2__ctor_m62CDC50041B0E9D6D909F7B22EA19E4DC8430065_gshared (ARTrackable_2_t20DDFF842A33D6D4B1F1F5C17DEB3CC5032765F5 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_DestroyOnRemoval_4((bool)1);
		NullCheck((MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)__this);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97((MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)__this, /*hidden argument*/NULL);
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
// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::get_destroyOnRemoval()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARTrackable_2_get_destroyOnRemoval_mD9F886D802355DAEE28976311036A3C72743C4D5_gshared (ARTrackable_2_tFF59B3769C01557C3557231CD2A26810E2867CCD * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_m_DestroyOnRemoval_4();
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::set_destroyOnRemoval(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackable_2_set_destroyOnRemoval_m4222856469C4BF285B1D44AF1D49D5FB9D3C2CC4_gshared (ARTrackable_2_tFF59B3769C01557C3557231CD2A26810E2867CCD * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_m_DestroyOnRemoval_4(L_0);
		return;
	}
}
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::get_trackableId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ARTrackable_2_get_trackableId_mA1E01E7BE01E2155DA45D23208B94CB572AAB76F_gshared (ARTrackable_2_tFF59B3769C01557C3557231CD2A26810E2867CCD * __this, const RuntimeMethod* method)
{
	XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NullCheck((ARTrackable_2_tFF59B3769C01557C3557231CD2A26810E2867CCD *)__this);
		XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  L_0 = ((  XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  (*) (ARTrackable_2_tFF59B3769C01557C3557231CD2A26810E2867CCD *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ARTrackable_2_tFF59B3769C01557C3557231CD2A26810E2867CCD *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		V_0 = (XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 )L_0;
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_1 = XRPointCloud_get_trackableId_mA394197EAD026665FC02A1118CBBB46FF6873EF1_inline((XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 *)(XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 *)(&V_0), /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARTrackable_2_get_trackingState_m13CF38343AF5B2EAA702BA43F9ABB23507FD4BD6_gshared (ARTrackable_2_tFF59B3769C01557C3557231CD2A26810E2867CCD * __this, const RuntimeMethod* method)
{
	XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NullCheck((ARTrackable_2_tFF59B3769C01557C3557231CD2A26810E2867CCD *)__this);
		XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  L_0 = ((  XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  (*) (ARTrackable_2_tFF59B3769C01557C3557231CD2A26810E2867CCD *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ARTrackable_2_tFF59B3769C01557C3557231CD2A26810E2867CCD *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		V_0 = (XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 )L_0;
		int32_t L_1 = XRPointCloud_get_trackingState_m0CE633649849B59E4AEA7875F62F0B34CA61FC96_inline((XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 *)(XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 *)(&V_0), /*hidden argument*/NULL);
		return L_1;
	}
}
// TSessionRelativeData UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::get_sessionRelativeData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  ARTrackable_2_get_sessionRelativeData_m4EA0DBAAFC4DC04A808A07DBD37FC6B1BD8343FC_gshared (ARTrackable_2_tFF59B3769C01557C3557231CD2A26810E2867CCD * __this, const RuntimeMethod* method)
{
	{
		XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  L_0 = (XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 )__this->get_U3CsessionRelativeDataU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::set_sessionRelativeData(TSessionRelativeData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackable_2_set_sessionRelativeData_mD951215242833F2222881EB83FBC58E32BE39CBB_gshared (ARTrackable_2_tFF59B3769C01557C3557231CD2A26810E2867CCD * __this, XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  ___value0, const RuntimeMethod* method)
{
	{
		XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  L_0 = ___value0;
		__this->set_U3CsessionRelativeDataU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::OnAfterSetSessionRelativeData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackable_2_OnAfterSetSessionRelativeData_m67EBF1170DC92D14AEA87D171BD2C5A666EED28B_gshared (ARTrackable_2_tFF59B3769C01557C3557231CD2A26810E2867CCD * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::SetSessionRelativeData(TSessionRelativeData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackable_2_SetSessionRelativeData_mD6656DBF8768A501367CEB6622D0E292873612D6_gshared (ARTrackable_2_tFF59B3769C01557C3557231CD2A26810E2867CCD * __this, XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  ___sessionRelativeData0, const RuntimeMethod* method)
{
	{
		XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  L_0 = ___sessionRelativeData0;
		NullCheck((ARTrackable_2_tFF59B3769C01557C3557231CD2A26810E2867CCD *)__this);
		((  void (*) (ARTrackable_2_tFF59B3769C01557C3557231CD2A26810E2867CCD *, XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((ARTrackable_2_tFF59B3769C01557C3557231CD2A26810E2867CCD *)__this, (XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this, /*hidden argument*/NULL);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_2 = XRPointCloud_get_pose_m09C2DF1AD7F1220B547BD2EBCCA6E35F85A87EB0_inline((XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 *)(XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 *)(&___sessionRelativeData0), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_2.get_position_0();
		NullCheck((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_1);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_1, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_3, /*hidden argument*/NULL);
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this, /*hidden argument*/NULL);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_5 = XRPointCloud_get_pose_m09C2DF1AD7F1220B547BD2EBCCA6E35F85A87EB0_inline((XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 *)(XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 *)(&___sessionRelativeData0), /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_6 = (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 )L_5.get_rotation_1();
		NullCheck((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_4);
		Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_4, (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 )L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackable_2__ctor_m994EC29DC345835D5C7918E04503A3F38299DB3D_gshared (ARTrackable_2_tFF59B3769C01557C3557231CD2A26810E2867CCD * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_DestroyOnRemoval_4((bool)1);
		NullCheck((MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)__this);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97((MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)__this, /*hidden argument*/NULL);
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
// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::get_destroyOnRemoval()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARTrackable_2_get_destroyOnRemoval_m3120AD348244253488BF717C98EA97B42314C138_gshared (ARTrackable_2_t88913A417566AF8EAF80C0FF131EC194E7A0E7B4 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_m_DestroyOnRemoval_4();
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::set_destroyOnRemoval(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackable_2_set_destroyOnRemoval_mBCD09F129423F0AB9636411A705CEA5A36E67B63_gshared (ARTrackable_2_t88913A417566AF8EAF80C0FF131EC194E7A0E7B4 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_m_DestroyOnRemoval_4(L_0);
		return;
	}
}
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::get_trackableId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ARTrackable_2_get_trackableId_mFFA7DEA93924AC58597EEDE5219D83A64385BFC3_gshared (ARTrackable_2_t88913A417566AF8EAF80C0FF131EC194E7A0E7B4 * __this, const RuntimeMethod* method)
{
	XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NullCheck((ARTrackable_2_t88913A417566AF8EAF80C0FF131EC194E7A0E7B4 *)__this);
		XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  L_0 = ((  XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  (*) (ARTrackable_2_t88913A417566AF8EAF80C0FF131EC194E7A0E7B4 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ARTrackable_2_t88913A417566AF8EAF80C0FF131EC194E7A0E7B4 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		V_0 = (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 )L_0;
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_1 = XRReferencePoint_get_trackableId_m6D53542802F2444CE58861B8868274F9A8296D88_inline((XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 *)(XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 *)(&V_0), /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARTrackable_2_get_trackingState_mDE18E4B73BA53CE50D30D09D2AF0FAA01830E012_gshared (ARTrackable_2_t88913A417566AF8EAF80C0FF131EC194E7A0E7B4 * __this, const RuntimeMethod* method)
{
	XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NullCheck((ARTrackable_2_t88913A417566AF8EAF80C0FF131EC194E7A0E7B4 *)__this);
		XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  L_0 = ((  XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  (*) (ARTrackable_2_t88913A417566AF8EAF80C0FF131EC194E7A0E7B4 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ARTrackable_2_t88913A417566AF8EAF80C0FF131EC194E7A0E7B4 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		V_0 = (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 )L_0;
		int32_t L_1 = XRReferencePoint_get_trackingState_mBA0DB4050B734039D22D0ECF69CD6E8896DF52B8_inline((XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 *)(XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 *)(&V_0), /*hidden argument*/NULL);
		return L_1;
	}
}
// TSessionRelativeData UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::get_sessionRelativeData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  ARTrackable_2_get_sessionRelativeData_mCEED169A398107E8AA21E58F63A85787D616E557_gshared (ARTrackable_2_t88913A417566AF8EAF80C0FF131EC194E7A0E7B4 * __this, const RuntimeMethod* method)
{
	{
		XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  L_0 = (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 )__this->get_U3CsessionRelativeDataU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::set_sessionRelativeData(TSessionRelativeData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackable_2_set_sessionRelativeData_m20215D9670CEFB6620172D1CDB2CB604086600FE_gshared (ARTrackable_2_t88913A417566AF8EAF80C0FF131EC194E7A0E7B4 * __this, XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  ___value0, const RuntimeMethod* method)
{
	{
		XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  L_0 = ___value0;
		__this->set_U3CsessionRelativeDataU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::OnAfterSetSessionRelativeData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackable_2_OnAfterSetSessionRelativeData_m26499AAB3C277CD7490120B71C17DA2CF822B1AB_gshared (ARTrackable_2_t88913A417566AF8EAF80C0FF131EC194E7A0E7B4 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::SetSessionRelativeData(TSessionRelativeData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackable_2_SetSessionRelativeData_m85B1EE2AB4E67ECAC5090120CACCEA139F87B961_gshared (ARTrackable_2_t88913A417566AF8EAF80C0FF131EC194E7A0E7B4 * __this, XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  ___sessionRelativeData0, const RuntimeMethod* method)
{
	{
		XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  L_0 = ___sessionRelativeData0;
		NullCheck((ARTrackable_2_t88913A417566AF8EAF80C0FF131EC194E7A0E7B4 *)__this);
		((  void (*) (ARTrackable_2_t88913A417566AF8EAF80C0FF131EC194E7A0E7B4 *, XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((ARTrackable_2_t88913A417566AF8EAF80C0FF131EC194E7A0E7B4 *)__this, (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this, /*hidden argument*/NULL);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_2 = XRReferencePoint_get_pose_mA4320629B8C7AE23D97FCD8E2C5FB9C9FB6AED9C_inline((XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 *)(XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 *)(&___sessionRelativeData0), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_2.get_position_0();
		NullCheck((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_1);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_1, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_3, /*hidden argument*/NULL);
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this, /*hidden argument*/NULL);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_5 = XRReferencePoint_get_pose_mA4320629B8C7AE23D97FCD8E2C5FB9C9FB6AED9C_inline((XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 *)(XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 *)(&___sessionRelativeData0), /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_6 = (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 )L_5.get_rotation_1();
		NullCheck((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_4);
		Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_4, (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 )L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackable_2__ctor_mC178868B7A221F65AAA2B8BD8ADB5E8066EA3B33_gshared (ARTrackable_2_t88913A417566AF8EAF80C0FF131EC194E7A0E7B4 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_DestroyOnRemoval_4((bool)1);
		NullCheck((MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)__this);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97((MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)__this, /*hidden argument*/NULL);
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
// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<System.Object,System.Object>::get_subsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SubsystemLifecycleManager_2_get_subsystem_m4B541054CC60E616694357611534CDDA7DC5D1A0_gshared (SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U3CsubsystemU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<System.Object,System.Object>::set_subsystem(TSubsystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemLifecycleManager_2_set_subsystem_mA00C58E1449F1F4595096A92719D042649335843_gshared (SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_U3CsubsystemU3Ek__BackingField_4(L_0);
		return;
	}
}
// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<System.Object,System.Object>::CreateSubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SubsystemLifecycleManager_2_CreateSubsystem_m40BC7594101BBED8B07F752B1B0A3AD7F2971F13_gshared (SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SubsystemLifecycleManager_2_CreateSubsystem_m40BC7594101BBED8B07F752B1B0A3AD7F2971F13_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0));
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = ((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)))->get_s_SubsystemDescriptors_5();
		IL2CPP_RUNTIME_CLASS_INIT(SubsystemManager_tA76309B3302C9AA31F3BCFFF64BFD98606F0231F_il2cpp_TypeInfo_var);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_1 = ((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)))->get_s_SubsystemDescriptors_5();
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_1);
		int32_t L_2 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_006c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0));
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_3 = ((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)))->get_s_SubsystemDescriptors_5();
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_3);
		RuntimeObject * L_4 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_3, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		V_0 = (RuntimeObject *)L_4;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_5 = ((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)))->get_s_SubsystemDescriptors_5();
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_5);
		int32_t L_6 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		if ((((int32_t)L_6) <= ((int32_t)1)))
		{
			goto IL_0060;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_7;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_9 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 4)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_10 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_9, /*hidden argument*/NULL);
		NullCheck((MemberInfo_t *)L_10);
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t *)L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_11);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_12 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_8;
		RuntimeObject * L_13 = V_0;
		NullCheck((SubsystemDescriptor_t889FE96B75F157379A8337541A119F08DD9C75D4 *)L_13);
		String_t* L_14 = SubsystemDescriptor_get_id_mD414791818F2583B9B07DBE6921387970B42471E((SubsystemDescriptor_t889FE96B75F157379A8337541A119F08DD9C75D4 *)L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_14);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarningFormat_m29C3DA389E1AA2C1C48C9100F1E83EAE72772FDB((String_t*)_stringLiteral3342B21D08DB470F1A14F4B1318C15B43E9B7D64, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_12, /*hidden argument*/NULL);
	}

IL_0060:
	{
		RuntimeObject * L_15 = V_0;
		NullCheck((SubsystemDescriptor_1_t951C98846FCA6E211E4065CE53CF8AFB40DB5E24 *)L_15);
		RuntimeObject * L_16 = ((  RuntimeObject * (*) (SubsystemDescriptor_1_t951C98846FCA6E211E4065CE53CF8AFB40DB5E24 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((SubsystemDescriptor_1_t951C98846FCA6E211E4065CE53CF8AFB40DB5E24 *)L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		return L_16;
	}

IL_006c:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject *));
		RuntimeObject * L_17 = V_1;
		return L_17;
	}
}
// System.Void UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<System.Object,System.Object>::CreateSubsystemIfNecessary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemLifecycleManager_2_CreateSubsystemIfNecessary_mA14FBB6F49F5E6A16B3675A839828DA593DAA98D_gshared (SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this);
		RuntimeObject * L_0 = ((  RuntimeObject * (*) (SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		NullCheck((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this);
		RuntimeObject * L_1 = VirtFuncInvoker0< RuntimeObject * >::Invoke(4 /* TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<System.Object,System.Object>::CreateSubsystem() */, (SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this);
		NullCheck((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this);
		((  void (*) (SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
	}

IL_0019:
	{
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<System.Object,System.Object>::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemLifecycleManager_2_OnEnable_m3943B3C80EEB388DDC079E25F129B645DD244617_gshared (SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this);
		((  void (*) (SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		NullCheck((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this);
		RuntimeObject * L_0 = ((  RuntimeObject * (*) (SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_0)
		{
			goto IL_002f;
		}
	}
	{
		NullCheck((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this);
		VirtActionInvoker0::Invoke(8 /* System.Void UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<System.Object,System.Object>::OnBeforeStart() */, (SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this);
		NullCheck((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		NullCheck((Subsystem_t6B987736D8E48098F860AC55D76905DE1F48CE8C *)L_1);
		VirtActionInvoker0::Invoke(4 /* System.Void UnityEngine.Subsystem::Start() */, (Subsystem_t6B987736D8E48098F860AC55D76905DE1F48CE8C *)L_1);
		NullCheck((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this);
		VirtActionInvoker0::Invoke(9 /* System.Void UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<System.Object,System.Object>::OnAfterStart() */, (SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this);
	}

IL_002f:
	{
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<System.Object,System.Object>::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemLifecycleManager_2_OnDisable_m25006859B7FEE85010D68C57CE9D2C1F982C98D6_gshared (SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this);
		RuntimeObject * L_0 = ((  RuntimeObject * (*) (SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		NullCheck((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		NullCheck((Subsystem_t6B987736D8E48098F860AC55D76905DE1F48CE8C *)L_1);
		VirtActionInvoker0::Invoke(5 /* System.Void UnityEngine.Subsystem::Stop() */, (Subsystem_t6B987736D8E48098F860AC55D76905DE1F48CE8C *)L_1);
	}

IL_001d:
	{
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<System.Object,System.Object>::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemLifecycleManager_2_OnDestroy_m66F15685F03F120643E52A0A31D652A7A8E4C06F_gshared (SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		NullCheck((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this);
		RuntimeObject * L_0 = ((  RuntimeObject * (*) (SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		NullCheck((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		NullCheck((Subsystem_t6B987736D8E48098F860AC55D76905DE1F48CE8C *)L_1);
		VirtActionInvoker0::Invoke(6 /* System.Void UnityEngine.Subsystem::Destroy() */, (Subsystem_t6B987736D8E48098F860AC55D76905DE1F48CE8C *)L_1);
	}

IL_001d:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		RuntimeObject * L_2 = V_0;
		NullCheck((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this);
		((  void (*) (SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this, (RuntimeObject *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<System.Object,System.Object>::OnBeforeStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemLifecycleManager_2_OnBeforeStart_m92B2DBD4FBDA98CAF592A3AFB106A787C65F9CBA_gshared (SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<System.Object,System.Object>::OnAfterStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemLifecycleManager_2_OnAfterStart_m9C3FE75A04AEB036795995CE9B0D0C52452D882D_gshared (SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemLifecycleManager_2__ctor_m0654A5B287B1F79A654C5EBCA3D2B846860D7623_gshared (SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)__this);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97((MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<System.Object,System.Object>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemLifecycleManager_2__cctor_mFD4705979438527626B155E085AAAB7A00672E63_gshared (const RuntimeMethod* method)
{
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 15)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->set_s_SubsystemDescriptors_5(L_0);
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
// System.Void UnityEngine.XR.ARFoundation.TrackableCollection`1_Enumerator<System.Object>::.ctor(System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m1436C7540CC7C5E630A94069A2F8A386DA5B572E_gshared (Enumerator_t3CA35B0FF0588CA447157731D78AC026FF3FA6ED * __this, Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 * ___trackables0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerator__ctor_m1436C7540CC7C5E630A94069A2F8A386DA5B572E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 * L_0 = ___trackables0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, (String_t*)_stringLiteral82A90AF1B031C38ED3A670A840145127A9847AC4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, Enumerator__ctor_m1436C7540CC7C5E630A94069A2F8A386DA5B572E_RuntimeMethod_var);
	}

IL_000e:
	{
		Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 * L_2 = ___trackables0;
		NullCheck((Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)L_2);
		Enumerator_t05190B8C9CB39286397757C04499EED7BB9E206E  L_3 = ((  Enumerator_t05190B8C9CB39286397757C04499EED7BB9E206E  (*) (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		__this->set_m_Enumerator_0(L_3);
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator__ctor_m1436C7540CC7C5E630A94069A2F8A386DA5B572E_AdjustorThunk (RuntimeObject * __this, Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 * ___trackables0, const RuntimeMethod* method)
{
	Enumerator_t3CA35B0FF0588CA447157731D78AC026FF3FA6ED * _thisAdjusted = reinterpret_cast<Enumerator_t3CA35B0FF0588CA447157731D78AC026FF3FA6ED *>(__this + 1);
	Enumerator__ctor_m1436C7540CC7C5E630A94069A2F8A386DA5B572E(_thisAdjusted, ___trackables0, method);
}
// System.Boolean UnityEngine.XR.ARFoundation.TrackableCollection`1_Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mF64DBEA38614B8A6E085DFC09DD2745BE2ACB9BE_gshared (Enumerator_t3CA35B0FF0588CA447157731D78AC026FF3FA6ED * __this, const RuntimeMethod* method)
{
	{
		Enumerator_t05190B8C9CB39286397757C04499EED7BB9E206E * L_0 = (Enumerator_t05190B8C9CB39286397757C04499EED7BB9E206E *)__this->get_address_of_m_Enumerator_0();
		bool L_1 = Enumerator_MoveNext_m4A5F7800BC01B3A27EEFCA56FAB672DEFB1EC0BF((Enumerator_t05190B8C9CB39286397757C04499EED7BB9E206E *)(Enumerator_t05190B8C9CB39286397757C04499EED7BB9E206E *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool Enumerator_MoveNext_mF64DBEA38614B8A6E085DFC09DD2745BE2ACB9BE_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Enumerator_t3CA35B0FF0588CA447157731D78AC026FF3FA6ED * _thisAdjusted = reinterpret_cast<Enumerator_t3CA35B0FF0588CA447157731D78AC026FF3FA6ED *>(__this + 1);
	return Enumerator_MoveNext_mF64DBEA38614B8A6E085DFC09DD2745BE2ACB9BE(_thisAdjusted, method);
}
// TTrackable UnityEngine.XR.ARFoundation.TrackableCollection`1_Enumerator<System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m6D82C8CA15561A8D32BA77CB304C80AF57C4C77E_gshared (Enumerator_t3CA35B0FF0588CA447157731D78AC026FF3FA6ED * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_tE370629D71E4468BE162EB67B39EF5299AAAFBB3  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Enumerator_t05190B8C9CB39286397757C04499EED7BB9E206E * L_0 = (Enumerator_t05190B8C9CB39286397757C04499EED7BB9E206E *)__this->get_address_of_m_Enumerator_0();
		KeyValuePair_2_tE370629D71E4468BE162EB67B39EF5299AAAFBB3  L_1 = Enumerator_get_Current_mDB91F5D20CC6A0F868AEB29B4864813567BAE7DF_inline((Enumerator_t05190B8C9CB39286397757C04499EED7BB9E206E *)(Enumerator_t05190B8C9CB39286397757C04499EED7BB9E206E *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_0 = (KeyValuePair_2_tE370629D71E4468BE162EB67B39EF5299AAAFBB3 )L_1;
		RuntimeObject * L_2 = KeyValuePair_2_get_Value_m3A9E6AF4065028FDA3445474F46893E9387CBC29_inline((KeyValuePair_2_tE370629D71E4468BE162EB67B39EF5299AAAFBB3 *)(KeyValuePair_2_tE370629D71E4468BE162EB67B39EF5299AAAFBB3 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject * Enumerator_get_Current_m6D82C8CA15561A8D32BA77CB304C80AF57C4C77E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Enumerator_t3CA35B0FF0588CA447157731D78AC026FF3FA6ED * _thisAdjusted = reinterpret_cast<Enumerator_t3CA35B0FF0588CA447157731D78AC026FF3FA6ED *>(__this + 1);
	return Enumerator_get_Current_m6D82C8CA15561A8D32BA77CB304C80AF57C4C77E(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARFoundation.TrackableCollection`1_Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mF07BD32148859A94677FFD43184E38A82F7916C1_gshared (Enumerator_t3CA35B0FF0588CA447157731D78AC026FF3FA6ED * __this, const RuntimeMethod* method)
{
	{
		Enumerator_t05190B8C9CB39286397757C04499EED7BB9E206E * L_0 = (Enumerator_t05190B8C9CB39286397757C04499EED7BB9E206E *)__this->get_address_of_m_Enumerator_0();
		Enumerator_Dispose_mDD09D00434936641131DA87032FE91597056CE77((Enumerator_t05190B8C9CB39286397757C04499EED7BB9E206E *)(Enumerator_t05190B8C9CB39286397757C04499EED7BB9E206E *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_Dispose_mF07BD32148859A94677FFD43184E38A82F7916C1_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Enumerator_t3CA35B0FF0588CA447157731D78AC026FF3FA6ED * _thisAdjusted = reinterpret_cast<Enumerator_t3CA35B0FF0588CA447157731D78AC026FF3FA6ED *>(__this + 1);
	Enumerator_Dispose_mF07BD32148859A94677FFD43184E38A82F7916C1(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.XR.ARFoundation.TrackableCollection`1_Enumerator<TTrackable> UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t3CA35B0FF0588CA447157731D78AC026FF3FA6ED  TrackableCollection_1_GetEnumerator_mBAA3D036F160A053757196D57318EC6B3F368D02_gshared (TrackableCollection_1_t4F672148E28A41F14EAE569661A96270A528E608 * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 * L_0 = (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)__this->get_m_Trackables_0();
		Enumerator_t3CA35B0FF0588CA447157731D78AC026FF3FA6ED  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_m1436C7540CC7C5E630A94069A2F8A386DA5B572E((&L_1), (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		return L_1;
	}
}
IL2CPP_EXTERN_C  Enumerator_t3CA35B0FF0588CA447157731D78AC026FF3FA6ED  TrackableCollection_1_GetEnumerator_mBAA3D036F160A053757196D57318EC6B3F368D02_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TrackableCollection_1_t4F672148E28A41F14EAE569661A96270A528E608 * _thisAdjusted = reinterpret_cast<TrackableCollection_1_t4F672148E28A41F14EAE569661A96270A528E608 *>(__this + 1);
	return TrackableCollection_1_GetEnumerator_mBAA3D036F160A053757196D57318EC6B3F368D02(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::.ctor(System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableCollection_1__ctor_mA99D3D41CAA02EF94BD2B96D6DC1B66450E226FF_gshared (TrackableCollection_1_t4F672148E28A41F14EAE569661A96270A528E608 * __this, Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 * ___trackables0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableCollection_1__ctor_mA99D3D41CAA02EF94BD2B96D6DC1B66450E226FF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 * L_0 = ___trackables0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, (String_t*)_stringLiteral82A90AF1B031C38ED3A670A840145127A9847AC4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, TrackableCollection_1__ctor_mA99D3D41CAA02EF94BD2B96D6DC1B66450E226FF_RuntimeMethod_var);
	}

IL_000e:
	{
		Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 * L_2 = ___trackables0;
		__this->set_m_Trackables_0(L_2);
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableCollection_1__ctor_mA99D3D41CAA02EF94BD2B96D6DC1B66450E226FF_AdjustorThunk (RuntimeObject * __this, Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 * ___trackables0, const RuntimeMethod* method)
{
	TrackableCollection_1_t4F672148E28A41F14EAE569661A96270A528E608 * _thisAdjusted = reinterpret_cast<TrackableCollection_1_t4F672148E28A41F14EAE569661A96270A528E608 *>(__this + 1);
	TrackableCollection_1__ctor_mA99D3D41CAA02EF94BD2B96D6DC1B66450E226FF(_thisAdjusted, ___trackables0, method);
}
// System.Int32 UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::get_count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrackableCollection_1_get_count_mDAAAFD7E750C4885E2EE0322FC84C7EC7826C82C_gshared (TrackableCollection_1_t4F672148E28A41F14EAE569661A96270A528E608 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableCollection_1_get_count_mDAAAFD7E750C4885E2EE0322FC84C7EC7826C82C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 * L_0 = (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)__this->get_m_Trackables_0();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_1 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_1, (String_t*)_stringLiteral86EB3EF4A80C553E3CF57C02680D2F68C1D5641F, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, TrackableCollection_1_get_count_mDAAAFD7E750C4885E2EE0322FC84C7EC7826C82C_RuntimeMethod_var);
	}

IL_0013:
	{
		Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 * L_2 = (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)__this->get_m_Trackables_0();
		NullCheck((Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)L_2);
		int32_t L_3 = ((  int32_t (*) (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return L_3;
	}
}
IL2CPP_EXTERN_C  int32_t TrackableCollection_1_get_count_mDAAAFD7E750C4885E2EE0322FC84C7EC7826C82C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TrackableCollection_1_t4F672148E28A41F14EAE569661A96270A528E608 * _thisAdjusted = reinterpret_cast<TrackableCollection_1_t4F672148E28A41F14EAE569661A96270A528E608 *>(__this + 1);
	return TrackableCollection_1_get_count_mDAAAFD7E750C4885E2EE0322FC84C7EC7826C82C(_thisAdjusted, method);
}
// TTrackable UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::get_Item(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TrackableCollection_1_get_Item_m2364AB8C6AC2D938F7B1BF95B6CF2EB821E02667_gshared (TrackableCollection_1_t4F672148E28A41F14EAE569661A96270A528E608 * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableCollection_1_get_Item_m2364AB8C6AC2D938F7B1BF95B6CF2EB821E02667_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 * L_0 = (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)__this->get_m_Trackables_0();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_1 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_1, (String_t*)_stringLiteral86EB3EF4A80C553E3CF57C02680D2F68C1D5641F, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, TrackableCollection_1_get_Item_m2364AB8C6AC2D938F7B1BF95B6CF2EB821E02667_RuntimeMethod_var);
	}

IL_0013:
	{
	}

IL_0014:
	try
	{ // begin try (depth: 1)
		Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 * L_2 = (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)__this->get_m_Trackables_0();
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_3 = ___trackableId0;
		NullCheck((Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)L_2);
		RuntimeObject * L_4 = ((  RuntimeObject * (*) (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)L_2, (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = (RuntimeObject *)L_4;
		goto IL_003b;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0023;
		throw e;
	}

CATCH_0023:
	{ // begin catch(System.Collections.Generic.KeyNotFoundException)
		V_1 = (KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 *)((KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 *)__exception_local);
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_5 = ___trackableId0;
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_6 = L_5;
		RuntimeObject * L_7 = Box(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA((String_t*)_stringLiteral830CB8C252B57EFF127DE755CBF5A089999CEF61, (RuntimeObject *)L_7, /*hidden argument*/NULL);
		KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 * L_9 = V_1;
		KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 * L_10 = (KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 *)il2cpp_codegen_object_new(KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2_il2cpp_TypeInfo_var);
		KeyNotFoundException__ctor_m62266FD7195B82ED3C3005991CDDA4C0C655F48C(L_10, (String_t*)L_8, (Exception_t *)L_9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, NULL, TrackableCollection_1_get_Item_m2364AB8C6AC2D938F7B1BF95B6CF2EB821E02667_RuntimeMethod_var);
	} // end catch (depth: 1)

IL_003b:
	{
		RuntimeObject * L_11 = V_0;
		return L_11;
	}
}
IL2CPP_EXTERN_C  RuntimeObject * TrackableCollection_1_get_Item_m2364AB8C6AC2D938F7B1BF95B6CF2EB821E02667_AdjustorThunk (RuntimeObject * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId0, const RuntimeMethod* method)
{
	TrackableCollection_1_t4F672148E28A41F14EAE569661A96270A528E608 * _thisAdjusted = reinterpret_cast<TrackableCollection_1_t4F672148E28A41F14EAE569661A96270A528E608 *>(__this + 1);
	return TrackableCollection_1_get_Item_m2364AB8C6AC2D938F7B1BF95B6CF2EB821E02667(_thisAdjusted, ___trackableId0, method);
}
// System.Boolean UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::TryGetTrackable(UnityEngine.XR.ARSubsystems.TrackableId,TTrackable&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableCollection_1_TryGetTrackable_m32817DD4F4B8853824F9C48709E001E97D0D34E1_gshared (TrackableCollection_1_t4F672148E28A41F14EAE569661A96270A528E608 * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId0, RuntimeObject ** ___trackable1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableCollection_1_TryGetTrackable_m32817DD4F4B8853824F9C48709E001E97D0D34E1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 * L_0 = (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)__this->get_m_Trackables_0();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_1 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_1, (String_t*)_stringLiteral86EB3EF4A80C553E3CF57C02680D2F68C1D5641F, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, TrackableCollection_1_TryGetTrackable_m32817DD4F4B8853824F9C48709E001E97D0D34E1_RuntimeMethod_var);
	}

IL_0013:
	{
		Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 * L_2 = (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)__this->get_m_Trackables_0();
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_3 = ___trackableId0;
		RuntimeObject ** L_4 = ___trackable1;
		NullCheck((Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)L_2);
		bool L_5 = ((  bool (*) (Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , RuntimeObject **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)->methodPointer)((Dictionary_2_t3997E38AC18E98209611C0DF08A65B1A4C547319 *)L_2, (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_3, (RuntimeObject **)(RuntimeObject **)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool TrackableCollection_1_TryGetTrackable_m32817DD4F4B8853824F9C48709E001E97D0D34E1_AdjustorThunk (RuntimeObject * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId0, RuntimeObject ** ___trackable1, const RuntimeMethod* method)
{
	TrackableCollection_1_t4F672148E28A41F14EAE569661A96270A528E608 * _thisAdjusted = reinterpret_cast<TrackableCollection_1_t4F672148E28A41F14EAE569661A96270A528E608 *>(__this + 1);
	return TrackableCollection_1_TryGetTrackable_m32817DD4F4B8853824F9C48709E001E97D0D34E1(_thisAdjusted, ___trackableId0, ___trackable1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARKit.ARKitFaceSubsystem_Provider_Triangle`1<System.Int16>::.ctor(T,T,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Triangle_1__ctor_m011AFB3ABB2AC3FEC81F8522192D5FF737DFE81B_gshared (Triangle_1_tCD59927E3208F060470B94D888FF2CF608DC4250 * __this, int16_t ___a0, int16_t ___b1, int16_t ___c2, const RuntimeMethod* method)
{
	{
		int16_t L_0 = ___a0;
		__this->set_a_0(L_0);
		int16_t L_1 = ___b1;
		__this->set_b_1(L_1);
		int16_t L_2 = ___c2;
		__this->set_c_2(L_2);
		return;
	}
}
IL2CPP_EXTERN_C  void Triangle_1__ctor_m011AFB3ABB2AC3FEC81F8522192D5FF737DFE81B_AdjustorThunk (RuntimeObject * __this, int16_t ___a0, int16_t ___b1, int16_t ___c2, const RuntimeMethod* method)
{
	Triangle_1_tCD59927E3208F060470B94D888FF2CF608DC4250 * _thisAdjusted = reinterpret_cast<Triangle_1_tCD59927E3208F060470B94D888FF2CF608DC4250 *>(__this + 1);
	Triangle_1__ctor_m011AFB3ABB2AC3FEC81F8522192D5FF737DFE81B(_thisAdjusted, ___a0, ___b1, ___c2, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARKit.ARKitFaceSubsystem_Provider_Triangle`1<System.Int32>::.ctor(T,T,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Triangle_1__ctor_mB4BDC3BFB2B7CD411ABA356B7D5FD1D9E26661B6_gshared (Triangle_1_t86D2DD77A26E9EE28D2CD4D01ED1FEF8F6FE5E82 * __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___a0;
		__this->set_a_0(L_0);
		int32_t L_1 = ___b1;
		__this->set_b_1(L_1);
		int32_t L_2 = ___c2;
		__this->set_c_2(L_2);
		return;
	}
}
IL2CPP_EXTERN_C  void Triangle_1__ctor_mB4BDC3BFB2B7CD411ABA356B7D5FD1D9E26661B6_AdjustorThunk (RuntimeObject * __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, const RuntimeMethod* method)
{
	Triangle_1_t86D2DD77A26E9EE28D2CD4D01ED1FEF8F6FE5E82 * _thisAdjusted = reinterpret_cast<Triangle_1_t86D2DD77A26E9EE28D2CD4D01ED1FEF8F6FE5E82 *>(__this + 1);
	Triangle_1__ctor_mB4BDC3BFB2B7CD411ABA356B7D5FD1D9E26661B6(_thisAdjusted, ___a0, ___b1, ___c2, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARSubsystems.Promise`1_ImmediatePromise<System.Int32Enum>::OnKeepWaiting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImmediatePromise_OnKeepWaiting_mA27FCE26D39C737B0D39189A21C594C7FBBC67AD_gshared (ImmediatePromise_t16B373AE2A03B114E7629932B9CC7A063BD6EACF * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.Promise`1_ImmediatePromise<System.Int32Enum>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImmediatePromise__ctor_m3C23D5D554693193E9D774F01AAFDD5D42C248DC_gshared (ImmediatePromise_t16B373AE2A03B114E7629932B9CC7A063BD6EACF * __this, int32_t ___immediateResult0, const RuntimeMethod* method)
{
	{
		NullCheck((Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068 *)__this);
		((  void (*) (Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		int32_t L_0 = ___immediateResult0;
		NullCheck((Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068 *)__this);
		((  void (*) (Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
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
// System.Void UnityEngine.XR.ARSubsystems.Promise`1_ImmediatePromise<System.Object>::OnKeepWaiting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImmediatePromise_OnKeepWaiting_mD1171A9214048BBB743143B236981281DA7F58B4_gshared (ImmediatePromise_tA93EB63F910034B9183ACBF4D6F4C168A19FC8B1 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.Promise`1_ImmediatePromise<System.Object>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImmediatePromise__ctor_mE88D02E2D6748FD79DC319981EEA9737025B98D5_gshared (ImmediatePromise_tA93EB63F910034B9183ACBF4D6F4C168A19FC8B1 * __this, RuntimeObject * ___immediateResult0, const RuntimeMethod* method)
{
	{
		NullCheck((Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4 *)__this);
		((  void (*) (Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject * L_0 = ___immediateResult0;
		NullCheck((Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4 *)__this);
		((  void (*) (Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4 *)__this, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
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
// System.Boolean UnityEngine.XR.ARSubsystems.Promise`1<System.Int32Enum>::get_keepWaiting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Promise_1_get_keepWaiting_mB7B580185D69F835FCA4E8DA20527FF6FC537ED4_gshared (Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068 *)__this);
		VirtActionInvoker0::Invoke(8 /* System.Void UnityEngine.XR.ARSubsystems.Promise`1<System.Int32Enum>::OnKeepWaiting() */, (Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068 *)__this);
		bool L_0 = (bool)__this->get_m_Complete_1();
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// T UnityEngine.XR.ARSubsystems.Promise`1<System.Int32Enum>::get_result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Promise_1_get_result_m369355E10FC5D95CDE097DD715AC0E18DA725AFB_gshared (Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_U3CresultU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.Promise`1<System.Int32Enum>::set_result(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Promise_1_set_result_mBBDFBF348B06877416B4E792897ADFE5E8CA0D5C_gshared (Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CresultU3Ek__BackingField_0(L_0);
		return;
	}
}
// UnityEngine.XR.ARSubsystems.Promise`1<T> UnityEngine.XR.ARSubsystems.Promise`1<System.Int32Enum>::CreateResolvedPromise(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068 * Promise_1_CreateResolvedPromise_mB605C1D88AB74006BD3AA2C791854687156606DA_gshared (int32_t ___result0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___result0;
		ImmediatePromise_t16B373AE2A03B114E7629932B9CC7A063BD6EACF * L_1 = (ImmediatePromise_t16B373AE2A03B114E7629932B9CC7A063BD6EACF *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		((  void (*) (ImmediatePromise_t16B373AE2A03B114E7629932B9CC7A063BD6EACF *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)(L_1, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return L_1;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.Promise`1<System.Int32Enum>::Resolve(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Promise_1_Resolve_m504DCDC94B2BA352C3AC50DCB2549CAA67C015FB_gshared (Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068 * __this, int32_t ___result0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___result0;
		NullCheck((Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068 *)__this);
		((  void (*) (Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		__this->set_m_Complete_1((bool)1);
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.Promise`1<System.Int32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Promise_1__ctor_m32E79F764B084F1C1978EDE2B76AD9F1A4CDD0BF_gshared (Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D *)__this);
		CustomYieldInstruction__ctor_m06E2B5BC73763FE2E734FAA600D567701EA21EC5((CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D *)__this, /*hidden argument*/NULL);
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
// System.Boolean UnityEngine.XR.ARSubsystems.Promise`1<System.Object>::get_keepWaiting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Promise_1_get_keepWaiting_m3BC77691EF491FC7554898C044757953A1059AD7_gshared (Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4 *)__this);
		VirtActionInvoker0::Invoke(8 /* System.Void UnityEngine.XR.ARSubsystems.Promise`1<System.Object>::OnKeepWaiting() */, (Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4 *)__this);
		bool L_0 = (bool)__this->get_m_Complete_1();
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// T UnityEngine.XR.ARSubsystems.Promise`1<System.Object>::get_result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Promise_1_get_result_mAAD49394CE2242EADC922830E32D2A76ECB73E2B_gshared (Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U3CresultU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.Promise`1<System.Object>::set_result(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Promise_1_set_result_mB1D488EFEE0DA6A1C22CEE6363403E04AC9BD6B3_gshared (Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_U3CresultU3Ek__BackingField_0(L_0);
		return;
	}
}
// UnityEngine.XR.ARSubsystems.Promise`1<T> UnityEngine.XR.ARSubsystems.Promise`1<System.Object>::CreateResolvedPromise(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4 * Promise_1_CreateResolvedPromise_mFEF2285EE72DED544C72E164300EBF4F51634667_gshared (RuntimeObject * ___result0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___result0;
		ImmediatePromise_tA93EB63F910034B9183ACBF4D6F4C168A19FC8B1 * L_1 = (ImmediatePromise_tA93EB63F910034B9183ACBF4D6F4C168A19FC8B1 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		((  void (*) (ImmediatePromise_tA93EB63F910034B9183ACBF4D6F4C168A19FC8B1 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)(L_1, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return L_1;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.Promise`1<System.Object>::Resolve(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Promise_1_Resolve_mB8F668BC7267A97F759AB1B008C01BB404EA67BF_gshared (Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4 * __this, RuntimeObject * ___result0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___result0;
		NullCheck((Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4 *)__this);
		((  void (*) (Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4 *)__this, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		__this->set_m_Complete_1((bool)1);
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.Promise`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Promise_1__ctor_m4A14410F2E5858E437D0DD77CDEB8C4C09113C63_gshared (Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D *)__this);
		CustomYieldInstruction__ctor_m06E2B5BC73763FE2E734FAA600D567701EA21EC5((CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D *)__this, /*hidden argument*/NULL);
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
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::get_added()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  TrackableChanges_1_get_added_m63AFCF25226B28A1F645793B0148358240C9309E_gshared (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, const RuntimeMethod* method)
{
	{
		NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  L_0 = (NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 )__this->get_m_Added_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  TrackableChanges_1_get_added_m63AFCF25226B28A1F645793B0148358240C9309E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE *>(__this + 1);
	return TrackableChanges_1_get_added_m63AFCF25226B28A1F645793B0148358240C9309E_inline(_thisAdjusted, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::get_updated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  TrackableChanges_1_get_updated_m1D7AFC816EACE233551588E18E321BDA0F3919A8_gshared (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, const RuntimeMethod* method)
{
	{
		NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  L_0 = (NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 )__this->get_m_Updated_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  TrackableChanges_1_get_updated_m1D7AFC816EACE233551588E18E321BDA0F3919A8_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE *>(__this + 1);
	return TrackableChanges_1_get_updated_m1D7AFC816EACE233551588E18E321BDA0F3919A8_inline(_thisAdjusted, method);
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::get_removed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_mFC97F3FE78DFC548F04543CF1246DC1EC61B8214_gshared (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, const RuntimeMethod* method)
{
	{
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_0 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )__this->get_m_Removed_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_mFC97F3FE78DFC548F04543CF1246DC1EC61B8214_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE *>(__this + 1);
	return TrackableChanges_1_get_removed_mFC97F3FE78DFC548F04543CF1246DC1EC61B8214_inline(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::get_isCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_mA423E6EE5F48904DF767922DF13E2E0CF69535C6_gshared (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_U3CisCreatedU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool TrackableChanges_1_get_isCreated_mA423E6EE5F48904DF767922DF13E2E0CF69535C6_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE *>(__this + 1);
	return TrackableChanges_1_get_isCreated_mA423E6EE5F48904DF767922DF13E2E0CF69535C6_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::set_isCreated(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m13ACF4058532E679A8DE069092C203B86CBDCAE0_gshared (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CisCreatedU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1_set_isCreated_m13ACF4058532E679A8DE069092C203B86CBDCAE0_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE *>(__this + 1);
	TrackableChanges_1_set_isCreated_m13ACF4058532E679A8DE069092C203B86CBDCAE0_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_mD1C95CFBA5AA7D0B4B0E4048D8F7E52246202202_gshared (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableChanges_1__ctor_mD1C95CFBA5AA7D0B4B0E4048D8F7E52246202202_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  L_0 = ___defaultT6;
		void* L_1 = ___addedPtr0;
		int32_t L_2 = ___stride7;
		int32_t L_3 = ___addedCount1;
		int32_t L_4 = ___allocator8;
		NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  L_5 = ((  NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  (*) (BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 , void*, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 )L_0, (void*)(void*)L_1, (int32_t)L_2, (int32_t)L_3, (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		__this->set_m_Added_1(L_5);
		BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  L_6 = ___defaultT6;
		void* L_7 = ___updatedPtr2;
		int32_t L_8 = ___stride7;
		int32_t L_9 = ___updatedCount3;
		int32_t L_10 = ___allocator8;
		NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  L_11 = ((  NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  (*) (BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 , void*, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 )L_6, (void*)(void*)L_7, (int32_t)L_8, (int32_t)L_9, (int32_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		__this->set_m_Updated_2(L_11);
		int32_t L_12 = ___removedCount5;
		int32_t L_13 = ___allocator8;
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_14;
		memset((&L_14), 0, sizeof(L_14));
		NativeArray_1__ctor_m49FCF39766C38037835E85C0A677B26599D0BE55((&L_14), (int32_t)L_12, (int32_t)L_13, (int32_t)1, /*hidden argument*/NativeArray_1__ctor_m49FCF39766C38037835E85C0A677B26599D0BE55_RuntimeMethod_var);
		__this->set_m_Removed_3(L_14);
		int32_t L_15 = ___removedCount5;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_0051;
		}
	}
	{
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * L_16 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)__this->get_address_of_m_Removed_3();
		void* L_17 = ___removedPtr4;
		int32_t L_18 = ___removedCount5;
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_19 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_m8D7EEF45CE20EB27369597A33879F42E459F2D59((void*)(void*)L_17, (int32_t)L_18, (int32_t)1, /*hidden argument*/NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_m8D7EEF45CE20EB27369597A33879F42E459F2D59_RuntimeMethod_var);
		NativeArray_1_CopyFrom_mE2C04369E83ED4726DE1121E7E05342B6A993A97((NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)L_16, (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )L_19, /*hidden argument*/NativeArray_1_CopyFrom_mE2C04369E83ED4726DE1121E7E05342B6A993A97_RuntimeMethod_var);
	}

IL_0051:
	{
		TrackableChanges_1_set_isCreated_m13ACF4058532E679A8DE069092C203B86CBDCAE0_inline((TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE *)(TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE *)__this, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1__ctor_mD1C95CFBA5AA7D0B4B0E4048D8F7E52246202202_AdjustorThunk (RuntimeObject * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE *>(__this + 1);
	TrackableChanges_1__ctor_mD1C95CFBA5AA7D0B4B0E4048D8F7E52246202202(_thisAdjusted, ___addedPtr0, ___addedCount1, ___updatedPtr2, ___updatedCount3, ___removedPtr4, ___removedCount5, ___defaultT6, ___stride7, ___allocator8, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_Dispose_m7AF1F8FE11710AD279FA5001D21F0624BF0BFBEB_gshared (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableChanges_1_Dispose_m7AF1F8FE11710AD279FA5001D21F0624BF0BFBEB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = TrackableChanges_1_get_isCreated_mA423E6EE5F48904DF767922DF13E2E0CF69535C6_inline((TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE *)(TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 * L_1 = (NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 *)__this->get_address_of_m_Added_1();
		NativeArray_1_Dispose_m4DFF1BE1612C27B903F9B66C2B03D09D6E711762((NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 *)(NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 * L_2 = (NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 *)__this->get_address_of_m_Updated_2();
		NativeArray_1_Dispose_m4DFF1BE1612C27B903F9B66C2B03D09D6E711762((NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 *)(NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * L_3 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)__this->get_address_of_m_Removed_3();
		NativeArray_1_Dispose_mB8124101177299FC76251C4E7F6C98BB0E5503C7((NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)L_3, /*hidden argument*/NativeArray_1_Dispose_mB8124101177299FC76251C4E7F6C98BB0E5503C7_RuntimeMethod_var);
	}

IL_0029:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1_Dispose_m7AF1F8FE11710AD279FA5001D21F0624BF0BFBEB_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE *>(__this + 1);
	TrackableChanges_1_Dispose_m7AF1F8FE11710AD279FA5001D21F0624BF0BFBEB(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::get_added()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5  TrackableChanges_1_get_added_m6C3AA173D63B8181A147527E5D607363D4D7E3B9_gshared (TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 * __this, const RuntimeMethod* method)
{
	{
		NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5  L_0 = (NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5 )__this->get_m_Added_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5  TrackableChanges_1_get_added_m6C3AA173D63B8181A147527E5D607363D4D7E3B9_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 *>(__this + 1);
	return TrackableChanges_1_get_added_m6C3AA173D63B8181A147527E5D607363D4D7E3B9_inline(_thisAdjusted, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::get_updated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5  TrackableChanges_1_get_updated_m4DD6B31059055267B3F98F003F7891F74052267D_gshared (TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 * __this, const RuntimeMethod* method)
{
	{
		NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5  L_0 = (NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5 )__this->get_m_Updated_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5  TrackableChanges_1_get_updated_m4DD6B31059055267B3F98F003F7891F74052267D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 *>(__this + 1);
	return TrackableChanges_1_get_updated_m4DD6B31059055267B3F98F003F7891F74052267D_inline(_thisAdjusted, method);
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::get_removed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_m7C323DBD29E884085A21A82E9D5ABC458EF49AED_gshared (TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 * __this, const RuntimeMethod* method)
{
	{
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_0 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )__this->get_m_Removed_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_m7C323DBD29E884085A21A82E9D5ABC458EF49AED_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 *>(__this + 1);
	return TrackableChanges_1_get_removed_m7C323DBD29E884085A21A82E9D5ABC458EF49AED_inline(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::get_isCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_mD2D689F21DCB8E4F238E18F88981D142C946CC69_gshared (TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_U3CisCreatedU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool TrackableChanges_1_get_isCreated_mD2D689F21DCB8E4F238E18F88981D142C946CC69_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 *>(__this + 1);
	return TrackableChanges_1_get_isCreated_mD2D689F21DCB8E4F238E18F88981D142C946CC69_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::set_isCreated(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m032D3E111CF433FC5556450F581911649722CA1B_gshared (TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CisCreatedU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1_set_isCreated_m032D3E111CF433FC5556450F581911649722CA1B_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 *>(__this + 1);
	TrackableChanges_1_set_isCreated_m032D3E111CF433FC5556450F581911649722CA1B_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_m9D3306EC438EE09208F98E4F4049E615CC5E801E_gshared (TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableChanges_1__ctor_m9D3306EC438EE09208F98E4F4049E615CC5E801E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7  L_0 = ___defaultT6;
		void* L_1 = ___addedPtr0;
		int32_t L_2 = ___stride7;
		int32_t L_3 = ___addedCount1;
		int32_t L_4 = ___allocator8;
		NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5  L_5 = ((  NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5  (*) (XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7 , void*, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7 )L_0, (void*)(void*)L_1, (int32_t)L_2, (int32_t)L_3, (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		__this->set_m_Added_1(L_5);
		XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7  L_6 = ___defaultT6;
		void* L_7 = ___updatedPtr2;
		int32_t L_8 = ___stride7;
		int32_t L_9 = ___updatedCount3;
		int32_t L_10 = ___allocator8;
		NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5  L_11 = ((  NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5  (*) (XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7 , void*, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7 )L_6, (void*)(void*)L_7, (int32_t)L_8, (int32_t)L_9, (int32_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		__this->set_m_Updated_2(L_11);
		int32_t L_12 = ___removedCount5;
		int32_t L_13 = ___allocator8;
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_14;
		memset((&L_14), 0, sizeof(L_14));
		NativeArray_1__ctor_m49FCF39766C38037835E85C0A677B26599D0BE55((&L_14), (int32_t)L_12, (int32_t)L_13, (int32_t)1, /*hidden argument*/NativeArray_1__ctor_m49FCF39766C38037835E85C0A677B26599D0BE55_RuntimeMethod_var);
		__this->set_m_Removed_3(L_14);
		int32_t L_15 = ___removedCount5;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_0051;
		}
	}
	{
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * L_16 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)__this->get_address_of_m_Removed_3();
		void* L_17 = ___removedPtr4;
		int32_t L_18 = ___removedCount5;
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_19 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_m8D7EEF45CE20EB27369597A33879F42E459F2D59((void*)(void*)L_17, (int32_t)L_18, (int32_t)1, /*hidden argument*/NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_m8D7EEF45CE20EB27369597A33879F42E459F2D59_RuntimeMethod_var);
		NativeArray_1_CopyFrom_mE2C04369E83ED4726DE1121E7E05342B6A993A97((NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)L_16, (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )L_19, /*hidden argument*/NativeArray_1_CopyFrom_mE2C04369E83ED4726DE1121E7E05342B6A993A97_RuntimeMethod_var);
	}

IL_0051:
	{
		TrackableChanges_1_set_isCreated_m032D3E111CF433FC5556450F581911649722CA1B_inline((TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 *)(TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 *)__this, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1__ctor_m9D3306EC438EE09208F98E4F4049E615CC5E801E_AdjustorThunk (RuntimeObject * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 *>(__this + 1);
	TrackableChanges_1__ctor_m9D3306EC438EE09208F98E4F4049E615CC5E801E(_thisAdjusted, ___addedPtr0, ___addedCount1, ___updatedPtr2, ___updatedCount3, ___removedPtr4, ___removedCount5, ___defaultT6, ___stride7, ___allocator8, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_Dispose_m8CB8D80766E7529B391391E43158D99E39220FF6_gshared (TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableChanges_1_Dispose_m8CB8D80766E7529B391391E43158D99E39220FF6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = TrackableChanges_1_get_isCreated_mD2D689F21DCB8E4F238E18F88981D142C946CC69_inline((TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 *)(TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5 * L_1 = (NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5 *)__this->get_address_of_m_Added_1();
		NativeArray_1_Dispose_m343FC4D068AE0BA3141FDF70567F8BD2A752FF2D((NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5 *)(NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5 * L_2 = (NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5 *)__this->get_address_of_m_Updated_2();
		NativeArray_1_Dispose_m343FC4D068AE0BA3141FDF70567F8BD2A752FF2D((NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5 *)(NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * L_3 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)__this->get_address_of_m_Removed_3();
		NativeArray_1_Dispose_mB8124101177299FC76251C4E7F6C98BB0E5503C7((NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)L_3, /*hidden argument*/NativeArray_1_Dispose_mB8124101177299FC76251C4E7F6C98BB0E5503C7_RuntimeMethod_var);
	}

IL_0029:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1_Dispose_m8CB8D80766E7529B391391E43158D99E39220FF6_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 *>(__this + 1);
	TrackableChanges_1_Dispose_m8CB8D80766E7529B391391E43158D99E39220FF6(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::get_added()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  TrackableChanges_1_get_added_mBB3A80E298216A6D8826422F62A11A1A4CB7CBD9_gshared (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, const RuntimeMethod* method)
{
	{
		NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  L_0 = (NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 )__this->get_m_Added_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  TrackableChanges_1_get_added_mBB3A80E298216A6D8826422F62A11A1A4CB7CBD9_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *>(__this + 1);
	return TrackableChanges_1_get_added_mBB3A80E298216A6D8826422F62A11A1A4CB7CBD9_inline(_thisAdjusted, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::get_updated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  TrackableChanges_1_get_updated_m80DB51775906B404AEE4C7454E7A517ECFD6A003_gshared (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, const RuntimeMethod* method)
{
	{
		NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  L_0 = (NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 )__this->get_m_Updated_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  TrackableChanges_1_get_updated_m80DB51775906B404AEE4C7454E7A517ECFD6A003_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *>(__this + 1);
	return TrackableChanges_1_get_updated_m80DB51775906B404AEE4C7454E7A517ECFD6A003_inline(_thisAdjusted, method);
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::get_removed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_mC49E91CAF67469CDD76DBCF18D1423DC3971AF99_gshared (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, const RuntimeMethod* method)
{
	{
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_0 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )__this->get_m_Removed_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_mC49E91CAF67469CDD76DBCF18D1423DC3971AF99_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *>(__this + 1);
	return TrackableChanges_1_get_removed_mC49E91CAF67469CDD76DBCF18D1423DC3971AF99_inline(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::get_isCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_m6BDB6E85EF722CE4F115552E754E059F9BBA87B8_gshared (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_U3CisCreatedU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool TrackableChanges_1_get_isCreated_m6BDB6E85EF722CE4F115552E754E059F9BBA87B8_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *>(__this + 1);
	return TrackableChanges_1_get_isCreated_m6BDB6E85EF722CE4F115552E754E059F9BBA87B8_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::set_isCreated(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_mE659C5BCD61914E799B4D6AAE6AD5AD7B9DDCE76_gshared (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CisCreatedU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1_set_isCreated_mE659C5BCD61914E799B4D6AAE6AD5AD7B9DDCE76_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *>(__this + 1);
	TrackableChanges_1_set_isCreated_mE659C5BCD61914E799B4D6AAE6AD5AD7B9DDCE76_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_mA69A666BCF692D5A8660A564A4450ABF6C80FD90_gshared (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableChanges_1__ctor_mA69A666BCF692D5A8660A564A4450ABF6C80FD90_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  L_0 = ___defaultT6;
		void* L_1 = ___addedPtr0;
		int32_t L_2 = ___stride7;
		int32_t L_3 = ___addedCount1;
		int32_t L_4 = ___allocator8;
		NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  L_5 = ((  NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  (*) (XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 , void*, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 )L_0, (void*)(void*)L_1, (int32_t)L_2, (int32_t)L_3, (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		__this->set_m_Added_1(L_5);
		XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  L_6 = ___defaultT6;
		void* L_7 = ___updatedPtr2;
		int32_t L_8 = ___stride7;
		int32_t L_9 = ___updatedCount3;
		int32_t L_10 = ___allocator8;
		NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  L_11 = ((  NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  (*) (XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 , void*, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 )L_6, (void*)(void*)L_7, (int32_t)L_8, (int32_t)L_9, (int32_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		__this->set_m_Updated_2(L_11);
		int32_t L_12 = ___removedCount5;
		int32_t L_13 = ___allocator8;
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_14;
		memset((&L_14), 0, sizeof(L_14));
		NativeArray_1__ctor_m49FCF39766C38037835E85C0A677B26599D0BE55((&L_14), (int32_t)L_12, (int32_t)L_13, (int32_t)1, /*hidden argument*/NativeArray_1__ctor_m49FCF39766C38037835E85C0A677B26599D0BE55_RuntimeMethod_var);
		__this->set_m_Removed_3(L_14);
		int32_t L_15 = ___removedCount5;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_0051;
		}
	}
	{
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * L_16 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)__this->get_address_of_m_Removed_3();
		void* L_17 = ___removedPtr4;
		int32_t L_18 = ___removedCount5;
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_19 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_m8D7EEF45CE20EB27369597A33879F42E459F2D59((void*)(void*)L_17, (int32_t)L_18, (int32_t)1, /*hidden argument*/NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_m8D7EEF45CE20EB27369597A33879F42E459F2D59_RuntimeMethod_var);
		NativeArray_1_CopyFrom_mE2C04369E83ED4726DE1121E7E05342B6A993A97((NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)L_16, (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )L_19, /*hidden argument*/NativeArray_1_CopyFrom_mE2C04369E83ED4726DE1121E7E05342B6A993A97_RuntimeMethod_var);
	}

IL_0051:
	{
		TrackableChanges_1_set_isCreated_mE659C5BCD61914E799B4D6AAE6AD5AD7B9DDCE76_inline((TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *)(TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *)__this, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1__ctor_mA69A666BCF692D5A8660A564A4450ABF6C80FD90_AdjustorThunk (RuntimeObject * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *>(__this + 1);
	TrackableChanges_1__ctor_mA69A666BCF692D5A8660A564A4450ABF6C80FD90(_thisAdjusted, ___addedPtr0, ___addedCount1, ___updatedPtr2, ___updatedCount3, ___removedPtr4, ___removedCount5, ___defaultT6, ___stride7, ___allocator8, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_Dispose_mE3DC3C0230641A828B6A91F3CB94441797520834_gshared (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableChanges_1_Dispose_mE3DC3C0230641A828B6A91F3CB94441797520834_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = TrackableChanges_1_get_isCreated_m6BDB6E85EF722CE4F115552E754E059F9BBA87B8_inline((TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *)(TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 * L_1 = (NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 *)__this->get_address_of_m_Added_1();
		NativeArray_1_Dispose_mAF31B95CE89FF647372855A4ECFB9FCDDE39C38B((NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 *)(NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 * L_2 = (NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 *)__this->get_address_of_m_Updated_2();
		NativeArray_1_Dispose_mAF31B95CE89FF647372855A4ECFB9FCDDE39C38B((NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 *)(NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * L_3 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)__this->get_address_of_m_Removed_3();
		NativeArray_1_Dispose_mB8124101177299FC76251C4E7F6C98BB0E5503C7((NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)L_3, /*hidden argument*/NativeArray_1_Dispose_mB8124101177299FC76251C4E7F6C98BB0E5503C7_RuntimeMethod_var);
	}

IL_0029:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1_Dispose_mE3DC3C0230641A828B6A91F3CB94441797520834_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *>(__this + 1);
	TrackableChanges_1_Dispose_mE3DC3C0230641A828B6A91F3CB94441797520834(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::get_added()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  TrackableChanges_1_get_added_mC31FEFAAC8F70ABBBC324DC618B0DFAB08AAE934_gshared (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, const RuntimeMethod* method)
{
	{
		NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  L_0 = (NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 )__this->get_m_Added_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  TrackableChanges_1_get_added_mC31FEFAAC8F70ABBBC324DC618B0DFAB08AAE934_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *>(__this + 1);
	return TrackableChanges_1_get_added_mC31FEFAAC8F70ABBBC324DC618B0DFAB08AAE934_inline(_thisAdjusted, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::get_updated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  TrackableChanges_1_get_updated_m54C710EFD531DFB25ABA289B60FAA4181D479DDF_gshared (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, const RuntimeMethod* method)
{
	{
		NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  L_0 = (NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 )__this->get_m_Updated_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  TrackableChanges_1_get_updated_m54C710EFD531DFB25ABA289B60FAA4181D479DDF_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *>(__this + 1);
	return TrackableChanges_1_get_updated_m54C710EFD531DFB25ABA289B60FAA4181D479DDF_inline(_thisAdjusted, method);
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::get_removed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_m9781A441FA95E17CBDB3C4687247859A562AF077_gshared (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, const RuntimeMethod* method)
{
	{
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_0 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )__this->get_m_Removed_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_m9781A441FA95E17CBDB3C4687247859A562AF077_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *>(__this + 1);
	return TrackableChanges_1_get_removed_m9781A441FA95E17CBDB3C4687247859A562AF077_inline(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::get_isCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_m81592B6012FD82C68A023EC52FFAB3B4A35C6A3D_gshared (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_U3CisCreatedU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool TrackableChanges_1_get_isCreated_m81592B6012FD82C68A023EC52FFAB3B4A35C6A3D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *>(__this + 1);
	return TrackableChanges_1_get_isCreated_m81592B6012FD82C68A023EC52FFAB3B4A35C6A3D_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::set_isCreated(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m3B57EAEC482D7B5D700E044B8720F89F25B13DC5_gshared (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CisCreatedU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1_set_isCreated_m3B57EAEC482D7B5D700E044B8720F89F25B13DC5_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *>(__this + 1);
	TrackableChanges_1_set_isCreated_m3B57EAEC482D7B5D700E044B8720F89F25B13DC5_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_m47C55466595329D4629E9A78A403D34C94AC30FC_gshared (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableChanges_1__ctor_m47C55466595329D4629E9A78A403D34C94AC30FC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  L_0 = ___defaultT6;
		void* L_1 = ___addedPtr0;
		int32_t L_2 = ___stride7;
		int32_t L_3 = ___addedCount1;
		int32_t L_4 = ___allocator8;
		NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  L_5 = ((  NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  (*) (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 , void*, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 )L_0, (void*)(void*)L_1, (int32_t)L_2, (int32_t)L_3, (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		__this->set_m_Added_1(L_5);
		XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  L_6 = ___defaultT6;
		void* L_7 = ___updatedPtr2;
		int32_t L_8 = ___stride7;
		int32_t L_9 = ___updatedCount3;
		int32_t L_10 = ___allocator8;
		NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  L_11 = ((  NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  (*) (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 , void*, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 )L_6, (void*)(void*)L_7, (int32_t)L_8, (int32_t)L_9, (int32_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		__this->set_m_Updated_2(L_11);
		int32_t L_12 = ___removedCount5;
		int32_t L_13 = ___allocator8;
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_14;
		memset((&L_14), 0, sizeof(L_14));
		NativeArray_1__ctor_m49FCF39766C38037835E85C0A677B26599D0BE55((&L_14), (int32_t)L_12, (int32_t)L_13, (int32_t)1, /*hidden argument*/NativeArray_1__ctor_m49FCF39766C38037835E85C0A677B26599D0BE55_RuntimeMethod_var);
		__this->set_m_Removed_3(L_14);
		int32_t L_15 = ___removedCount5;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_0051;
		}
	}
	{
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * L_16 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)__this->get_address_of_m_Removed_3();
		void* L_17 = ___removedPtr4;
		int32_t L_18 = ___removedCount5;
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_19 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_m8D7EEF45CE20EB27369597A33879F42E459F2D59((void*)(void*)L_17, (int32_t)L_18, (int32_t)1, /*hidden argument*/NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_m8D7EEF45CE20EB27369597A33879F42E459F2D59_RuntimeMethod_var);
		NativeArray_1_CopyFrom_mE2C04369E83ED4726DE1121E7E05342B6A993A97((NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)L_16, (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )L_19, /*hidden argument*/NativeArray_1_CopyFrom_mE2C04369E83ED4726DE1121E7E05342B6A993A97_RuntimeMethod_var);
	}

IL_0051:
	{
		TrackableChanges_1_set_isCreated_m3B57EAEC482D7B5D700E044B8720F89F25B13DC5_inline((TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *)(TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *)__this, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1__ctor_m47C55466595329D4629E9A78A403D34C94AC30FC_AdjustorThunk (RuntimeObject * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *>(__this + 1);
	TrackableChanges_1__ctor_m47C55466595329D4629E9A78A403D34C94AC30FC(_thisAdjusted, ___addedPtr0, ___addedCount1, ___updatedPtr2, ___updatedCount3, ___removedPtr4, ___removedCount5, ___defaultT6, ___stride7, ___allocator8, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_Dispose_m1C8DF8C1879FD6A22AD7474E15FB2590BB4F9631_gshared (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableChanges_1_Dispose_m1C8DF8C1879FD6A22AD7474E15FB2590BB4F9631_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = TrackableChanges_1_get_isCreated_m81592B6012FD82C68A023EC52FFAB3B4A35C6A3D_inline((TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *)(TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 * L_1 = (NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 *)__this->get_address_of_m_Added_1();
		NativeArray_1_Dispose_m79A1BBDC8A7E6F17C8B48E7CB3ED027A3180039E((NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 *)(NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 * L_2 = (NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 *)__this->get_address_of_m_Updated_2();
		NativeArray_1_Dispose_m79A1BBDC8A7E6F17C8B48E7CB3ED027A3180039E((NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 *)(NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * L_3 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)__this->get_address_of_m_Removed_3();
		NativeArray_1_Dispose_mB8124101177299FC76251C4E7F6C98BB0E5503C7((NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)L_3, /*hidden argument*/NativeArray_1_Dispose_mB8124101177299FC76251C4E7F6C98BB0E5503C7_RuntimeMethod_var);
	}

IL_0029:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1_Dispose_m1C8DF8C1879FD6A22AD7474E15FB2590BB4F9631_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *>(__this + 1);
	TrackableChanges_1_Dispose_m1C8DF8C1879FD6A22AD7474E15FB2590BB4F9631(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>::get_running()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackingSubsystem_2_get_running_mE178F5D0CDEEDF356425AD63AC753114DE793AD7_gshared (TrackingSubsystem_2_t0D6BC19D17058B4CBF6E3E9122F09A5A86A8566C * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_m_Running_1();
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_2__ctor_mF1761D396F2FC0B6BA3AA3F0DCDF7577A946B13A_gshared (TrackingSubsystem_2_t0D6BC19D17058B4CBF6E3E9122F09A5A86A8566C * __this, const RuntimeMethod* method)
{
	{
		NullCheck((Subsystem_1_t730D4B66354D4BECD6DEDE1050EA133DF9B7A61F *)__this);
		((  void (*) (Subsystem_1_t730D4B66354D4BECD6DEDE1050EA133DF9B7A61F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Subsystem_1_t730D4B66354D4BECD6DEDE1050EA133DF9B7A61F *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
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
// System.Boolean UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRFace,System.Object>::get_running()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackingSubsystem_2_get_running_mA3B8A8D9F7E99E4EE1C1BDE3FD8B408C3825E6D8_gshared (TrackingSubsystem_2_t810E285415E1644FA85391E12F95806CEE3C50EB * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_m_Running_1();
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRFace,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_2__ctor_m7625CF45A30E7BA1C410ADCDD6556266E9BDE509_gshared (TrackingSubsystem_2_t810E285415E1644FA85391E12F95806CEE3C50EB * __this, const RuntimeMethod* method)
{
	{
		NullCheck((Subsystem_1_t730D4B66354D4BECD6DEDE1050EA133DF9B7A61F *)__this);
		((  void (*) (Subsystem_1_t730D4B66354D4BECD6DEDE1050EA133DF9B7A61F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Subsystem_1_t730D4B66354D4BECD6DEDE1050EA133DF9B7A61F *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
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
// System.Boolean UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::get_running()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackingSubsystem_2_get_running_m6C093A1DAC5ED78C236F9B420478D248D4A38281_gshared (TrackingSubsystem_2_t1EC759A75AE7EFD4E4446A20009C8472E1C8AED1 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_m_Running_1();
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_2__ctor_m90E4D38CB60953BC61F7EFCD9B846A9071C9DF4B_gshared (TrackingSubsystem_2_t1EC759A75AE7EFD4E4446A20009C8472E1C8AED1 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((Subsystem_1_t730D4B66354D4BECD6DEDE1050EA133DF9B7A61F *)__this);
		((  void (*) (Subsystem_1_t730D4B66354D4BECD6DEDE1050EA133DF9B7A61F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Subsystem_1_t730D4B66354D4BECD6DEDE1050EA133DF9B7A61F *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
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
// System.Boolean UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::get_running()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackingSubsystem_2_get_running_m2102054ECF2F148EF7E5285FF8113FDDB6F29FBE_gshared (TrackingSubsystem_2_tA3D4B822865BAE0754B253CF8551A3EBB7073851 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_m_Running_1();
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_2__ctor_m7BED931B501BCE6534C3BC2DC0CA30C73E917F90_gshared (TrackingSubsystem_2_tA3D4B822865BAE0754B253CF8551A3EBB7073851 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((Subsystem_1_t730D4B66354D4BECD6DEDE1050EA133DF9B7A61F *)__this);
		((  void (*) (Subsystem_1_t730D4B66354D4BECD6DEDE1050EA133DF9B7A61F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Subsystem_1_t730D4B66354D4BECD6DEDE1050EA133DF9B7A61F *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool ColorTween_get_ignoreTimeScale_mF935C53CA27D67D47AE0021A0DB8D92C392EF56B_inline (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_m_IgnoreTimeScale_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float ColorTween_get_duration_m7E952A00A8A606D7886422812EFB24A6D5BFB508_inline (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_m_Duration_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool FloatTween_get_ignoreTimeScale_m8281CB2B12F1697A512D2E2515F5DA058B429FD0_inline (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_m_IgnoreTimeScale_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float FloatTween_get_duration_m17CD4518038CD642D714B3633236133D309EF13B_inline (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_m_Duration_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ARSessionOrigin_get_trackablesParent_m37049D7E75CF694834A140C2EACB15D2D1098505_inline (ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * __this, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_U3CtrackablesParentU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  BoundedPlane_get_trackableId_mD2A3DCDA61898E637ACAE0A0F4A832931378071A_inline (BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 * __this, const RuntimeMethod* method)
{
	{
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_0 = __this->get_m_TrackableId_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  XRPointCloud_get_trackableId_mA394197EAD026665FC02A1118CBBB46FF6873EF1_inline (XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 * __this, const RuntimeMethod* method)
{
	{
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_0 = __this->get_m_TrackableId_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  XRReferencePoint_get_trackableId_m6D53542802F2444CE58861B8868274F9A8296D88_inline (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * __this, const RuntimeMethod* method)
{
	{
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_0 = __this->get_m_Id_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t BoundedPlane_get_trackingState_m9B6467E433564ABE4BED9328F7B23AB05905B008_inline (BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_TrackingState_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  BoundedPlane_get_pose_m30B084D1F307CB46894BE4FAD448788001A0F0DF_inline (BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 * __this, const RuntimeMethod* method)
{
	{
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_0 = __this->get_m_Pose_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t XRPointCloud_get_trackingState_m0CE633649849B59E4AEA7875F62F0B34CA61FC96_inline (XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_TrackingState_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  XRPointCloud_get_pose_m09C2DF1AD7F1220B547BD2EBCCA6E35F85A87EB0_inline (XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 * __this, const RuntimeMethod* method)
{
	{
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_0 = __this->get_m_Pose_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t XRReferencePoint_get_trackingState_mBA0DB4050B734039D22D0ECF69CD6E8896DF52B8_inline (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_TrackingState_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  XRReferencePoint_get_pose_mA4320629B8C7AE23D97FCD8E2C5FB9C9FB6AED9C_inline (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * __this, const RuntimeMethod* method)
{
	{
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_0 = __this->get_m_Pose_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  TrackableChanges_1_get_added_m63AFCF25226B28A1F645793B0148358240C9309E_gshared_inline (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, const RuntimeMethod* method)
{
	{
		NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  L_0 = (NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 )__this->get_m_Added_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  TrackableChanges_1_get_updated_m1D7AFC816EACE233551588E18E321BDA0F3919A8_gshared_inline (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, const RuntimeMethod* method)
{
	{
		NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  L_0 = (NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 )__this->get_m_Updated_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_mFC97F3FE78DFC548F04543CF1246DC1EC61B8214_gshared_inline (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, const RuntimeMethod* method)
{
	{
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_0 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )__this->get_m_Removed_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  TrackableChanges_1_get_added_mBB3A80E298216A6D8826422F62A11A1A4CB7CBD9_gshared_inline (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, const RuntimeMethod* method)
{
	{
		NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  L_0 = (NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 )__this->get_m_Added_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  TrackableChanges_1_get_updated_m80DB51775906B404AEE4C7454E7A517ECFD6A003_gshared_inline (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, const RuntimeMethod* method)
{
	{
		NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  L_0 = (NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 )__this->get_m_Updated_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_mC49E91CAF67469CDD76DBCF18D1423DC3971AF99_gshared_inline (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, const RuntimeMethod* method)
{
	{
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_0 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )__this->get_m_Removed_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  TrackableChanges_1_get_added_mC31FEFAAC8F70ABBBC324DC618B0DFAB08AAE934_gshared_inline (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, const RuntimeMethod* method)
{
	{
		NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  L_0 = (NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 )__this->get_m_Added_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  TrackableChanges_1_get_updated_m54C710EFD531DFB25ABA289B60FAA4181D479DDF_gshared_inline (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, const RuntimeMethod* method)
{
	{
		NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  L_0 = (NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 )__this->get_m_Updated_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_m9781A441FA95E17CBDB3C4687247859A562AF077_gshared_inline (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, const RuntimeMethod* method)
{
	{
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_0 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )__this->get_m_Removed_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR KeyValuePair_2_tE370629D71E4468BE162EB67B39EF5299AAAFBB3  Enumerator_get_Current_mDB91F5D20CC6A0F868AEB29B4864813567BAE7DF_gshared_inline (Enumerator_t05190B8C9CB39286397757C04499EED7BB9E206E * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_tE370629D71E4468BE162EB67B39EF5299AAAFBB3  L_0 = (KeyValuePair_2_tE370629D71E4468BE162EB67B39EF5299AAAFBB3 )__this->get_current_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m3A9E6AF4065028FDA3445474F46893E9387CBC29_gshared_inline (KeyValuePair_2_tE370629D71E4468BE162EB67B39EF5299AAAFBB3 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_mA423E6EE5F48904DF767922DF13E2E0CF69535C6_gshared_inline (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_U3CisCreatedU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m13ACF4058532E679A8DE069092C203B86CBDCAE0_gshared_inline (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CisCreatedU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5  TrackableChanges_1_get_added_m6C3AA173D63B8181A147527E5D607363D4D7E3B9_gshared_inline (TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 * __this, const RuntimeMethod* method)
{
	{
		NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5  L_0 = (NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5 )__this->get_m_Added_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5  TrackableChanges_1_get_updated_m4DD6B31059055267B3F98F003F7891F74052267D_gshared_inline (TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 * __this, const RuntimeMethod* method)
{
	{
		NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5  L_0 = (NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5 )__this->get_m_Updated_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_m7C323DBD29E884085A21A82E9D5ABC458EF49AED_gshared_inline (TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 * __this, const RuntimeMethod* method)
{
	{
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_0 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )__this->get_m_Removed_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_mD2D689F21DCB8E4F238E18F88981D142C946CC69_gshared_inline (TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_U3CisCreatedU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m032D3E111CF433FC5556450F581911649722CA1B_gshared_inline (TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CisCreatedU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_m6BDB6E85EF722CE4F115552E754E059F9BBA87B8_gshared_inline (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_U3CisCreatedU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_mE659C5BCD61914E799B4D6AAE6AD5AD7B9DDCE76_gshared_inline (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CisCreatedU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_m81592B6012FD82C68A023EC52FFAB3B4A35C6A3D_gshared_inline (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_U3CisCreatedU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m3B57EAEC482D7B5D700E044B8720F89F25B13DC5_gshared_inline (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CisCreatedU3Ek__BackingField_0(L_0);
		return;
	}
}
