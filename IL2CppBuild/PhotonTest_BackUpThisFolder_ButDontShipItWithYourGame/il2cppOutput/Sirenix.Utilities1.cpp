#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
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
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<Sirenix.Utilities.GUILayoutOptions/GUILayoutOptionsInstance,UnityEngine.GUILayoutOption[]>
struct Dictionary_2_tEA9D585D97DD6BF149DE795DFC8D421DB6D18B3D;
// System.Collections.Generic.IEnumerable`1<System.Char>
struct IEnumerable_1_tA116A870C8332D2D64FD13D5449B11BC676AC3D3;
// System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo>
struct IEnumerable_1_tC1469845CEBD36D92E7FE77DA40BA86D0F5DD295;
// System.Collections.Generic.IEnumerator`1<System.Reflection.MemberInfo>
struct IEnumerator_1_t556F6E5384E7EA0D2E211524A603938CEA2CFDAC;
// System.Collections.Generic.IEnumerator`1<System.Type>
struct IEnumerator_1_t5C4FADAE1CD0985640B2EDB887FE74A475EDEEDB;
// System.Collections.Generic.IEqualityComparer`1<Sirenix.Utilities.GUILayoutOptions/GUILayoutOptionsInstance>
struct IEqualityComparer_1_tF57257A0871AF10258DFB6E70B4750891D4B8888;
// System.Collections.Generic.Dictionary`2/KeyCollection<Sirenix.Utilities.GUILayoutOptions/GUILayoutOptionsInstance,UnityEngine.GUILayoutOption[]>
struct KeyCollection_t5B8C51D3D9EB3A561F2369C627599610AAC421E2;
// System.Collections.Generic.List`1<UnityEngine.GUILayoutOption>
struct List_1_t65DB33C8EF5F2F667E78D747FBA152BF5C1C506B;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<Sirenix.Utilities.DeepReflection/PathStep>
struct List_1_t1397A266905C615B22796E5B9A0C8991F37EA426;
// System.Collections.Generic.Dictionary`2/ValueCollection<Sirenix.Utilities.GUILayoutOptions/GUILayoutOptionsInstance,UnityEngine.GUILayoutOption[]>
struct ValueCollection_t0AD935527756CB94E150A19889561E5A51E0A1D4;
// Sirenix.Utilities.ValueGetter`2<System.Object,System.IntPtr>
struct ValueGetter_2_tDC98C04C99FEAE4D23ECAA6D9E84E55EDC4D73D9;
// Sirenix.Utilities.ValueGetter`2<UnityEngine.Object,System.IntPtr>
struct ValueGetter_2_t7A32360D14D98554904C377692F0A8160DA1EF34;
// System.Collections.Generic.Dictionary`2/Entry<Sirenix.Utilities.GUILayoutOptions/GUILayoutOptionsInstance,UnityEngine.GUILayoutOption[]>[]
struct EntryU5BU5D_tCEE93A0A3AE752755653DD24E4FA46B498039B76;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// Sirenix.Utilities.DeepReflection/PathStep[]
struct PathStepU5BU5D_t9124581E037D41E9CE32806A421630205066601D;
// Sirenix.Utilities.GUILayoutOptions/GUILayoutOptionsInstance[]
struct GUILayoutOptionsInstanceU5BU5D_t803E1B7D2362A526B22D937C6D812BF819F309C5;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Threading.ExecutionContext
struct ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// UnityEngine.GUILayoutOption
struct GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.Collections.IList
struct IList_tB15A9D6625D09661D6E47976BB626C703EC81910;
// System.Security.Principal.IPrincipal
struct IPrincipal_t850ACE1F48327B64F266DD2C6FD8C5F56E4889E2;
// Sirenix.Utilities.ImmutableList
struct ImmutableList_tB95C3BA00C89D0B8BB482F454854C7DF54BB8E52;
// System.Threading.InternalThread
struct InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.MulticastDelegate
struct MulticastDelegate_t;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// System.Threading.Thread
struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Sirenix.Utilities.WeakValueGetter
struct WeakValueGetter_t828D3829FE3BCD84DB46D8B0BB3408AFC21B0D9E;
// Sirenix.Utilities.WeakValueSetter
struct WeakValueSetter_t1E87206CC24D3306743CFDDA24320FB2C6D9D299;
// Sirenix.Utilities.DeepReflection/<>c__DisplayClass21_0
struct U3CU3Ec__DisplayClass21_0_t5B1BBC194D7A6D14C701828D45682122B3AA3A59;
// Sirenix.Utilities.DeepReflection/<>c__DisplayClass22_0
struct U3CU3Ec__DisplayClass22_0_tBC2EEC202D7F688B5FB569D9DD144770CBE4F1F5;
// Sirenix.Utilities.DeepReflection/<>c__DisplayClass23_0
struct U3CU3Ec__DisplayClass23_0_t7CE96C7EF0C1523627FA2D92ACC5094B6523C0EB;
// Sirenix.Utilities.EmitUtilities/<>c__DisplayClass11_0
struct U3CU3Ec__DisplayClass11_0_tFB125390FA0E0D088FB3103A49D94DFDAE981CCE;
// Sirenix.Utilities.EmitUtilities/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_tD25EA8A250F71D48585DC89F4F3F038262EC7B80;
// Sirenix.Utilities.EmitUtilities/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_t315EA5E49D4DF52CBB339CDD6BD7F96357E981D9;
// Sirenix.Utilities.EmitUtilities/<>c__DisplayClass21_0
struct U3CU3Ec__DisplayClass21_0_t859ABED2A0FC42FF5C6CFBC3B15EFD1AC4A0C81D;
// Sirenix.Utilities.EmitUtilities/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t42491A938C6D3A33F5024EC431EF0FFC27825456;
// Sirenix.Utilities.EmitUtilities/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t155AE7438CF4898A93D476EE2882ABC149295DAF;
// Sirenix.Utilities.EmitUtilities/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_tB6489575E603650102DB67292784DAA3860D0366;
// Sirenix.Utilities.GUILayoutOptions/GUILayoutOptionsInstance
struct GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C;
// Sirenix.Utilities.ImmutableList/<System-Collections-Generic-IEnumerable<System-Object>-GetEnumerator>d__25
struct U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_t9676F100F6E148EC1848685DF6FDD8822072D3EC;
// Sirenix.Utilities.SirenixAssetPaths/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_t1DE250270549C484B2929D67484F579EB63FE486;
// Sirenix.Utilities.TypeExtensions/<>c__DisplayClass29_0
struct U3CU3Ec__DisplayClass29_0_tCA31F23460E600747F7250F76EA9B026170F60F5;
// Sirenix.Utilities.TypeExtensions/<>c__DisplayClass45_0
struct U3CU3Ec__DisplayClass45_0_t16E5F2D65FAE8361143998F5DE99E7C93C5CBC95;
// Sirenix.Utilities.TypeExtensions/<>c__DisplayClass46_0
struct U3CU3Ec__DisplayClass46_0_t5DF7E38388EC8F406BE16F9223BC552F3504B250;
// Sirenix.Utilities.TypeExtensions/<GetAllMembers>d__47
struct U3CGetAllMembersU3Ed__47_t4C90809A102D2827FDE5A986E216A49824F8D2A0;
// Sirenix.Utilities.TypeExtensions/<GetAllMembers>d__48
struct U3CGetAllMembersU3Ed__48_t4875E6379D17BB16E2C05B2CBB7645C86F3D357D;
// Sirenix.Utilities.TypeExtensions/<GetBaseClasses>d__53
struct U3CGetBaseClassesU3Ed__53_t698E0333B78EF858B505025B28A4EE6F4718CBB7;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DeepReflection_t50973B8BEB83B1402D2298C6E87748884046FCD2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUILayoutOptions_t87EB468F6835D8ED753C1D0A2A1BBA1633FBEA08_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tC1469845CEBD36D92E7FE77DA40BA86D0F5DD295_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t556F6E5384E7EA0D2E211524A603938CEA2CFDAC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t65DB33C8EF5F2F667E78D747FBA152BF5C1C506B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeExtensions_tDAC2F4590E6EF3CA7C41B48DB93D2240BEA8109C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetAllMembersU3Ed__47_t4C90809A102D2827FDE5A986E216A49824F8D2A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetAllMembersU3Ed__48_t4875E6379D17BB16E2C05B2CBB7645C86F3D357D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetBaseClassesU3Ed__53_t698E0333B78EF858B505025B28A4EE6F4718CBB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityExtensions_t5D54B2331F27292CD5BC2620F40EB5F20ECBD74B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityVersion_t71812D047DFC03FCD7B200F135206D0B8214B551_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral03AB2C403B6556E5A76B2BE4E510934AD585B8A1;
IL2CPP_EXTERN_C String_t* _stringLiteral08908F0785BBC0CCD8F712A32DE01C9E45597F21;
IL2CPP_EXTERN_C String_t* _stringLiteral0FBEE35345E8D388C523672DCD1D97721575F12E;
IL2CPP_EXTERN_C String_t* _stringLiteral1FE371F4FD106F2E23AD17CE17DD19CBEAB4C201;
IL2CPP_EXTERN_C String_t* _stringLiteral3125A7BAD1D9F6BD71BCEE4C2B9156FDFD2007D3;
IL2CPP_EXTERN_C String_t* _stringLiteral3F530C05EDCBF7716458575421F02CF2C179352F;
IL2CPP_EXTERN_C String_t* _stringLiteral45E91B775C05667BB0C4313D3AF0298D560E3F90;
IL2CPP_EXTERN_C String_t* _stringLiteral6A825010D5EA79C01DD8A61B9868ED1079027C59;
IL2CPP_EXTERN_C String_t* _stringLiteral6B467E9437ABC9E94BFC901F0C0D1B5CB4BA7FA6;
IL2CPP_EXTERN_C String_t* _stringLiteral6BE0C776B3F645DA91BB7E44C3B8DF8B543935F6;
IL2CPP_EXTERN_C String_t* _stringLiteral87064437EF311884667DAB55AAFBBAC160D0E41D;
IL2CPP_EXTERN_C String_t* _stringLiteralB27BC2DBD9E4582303E95015D30F8DB415DB3D4B;
IL2CPP_EXTERN_C String_t* _stringLiteralC7A7939E82BEFEF8DDB755713442AA62963F09F8;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mEC551CB83CE32E44EB680DACAFE76659ECEA6B0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mE59D8221A61B1CEEBBF1F030D628DB2F2FFE9516_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EmitUtilities_CreateInstanceFieldGetter_TisObject_tF2F3778131EFF286AF62B7B013A170F95A91571A_TisIntPtr_t_m74BE8E6173ABDB3F4B9EE979FC513E3FFF500C47_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Contains_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_m832DBC12FA0773F2E47557F7885E452BB0F9A21D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43E5ABF5F6F629B93B05F2C19AEFAE84A17B0B2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mF4F7ADB12FE44C8EA71EA7C72E843E26EF02B5E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD1A13F1C8FD04395BB5BAF5E2FFFDF400AD4910C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m43F79DA64E0B750D0AF10F02F3BC0EA92F3E55B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m696E7898F085B752FECA712127AA61F0E1567445_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetAllMembersU3Ed__47_System_Collections_IEnumerator_Reset_mB364C7B473F1F0CFA6DE380A7E7FCA5BF60EF61D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetAllMembersU3Ed__48_System_Collections_IEnumerator_Reset_m9403D56F1D7257C8A52B6F0828D81AFD942AC978_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetBaseClassesU3Ed__53_System_Collections_IEnumerator_Reset_mDB88BC8D16D6D95FFB58AC5020C5D45BAF1D92A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_System_Collections_IEnumerator_Reset_mCC7B262EBA6CD865C53DED2CE46E5D138AA2194E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityExtensions_SafeIsUnityNull_mB55495551DCEC86E91024E66172903DAB4649504_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeUtilities_MemoryCopy_m9F3455E1DB0842B9A907DB06E0AC244DE6FF31F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeUtilities_StringFromBytes_m2C4A0CD8B3F7629B49600B6C912B9AD68988C2B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeUtilities_StringToBytes_m7A0BD67774961DB2CA91F3DA04C2D2AF63B52492_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueGetter_2_Invoke_m00C7BE42EC065324001BF3ED699DC4971CA7ABA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* IList_1_tCFBEF0BE66D2411D5AEA86FDF1C1E71F013AA724_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B;
struct MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
struct PathStepU5BU5D_t9124581E037D41E9CE32806A421630205066601D;
struct GUILayoutOptionsInstanceU5BU5D_t803E1B7D2362A526B22D937C6D812BF819F309C5;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Dictionary`2<Sirenix.Utilities.GUILayoutOptions/GUILayoutOptionsInstance,UnityEngine.GUILayoutOption[]>
struct Dictionary_2_tEA9D585D97DD6BF149DE795DFC8D421DB6D18B3D  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tCEE93A0A3AE752755653DD24E4FA46B498039B76* ___entries_1;
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
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t5B8C51D3D9EB3A561F2369C627599610AAC421E2 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t0AD935527756CB94E150A19889561E5A51E0A1D4 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tEA9D585D97DD6BF149DE795DFC8D421DB6D18B3D, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tEA9D585D97DD6BF149DE795DFC8D421DB6D18B3D, ___entries_1)); }
	inline EntryU5BU5D_tCEE93A0A3AE752755653DD24E4FA46B498039B76* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tCEE93A0A3AE752755653DD24E4FA46B498039B76** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tCEE93A0A3AE752755653DD24E4FA46B498039B76* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tEA9D585D97DD6BF149DE795DFC8D421DB6D18B3D, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tEA9D585D97DD6BF149DE795DFC8D421DB6D18B3D, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tEA9D585D97DD6BF149DE795DFC8D421DB6D18B3D, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tEA9D585D97DD6BF149DE795DFC8D421DB6D18B3D, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tEA9D585D97DD6BF149DE795DFC8D421DB6D18B3D, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tEA9D585D97DD6BF149DE795DFC8D421DB6D18B3D, ___keys_7)); }
	inline KeyCollection_t5B8C51D3D9EB3A561F2369C627599610AAC421E2 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t5B8C51D3D9EB3A561F2369C627599610AAC421E2 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t5B8C51D3D9EB3A561F2369C627599610AAC421E2 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tEA9D585D97DD6BF149DE795DFC8D421DB6D18B3D, ___values_8)); }
	inline ValueCollection_t0AD935527756CB94E150A19889561E5A51E0A1D4 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t0AD935527756CB94E150A19889561E5A51E0A1D4 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t0AD935527756CB94E150A19889561E5A51E0A1D4 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tEA9D585D97DD6BF149DE795DFC8D421DB6D18B3D, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.GUILayoutOption>
struct List_1_t65DB33C8EF5F2F667E78D747FBA152BF5C1C506B  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t65DB33C8EF5F2F667E78D747FBA152BF5C1C506B, ____items_1)); }
	inline GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* get__items_1() const { return ____items_1; }
	inline GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t65DB33C8EF5F2F667E78D747FBA152BF5C1C506B, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t65DB33C8EF5F2F667E78D747FBA152BF5C1C506B, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t65DB33C8EF5F2F667E78D747FBA152BF5C1C506B, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t65DB33C8EF5F2F667E78D747FBA152BF5C1C506B_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t65DB33C8EF5F2F667E78D747FBA152BF5C1C506B_StaticFields, ____emptyArray_5)); }
	inline GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* get__emptyArray_5() const { return ____emptyArray_5; }
	inline GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Sirenix.Utilities.DeepReflection/PathStep>
struct List_1_t1397A266905C615B22796E5B9A0C8991F37EA426  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	PathStepU5BU5D_t9124581E037D41E9CE32806A421630205066601D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1397A266905C615B22796E5B9A0C8991F37EA426, ____items_1)); }
	inline PathStepU5BU5D_t9124581E037D41E9CE32806A421630205066601D* get__items_1() const { return ____items_1; }
	inline PathStepU5BU5D_t9124581E037D41E9CE32806A421630205066601D** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(PathStepU5BU5D_t9124581E037D41E9CE32806A421630205066601D* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1397A266905C615B22796E5B9A0C8991F37EA426, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1397A266905C615B22796E5B9A0C8991F37EA426, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t1397A266905C615B22796E5B9A0C8991F37EA426, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t1397A266905C615B22796E5B9A0C8991F37EA426_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	PathStepU5BU5D_t9124581E037D41E9CE32806A421630205066601D* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t1397A266905C615B22796E5B9A0C8991F37EA426_StaticFields, ____emptyArray_5)); }
	inline PathStepU5BU5D_t9124581E037D41E9CE32806A421630205066601D* get__emptyArray_5() const { return ____emptyArray_5; }
	inline PathStepU5BU5D_t9124581E037D41E9CE32806A421630205066601D** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(PathStepU5BU5D_t9124581E037D41E9CE32806A421630205066601D* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.BitConverter
struct BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654  : public RuntimeObject
{
public:

public:
};

struct BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_StaticFields
{
public:
	// System.Boolean System.BitConverter::IsLittleEndian
	bool ___IsLittleEndian_0;

public:
	inline static int32_t get_offset_of_IsLittleEndian_0() { return static_cast<int32_t>(offsetof(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_StaticFields, ___IsLittleEndian_0)); }
	inline bool get_IsLittleEndian_0() const { return ___IsLittleEndian_0; }
	inline bool* get_address_of_IsLittleEndian_0() { return &___IsLittleEndian_0; }
	inline void set_IsLittleEndian_0(bool value)
	{
		___IsLittleEndian_0 = value;
	}
};


// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_tA3367C832FFE7434EB3C15C7136AF25524150997  : public RuntimeObject
{
public:

public:
};


// Sirenix.Utilities.GUILayoutOptions
struct GUILayoutOptions_t87EB468F6835D8ED753C1D0A2A1BBA1633FBEA08  : public RuntimeObject
{
public:

public:
};

struct GUILayoutOptions_t87EB468F6835D8ED753C1D0A2A1BBA1633FBEA08_StaticFields
{
public:
	// System.Int32 Sirenix.Utilities.GUILayoutOptions::CurrentCacheIndex
	int32_t ___CurrentCacheIndex_0;
	// Sirenix.Utilities.GUILayoutOptions/GUILayoutOptionsInstance[] Sirenix.Utilities.GUILayoutOptions::GUILayoutOptionsInstanceCache
	GUILayoutOptionsInstanceU5BU5D_t803E1B7D2362A526B22D937C6D812BF819F309C5* ___GUILayoutOptionsInstanceCache_1;
	// System.Collections.Generic.Dictionary`2<Sirenix.Utilities.GUILayoutOptions/GUILayoutOptionsInstance,UnityEngine.GUILayoutOption[]> Sirenix.Utilities.GUILayoutOptions::GUILayoutOptionsCache
	Dictionary_2_tEA9D585D97DD6BF149DE795DFC8D421DB6D18B3D * ___GUILayoutOptionsCache_2;
	// UnityEngine.GUILayoutOption[] Sirenix.Utilities.GUILayoutOptions::EmptyGUIOptions
	GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* ___EmptyGUIOptions_3;

public:
	inline static int32_t get_offset_of_CurrentCacheIndex_0() { return static_cast<int32_t>(offsetof(GUILayoutOptions_t87EB468F6835D8ED753C1D0A2A1BBA1633FBEA08_StaticFields, ___CurrentCacheIndex_0)); }
	inline int32_t get_CurrentCacheIndex_0() const { return ___CurrentCacheIndex_0; }
	inline int32_t* get_address_of_CurrentCacheIndex_0() { return &___CurrentCacheIndex_0; }
	inline void set_CurrentCacheIndex_0(int32_t value)
	{
		___CurrentCacheIndex_0 = value;
	}

	inline static int32_t get_offset_of_GUILayoutOptionsInstanceCache_1() { return static_cast<int32_t>(offsetof(GUILayoutOptions_t87EB468F6835D8ED753C1D0A2A1BBA1633FBEA08_StaticFields, ___GUILayoutOptionsInstanceCache_1)); }
	inline GUILayoutOptionsInstanceU5BU5D_t803E1B7D2362A526B22D937C6D812BF819F309C5* get_GUILayoutOptionsInstanceCache_1() const { return ___GUILayoutOptionsInstanceCache_1; }
	inline GUILayoutOptionsInstanceU5BU5D_t803E1B7D2362A526B22D937C6D812BF819F309C5** get_address_of_GUILayoutOptionsInstanceCache_1() { return &___GUILayoutOptionsInstanceCache_1; }
	inline void set_GUILayoutOptionsInstanceCache_1(GUILayoutOptionsInstanceU5BU5D_t803E1B7D2362A526B22D937C6D812BF819F309C5* value)
	{
		___GUILayoutOptionsInstanceCache_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GUILayoutOptionsInstanceCache_1), (void*)value);
	}

	inline static int32_t get_offset_of_GUILayoutOptionsCache_2() { return static_cast<int32_t>(offsetof(GUILayoutOptions_t87EB468F6835D8ED753C1D0A2A1BBA1633FBEA08_StaticFields, ___GUILayoutOptionsCache_2)); }
	inline Dictionary_2_tEA9D585D97DD6BF149DE795DFC8D421DB6D18B3D * get_GUILayoutOptionsCache_2() const { return ___GUILayoutOptionsCache_2; }
	inline Dictionary_2_tEA9D585D97DD6BF149DE795DFC8D421DB6D18B3D ** get_address_of_GUILayoutOptionsCache_2() { return &___GUILayoutOptionsCache_2; }
	inline void set_GUILayoutOptionsCache_2(Dictionary_2_tEA9D585D97DD6BF149DE795DFC8D421DB6D18B3D * value)
	{
		___GUILayoutOptionsCache_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GUILayoutOptionsCache_2), (void*)value);
	}

	inline static int32_t get_offset_of_EmptyGUIOptions_3() { return static_cast<int32_t>(offsetof(GUILayoutOptions_t87EB468F6835D8ED753C1D0A2A1BBA1633FBEA08_StaticFields, ___EmptyGUIOptions_3)); }
	inline GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* get_EmptyGUIOptions_3() const { return ___EmptyGUIOptions_3; }
	inline GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B** get_address_of_EmptyGUIOptions_3() { return &___EmptyGUIOptions_3; }
	inline void set_EmptyGUIOptions_3(GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* value)
	{
		___EmptyGUIOptions_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyGUIOptions_3), (void*)value);
	}
};


// Sirenix.Utilities.ImmutableList
struct ImmutableList_tB95C3BA00C89D0B8BB482F454854C7DF54BB8E52  : public RuntimeObject
{
public:
	// System.Collections.IList Sirenix.Utilities.ImmutableList::innerList
	RuntimeObject* ___innerList_0;

public:
	inline static int32_t get_offset_of_innerList_0() { return static_cast<int32_t>(offsetof(ImmutableList_tB95C3BA00C89D0B8BB482F454854C7DF54BB8E52, ___innerList_0)); }
	inline RuntimeObject* get_innerList_0() const { return ___innerList_0; }
	inline RuntimeObject** get_address_of_innerList_0() { return &___innerList_0; }
	inline void set_innerList_0(RuntimeObject* value)
	{
		___innerList_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___innerList_0), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
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


// Sirenix.Utilities.UnityExtensions
struct UnityExtensions_t5D54B2331F27292CD5BC2620F40EB5F20ECBD74B  : public RuntimeObject
{
public:

public:
};

struct UnityExtensions_t5D54B2331F27292CD5BC2620F40EB5F20ECBD74B_StaticFields
{
public:
	// Sirenix.Utilities.ValueGetter`2<UnityEngine.Object,System.IntPtr> Sirenix.Utilities.UnityExtensions::UnityObjectCachedPtrFieldGetter
	ValueGetter_2_t7A32360D14D98554904C377692F0A8160DA1EF34 * ___UnityObjectCachedPtrFieldGetter_0;

public:
	inline static int32_t get_offset_of_UnityObjectCachedPtrFieldGetter_0() { return static_cast<int32_t>(offsetof(UnityExtensions_t5D54B2331F27292CD5BC2620F40EB5F20ECBD74B_StaticFields, ___UnityObjectCachedPtrFieldGetter_0)); }
	inline ValueGetter_2_t7A32360D14D98554904C377692F0A8160DA1EF34 * get_UnityObjectCachedPtrFieldGetter_0() const { return ___UnityObjectCachedPtrFieldGetter_0; }
	inline ValueGetter_2_t7A32360D14D98554904C377692F0A8160DA1EF34 ** get_address_of_UnityObjectCachedPtrFieldGetter_0() { return &___UnityObjectCachedPtrFieldGetter_0; }
	inline void set_UnityObjectCachedPtrFieldGetter_0(ValueGetter_2_t7A32360D14D98554904C377692F0A8160DA1EF34 * value)
	{
		___UnityObjectCachedPtrFieldGetter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UnityObjectCachedPtrFieldGetter_0), (void*)value);
	}
};


// Sirenix.Utilities.UnityVersion
struct UnityVersion_t71812D047DFC03FCD7B200F135206D0B8214B551  : public RuntimeObject
{
public:

public:
};

struct UnityVersion_t71812D047DFC03FCD7B200F135206D0B8214B551_StaticFields
{
public:
	// System.Int32 Sirenix.Utilities.UnityVersion::Major
	int32_t ___Major_0;
	// System.Int32 Sirenix.Utilities.UnityVersion::Minor
	int32_t ___Minor_1;

public:
	inline static int32_t get_offset_of_Major_0() { return static_cast<int32_t>(offsetof(UnityVersion_t71812D047DFC03FCD7B200F135206D0B8214B551_StaticFields, ___Major_0)); }
	inline int32_t get_Major_0() const { return ___Major_0; }
	inline int32_t* get_address_of_Major_0() { return &___Major_0; }
	inline void set_Major_0(int32_t value)
	{
		___Major_0 = value;
	}

	inline static int32_t get_offset_of_Minor_1() { return static_cast<int32_t>(offsetof(UnityVersion_t71812D047DFC03FCD7B200F135206D0B8214B551_StaticFields, ___Minor_1)); }
	inline int32_t get_Minor_1() const { return ___Minor_1; }
	inline int32_t* get_address_of_Minor_1() { return &___Minor_1; }
	inline void set_Minor_1(int32_t value)
	{
		___Minor_1 = value;
	}
};


// Sirenix.Utilities.Unsafe.UnsafeUtilities
struct UnsafeUtilities_tD6B6C7DE15F95A57E8D70F612B560B2A9CE583A3  : public RuntimeObject
{
public:

public:
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// Sirenix.Utilities.DeepReflection/<>c__DisplayClass21_0
struct U3CU3Ec__DisplayClass21_0_t5B1BBC194D7A6D14C701828D45682122B3AA3A59  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<Sirenix.Utilities.DeepReflection/PathStep> Sirenix.Utilities.DeepReflection/<>c__DisplayClass21_0::memberPath
	List_1_t1397A266905C615B22796E5B9A0C8991F37EA426 * ___memberPath_0;

public:
	inline static int32_t get_offset_of_memberPath_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass21_0_t5B1BBC194D7A6D14C701828D45682122B3AA3A59, ___memberPath_0)); }
	inline List_1_t1397A266905C615B22796E5B9A0C8991F37EA426 * get_memberPath_0() const { return ___memberPath_0; }
	inline List_1_t1397A266905C615B22796E5B9A0C8991F37EA426 ** get_address_of_memberPath_0() { return &___memberPath_0; }
	inline void set_memberPath_0(List_1_t1397A266905C615B22796E5B9A0C8991F37EA426 * value)
	{
		___memberPath_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___memberPath_0), (void*)value);
	}
};


// Sirenix.Utilities.DeepReflection/<>c__DisplayClass22_0
struct U3CU3Ec__DisplayClass22_0_tBC2EEC202D7F688B5FB569D9DD144770CBE4F1F5  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<Sirenix.Utilities.DeepReflection/PathStep> Sirenix.Utilities.DeepReflection/<>c__DisplayClass22_0::memberPath
	List_1_t1397A266905C615B22796E5B9A0C8991F37EA426 * ___memberPath_0;

public:
	inline static int32_t get_offset_of_memberPath_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass22_0_tBC2EEC202D7F688B5FB569D9DD144770CBE4F1F5, ___memberPath_0)); }
	inline List_1_t1397A266905C615B22796E5B9A0C8991F37EA426 * get_memberPath_0() const { return ___memberPath_0; }
	inline List_1_t1397A266905C615B22796E5B9A0C8991F37EA426 ** get_address_of_memberPath_0() { return &___memberPath_0; }
	inline void set_memberPath_0(List_1_t1397A266905C615B22796E5B9A0C8991F37EA426 * value)
	{
		___memberPath_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___memberPath_0), (void*)value);
	}
};


// Sirenix.Utilities.DeepReflection/<>c__DisplayClass23_0
struct U3CU3Ec__DisplayClass23_0_t7CE96C7EF0C1523627FA2D92ACC5094B6523C0EB  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<Sirenix.Utilities.DeepReflection/PathStep> Sirenix.Utilities.DeepReflection/<>c__DisplayClass23_0::memberPath
	List_1_t1397A266905C615B22796E5B9A0C8991F37EA426 * ___memberPath_0;

public:
	inline static int32_t get_offset_of_memberPath_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass23_0_t7CE96C7EF0C1523627FA2D92ACC5094B6523C0EB, ___memberPath_0)); }
	inline List_1_t1397A266905C615B22796E5B9A0C8991F37EA426 * get_memberPath_0() const { return ___memberPath_0; }
	inline List_1_t1397A266905C615B22796E5B9A0C8991F37EA426 ** get_address_of_memberPath_0() { return &___memberPath_0; }
	inline void set_memberPath_0(List_1_t1397A266905C615B22796E5B9A0C8991F37EA426 * value)
	{
		___memberPath_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___memberPath_0), (void*)value);
	}
};


// Sirenix.Utilities.EmitUtilities/<>c__DisplayClass11_0
struct U3CU3Ec__DisplayClass11_0_tFB125390FA0E0D088FB3103A49D94DFDAE981CCE  : public RuntimeObject
{
public:
	// System.Reflection.FieldInfo Sirenix.Utilities.EmitUtilities/<>c__DisplayClass11_0::fieldInfo
	FieldInfo_t * ___fieldInfo_0;

public:
	inline static int32_t get_offset_of_fieldInfo_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass11_0_tFB125390FA0E0D088FB3103A49D94DFDAE981CCE, ___fieldInfo_0)); }
	inline FieldInfo_t * get_fieldInfo_0() const { return ___fieldInfo_0; }
	inline FieldInfo_t ** get_address_of_fieldInfo_0() { return &___fieldInfo_0; }
	inline void set_fieldInfo_0(FieldInfo_t * value)
	{
		___fieldInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fieldInfo_0), (void*)value);
	}
};


// Sirenix.Utilities.EmitUtilities/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_tD25EA8A250F71D48585DC89F4F3F038262EC7B80  : public RuntimeObject
{
public:
	// System.Reflection.PropertyInfo Sirenix.Utilities.EmitUtilities/<>c__DisplayClass12_0::propertyInfo
	PropertyInfo_t * ___propertyInfo_0;

public:
	inline static int32_t get_offset_of_propertyInfo_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass12_0_tD25EA8A250F71D48585DC89F4F3F038262EC7B80, ___propertyInfo_0)); }
	inline PropertyInfo_t * get_propertyInfo_0() const { return ___propertyInfo_0; }
	inline PropertyInfo_t ** get_address_of_propertyInfo_0() { return &___propertyInfo_0; }
	inline void set_propertyInfo_0(PropertyInfo_t * value)
	{
		___propertyInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___propertyInfo_0), (void*)value);
	}
};


// Sirenix.Utilities.EmitUtilities/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_t315EA5E49D4DF52CBB339CDD6BD7F96357E981D9  : public RuntimeObject
{
public:
	// System.Reflection.PropertyInfo Sirenix.Utilities.EmitUtilities/<>c__DisplayClass13_0::propertyInfo
	PropertyInfo_t * ___propertyInfo_0;

public:
	inline static int32_t get_offset_of_propertyInfo_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass13_0_t315EA5E49D4DF52CBB339CDD6BD7F96357E981D9, ___propertyInfo_0)); }
	inline PropertyInfo_t * get_propertyInfo_0() const { return ___propertyInfo_0; }
	inline PropertyInfo_t ** get_address_of_propertyInfo_0() { return &___propertyInfo_0; }
	inline void set_propertyInfo_0(PropertyInfo_t * value)
	{
		___propertyInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___propertyInfo_0), (void*)value);
	}
};


// Sirenix.Utilities.EmitUtilities/<>c__DisplayClass21_0
struct U3CU3Ec__DisplayClass21_0_t859ABED2A0FC42FF5C6CFBC3B15EFD1AC4A0C81D  : public RuntimeObject
{
public:
	// System.Reflection.MethodInfo Sirenix.Utilities.EmitUtilities/<>c__DisplayClass21_0::methodInfo
	MethodInfo_t * ___methodInfo_0;

public:
	inline static int32_t get_offset_of_methodInfo_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass21_0_t859ABED2A0FC42FF5C6CFBC3B15EFD1AC4A0C81D, ___methodInfo_0)); }
	inline MethodInfo_t * get_methodInfo_0() const { return ___methodInfo_0; }
	inline MethodInfo_t ** get_address_of_methodInfo_0() { return &___methodInfo_0; }
	inline void set_methodInfo_0(MethodInfo_t * value)
	{
		___methodInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___methodInfo_0), (void*)value);
	}
};


// Sirenix.Utilities.EmitUtilities/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t42491A938C6D3A33F5024EC431EF0FFC27825456  : public RuntimeObject
{
public:
	// System.Reflection.FieldInfo Sirenix.Utilities.EmitUtilities/<>c__DisplayClass3_0::fieldInfo
	FieldInfo_t * ___fieldInfo_0;

public:
	inline static int32_t get_offset_of_fieldInfo_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_t42491A938C6D3A33F5024EC431EF0FFC27825456, ___fieldInfo_0)); }
	inline FieldInfo_t * get_fieldInfo_0() const { return ___fieldInfo_0; }
	inline FieldInfo_t ** get_address_of_fieldInfo_0() { return &___fieldInfo_0; }
	inline void set_fieldInfo_0(FieldInfo_t * value)
	{
		___fieldInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fieldInfo_0), (void*)value);
	}
};


// Sirenix.Utilities.EmitUtilities/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t155AE7438CF4898A93D476EE2882ABC149295DAF  : public RuntimeObject
{
public:
	// System.Reflection.FieldInfo Sirenix.Utilities.EmitUtilities/<>c__DisplayClass5_0::fieldInfo
	FieldInfo_t * ___fieldInfo_0;

public:
	inline static int32_t get_offset_of_fieldInfo_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_t155AE7438CF4898A93D476EE2882ABC149295DAF, ___fieldInfo_0)); }
	inline FieldInfo_t * get_fieldInfo_0() const { return ___fieldInfo_0; }
	inline FieldInfo_t ** get_address_of_fieldInfo_0() { return &___fieldInfo_0; }
	inline void set_fieldInfo_0(FieldInfo_t * value)
	{
		___fieldInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fieldInfo_0), (void*)value);
	}
};


// Sirenix.Utilities.EmitUtilities/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_tB6489575E603650102DB67292784DAA3860D0366  : public RuntimeObject
{
public:
	// System.Reflection.FieldInfo Sirenix.Utilities.EmitUtilities/<>c__DisplayClass8_0::fieldInfo
	FieldInfo_t * ___fieldInfo_0;

public:
	inline static int32_t get_offset_of_fieldInfo_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass8_0_tB6489575E603650102DB67292784DAA3860D0366, ___fieldInfo_0)); }
	inline FieldInfo_t * get_fieldInfo_0() const { return ___fieldInfo_0; }
	inline FieldInfo_t ** get_address_of_fieldInfo_0() { return &___fieldInfo_0; }
	inline void set_fieldInfo_0(FieldInfo_t * value)
	{
		___fieldInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fieldInfo_0), (void*)value);
	}
};


// Sirenix.Utilities.ImmutableList/<System-Collections-Generic-IEnumerable<System-Object>-GetEnumerator>d__25
struct U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_t9676F100F6E148EC1848685DF6FDD8822072D3EC  : public RuntimeObject
{
public:
	// System.Int32 Sirenix.Utilities.ImmutableList/<System-Collections-Generic-IEnumerable<System-Object>-GetEnumerator>d__25::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Sirenix.Utilities.ImmutableList/<System-Collections-Generic-IEnumerable<System-Object>-GetEnumerator>d__25::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Sirenix.Utilities.ImmutableList Sirenix.Utilities.ImmutableList/<System-Collections-Generic-IEnumerable<System-Object>-GetEnumerator>d__25::<>4__this
	ImmutableList_tB95C3BA00C89D0B8BB482F454854C7DF54BB8E52 * ___U3CU3E4__this_2;
	// System.Collections.IEnumerator Sirenix.Utilities.ImmutableList/<System-Collections-Generic-IEnumerable<System-Object>-GetEnumerator>d__25::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_t9676F100F6E148EC1848685DF6FDD8822072D3EC, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_t9676F100F6E148EC1848685DF6FDD8822072D3EC, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_t9676F100F6E148EC1848685DF6FDD8822072D3EC, ___U3CU3E4__this_2)); }
	inline ImmutableList_tB95C3BA00C89D0B8BB482F454854C7DF54BB8E52 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ImmutableList_tB95C3BA00C89D0B8BB482F454854C7DF54BB8E52 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ImmutableList_tB95C3BA00C89D0B8BB482F454854C7DF54BB8E52 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_3() { return static_cast<int32_t>(offsetof(U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_t9676F100F6E148EC1848685DF6FDD8822072D3EC, ___U3CU3E7__wrap1_3)); }
	inline RuntimeObject* get_U3CU3E7__wrap1_3() const { return ___U3CU3E7__wrap1_3; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap1_3() { return &___U3CU3E7__wrap1_3; }
	inline void set_U3CU3E7__wrap1_3(RuntimeObject* value)
	{
		___U3CU3E7__wrap1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_3), (void*)value);
	}
};


// Sirenix.Utilities.SirenixAssetPaths/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_t1DE250270549C484B2929D67484F579EB63FE486  : public RuntimeObject
{
public:
	// System.Char[] Sirenix.Utilities.SirenixAssetPaths/<>c__DisplayClass12_0::invalids
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___invalids_0;
	// System.Char Sirenix.Utilities.SirenixAssetPaths/<>c__DisplayClass12_0::replace
	Il2CppChar ___replace_1;

public:
	inline static int32_t get_offset_of_invalids_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass12_0_t1DE250270549C484B2929D67484F579EB63FE486, ___invalids_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_invalids_0() const { return ___invalids_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_invalids_0() { return &___invalids_0; }
	inline void set_invalids_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___invalids_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invalids_0), (void*)value);
	}

	inline static int32_t get_offset_of_replace_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass12_0_t1DE250270549C484B2929D67484F579EB63FE486, ___replace_1)); }
	inline Il2CppChar get_replace_1() const { return ___replace_1; }
	inline Il2CppChar* get_address_of_replace_1() { return &___replace_1; }
	inline void set_replace_1(Il2CppChar value)
	{
		___replace_1 = value;
	}
};


// Sirenix.Utilities.TypeExtensions/<>c__DisplayClass29_0
struct U3CU3Ec__DisplayClass29_0_tCA31F23460E600747F7250F76EA9B026170F60F5  : public RuntimeObject
{
public:
	// System.Reflection.MethodInfo Sirenix.Utilities.TypeExtensions/<>c__DisplayClass29_0::method
	MethodInfo_t * ___method_0;

public:
	inline static int32_t get_offset_of_method_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass29_0_tCA31F23460E600747F7250F76EA9B026170F60F5, ___method_0)); }
	inline MethodInfo_t * get_method_0() const { return ___method_0; }
	inline MethodInfo_t ** get_address_of_method_0() { return &___method_0; }
	inline void set_method_0(MethodInfo_t * value)
	{
		___method_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_0), (void*)value);
	}
};


// Sirenix.Utilities.TypeExtensions/<>c__DisplayClass45_0
struct U3CU3Ec__DisplayClass45_0_t16E5F2D65FAE8361143998F5DE99E7C93C5CBC95  : public RuntimeObject
{
public:
	// System.String Sirenix.Utilities.TypeExtensions/<>c__DisplayClass45_0::methodName
	String_t* ___methodName_0;

public:
	inline static int32_t get_offset_of_methodName_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass45_0_t16E5F2D65FAE8361143998F5DE99E7C93C5CBC95, ___methodName_0)); }
	inline String_t* get_methodName_0() const { return ___methodName_0; }
	inline String_t** get_address_of_methodName_0() { return &___methodName_0; }
	inline void set_methodName_0(String_t* value)
	{
		___methodName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___methodName_0), (void*)value);
	}
};


// Sirenix.Utilities.TypeExtensions/<>c__DisplayClass46_0
struct U3CU3Ec__DisplayClass46_0_t5DF7E38388EC8F406BE16F9223BC552F3504B250  : public RuntimeObject
{
public:
	// System.String Sirenix.Utilities.TypeExtensions/<>c__DisplayClass46_0::methodName
	String_t* ___methodName_0;

public:
	inline static int32_t get_offset_of_methodName_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass46_0_t5DF7E38388EC8F406BE16F9223BC552F3504B250, ___methodName_0)); }
	inline String_t* get_methodName_0() const { return ___methodName_0; }
	inline String_t** get_address_of_methodName_0() { return &___methodName_0; }
	inline void set_methodName_0(String_t* value)
	{
		___methodName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___methodName_0), (void*)value);
	}
};


// Sirenix.Utilities.TypeExtensions/<GetBaseClasses>d__53
struct U3CGetBaseClassesU3Ed__53_t698E0333B78EF858B505025B28A4EE6F4718CBB7  : public RuntimeObject
{
public:
	// System.Int32 Sirenix.Utilities.TypeExtensions/<GetBaseClasses>d__53::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Type Sirenix.Utilities.TypeExtensions/<GetBaseClasses>d__53::<>2__current
	Type_t * ___U3CU3E2__current_1;
	// System.Int32 Sirenix.Utilities.TypeExtensions/<GetBaseClasses>d__53::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Type Sirenix.Utilities.TypeExtensions/<GetBaseClasses>d__53::type
	Type_t * ___type_3;
	// System.Type Sirenix.Utilities.TypeExtensions/<GetBaseClasses>d__53::<>3__type
	Type_t * ___U3CU3E3__type_4;
	// System.Boolean Sirenix.Utilities.TypeExtensions/<GetBaseClasses>d__53::includeSelf
	bool ___includeSelf_5;
	// System.Boolean Sirenix.Utilities.TypeExtensions/<GetBaseClasses>d__53::<>3__includeSelf
	bool ___U3CU3E3__includeSelf_6;
	// System.Type Sirenix.Utilities.TypeExtensions/<GetBaseClasses>d__53::<current>5__1
	Type_t * ___U3CcurrentU3E5__1_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetBaseClassesU3Ed__53_t698E0333B78EF858B505025B28A4EE6F4718CBB7, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetBaseClassesU3Ed__53_t698E0333B78EF858B505025B28A4EE6F4718CBB7, ___U3CU3E2__current_1)); }
	inline Type_t * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline Type_t ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(Type_t * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CGetBaseClassesU3Ed__53_t698E0333B78EF858B505025B28A4EE6F4718CBB7, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_type_3() { return static_cast<int32_t>(offsetof(U3CGetBaseClassesU3Ed__53_t698E0333B78EF858B505025B28A4EE6F4718CBB7, ___type_3)); }
	inline Type_t * get_type_3() const { return ___type_3; }
	inline Type_t ** get_address_of_type_3() { return &___type_3; }
	inline void set_type_3(Type_t * value)
	{
		___type_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__type_4() { return static_cast<int32_t>(offsetof(U3CGetBaseClassesU3Ed__53_t698E0333B78EF858B505025B28A4EE6F4718CBB7, ___U3CU3E3__type_4)); }
	inline Type_t * get_U3CU3E3__type_4() const { return ___U3CU3E3__type_4; }
	inline Type_t ** get_address_of_U3CU3E3__type_4() { return &___U3CU3E3__type_4; }
	inline void set_U3CU3E3__type_4(Type_t * value)
	{
		___U3CU3E3__type_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__type_4), (void*)value);
	}

	inline static int32_t get_offset_of_includeSelf_5() { return static_cast<int32_t>(offsetof(U3CGetBaseClassesU3Ed__53_t698E0333B78EF858B505025B28A4EE6F4718CBB7, ___includeSelf_5)); }
	inline bool get_includeSelf_5() const { return ___includeSelf_5; }
	inline bool* get_address_of_includeSelf_5() { return &___includeSelf_5; }
	inline void set_includeSelf_5(bool value)
	{
		___includeSelf_5 = value;
	}

	inline static int32_t get_offset_of_U3CU3E3__includeSelf_6() { return static_cast<int32_t>(offsetof(U3CGetBaseClassesU3Ed__53_t698E0333B78EF858B505025B28A4EE6F4718CBB7, ___U3CU3E3__includeSelf_6)); }
	inline bool get_U3CU3E3__includeSelf_6() const { return ___U3CU3E3__includeSelf_6; }
	inline bool* get_address_of_U3CU3E3__includeSelf_6() { return &___U3CU3E3__includeSelf_6; }
	inline void set_U3CU3E3__includeSelf_6(bool value)
	{
		___U3CU3E3__includeSelf_6 = value;
	}

	inline static int32_t get_offset_of_U3CcurrentU3E5__1_7() { return static_cast<int32_t>(offsetof(U3CGetBaseClassesU3Ed__53_t698E0333B78EF858B505025B28A4EE6F4718CBB7, ___U3CcurrentU3E5__1_7)); }
	inline Type_t * get_U3CcurrentU3E5__1_7() const { return ___U3CcurrentU3E5__1_7; }
	inline Type_t ** get_address_of_U3CcurrentU3E5__1_7() { return &___U3CcurrentU3E5__1_7; }
	inline void set_U3CcurrentU3E5__1_7(Type_t * value)
	{
		___U3CcurrentU3E5__1_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcurrentU3E5__1_7), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
{
public:

public:
};


// System.Runtime.InteropServices.GCHandle
struct GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
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


// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
public:

public:
};


// System.Reflection.PropertyInfo
struct PropertyInfo_t  : public MemberInfo_t
{
public:

public:
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Threading.Thread
struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414  : public CriticalFinalizerObject_tA3367C832FFE7434EB3C15C7136AF25524150997
{
public:
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB * ___internal_thread_6;
	// System.Object System.Threading.Thread::m_ThreadStartArg
	RuntimeObject * ___m_ThreadStartArg_7;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject * ___pending_exception_8;
	// System.Security.Principal.IPrincipal System.Threading.Thread::principal
	RuntimeObject* ___principal_9;
	// System.Int32 System.Threading.Thread::principal_version
	int32_t ___principal_version_10;
	// System.MulticastDelegate System.Threading.Thread::m_Delegate
	MulticastDelegate_t * ___m_Delegate_12;
	// System.Threading.ExecutionContext System.Threading.Thread::m_ExecutionContext
	ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * ___m_ExecutionContext_13;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_14;

public:
	inline static int32_t get_offset_of_internal_thread_6() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___internal_thread_6)); }
	inline InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB * get_internal_thread_6() const { return ___internal_thread_6; }
	inline InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB ** get_address_of_internal_thread_6() { return &___internal_thread_6; }
	inline void set_internal_thread_6(InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB * value)
	{
		___internal_thread_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internal_thread_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_ThreadStartArg_7() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_ThreadStartArg_7)); }
	inline RuntimeObject * get_m_ThreadStartArg_7() const { return ___m_ThreadStartArg_7; }
	inline RuntimeObject ** get_address_of_m_ThreadStartArg_7() { return &___m_ThreadStartArg_7; }
	inline void set_m_ThreadStartArg_7(RuntimeObject * value)
	{
		___m_ThreadStartArg_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ThreadStartArg_7), (void*)value);
	}

	inline static int32_t get_offset_of_pending_exception_8() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___pending_exception_8)); }
	inline RuntimeObject * get_pending_exception_8() const { return ___pending_exception_8; }
	inline RuntimeObject ** get_address_of_pending_exception_8() { return &___pending_exception_8; }
	inline void set_pending_exception_8(RuntimeObject * value)
	{
		___pending_exception_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pending_exception_8), (void*)value);
	}

	inline static int32_t get_offset_of_principal_9() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___principal_9)); }
	inline RuntimeObject* get_principal_9() const { return ___principal_9; }
	inline RuntimeObject** get_address_of_principal_9() { return &___principal_9; }
	inline void set_principal_9(RuntimeObject* value)
	{
		___principal_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___principal_9), (void*)value);
	}

	inline static int32_t get_offset_of_principal_version_10() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___principal_version_10)); }
	inline int32_t get_principal_version_10() const { return ___principal_version_10; }
	inline int32_t* get_address_of_principal_version_10() { return &___principal_version_10; }
	inline void set_principal_version_10(int32_t value)
	{
		___principal_version_10 = value;
	}

	inline static int32_t get_offset_of_m_Delegate_12() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_Delegate_12)); }
	inline MulticastDelegate_t * get_m_Delegate_12() const { return ___m_Delegate_12; }
	inline MulticastDelegate_t ** get_address_of_m_Delegate_12() { return &___m_Delegate_12; }
	inline void set_m_Delegate_12(MulticastDelegate_t * value)
	{
		___m_Delegate_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Delegate_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionContext_13() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_ExecutionContext_13)); }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * get_m_ExecutionContext_13() const { return ___m_ExecutionContext_13; }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 ** get_address_of_m_ExecutionContext_13() { return &___m_ExecutionContext_13; }
	inline void set_m_ExecutionContext_13(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * value)
	{
		___m_ExecutionContext_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExecutionContext_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionContextBelongsToOuterScope_14() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_ExecutionContextBelongsToOuterScope_14)); }
	inline bool get_m_ExecutionContextBelongsToOuterScope_14() const { return ___m_ExecutionContextBelongsToOuterScope_14; }
	inline bool* get_address_of_m_ExecutionContextBelongsToOuterScope_14() { return &___m_ExecutionContextBelongsToOuterScope_14; }
	inline void set_m_ExecutionContextBelongsToOuterScope_14(bool value)
	{
		___m_ExecutionContextBelongsToOuterScope_14 = value;
	}
};

struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields
{
public:
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A * ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * ___s_asyncLocalCurrentUICulture_5;

public:
	inline static int32_t get_offset_of_s_LocalDataStoreMgr_0() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields, ___s_LocalDataStoreMgr_0)); }
	inline LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A * get_s_LocalDataStoreMgr_0() const { return ___s_LocalDataStoreMgr_0; }
	inline LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A ** get_address_of_s_LocalDataStoreMgr_0() { return &___s_LocalDataStoreMgr_0; }
	inline void set_s_LocalDataStoreMgr_0(LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A * value)
	{
		___s_LocalDataStoreMgr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalDataStoreMgr_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentCulture_4() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields, ___s_asyncLocalCurrentCulture_4)); }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * get_s_asyncLocalCurrentCulture_4() const { return ___s_asyncLocalCurrentCulture_4; }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 ** get_address_of_s_asyncLocalCurrentCulture_4() { return &___s_asyncLocalCurrentCulture_4; }
	inline void set_s_asyncLocalCurrentCulture_4(AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * value)
	{
		___s_asyncLocalCurrentCulture_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_asyncLocalCurrentCulture_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentUICulture_5() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields, ___s_asyncLocalCurrentUICulture_5)); }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * get_s_asyncLocalCurrentUICulture_5() const { return ___s_asyncLocalCurrentUICulture_5; }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 ** get_address_of_s_asyncLocalCurrentUICulture_5() { return &___s_asyncLocalCurrentUICulture_5; }
	inline void set_s_asyncLocalCurrentUICulture_5(AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * value)
	{
		___s_asyncLocalCurrentUICulture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_asyncLocalCurrentUICulture_5), (void*)value);
	}
};

struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields
{
public:
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 * ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * ___current_thread_11;

public:
	inline static int32_t get_offset_of_s_LocalDataStore_1() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___s_LocalDataStore_1)); }
	inline LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 * get_s_LocalDataStore_1() const { return ___s_LocalDataStore_1; }
	inline LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 ** get_address_of_s_LocalDataStore_1() { return &___s_LocalDataStore_1; }
	inline void set_s_LocalDataStore_1(LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 * value)
	{
		___s_LocalDataStore_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalDataStore_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentCulture_2() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___m_CurrentCulture_2)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_m_CurrentCulture_2() const { return ___m_CurrentCulture_2; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_m_CurrentCulture_2() { return &___m_CurrentCulture_2; }
	inline void set_m_CurrentCulture_2(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___m_CurrentCulture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentCulture_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentUICulture_3() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___m_CurrentUICulture_3)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_m_CurrentUICulture_3() const { return ___m_CurrentUICulture_3; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_m_CurrentUICulture_3() { return &___m_CurrentUICulture_3; }
	inline void set_m_CurrentUICulture_3(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___m_CurrentUICulture_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentUICulture_3), (void*)value);
	}

	inline static int32_t get_offset_of_current_thread_11() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___current_thread_11)); }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * get_current_thread_11() const { return ___current_thread_11; }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 ** get_address_of_current_thread_11() { return &___current_thread_11; }
	inline void set_current_thread_11(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * value)
	{
		___current_thread_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_thread_11), (void*)value);
	}
};


// System.UInt16
struct UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=18
struct __StaticArrayInitTypeSizeU3D18_t795774A88473F1A2FCBD60792E98D399AC89C0B3 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D18_t795774A88473F1A2FCBD60792E98D399AC89C0B3__padding[18];
	};

public:
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
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
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

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
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Runtime.InteropServices.GCHandleType
struct GCHandleType_t5D58978165671EDEFCCAE1E2B237BD5AE4E8BC38 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandleType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GCHandleType_t5D58978165671EDEFCCAE1E2B237BD5AE4E8BC38, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
public:

public:
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// Sirenix.Utilities.DeepReflection/PathStepType
struct PathStepType_tD4C616C80F760982A57EF222E42E6BAFF6E5D3A2 
{
public:
	// System.Int32 Sirenix.Utilities.DeepReflection/PathStepType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PathStepType_tD4C616C80F760982A57EF222E42E6BAFF6E5D3A2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.GUILayoutOption/Type
struct Type_t79FB5C82B695061CED8D628CBB6A1E8709705288 
{
public:
	// System.Int32 UnityEngine.GUILayoutOption/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_t79FB5C82B695061CED8D628CBB6A1E8709705288, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Sirenix.Utilities.GUILayoutOptions/GUILayoutOptionType
struct GUILayoutOptionType_t0E09941F7C04943DCA239481AFE669D538B87DBA 
{
public:
	// System.Int32 Sirenix.Utilities.GUILayoutOptions/GUILayoutOptionType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GUILayoutOptionType_t0E09941F7C04943DCA239481AFE669D538B87DBA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.GUILayoutOption
struct GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB  : public RuntimeObject
{
public:
	// UnityEngine.GUILayoutOption/Type UnityEngine.GUILayoutOption::type
	int32_t ___type_0;
	// System.Object UnityEngine.GUILayoutOption::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
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
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
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
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// Sirenix.Utilities.DeepReflection/PathStep
struct PathStep_tCD606A6F71526B3263FBA4F878CD6AA82F48A95B 
{
public:
	// Sirenix.Utilities.DeepReflection/PathStepType Sirenix.Utilities.DeepReflection/PathStep::StepType
	int32_t ___StepType_0;
	// System.Reflection.MemberInfo Sirenix.Utilities.DeepReflection/PathStep::Member
	MemberInfo_t * ___Member_1;
	// System.Int32 Sirenix.Utilities.DeepReflection/PathStep::ElementIndex
	int32_t ___ElementIndex_2;
	// System.Type Sirenix.Utilities.DeepReflection/PathStep::ElementType
	Type_t * ___ElementType_3;
	// System.Reflection.MethodInfo Sirenix.Utilities.DeepReflection/PathStep::StrongListGetItemMethod
	MethodInfo_t * ___StrongListGetItemMethod_4;

public:
	inline static int32_t get_offset_of_StepType_0() { return static_cast<int32_t>(offsetof(PathStep_tCD606A6F71526B3263FBA4F878CD6AA82F48A95B, ___StepType_0)); }
	inline int32_t get_StepType_0() const { return ___StepType_0; }
	inline int32_t* get_address_of_StepType_0() { return &___StepType_0; }
	inline void set_StepType_0(int32_t value)
	{
		___StepType_0 = value;
	}

	inline static int32_t get_offset_of_Member_1() { return static_cast<int32_t>(offsetof(PathStep_tCD606A6F71526B3263FBA4F878CD6AA82F48A95B, ___Member_1)); }
	inline MemberInfo_t * get_Member_1() const { return ___Member_1; }
	inline MemberInfo_t ** get_address_of_Member_1() { return &___Member_1; }
	inline void set_Member_1(MemberInfo_t * value)
	{
		___Member_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Member_1), (void*)value);
	}

	inline static int32_t get_offset_of_ElementIndex_2() { return static_cast<int32_t>(offsetof(PathStep_tCD606A6F71526B3263FBA4F878CD6AA82F48A95B, ___ElementIndex_2)); }
	inline int32_t get_ElementIndex_2() const { return ___ElementIndex_2; }
	inline int32_t* get_address_of_ElementIndex_2() { return &___ElementIndex_2; }
	inline void set_ElementIndex_2(int32_t value)
	{
		___ElementIndex_2 = value;
	}

	inline static int32_t get_offset_of_ElementType_3() { return static_cast<int32_t>(offsetof(PathStep_tCD606A6F71526B3263FBA4F878CD6AA82F48A95B, ___ElementType_3)); }
	inline Type_t * get_ElementType_3() const { return ___ElementType_3; }
	inline Type_t ** get_address_of_ElementType_3() { return &___ElementType_3; }
	inline void set_ElementType_3(Type_t * value)
	{
		___ElementType_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ElementType_3), (void*)value);
	}

	inline static int32_t get_offset_of_StrongListGetItemMethod_4() { return static_cast<int32_t>(offsetof(PathStep_tCD606A6F71526B3263FBA4F878CD6AA82F48A95B, ___StrongListGetItemMethod_4)); }
	inline MethodInfo_t * get_StrongListGetItemMethod_4() const { return ___StrongListGetItemMethod_4; }
	inline MethodInfo_t ** get_address_of_StrongListGetItemMethod_4() { return &___StrongListGetItemMethod_4; }
	inline void set_StrongListGetItemMethod_4(MethodInfo_t * value)
	{
		___StrongListGetItemMethod_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StrongListGetItemMethod_4), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Sirenix.Utilities.DeepReflection/PathStep
struct PathStep_tCD606A6F71526B3263FBA4F878CD6AA82F48A95B_marshaled_pinvoke
{
	int32_t ___StepType_0;
	MemberInfo_t * ___Member_1;
	int32_t ___ElementIndex_2;
	Type_t * ___ElementType_3;
	MethodInfo_t * ___StrongListGetItemMethod_4;
};
// Native definition for COM marshalling of Sirenix.Utilities.DeepReflection/PathStep
struct PathStep_tCD606A6F71526B3263FBA4F878CD6AA82F48A95B_marshaled_com
{
	int32_t ___StepType_0;
	MemberInfo_t * ___Member_1;
	int32_t ___ElementIndex_2;
	Type_t * ___ElementType_3;
	MethodInfo_t * ___StrongListGetItemMethod_4;
};

// Sirenix.Utilities.GUILayoutOptions/GUILayoutOptionsInstance
struct GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C  : public RuntimeObject
{
public:
	// System.Single Sirenix.Utilities.GUILayoutOptions/GUILayoutOptionsInstance::value
	float ___value_0;
	// Sirenix.Utilities.GUILayoutOptions/GUILayoutOptionsInstance Sirenix.Utilities.GUILayoutOptions/GUILayoutOptionsInstance::Parent
	GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * ___Parent_1;
	// Sirenix.Utilities.GUILayoutOptions/GUILayoutOptionType Sirenix.Utilities.GUILayoutOptions/GUILayoutOptionsInstance::GUILayoutOptionType
	int32_t ___GUILayoutOptionType_2;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C, ___value_0)); }
	inline float get_value_0() const { return ___value_0; }
	inline float* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(float value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_Parent_1() { return static_cast<int32_t>(offsetof(GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C, ___Parent_1)); }
	inline GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * get_Parent_1() const { return ___Parent_1; }
	inline GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C ** get_address_of_Parent_1() { return &___Parent_1; }
	inline void set_Parent_1(GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * value)
	{
		___Parent_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Parent_1), (void*)value);
	}

	inline static int32_t get_offset_of_GUILayoutOptionType_2() { return static_cast<int32_t>(offsetof(GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C, ___GUILayoutOptionType_2)); }
	inline int32_t get_GUILayoutOptionType_2() const { return ___GUILayoutOptionType_2; }
	inline int32_t* get_address_of_GUILayoutOptionType_2() { return &___GUILayoutOptionType_2; }
	inline void set_GUILayoutOptionType_2(int32_t value)
	{
		___GUILayoutOptionType_2 = value;
	}
};


// Sirenix.Utilities.TypeExtensions/<GetAllMembers>d__47
struct U3CGetAllMembersU3Ed__47_t4C90809A102D2827FDE5A986E216A49824F8D2A0  : public RuntimeObject
{
public:
	// System.Int32 Sirenix.Utilities.TypeExtensions/<GetAllMembers>d__47::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Reflection.MemberInfo Sirenix.Utilities.TypeExtensions/<GetAllMembers>d__47::<>2__current
	MemberInfo_t * ___U3CU3E2__current_1;
	// System.Int32 Sirenix.Utilities.TypeExtensions/<GetAllMembers>d__47::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Type Sirenix.Utilities.TypeExtensions/<GetAllMembers>d__47::type
	Type_t * ___type_3;
	// System.Type Sirenix.Utilities.TypeExtensions/<GetAllMembers>d__47::<>3__type
	Type_t * ___U3CU3E3__type_4;
	// System.Reflection.BindingFlags Sirenix.Utilities.TypeExtensions/<GetAllMembers>d__47::flags
	int32_t ___flags_5;
	// System.Reflection.BindingFlags Sirenix.Utilities.TypeExtensions/<GetAllMembers>d__47::<>3__flags
	int32_t ___U3CU3E3__flags_6;
	// System.Type Sirenix.Utilities.TypeExtensions/<GetAllMembers>d__47::<currentType>5__1
	Type_t * ___U3CcurrentTypeU3E5__1_7;
	// System.Reflection.MemberInfo[] Sirenix.Utilities.TypeExtensions/<GetAllMembers>d__47::<>7__wrap1
	MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E* ___U3CU3E7__wrap1_8;
	// System.Int32 Sirenix.Utilities.TypeExtensions/<GetAllMembers>d__47::<>7__wrap2
	int32_t ___U3CU3E7__wrap2_9;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetAllMembersU3Ed__47_t4C90809A102D2827FDE5A986E216A49824F8D2A0, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetAllMembersU3Ed__47_t4C90809A102D2827FDE5A986E216A49824F8D2A0, ___U3CU3E2__current_1)); }
	inline MemberInfo_t * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline MemberInfo_t ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(MemberInfo_t * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CGetAllMembersU3Ed__47_t4C90809A102D2827FDE5A986E216A49824F8D2A0, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_type_3() { return static_cast<int32_t>(offsetof(U3CGetAllMembersU3Ed__47_t4C90809A102D2827FDE5A986E216A49824F8D2A0, ___type_3)); }
	inline Type_t * get_type_3() const { return ___type_3; }
	inline Type_t ** get_address_of_type_3() { return &___type_3; }
	inline void set_type_3(Type_t * value)
	{
		___type_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__type_4() { return static_cast<int32_t>(offsetof(U3CGetAllMembersU3Ed__47_t4C90809A102D2827FDE5A986E216A49824F8D2A0, ___U3CU3E3__type_4)); }
	inline Type_t * get_U3CU3E3__type_4() const { return ___U3CU3E3__type_4; }
	inline Type_t ** get_address_of_U3CU3E3__type_4() { return &___U3CU3E3__type_4; }
	inline void set_U3CU3E3__type_4(Type_t * value)
	{
		___U3CU3E3__type_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__type_4), (void*)value);
	}

	inline static int32_t get_offset_of_flags_5() { return static_cast<int32_t>(offsetof(U3CGetAllMembersU3Ed__47_t4C90809A102D2827FDE5A986E216A49824F8D2A0, ___flags_5)); }
	inline int32_t get_flags_5() const { return ___flags_5; }
	inline int32_t* get_address_of_flags_5() { return &___flags_5; }
	inline void set_flags_5(int32_t value)
	{
		___flags_5 = value;
	}

	inline static int32_t get_offset_of_U3CU3E3__flags_6() { return static_cast<int32_t>(offsetof(U3CGetAllMembersU3Ed__47_t4C90809A102D2827FDE5A986E216A49824F8D2A0, ___U3CU3E3__flags_6)); }
	inline int32_t get_U3CU3E3__flags_6() const { return ___U3CU3E3__flags_6; }
	inline int32_t* get_address_of_U3CU3E3__flags_6() { return &___U3CU3E3__flags_6; }
	inline void set_U3CU3E3__flags_6(int32_t value)
	{
		___U3CU3E3__flags_6 = value;
	}

	inline static int32_t get_offset_of_U3CcurrentTypeU3E5__1_7() { return static_cast<int32_t>(offsetof(U3CGetAllMembersU3Ed__47_t4C90809A102D2827FDE5A986E216A49824F8D2A0, ___U3CcurrentTypeU3E5__1_7)); }
	inline Type_t * get_U3CcurrentTypeU3E5__1_7() const { return ___U3CcurrentTypeU3E5__1_7; }
	inline Type_t ** get_address_of_U3CcurrentTypeU3E5__1_7() { return &___U3CcurrentTypeU3E5__1_7; }
	inline void set_U3CcurrentTypeU3E5__1_7(Type_t * value)
	{
		___U3CcurrentTypeU3E5__1_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcurrentTypeU3E5__1_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_8() { return static_cast<int32_t>(offsetof(U3CGetAllMembersU3Ed__47_t4C90809A102D2827FDE5A986E216A49824F8D2A0, ___U3CU3E7__wrap1_8)); }
	inline MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E* get_U3CU3E7__wrap1_8() const { return ___U3CU3E7__wrap1_8; }
	inline MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E** get_address_of_U3CU3E7__wrap1_8() { return &___U3CU3E7__wrap1_8; }
	inline void set_U3CU3E7__wrap1_8(MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E* value)
	{
		___U3CU3E7__wrap1_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap2_9() { return static_cast<int32_t>(offsetof(U3CGetAllMembersU3Ed__47_t4C90809A102D2827FDE5A986E216A49824F8D2A0, ___U3CU3E7__wrap2_9)); }
	inline int32_t get_U3CU3E7__wrap2_9() const { return ___U3CU3E7__wrap2_9; }
	inline int32_t* get_address_of_U3CU3E7__wrap2_9() { return &___U3CU3E7__wrap2_9; }
	inline void set_U3CU3E7__wrap2_9(int32_t value)
	{
		___U3CU3E7__wrap2_9 = value;
	}
};


// Sirenix.Utilities.TypeExtensions/<GetAllMembers>d__48
struct U3CGetAllMembersU3Ed__48_t4875E6379D17BB16E2C05B2CBB7645C86F3D357D  : public RuntimeObject
{
public:
	// System.Int32 Sirenix.Utilities.TypeExtensions/<GetAllMembers>d__48::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Reflection.MemberInfo Sirenix.Utilities.TypeExtensions/<GetAllMembers>d__48::<>2__current
	MemberInfo_t * ___U3CU3E2__current_1;
	// System.Int32 Sirenix.Utilities.TypeExtensions/<GetAllMembers>d__48::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Type Sirenix.Utilities.TypeExtensions/<GetAllMembers>d__48::type
	Type_t * ___type_3;
	// System.Type Sirenix.Utilities.TypeExtensions/<GetAllMembers>d__48::<>3__type
	Type_t * ___U3CU3E3__type_4;
	// System.Reflection.BindingFlags Sirenix.Utilities.TypeExtensions/<GetAllMembers>d__48::flags
	int32_t ___flags_5;
	// System.Reflection.BindingFlags Sirenix.Utilities.TypeExtensions/<GetAllMembers>d__48::<>3__flags
	int32_t ___U3CU3E3__flags_6;
	// System.String Sirenix.Utilities.TypeExtensions/<GetAllMembers>d__48::name
	String_t* ___name_7;
	// System.String Sirenix.Utilities.TypeExtensions/<GetAllMembers>d__48::<>3__name
	String_t* ___U3CU3E3__name_8;
	// System.Collections.Generic.IEnumerator`1<System.Reflection.MemberInfo> Sirenix.Utilities.TypeExtensions/<GetAllMembers>d__48::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_9;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetAllMembersU3Ed__48_t4875E6379D17BB16E2C05B2CBB7645C86F3D357D, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetAllMembersU3Ed__48_t4875E6379D17BB16E2C05B2CBB7645C86F3D357D, ___U3CU3E2__current_1)); }
	inline MemberInfo_t * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline MemberInfo_t ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(MemberInfo_t * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CGetAllMembersU3Ed__48_t4875E6379D17BB16E2C05B2CBB7645C86F3D357D, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_type_3() { return static_cast<int32_t>(offsetof(U3CGetAllMembersU3Ed__48_t4875E6379D17BB16E2C05B2CBB7645C86F3D357D, ___type_3)); }
	inline Type_t * get_type_3() const { return ___type_3; }
	inline Type_t ** get_address_of_type_3() { return &___type_3; }
	inline void set_type_3(Type_t * value)
	{
		___type_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__type_4() { return static_cast<int32_t>(offsetof(U3CGetAllMembersU3Ed__48_t4875E6379D17BB16E2C05B2CBB7645C86F3D357D, ___U3CU3E3__type_4)); }
	inline Type_t * get_U3CU3E3__type_4() const { return ___U3CU3E3__type_4; }
	inline Type_t ** get_address_of_U3CU3E3__type_4() { return &___U3CU3E3__type_4; }
	inline void set_U3CU3E3__type_4(Type_t * value)
	{
		___U3CU3E3__type_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__type_4), (void*)value);
	}

	inline static int32_t get_offset_of_flags_5() { return static_cast<int32_t>(offsetof(U3CGetAllMembersU3Ed__48_t4875E6379D17BB16E2C05B2CBB7645C86F3D357D, ___flags_5)); }
	inline int32_t get_flags_5() const { return ___flags_5; }
	inline int32_t* get_address_of_flags_5() { return &___flags_5; }
	inline void set_flags_5(int32_t value)
	{
		___flags_5 = value;
	}

	inline static int32_t get_offset_of_U3CU3E3__flags_6() { return static_cast<int32_t>(offsetof(U3CGetAllMembersU3Ed__48_t4875E6379D17BB16E2C05B2CBB7645C86F3D357D, ___U3CU3E3__flags_6)); }
	inline int32_t get_U3CU3E3__flags_6() const { return ___U3CU3E3__flags_6; }
	inline int32_t* get_address_of_U3CU3E3__flags_6() { return &___U3CU3E3__flags_6; }
	inline void set_U3CU3E3__flags_6(int32_t value)
	{
		___U3CU3E3__flags_6 = value;
	}

	inline static int32_t get_offset_of_name_7() { return static_cast<int32_t>(offsetof(U3CGetAllMembersU3Ed__48_t4875E6379D17BB16E2C05B2CBB7645C86F3D357D, ___name_7)); }
	inline String_t* get_name_7() const { return ___name_7; }
	inline String_t** get_address_of_name_7() { return &___name_7; }
	inline void set_name_7(String_t* value)
	{
		___name_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__name_8() { return static_cast<int32_t>(offsetof(U3CGetAllMembersU3Ed__48_t4875E6379D17BB16E2C05B2CBB7645C86F3D357D, ___U3CU3E3__name_8)); }
	inline String_t* get_U3CU3E3__name_8() const { return ___U3CU3E3__name_8; }
	inline String_t** get_address_of_U3CU3E3__name_8() { return &___U3CU3E3__name_8; }
	inline void set_U3CU3E3__name_8(String_t* value)
	{
		___U3CU3E3__name_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__name_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_9() { return static_cast<int32_t>(offsetof(U3CGetAllMembersU3Ed__48_t4875E6379D17BB16E2C05B2CBB7645C86F3D357D, ___U3CU3E7__wrap1_9)); }
	inline RuntimeObject* get_U3CU3E7__wrap1_9() const { return ___U3CU3E7__wrap1_9; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap1_9() { return &___U3CU3E7__wrap1_9; }
	inline void set_U3CU3E7__wrap1_9(RuntimeObject* value)
	{
		___U3CU3E7__wrap1_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_9), (void*)value);
	}
};


// Sirenix.Utilities.ValueGetter`2<UnityEngine.Object,System.IntPtr>
struct ValueGetter_2_t7A32360D14D98554904C377692F0A8160DA1EF34  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// Sirenix.Utilities.WeakValueGetter
struct WeakValueGetter_t828D3829FE3BCD84DB46D8B0BB3408AFC21B0D9E  : public MulticastDelegate_t
{
public:

public:
};


// Sirenix.Utilities.WeakValueSetter
struct WeakValueSetter_t1E87206CC24D3306743CFDDA24320FB2C6D9D299  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
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
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
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
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
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
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
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
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * m_Items[1];

public:
	inline GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Sirenix.Utilities.GUILayoutOptions/GUILayoutOptionsInstance[]
struct GUILayoutOptionsInstanceU5BU5D_t803E1B7D2362A526B22D937C6D812BF819F309C5  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * m_Items[1];

public:
	inline GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MemberInfo_t * m_Items[1];

public:
	inline MemberInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MemberInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MemberInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MemberInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MemberInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MemberInfo_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Sirenix.Utilities.DeepReflection/PathStep[]
struct PathStepU5BU5D_t9124581E037D41E9CE32806A421630205066601D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) PathStep_tCD606A6F71526B3263FBA4F878CD6AA82F48A95B  m_Items[1];

public:
	inline PathStep_tCD606A6F71526B3263FBA4F878CD6AA82F48A95B  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PathStep_tCD606A6F71526B3263FBA4F878CD6AA82F48A95B * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PathStep_tCD606A6F71526B3263FBA4F878CD6AA82F48A95B  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Member_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___ElementType_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___StrongListGetItemMethod_4), (void*)NULL);
		#endif
	}
	inline PathStep_tCD606A6F71526B3263FBA4F878CD6AA82F48A95B  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PathStep_tCD606A6F71526B3263FBA4F878CD6AA82F48A95B * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PathStep_tCD606A6F71526B3263FBA4F878CD6AA82F48A95B  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Member_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___ElementType_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___StrongListGetItemMethod_4), (void*)NULL);
		#endif
	}
};


// Sirenix.Utilities.ValueGetter`2<InstanceType,FieldType> Sirenix.Utilities.EmitUtilities::CreateInstanceFieldGetter<System.Object,System.IntPtr>(System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueGetter_2_tDC98C04C99FEAE4D23ECAA6D9E84E55EDC4D73D9 * EmitUtilities_CreateInstanceFieldGetter_TisRuntimeObject_TisIntPtr_t_mBFDCF079ECDB5DADD7AFF187C7BD9FA0A08C3044_gshared (FieldInfo_t * ___fieldInfo0, const RuntimeMethod* method);
// FieldType Sirenix.Utilities.ValueGetter`2<System.Object,System.IntPtr>::Invoke(InstanceType&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ValueGetter_2_Invoke_m75B320C9AADA8457B89384CC7784C5D3FE27605D_gshared (ValueGetter_2_tDC98C04C99FEAE4D23ECAA6D9E84E55EDC4D73D9 * __this, RuntimeObject ** ___instance0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<Sirenix.Utilities.DeepReflection/PathStep>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PathStep_tCD606A6F71526B3263FBA4F878CD6AA82F48A95B  List_1_get_Item_m696E7898F085B752FECA712127AA61F0E1567445_gshared_inline (List_1_t1397A266905C615B22796E5B9A0C8991F37EA426 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Sirenix.Utilities.DeepReflection/PathStep>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m43F79DA64E0B750D0AF10F02F3BC0EA92F3E55B7_gshared_inline (List_1_t1397A266905C615B22796E5B9A0C8991F37EA426 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Boolean System.Linq.Enumerable::Contains<System.Char>(System.Collections.Generic.IEnumerable`1<!!0>,!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Contains_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_m832DBC12FA0773F2E47557F7885E452BB0F9A21D_gshared (RuntimeObject* ___source0, Il2CppChar ___value1, const RuntimeMethod* method);

// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// Sirenix.Utilities.ValueGetter`2<InstanceType,FieldType> Sirenix.Utilities.EmitUtilities::CreateInstanceFieldGetter<UnityEngine.Object,System.IntPtr>(System.Reflection.FieldInfo)
inline ValueGetter_2_t7A32360D14D98554904C377692F0A8160DA1EF34 * EmitUtilities_CreateInstanceFieldGetter_TisObject_tF2F3778131EFF286AF62B7B013A170F95A91571A_TisIntPtr_t_m74BE8E6173ABDB3F4B9EE979FC513E3FFF500C47 (FieldInfo_t * ___fieldInfo0, const RuntimeMethod* method)
{
	return ((  ValueGetter_2_t7A32360D14D98554904C377692F0A8160DA1EF34 * (*) (FieldInfo_t *, const RuntimeMethod*))EmitUtilities_CreateInstanceFieldGetter_TisRuntimeObject_TisIntPtr_t_mBFDCF079ECDB5DADD7AFF187C7BD9FA0A08C3044_gshared)(___fieldInfo0, method);
}
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90 (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, String_t* ___message0, const RuntimeMethod* method);
// FieldType Sirenix.Utilities.ValueGetter`2<UnityEngine.Object,System.IntPtr>::Invoke(InstanceType&)
inline intptr_t ValueGetter_2_Invoke_m00C7BE42EC065324001BF3ED699DC4971CA7ABA7 (ValueGetter_2_t7A32360D14D98554904C377692F0A8160DA1EF34 * __this, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A ** ___instance0, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (ValueGetter_2_t7A32360D14D98554904C377692F0A8160DA1EF34 *, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A **, const RuntimeMethod*))ValueGetter_2_Invoke_m75B320C9AADA8457B89384CC7784C5D3FE27605D_gshared)(__this, ___instance0, method);
}
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_unityVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_unityVersion_m96DFC04C06A62DDF3EDC830C1F103D848AC0FDF1 (const RuntimeMethod* method);
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___separator0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Boolean System.Int32::TryParse(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_TryParse_m748B8DB1D0C9D25C3D1812D7887411C4AFC1DDC2 (String_t* ___s0, int32_t* ___result1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFCF5F98D38F99DE7C831CBB9A1BAAAB148FC7D57 (RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_m4CBF2A74FB65655B0BB1452CA748E9CF78D974ED (String_t* __this, Il2CppChar ___c0, int32_t ___count1, const RuntimeMethod* method);
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object,System.Runtime.InteropServices.GCHandleType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  GCHandle_Alloc_mBF5C4C0E8605F97427BFDF96D68AACD4A4D6DDEC (RuntimeObject * ___value0, int32_t ___type1, const RuntimeMethod* method);
// System.Int32 System.Runtime.CompilerServices.RuntimeHelpers::get_OffsetToStringData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RuntimeHelpers_get_OffsetToStringData_mEB8E6EAEBAFAB7CD7F7A915B3081785AABB9FC42 (const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.GCHandle::AddrOfPinnedObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GCHandle_AddrOfPinnedObject_m0604506F2BDCD2DC8C167FBC3BF3E965888F7589 (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * __this, const RuntimeMethod* method);
// System.Void* System.IntPtr::ToPointer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m5C7CE32B14B6E30467B378052FEA25300833C61F_inline (intptr_t* __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.InteropServices.GCHandle::get_IsAllocated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GCHandle_get_IsAllocated_mEDA4DAC6AD6D881110E96CAFDAB78C068F5B144D (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.GCHandle::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_mB4E9415544FC9F0075C02AB17E270E49AF006025 (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * __this, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<Sirenix.Utilities.DeepReflection/PathStep>::get_Item(System.Int32)
inline PathStep_tCD606A6F71526B3263FBA4F878CD6AA82F48A95B  List_1_get_Item_m696E7898F085B752FECA712127AA61F0E1567445_inline (List_1_t1397A266905C615B22796E5B9A0C8991F37EA426 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  PathStep_tCD606A6F71526B3263FBA4F878CD6AA82F48A95B  (*) (List_1_t1397A266905C615B22796E5B9A0C8991F37EA426 *, int32_t, const RuntimeMethod*))List_1_get_Item_m696E7898F085B752FECA712127AA61F0E1567445_gshared_inline)(__this, ___index0, method);
}
// System.Object Sirenix.Utilities.DeepReflection::SlowGetMemberValue(Sirenix.Utilities.DeepReflection/PathStep,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * DeepReflection_SlowGetMemberValue_m62D36CD648192B680BF5832EC62F9C90EE865BB8 (PathStep_tCD606A6F71526B3263FBA4F878CD6AA82F48A95B  ___step0, RuntimeObject * ___instance1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Sirenix.Utilities.DeepReflection/PathStep>::get_Count()
inline int32_t List_1_get_Count_m43F79DA64E0B750D0AF10F02F3BC0EA92F3E55B7_inline (List_1_t1397A266905C615B22796E5B9A0C8991F37EA426 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t1397A266905C615B22796E5B9A0C8991F37EA426 *, const RuntimeMethod*))List_1_get_Count_m43F79DA64E0B750D0AF10F02F3BC0EA92F3E55B7_gshared_inline)(__this, method);
}
// System.Void Sirenix.Utilities.DeepReflection::SlowSetMemberValue(Sirenix.Utilities.DeepReflection/PathStep,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeepReflection_SlowSetMemberValue_mDDDCB136A84D59B5D77CF0981B3D221AABD08797 (PathStep_tCD606A6F71526B3263FBA4F878CD6AA82F48A95B  ___step0, RuntimeObject * ___instance1, RuntimeObject * ___value2, const RuntimeMethod* method);
// System.Void Sirenix.Utilities.DeepReflection/PathStep::.ctor(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathStep__ctor_m92DF3C093472B68F4BD8A2BCFFCFAEE3956E251F (PathStep_tCD606A6F71526B3263FBA4F878CD6AA82F48A95B * __this, MemberInfo_t * ___member0, const RuntimeMethod* method);
// System.Void Sirenix.Utilities.DeepReflection/PathStep::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathStep__ctor_m5486B14CE1D07661FDB4A226C974093AAD1B31AE (PathStep_tCD606A6F71526B3263FBA4F878CD6AA82F48A95B * __this, int32_t ___elementIndex0, const RuntimeMethod* method);
// System.Reflection.MethodInfo System.Type::GetMethod(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * Type_GetMethod_mDD47332AAF3036AAFC4C6626A999A452E7143DCF (Type_t * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void Sirenix.Utilities.DeepReflection/PathStep::.ctor(System.Int32,System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathStep__ctor_m9CC89EC5A46E349387787F8DFB3FD5A1C6524B83 (PathStep_tCD606A6F71526B3263FBA4F878CD6AA82F48A95B * __this, int32_t ___elementIndex0, Type_t * ___strongListElementType1, bool ___isArray2, const RuntimeMethod* method);
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldInfo_SetValue_mA1EFB5DA5E4B930A617744E29E909FE9DEAA663C (FieldInfo_t * __this, RuntimeObject * ___obj0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3 (MethodBase_t * __this, RuntimeObject * ___obj0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___parameters1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<Sirenix.Utilities.GUILayoutOptions/GUILayoutOptionsInstance,UnityEngine.GUILayoutOption[]>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_mEC551CB83CE32E44EB680DACAFE76659ECEA6B0C (Dictionary_2_tEA9D585D97DD6BF149DE795DFC8D421DB6D18B3D * __this, GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * ___key0, GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tEA9D585D97DD6BF149DE795DFC8D421DB6D18B3D *, GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C *, GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B**, const RuntimeMethod*))Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared)(__this, ___key0, ___value1, method);
}
// Sirenix.Utilities.GUILayoutOptions/GUILayoutOptionsInstance Sirenix.Utilities.GUILayoutOptions/GUILayoutOptionsInstance::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * GUILayoutOptionsInstance_Clone_m0E873877AF4D95C74E8D42FE3B21FD22D3ABF3C1 (GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * __this, const RuntimeMethod* method);
// UnityEngine.GUILayoutOption[] Sirenix.Utilities.GUILayoutOptions/GUILayoutOptionsInstance::CreateOptionsArary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* GUILayoutOptionsInstance_CreateOptionsArary_mC57A38F7A06BF54B97FDE550771B6F12D371AC0B (GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<Sirenix.Utilities.GUILayoutOptions/GUILayoutOptionsInstance,UnityEngine.GUILayoutOption[]>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mE59D8221A61B1CEEBBF1F030D628DB2F2FFE9516 (Dictionary_2_tEA9D585D97DD6BF149DE795DFC8D421DB6D18B3D * __this, GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * ___key0, GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tEA9D585D97DD6BF149DE795DFC8D421DB6D18B3D *, GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C *, GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B*, const RuntimeMethod*))Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared)(__this, ___key0, ___value1, method);
}
// UnityEngine.GUILayoutOption[] Sirenix.Utilities.GUILayoutOptions/GUILayoutOptionsInstance::GetCachedOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* GUILayoutOptionsInstance_GetCachedOptions_m8953E63619B13F9C883D8714BFC663C52FCC4A16 (GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutOption>::.ctor()
inline void List_1__ctor_mD1A13F1C8FD04395BB5BAF5E2FFFDF400AD4910C (List_1_t65DB33C8EF5F2F667E78D747FBA152BF5C1C506B * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t65DB33C8EF5F2F667E78D747FBA152BF5C1C506B *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Width(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * GUILayout_Width_m2529B16156A3E8109EA75B8D67C723B1B8E24C53 (float ___width0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutOption>::Add(!0)
inline void List_1_Add_m43E5ABF5F6F629B93B05F2C19AEFAE84A17B0B2B (List_1_t65DB33C8EF5F2F667E78D747FBA152BF5C1C506B * __this, GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t65DB33C8EF5F2F667E78D747FBA152BF5C1C506B *, GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Height(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * GUILayout_Height_m6705C2917595CCEA6D934DBB5DD8399DF6F5E464 (float ___height0, const RuntimeMethod* method);
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::MaxHeight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * GUILayout_MaxHeight_mE44EA4CF7719A4F64A20AF4462250BD0B5746AC0 (float ___maxHeight0, const RuntimeMethod* method);
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::MaxWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * GUILayout_MaxWidth_mE6C754AB0A4366AB7E0BECE6D85A254CA7E553FB (float ___maxWidth0, const RuntimeMethod* method);
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::MinHeight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * GUILayout_MinHeight_mABC1A656072088E6E502AA09E8D4A7D9A6D29B20 (float ___minHeight0, const RuntimeMethod* method);
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::MinWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * GUILayout_MinWidth_m1D097025BC9C8B286936EF0AC507559F1CE01434 (float ___minWidth0, const RuntimeMethod* method);
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::ExpandHeight(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * GUILayout_ExpandHeight_m737A907C656C80DC5F5BC910B6E8452C43C5F094 (bool ___expand0, const RuntimeMethod* method);
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::ExpandWidth(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * GUILayout_ExpandWidth_m6A1F7C7E400309F44A3D1AF91CC31FB6D49857D6 (bool ___expand0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<UnityEngine.GUILayoutOption>::ToArray()
inline GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* List_1_ToArray_mF4F7ADB12FE44C8EA71EA7C72E843E26EF02B5E9 (List_1_t65DB33C8EF5F2F667E78D747FBA152BF5C1C506B * __this, const RuntimeMethod* method)
{
	return ((  GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* (*) (List_1_t65DB33C8EF5F2F667E78D747FBA152BF5C1C506B *, const RuntimeMethod*))List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_gshared)(__this, method);
}
// System.Void Sirenix.Utilities.GUILayoutOptions/GUILayoutOptionsInstance::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutOptionsInstance__ctor_mE05DC5E53C4E7E18759835E2DFB1E111F0D1C73A (GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * __this, const RuntimeMethod* method);
// System.Void Sirenix.Utilities.GUILayoutOptions/GUILayoutOptionsInstance::SetValue(Sirenix.Utilities.GUILayoutOptions/GUILayoutOptionType,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutOptionsInstance_SetValue_m6CDFACDD857548B0C7ACC00F81AD592D131A2834 (GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * __this, int32_t ___type0, float ___value1, const RuntimeMethod* method);
// System.Void Sirenix.Utilities.GUILayoutOptions/GUILayoutOptionsInstance::SetValue(Sirenix.Utilities.GUILayoutOptions/GUILayoutOptionType,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutOptionsInstance_SetValue_m6597E241961F01BCACCBA8085FEED22E19DFC354 (GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * __this, int32_t ___type0, bool ___value1, const RuntimeMethod* method);
// System.Int32 System.Int32::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667 (int32_t* __this, const RuntimeMethod* method);
// System.Int32 System.Single::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Single_GetHashCode_m7662E1812DDDBC85D464398740CFFC3588DFB2C9 (float* __this, const RuntimeMethod* method);
// System.Void Sirenix.Utilities.ImmutableList/<System-Collections-Generic-IEnumerable<System-Object>-GetEnumerator>d__25::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_U3CU3Em__Finally1_m8F07736A73B9753D236E45DC287E521885F2D2E0 (U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_t9676F100F6E148EC1848685DF6FDD8822072D3EC * __this, const RuntimeMethod* method);
// System.Void Sirenix.Utilities.ImmutableList/<System-Collections-Generic-IEnumerable<System-Object>-GetEnumerator>d__25::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_System_IDisposable_Dispose_m233D07626A7782E7D3C23405DF37E703A13A7CCC (U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_t9676F100F6E148EC1848685DF6FDD8822072D3EC * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Boolean System.Linq.Enumerable::Contains<System.Char>(System.Collections.Generic.IEnumerable`1<!!0>,!!0)
inline bool Enumerable_Contains_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_m832DBC12FA0773F2E47557F7885E452BB0F9A21D (RuntimeObject* ___source0, Il2CppChar ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, Il2CppChar, const RuntimeMethod*))Enumerable_Contains_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_m832DBC12FA0773F2E47557F7885E452BB0F9A21D_gshared)(___source0, ___value1, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Threading.Thread System.Threading.Thread::get_CurrentThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * Thread_get_CurrentThread_m80236D2457FBCC1F76A08711E059A0B738DA71EC (const RuntimeMethod* method);
// System.Int32 System.Threading.Thread::get_ManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0 (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * __this, const RuntimeMethod* method);
// System.Void Sirenix.Utilities.TypeExtensions/<GetAllMembers>d__47::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllMembersU3Ed__47__ctor_m1B909AD08FE996448E8642973B3C1B2984C6105D (U3CGetAllMembersU3Ed__47_t4C90809A102D2827FDE5A986E216A49824F8D2A0 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.Reflection.MemberInfo> Sirenix.Utilities.TypeExtensions/<GetAllMembers>d__47::System.Collections.Generic.IEnumerable<System.Reflection.MemberInfo>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAllMembersU3Ed__47_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MemberInfoU3E_GetEnumerator_m8495D250E34F9DCEA9CF08772B7FE553027ADD96 (U3CGetAllMembersU3Ed__47_t4C90809A102D2827FDE5A986E216A49824F8D2A0 * __this, const RuntimeMethod* method);
// System.Void Sirenix.Utilities.TypeExtensions/<GetAllMembers>d__48::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllMembersU3Ed__48_U3CU3Em__Finally1_m9B587CB8159B5897C40E1186A65995697DCF32F8 (U3CGetAllMembersU3Ed__48_t4875E6379D17BB16E2C05B2CBB7645C86F3D357D * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo> Sirenix.Utilities.TypeExtensions::GetAllMembers(System.Type,System.Reflection.BindingFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeExtensions_GetAllMembers_m940D65E6CA84C7563317387533538E030067CC57 (Type_t * ___type0, int32_t ___flags1, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void Sirenix.Utilities.TypeExtensions/<GetAllMembers>d__48::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllMembersU3Ed__48_System_IDisposable_Dispose_m1E3D611B8297D76A6F5A30AD422761E1EF6EB1E5 (U3CGetAllMembersU3Ed__48_t4875E6379D17BB16E2C05B2CBB7645C86F3D357D * __this, const RuntimeMethod* method);
// System.Void Sirenix.Utilities.TypeExtensions/<GetAllMembers>d__48::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllMembersU3Ed__48__ctor_mB3B0E88A06451F1BC378E52346BD3505F45C88ED (U3CGetAllMembersU3Ed__48_t4875E6379D17BB16E2C05B2CBB7645C86F3D357D * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.Reflection.MemberInfo> Sirenix.Utilities.TypeExtensions/<GetAllMembers>d__48::System.Collections.Generic.IEnumerable<System.Reflection.MemberInfo>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAllMembersU3Ed__48_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MemberInfoU3E_GetEnumerator_m76C13B6396ED2AE69B303408FD6CBF5F369C2490 (U3CGetAllMembersU3Ed__48_t4875E6379D17BB16E2C05B2CBB7645C86F3D357D * __this, const RuntimeMethod* method);
// System.Void Sirenix.Utilities.TypeExtensions/<GetBaseClasses>d__53::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetBaseClassesU3Ed__53__ctor_mCEE2413347DF567766E164FC2A734871FB90A3C9 (U3CGetBaseClassesU3Ed__53_t698E0333B78EF858B505025B28A4EE6F4718CBB7 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.Type> Sirenix.Utilities.TypeExtensions/<GetBaseClasses>d__53::System.Collections.Generic.IEnumerable<System.Type>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetBaseClassesU3Ed__53_System_Collections_Generic_IEnumerableU3CSystem_TypeU3E_GetEnumerator_m97F965CE8D6F2606A8ED743D4A924C6E4FCC8F13 (U3CGetBaseClassesU3Ed__53_t698E0333B78EF858B505025B28A4EE6F4718CBB7 * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.Utilities.UnityExtensions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityExtensions__cctor_m6FC65E88A4D815365D2884DE6BD8E6F8C195CF3E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EmitUtilities_CreateInstanceFieldGetter_TisObject_tF2F3778131EFF286AF62B7B013A170F95A91571A_TisIntPtr_t_m74BE8E6173ABDB3F4B9EE979FC513E3FFF500C47_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityExtensions_t5D54B2331F27292CD5BC2620F40EB5F20ECBD74B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral03AB2C403B6556E5A76B2BE4E510934AD585B8A1);
		s_Il2CppMethodInitialized = true;
	}
	FieldInfo_t * V_0 = NULL;
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		FieldInfo_t * L_2;
		L_2 = VirtFuncInvoker2< FieldInfo_t *, String_t*, int32_t >::Invoke(42 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_1, _stringLiteral03AB2C403B6556E5A76B2BE4E510934AD585B8A1, ((int32_t)52));
		V_0 = L_2;
		FieldInfo_t * L_3 = V_0;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		FieldInfo_t * L_4 = V_0;
		ValueGetter_2_t7A32360D14D98554904C377692F0A8160DA1EF34 * L_5;
		L_5 = EmitUtilities_CreateInstanceFieldGetter_TisObject_tF2F3778131EFF286AF62B7B013A170F95A91571A_TisIntPtr_t_m74BE8E6173ABDB3F4B9EE979FC513E3FFF500C47(L_4, /*hidden argument*/EmitUtilities_CreateInstanceFieldGetter_TisObject_tF2F3778131EFF286AF62B7B013A170F95A91571A_TisIntPtr_t_m74BE8E6173ABDB3F4B9EE979FC513E3FFF500C47_RuntimeMethod_var);
		((UnityExtensions_t5D54B2331F27292CD5BC2620F40EB5F20ECBD74B_StaticFields*)il2cpp_codegen_static_fields_for(UnityExtensions_t5D54B2331F27292CD5BC2620F40EB5F20ECBD74B_il2cpp_TypeInfo_var))->set_UnityObjectCachedPtrFieldGetter_0(L_5);
	}

IL_0025:
	{
		return;
	}
}
// System.Boolean Sirenix.Utilities.UnityExtensions::SafeIsUnityNull(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityExtensions_SafeIsUnityNull_mB55495551DCEC86E91024E66172903DAB4649504 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityExtensions_t5D54B2331F27292CD5BC2620F40EB5F20ECBD74B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueGetter_2_Invoke_m00C7BE42EC065324001BF3ED699DC4971CA7ABA7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)1;
	}

IL_0005:
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityExtensions_t5D54B2331F27292CD5BC2620F40EB5F20ECBD74B_il2cpp_TypeInfo_var);
		ValueGetter_2_t7A32360D14D98554904C377692F0A8160DA1EF34 * L_1 = ((UnityExtensions_t5D54B2331F27292CD5BC2620F40EB5F20ECBD74B_StaticFields*)il2cpp_codegen_static_fields_for(UnityExtensions_t5D54B2331F27292CD5BC2620F40EB5F20ECBD74B_il2cpp_TypeInfo_var))->get_UnityObjectCachedPtrFieldGetter_0();
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_2 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB27BC2DBD9E4582303E95015D30F8DB415DB3D4B)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityExtensions_SafeIsUnityNull_mB55495551DCEC86E91024E66172903DAB4649504_RuntimeMethod_var)));
	}

IL_0017:
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityExtensions_t5D54B2331F27292CD5BC2620F40EB5F20ECBD74B_il2cpp_TypeInfo_var);
		ValueGetter_2_t7A32360D14D98554904C377692F0A8160DA1EF34 * L_3 = ((UnityExtensions_t5D54B2331F27292CD5BC2620F40EB5F20ECBD74B_StaticFields*)il2cpp_codegen_static_fields_for(UnityExtensions_t5D54B2331F27292CD5BC2620F40EB5F20ECBD74B_il2cpp_TypeInfo_var))->get_UnityObjectCachedPtrFieldGetter_0();
		NullCheck(L_3);
		intptr_t L_4;
		L_4 = ValueGetter_2_Invoke_m00C7BE42EC065324001BF3ED699DC4971CA7ABA7(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A **)(&___obj0), /*hidden argument*/ValueGetter_2_Invoke_m00C7BE42EC065324001BF3ED699DC4971CA7ABA7_RuntimeMethod_var);
		V_0 = (intptr_t)L_4;
		intptr_t L_5 = V_0;
		bool L_6;
		L_6 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_5, (intptr_t)(0), /*hidden argument*/NULL);
		return L_6;
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
// System.Void Sirenix.Utilities.UnityVersion::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityVersion__cctor_m0BF138D72693C1733030B274CFC280553C441BC2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityVersion_t71812D047DFC03FCD7B200F135206D0B8214B551_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FE371F4FD106F2E23AD17CE17DD19CBEAB4C201);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3125A7BAD1D9F6BD71BCEE4C2B9156FDFD2007D3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A825010D5EA79C01DD8A61B9868ED1079027C59);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B467E9437ABC9E94BFC901F0C0D1B5CB4BA7FA6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6BE0C776B3F645DA91BB7E44C3B8DF8B543935F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7A7939E82BEFEF8DDB755713442AA62963F09F8);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_0 = NULL;
	{
		String_t* L_0;
		L_0 = Application_get_unityVersion_m96DFC04C06A62DDF3EDC830C1F103D848AC0FDF1(/*hidden argument*/NULL);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)46));
		NullCheck(L_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3;
		L_3 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = V_0;
		NullCheck(L_4);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))) >= ((int32_t)2)))
		{
			goto IL_0036;
		}
	}
	{
		String_t* L_5;
		L_5 = Application_get_unityVersion_m96DFC04C06A62DDF3EDC830C1F103D848AC0FDF1(/*hidden argument*/NULL);
		String_t* L_6;
		L_6 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral6A825010D5EA79C01DD8A61B9868ED1079027C59, L_5, _stringLiteral1FE371F4FD106F2E23AD17CE17DD19CBEAB4C201, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_6, /*hidden argument*/NULL);
		return;
	}

IL_0036:
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = 0;
		String_t* L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		bool L_10;
		L_10 = Int32_TryParse_m748B8DB1D0C9D25C3D1812D7887411C4AFC1DDC2(L_9, (int32_t*)(((UnityVersion_t71812D047DFC03FCD7B200F135206D0B8214B551_StaticFields*)il2cpp_codegen_static_fields_for(UnityVersion_t71812D047DFC03FCD7B200F135206D0B8214B551_il2cpp_TypeInfo_var))->get_address_of_Major_0()), /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_007b;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = L_11;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral6B467E9437ABC9E94BFC901F0C0D1B5CB4BA7FA6);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral6B467E9437ABC9E94BFC901F0C0D1B5CB4BA7FA6);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = L_12;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15 = 0;
		String_t* L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_16);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_17 = L_13;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, _stringLiteral6BE0C776B3F645DA91BB7E44C3B8DF8B543935F6);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral6BE0C776B3F645DA91BB7E44C3B8DF8B543935F6);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_18 = L_17;
		String_t* L_19;
		L_19 = Application_get_unityVersion_m96DFC04C06A62DDF3EDC830C1F103D848AC0FDF1(/*hidden argument*/NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_19);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_20 = L_18;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, _stringLiteralC7A7939E82BEFEF8DDB755713442AA62963F09F8);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralC7A7939E82BEFEF8DDB755713442AA62963F09F8);
		String_t* L_21;
		L_21 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_20, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_21, /*hidden argument*/NULL);
	}

IL_007b:
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_22 = V_0;
		NullCheck(L_22);
		int32_t L_23 = 1;
		String_t* L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		bool L_25;
		L_25 = Int32_TryParse_m748B8DB1D0C9D25C3D1812D7887411C4AFC1DDC2(L_24, (int32_t*)(((UnityVersion_t71812D047DFC03FCD7B200F135206D0B8214B551_StaticFields*)il2cpp_codegen_static_fields_for(UnityVersion_t71812D047DFC03FCD7B200F135206D0B8214B551_il2cpp_TypeInfo_var))->get_address_of_Minor_1()), /*hidden argument*/NULL);
		if (L_25)
		{
			goto IL_00c0;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_26 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_27 = L_26;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, _stringLiteral3125A7BAD1D9F6BD71BCEE4C2B9156FDFD2007D3);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3125A7BAD1D9F6BD71BCEE4C2B9156FDFD2007D3);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_28 = L_27;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_29 = V_0;
		NullCheck(L_29);
		int32_t L_30 = 1;
		String_t* L_31 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_31);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_31);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_32 = L_28;
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, _stringLiteral6BE0C776B3F645DA91BB7E44C3B8DF8B543935F6);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral6BE0C776B3F645DA91BB7E44C3B8DF8B543935F6);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_33 = L_32;
		String_t* L_34;
		L_34 = Application_get_unityVersion_m96DFC04C06A62DDF3EDC830C1F103D848AC0FDF1(/*hidden argument*/NULL);
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_34);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_34);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_35 = L_33;
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, _stringLiteralC7A7939E82BEFEF8DDB755713442AA62963F09F8);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralC7A7939E82BEFEF8DDB755713442AA62963F09F8);
		String_t* L_36;
		L_36 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_35, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_36, /*hidden argument*/NULL);
	}

IL_00c0:
	{
		return;
	}
}
// System.Void Sirenix.Utilities.UnityVersion::EnsureLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityVersion_EnsureLoaded_m6ECEEB236529DAE0667E41292206E3699ECCDD38 (const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Sirenix.Utilities.UnityVersion::IsVersionOrGreater(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityVersion_IsVersionOrGreater_mC278F42829DACC800767E574A97D81550139627D (int32_t ___major0, int32_t ___minor1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityVersion_t71812D047DFC03FCD7B200F135206D0B8214B551_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityVersion_t71812D047DFC03FCD7B200F135206D0B8214B551_il2cpp_TypeInfo_var);
		int32_t L_0 = ((UnityVersion_t71812D047DFC03FCD7B200F135206D0B8214B551_StaticFields*)il2cpp_codegen_static_fields_for(UnityVersion_t71812D047DFC03FCD7B200F135206D0B8214B551_il2cpp_TypeInfo_var))->get_Major_0();
		int32_t L_1 = ___major0;
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityVersion_t71812D047DFC03FCD7B200F135206D0B8214B551_il2cpp_TypeInfo_var);
		int32_t L_2 = ((UnityVersion_t71812D047DFC03FCD7B200F135206D0B8214B551_StaticFields*)il2cpp_codegen_static_fields_for(UnityVersion_t71812D047DFC03FCD7B200F135206D0B8214B551_il2cpp_TypeInfo_var))->get_Major_0();
		int32_t L_3 = ___major0;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityVersion_t71812D047DFC03FCD7B200F135206D0B8214B551_il2cpp_TypeInfo_var);
		int32_t L_4 = ((UnityVersion_t71812D047DFC03FCD7B200F135206D0B8214B551_StaticFields*)il2cpp_codegen_static_fields_for(UnityVersion_t71812D047DFC03FCD7B200F135206D0B8214B551_il2cpp_TypeInfo_var))->get_Minor_1();
		int32_t L_5 = ___minor1;
		return (bool)((((int32_t)((((int32_t)L_4) < ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_001c:
	{
		return (bool)0;
	}

IL_001e:
	{
		return (bool)1;
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
// System.String Sirenix.Utilities.Unsafe.UnsafeUtilities::StringFromBytes(System.Byte[],System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnsafeUtilities_StringFromBytes_m2C4A0CD8B3F7629B49600B6C912B9AD68988C2B9 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___charLength1, bool ___needs16BitSupport2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  V_1;
	memset((&V_1), 0, sizeof(V_1));
	String_t* V_2 = NULL;
	Il2CppChar* V_3 = NULL;
	String_t* V_4 = NULL;
	uint16_t* V_5 = NULL;
	uint16_t* V_6 = NULL;
	intptr_t V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	Il2CppChar* V_9 = NULL;
	String_t* V_10 = NULL;
	uint8_t* V_11 = NULL;
	uint8_t* V_12 = NULL;
	int32_t V_13 = 0;
	Il2CppChar* V_14 = NULL;
	String_t* V_15 = NULL;
	uint8_t* V_16 = NULL;
	uint8_t* V_17 = NULL;
	int32_t V_18 = 0;
	Il2CppChar* V_19 = NULL;
	String_t* V_20 = NULL;
	uint8_t* V_21 = NULL;
	uint8_t* V_22 = NULL;
	int32_t V_23 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	int32_t G_B3_0 = 0;
	{
		bool L_0 = ___needs16BitSupport2;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_1 = ___charLength1;
		G_B3_0 = L_1;
		goto IL_0009;
	}

IL_0006:
	{
		int32_t L_2 = ___charLength1;
		G_B3_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_2, (int32_t)2));
	}

IL_0009:
	{
		V_0 = G_B3_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___buffer0;
		NullCheck(L_3);
		int32_t L_4 = V_0;
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))) >= ((int32_t)L_4)))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_5 = V_0;
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_6);
		String_t* L_8;
		L_8 = String_Concat_mFCF5F98D38F99DE7C831CBB9A1BAAAB148FC7D57(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0FBEE35345E8D388C523672DCD1D97721575F12E)), L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral87064437EF311884667DAB55AAFBBAC160D0E41D)), /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_9 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_9, L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnsafeUtilities_StringFromBytes_m2C4A0CD8B3F7629B49600B6C912B9AD68988C2B9_RuntimeMethod_var)));
	}

IL_002b:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 ));
		int32_t L_10 = ___charLength1;
		String_t* L_11;
		L_11 = String_CreateString_m4CBF2A74FB65655B0BB1452CA748E9CF78D974ED(NULL, 0, L_10, /*hidden argument*/NULL);
		V_2 = L_11;
	}

IL_003b:
	try
	{ // begin try (depth: 1)
		{
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = ___buffer0;
			GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_13;
			L_13 = GCHandle_Alloc_mBF5C4C0E8605F97427BFDF96D68AACD4A4D6DDEC((RuntimeObject *)(RuntimeObject *)L_12, 3, /*hidden argument*/NULL);
			V_1 = L_13;
			bool L_14 = ___needs16BitSupport2;
			if (!L_14)
			{
				goto IL_0102;
			}
		}

IL_0049:
		{
			IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
			bool L_15 = ((BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var))->get_IsLittleEndian_0();
			if (!L_15)
			{
				goto IL_00a0;
			}
		}

IL_0050:
		try
		{ // begin try (depth: 2)
			{
				String_t* L_16 = V_2;
				V_4 = L_16;
				String_t* L_17 = V_4;
				V_3 = (Il2CppChar*)((intptr_t)L_17);
				Il2CppChar* L_18 = V_3;
				if (!L_18)
				{
					goto IL_0062;
				}
			}

IL_005a:
			{
				Il2CppChar* L_19 = V_3;
				int32_t L_20;
				L_20 = RuntimeHelpers_get_OffsetToStringData_mEB8E6EAEBAFAB7CD7F7A915B3081785AABB9FC42(/*hidden argument*/NULL);
				V_3 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_19, (int32_t)L_20));
			}

IL_0062:
			{
				intptr_t L_21;
				L_21 = GCHandle_AddrOfPinnedObject_m0604506F2BDCD2DC8C167FBC3BF3E965888F7589((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(&V_1), /*hidden argument*/NULL);
				V_7 = (intptr_t)L_21;
				void* L_22;
				L_22 = IntPtr_ToPointer_m5C7CE32B14B6E30467B378052FEA25300833C61F_inline((intptr_t*)(&V_7), /*hidden argument*/NULL);
				V_5 = (uint16_t*)L_22;
				Il2CppChar* L_23 = V_3;
				V_6 = (uint16_t*)L_23;
				V_8 = 0;
				goto IL_0092;
			}

IL_007c:
			{
				uint16_t* L_24 = V_6;
				uint16_t* L_25 = (uint16_t*)L_24;
				V_6 = (uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_25, (int32_t)2));
				uint16_t* L_26 = V_5;
				uint16_t* L_27 = (uint16_t*)L_26;
				V_5 = (uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_27, (int32_t)2));
				int32_t L_28 = *((uint16_t*)L_27);
				*((int16_t*)L_25) = (int16_t)L_28;
				int32_t L_29 = V_8;
				V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)2));
			}

IL_0092:
			{
				int32_t L_30 = V_8;
				int32_t L_31 = V_0;
				if ((((int32_t)L_30) < ((int32_t)L_31)))
				{
					goto IL_007c;
				}
			}

IL_0097:
			{
				IL2CPP_LEAVE(0x1CB, FINALLY_009c);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_009c;
		}

FINALLY_009c:
		{ // begin finally (depth: 2)
			V_4 = (String_t*)NULL;
			IL2CPP_END_FINALLY(156)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(156)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0x1CB, FINALLY_01ba);
		}

IL_00a0:
		{
		}

IL_00a1:
		try
		{ // begin try (depth: 2)
			{
				String_t* L_32 = V_2;
				V_10 = L_32;
				String_t* L_33 = V_10;
				V_9 = (Il2CppChar*)((intptr_t)L_33);
				Il2CppChar* L_34 = V_9;
				if (!L_34)
				{
					goto IL_00b7;
				}
			}

IL_00ad:
			{
				Il2CppChar* L_35 = V_9;
				int32_t L_36;
				L_36 = RuntimeHelpers_get_OffsetToStringData_mEB8E6EAEBAFAB7CD7F7A915B3081785AABB9FC42(/*hidden argument*/NULL);
				V_9 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_35, (int32_t)L_36));
			}

IL_00b7:
			{
				intptr_t L_37;
				L_37 = GCHandle_AddrOfPinnedObject_m0604506F2BDCD2DC8C167FBC3BF3E965888F7589((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(&V_1), /*hidden argument*/NULL);
				V_7 = (intptr_t)L_37;
				void* L_38;
				L_38 = IntPtr_ToPointer_m5C7CE32B14B6E30467B378052FEA25300833C61F_inline((intptr_t*)(&V_7), /*hidden argument*/NULL);
				V_11 = (uint8_t*)L_38;
				Il2CppChar* L_39 = V_9;
				V_12 = (uint8_t*)L_39;
				V_13 = 0;
				goto IL_00f4;
			}

IL_00d2:
			{
				uint8_t* L_40 = V_12;
				uint8_t* L_41 = V_11;
				int32_t L_42 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_41, (int32_t)1)));
				*((int8_t*)L_40) = (int8_t)L_42;
				uint8_t* L_43 = V_12;
				uint8_t* L_44 = V_11;
				int32_t L_45 = *((uint8_t*)L_44);
				*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, (int32_t)1))) = (int8_t)L_45;
				uint8_t* L_46 = V_11;
				V_11 = (uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_46, (int32_t)2));
				uint8_t* L_47 = V_12;
				V_12 = (uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_47, (int32_t)2));
				int32_t L_48 = V_13;
				V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_48, (int32_t)2));
			}

IL_00f4:
			{
				int32_t L_49 = V_13;
				int32_t L_50 = V_0;
				if ((((int32_t)L_49) < ((int32_t)L_50)))
				{
					goto IL_00d2;
				}
			}

IL_00f9:
			{
				IL2CPP_LEAVE(0x1CB, FINALLY_00fe);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00fe;
		}

FINALLY_00fe:
		{ // begin finally (depth: 2)
			V_10 = (String_t*)NULL;
			IL2CPP_END_FINALLY(254)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(254)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0x1CB, FINALLY_01ba);
		}

IL_0102:
		{
			IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
			bool L_51 = ((BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var))->get_IsLittleEndian_0();
			if (!L_51)
			{
				goto IL_0161;
			}
		}

IL_0109:
		try
		{ // begin try (depth: 2)
			{
				String_t* L_52 = V_2;
				V_15 = L_52;
				String_t* L_53 = V_15;
				V_14 = (Il2CppChar*)((intptr_t)L_53);
				Il2CppChar* L_54 = V_14;
				if (!L_54)
				{
					goto IL_011f;
				}
			}

IL_0115:
			{
				Il2CppChar* L_55 = V_14;
				int32_t L_56;
				L_56 = RuntimeHelpers_get_OffsetToStringData_mEB8E6EAEBAFAB7CD7F7A915B3081785AABB9FC42(/*hidden argument*/NULL);
				V_14 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_55, (int32_t)L_56));
			}

IL_011f:
			{
				intptr_t L_57;
				L_57 = GCHandle_AddrOfPinnedObject_m0604506F2BDCD2DC8C167FBC3BF3E965888F7589((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(&V_1), /*hidden argument*/NULL);
				V_7 = (intptr_t)L_57;
				void* L_58;
				L_58 = IntPtr_ToPointer_m5C7CE32B14B6E30467B378052FEA25300833C61F_inline((intptr_t*)(&V_7), /*hidden argument*/NULL);
				V_16 = (uint8_t*)L_58;
				Il2CppChar* L_59 = V_14;
				V_17 = (uint8_t*)L_59;
				V_18 = 0;
				goto IL_0156;
			}

IL_013a:
			{
				uint8_t* L_60 = V_17;
				uint8_t* L_61 = (uint8_t*)L_60;
				V_17 = (uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_61, (int32_t)1));
				uint8_t* L_62 = V_16;
				uint8_t* L_63 = (uint8_t*)L_62;
				V_16 = (uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_63, (int32_t)1));
				int32_t L_64 = *((uint8_t*)L_63);
				*((int8_t*)L_61) = (int8_t)L_64;
				uint8_t* L_65 = V_17;
				V_17 = (uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_65, (int32_t)1));
				int32_t L_66 = V_18;
				V_18 = ((int32_t)il2cpp_codegen_add((int32_t)L_66, (int32_t)1));
			}

IL_0156:
			{
				int32_t L_67 = V_18;
				int32_t L_68 = V_0;
				if ((((int32_t)L_67) < ((int32_t)L_68)))
				{
					goto IL_013a;
				}
			}

IL_015b:
			{
				IL2CPP_LEAVE(0x1CB, FINALLY_015d);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_015d;
		}

FINALLY_015d:
		{ // begin finally (depth: 2)
			V_15 = (String_t*)NULL;
			IL2CPP_END_FINALLY(349)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(349)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0x1CB, FINALLY_01ba);
		}

IL_0161:
		{
		}

IL_0162:
		try
		{ // begin try (depth: 2)
			{
				String_t* L_69 = V_2;
				V_20 = L_69;
				String_t* L_70 = V_20;
				V_19 = (Il2CppChar*)((intptr_t)L_70);
				Il2CppChar* L_71 = V_19;
				if (!L_71)
				{
					goto IL_0178;
				}
			}

IL_016e:
			{
				Il2CppChar* L_72 = V_19;
				int32_t L_73;
				L_73 = RuntimeHelpers_get_OffsetToStringData_mEB8E6EAEBAFAB7CD7F7A915B3081785AABB9FC42(/*hidden argument*/NULL);
				V_19 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_72, (int32_t)L_73));
			}

IL_0178:
			{
				intptr_t L_74;
				L_74 = GCHandle_AddrOfPinnedObject_m0604506F2BDCD2DC8C167FBC3BF3E965888F7589((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(&V_1), /*hidden argument*/NULL);
				V_7 = (intptr_t)L_74;
				void* L_75;
				L_75 = IntPtr_ToPointer_m5C7CE32B14B6E30467B378052FEA25300833C61F_inline((intptr_t*)(&V_7), /*hidden argument*/NULL);
				V_21 = (uint8_t*)L_75;
				Il2CppChar* L_76 = V_19;
				V_22 = (uint8_t*)L_76;
				V_23 = 0;
				goto IL_01af;
			}

IL_0193:
			{
				uint8_t* L_77 = V_22;
				V_22 = (uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_77, (int32_t)1));
				uint8_t* L_78 = V_22;
				uint8_t* L_79 = (uint8_t*)L_78;
				V_22 = (uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_79, (int32_t)1));
				uint8_t* L_80 = V_21;
				uint8_t* L_81 = (uint8_t*)L_80;
				V_21 = (uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_81, (int32_t)1));
				int32_t L_82 = *((uint8_t*)L_81);
				*((int8_t*)L_79) = (int8_t)L_82;
				int32_t L_83 = V_23;
				V_23 = ((int32_t)il2cpp_codegen_add((int32_t)L_83, (int32_t)1));
			}

IL_01af:
			{
				int32_t L_84 = V_23;
				int32_t L_85 = V_0;
				if ((((int32_t)L_84) < ((int32_t)L_85)))
				{
					goto IL_0193;
				}
			}

IL_01b4:
			{
				IL2CPP_LEAVE(0x1CB, FINALLY_01b6);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_01b6;
		}

FINALLY_01b6:
		{ // begin finally (depth: 2)
			V_20 = (String_t*)NULL;
			IL2CPP_END_FINALLY(438)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(438)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0x1CB, FINALLY_01ba);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01ba;
	}

FINALLY_01ba:
	{ // begin finally (depth: 1)
		{
			bool L_86;
			L_86 = GCHandle_get_IsAllocated_mEDA4DAC6AD6D881110E96CAFDAB78C068F5B144D((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(&V_1), /*hidden argument*/NULL);
			if (!L_86)
			{
				goto IL_01ca;
			}
		}

IL_01c3:
		{
			GCHandle_Free_mB4E9415544FC9F0075C02AB17E270E49AF006025((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(&V_1), /*hidden argument*/NULL);
		}

IL_01ca:
		{
			IL2CPP_END_FINALLY(442)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(442)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1CB, IL_01cb)
	}

IL_01cb:
	{
		String_t* L_87 = V_2;
		return L_87;
	}
}
// System.Int32 Sirenix.Utilities.Unsafe.UnsafeUtilities::StringToBytes(System.Byte[],System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilities_StringToBytes_m7A0BD67774961DB2CA91F3DA04C2D2AF63B52492 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, String_t* ___value1, bool ___needs16BitSupport2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Il2CppChar* V_2 = NULL;
	String_t* V_3 = NULL;
	uint16_t* V_4 = NULL;
	uint16_t* V_5 = NULL;
	intptr_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	Il2CppChar* V_8 = NULL;
	String_t* V_9 = NULL;
	uint8_t* V_10 = NULL;
	uint8_t* V_11 = NULL;
	int32_t V_12 = 0;
	Il2CppChar* V_13 = NULL;
	String_t* V_14 = NULL;
	uint8_t* V_15 = NULL;
	uint8_t* V_16 = NULL;
	int32_t V_17 = 0;
	Il2CppChar* V_18 = NULL;
	String_t* V_19 = NULL;
	uint8_t* V_20 = NULL;
	uint8_t* V_21 = NULL;
	int32_t V_22 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	int32_t G_B3_0 = 0;
	{
		bool L_0 = ___needs16BitSupport2;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		String_t* L_1 = ___value1;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_1, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_0013;
	}

IL_000b:
	{
		String_t* L_3 = ___value1;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_3, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_4, (int32_t)2));
	}

IL_0013:
	{
		V_0 = G_B3_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = ___buffer0;
		NullCheck(L_5);
		int32_t L_6 = V_0;
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))) >= ((int32_t)L_6)))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_7 = V_0;
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_8);
		String_t* L_10;
		L_10 = String_Concat_mFCF5F98D38F99DE7C831CBB9A1BAAAB148FC7D57(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0FBEE35345E8D388C523672DCD1D97721575F12E)), L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral87064437EF311884667DAB55AAFBBAC160D0E41D)), /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_11 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_11, L_10, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnsafeUtilities_StringToBytes_m7A0BD67774961DB2CA91F3DA04C2D2AF63B52492_RuntimeMethod_var)));
	}

IL_0035:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 ));
	}

IL_003d:
	try
	{ // begin try (depth: 1)
		{
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = ___buffer0;
			GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_13;
			L_13 = GCHandle_Alloc_mBF5C4C0E8605F97427BFDF96D68AACD4A4D6DDEC((RuntimeObject *)(RuntimeObject *)L_12, 3, /*hidden argument*/NULL);
			V_1 = L_13;
			bool L_14 = ___needs16BitSupport2;
			if (!L_14)
			{
				goto IL_0101;
			}
		}

IL_004b:
		{
			IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
			bool L_15 = ((BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var))->get_IsLittleEndian_0();
			if (!L_15)
			{
				goto IL_009f;
			}
		}

IL_0052:
		try
		{ // begin try (depth: 2)
			{
				String_t* L_16 = ___value1;
				V_3 = L_16;
				String_t* L_17 = V_3;
				V_2 = (Il2CppChar*)((intptr_t)L_17);
				Il2CppChar* L_18 = V_2;
				if (!L_18)
				{
					goto IL_0062;
				}
			}

IL_005a:
			{
				Il2CppChar* L_19 = V_2;
				int32_t L_20;
				L_20 = RuntimeHelpers_get_OffsetToStringData_mEB8E6EAEBAFAB7CD7F7A915B3081785AABB9FC42(/*hidden argument*/NULL);
				V_2 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_19, (int32_t)L_20));
			}

IL_0062:
			{
				Il2CppChar* L_21 = V_2;
				V_4 = (uint16_t*)L_21;
				intptr_t L_22;
				L_22 = GCHandle_AddrOfPinnedObject_m0604506F2BDCD2DC8C167FBC3BF3E965888F7589((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(&V_1), /*hidden argument*/NULL);
				V_6 = (intptr_t)L_22;
				void* L_23;
				L_23 = IntPtr_ToPointer_m5C7CE32B14B6E30467B378052FEA25300833C61F_inline((intptr_t*)(&V_6), /*hidden argument*/NULL);
				V_5 = (uint16_t*)L_23;
				V_7 = 0;
				goto IL_0092;
			}

IL_007c:
			{
				uint16_t* L_24 = V_5;
				uint16_t* L_25 = (uint16_t*)L_24;
				V_5 = (uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_25, (int32_t)2));
				uint16_t* L_26 = V_4;
				uint16_t* L_27 = (uint16_t*)L_26;
				V_4 = (uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_27, (int32_t)2));
				int32_t L_28 = *((uint16_t*)L_27);
				*((int16_t*)L_25) = (int16_t)L_28;
				int32_t L_29 = V_7;
				V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)2));
			}

IL_0092:
			{
				int32_t L_30 = V_7;
				int32_t L_31 = V_0;
				if ((((int32_t)L_30) < ((int32_t)L_31)))
				{
					goto IL_007c;
				}
			}

IL_0097:
			{
				IL2CPP_LEAVE(0x1CA, FINALLY_009c);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_009c;
		}

FINALLY_009c:
		{ // begin finally (depth: 2)
			V_3 = (String_t*)NULL;
			IL2CPP_END_FINALLY(156)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(156)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0x1CA, FINALLY_01b9);
		}

IL_009f:
		{
		}

IL_00a0:
		try
		{ // begin try (depth: 2)
			{
				String_t* L_32 = ___value1;
				V_9 = L_32;
				String_t* L_33 = V_9;
				V_8 = (Il2CppChar*)((intptr_t)L_33);
				Il2CppChar* L_34 = V_8;
				if (!L_34)
				{
					goto IL_00b6;
				}
			}

IL_00ac:
			{
				Il2CppChar* L_35 = V_8;
				int32_t L_36;
				L_36 = RuntimeHelpers_get_OffsetToStringData_mEB8E6EAEBAFAB7CD7F7A915B3081785AABB9FC42(/*hidden argument*/NULL);
				V_8 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_35, (int32_t)L_36));
			}

IL_00b6:
			{
				Il2CppChar* L_37 = V_8;
				V_10 = (uint8_t*)L_37;
				intptr_t L_38;
				L_38 = GCHandle_AddrOfPinnedObject_m0604506F2BDCD2DC8C167FBC3BF3E965888F7589((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(&V_1), /*hidden argument*/NULL);
				V_6 = (intptr_t)L_38;
				void* L_39;
				L_39 = IntPtr_ToPointer_m5C7CE32B14B6E30467B378052FEA25300833C61F_inline((intptr_t*)(&V_6), /*hidden argument*/NULL);
				V_11 = (uint8_t*)L_39;
				V_12 = 0;
				goto IL_00f3;
			}

IL_00d1:
			{
				uint8_t* L_40 = V_11;
				uint8_t* L_41 = V_10;
				int32_t L_42 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_41, (int32_t)1)));
				*((int8_t*)L_40) = (int8_t)L_42;
				uint8_t* L_43 = V_11;
				uint8_t* L_44 = V_10;
				int32_t L_45 = *((uint8_t*)L_44);
				*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, (int32_t)1))) = (int8_t)L_45;
				uint8_t* L_46 = V_10;
				V_10 = (uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_46, (int32_t)2));
				uint8_t* L_47 = V_11;
				V_11 = (uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_47, (int32_t)2));
				int32_t L_48 = V_12;
				V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_48, (int32_t)2));
			}

IL_00f3:
			{
				int32_t L_49 = V_12;
				int32_t L_50 = V_0;
				if ((((int32_t)L_49) < ((int32_t)L_50)))
				{
					goto IL_00d1;
				}
			}

IL_00f8:
			{
				IL2CPP_LEAVE(0x1CA, FINALLY_00fd);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00fd;
		}

FINALLY_00fd:
		{ // begin finally (depth: 2)
			V_9 = (String_t*)NULL;
			IL2CPP_END_FINALLY(253)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(253)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0x1CA, FINALLY_01b9);
		}

IL_0101:
		{
			IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
			bool L_51 = ((BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var))->get_IsLittleEndian_0();
			if (!L_51)
			{
				goto IL_0160;
			}
		}

IL_0108:
		try
		{ // begin try (depth: 2)
			{
				String_t* L_52 = ___value1;
				V_14 = L_52;
				String_t* L_53 = V_14;
				V_13 = (Il2CppChar*)((intptr_t)L_53);
				Il2CppChar* L_54 = V_13;
				if (!L_54)
				{
					goto IL_011e;
				}
			}

IL_0114:
			{
				Il2CppChar* L_55 = V_13;
				int32_t L_56;
				L_56 = RuntimeHelpers_get_OffsetToStringData_mEB8E6EAEBAFAB7CD7F7A915B3081785AABB9FC42(/*hidden argument*/NULL);
				V_13 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_55, (int32_t)L_56));
			}

IL_011e:
			{
				Il2CppChar* L_57 = V_13;
				V_15 = (uint8_t*)L_57;
				intptr_t L_58;
				L_58 = GCHandle_AddrOfPinnedObject_m0604506F2BDCD2DC8C167FBC3BF3E965888F7589((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(&V_1), /*hidden argument*/NULL);
				V_6 = (intptr_t)L_58;
				void* L_59;
				L_59 = IntPtr_ToPointer_m5C7CE32B14B6E30467B378052FEA25300833C61F_inline((intptr_t*)(&V_6), /*hidden argument*/NULL);
				V_16 = (uint8_t*)L_59;
				V_17 = 0;
				goto IL_0155;
			}

IL_0139:
			{
				uint8_t* L_60 = V_15;
				V_15 = (uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_60, (int32_t)1));
				uint8_t* L_61 = V_16;
				uint8_t* L_62 = (uint8_t*)L_61;
				V_16 = (uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_62, (int32_t)1));
				uint8_t* L_63 = V_15;
				uint8_t* L_64 = (uint8_t*)L_63;
				V_15 = (uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_64, (int32_t)1));
				int32_t L_65 = *((uint8_t*)L_64);
				*((int8_t*)L_62) = (int8_t)L_65;
				int32_t L_66 = V_17;
				V_17 = ((int32_t)il2cpp_codegen_add((int32_t)L_66, (int32_t)1));
			}

IL_0155:
			{
				int32_t L_67 = V_17;
				int32_t L_68 = V_0;
				if ((((int32_t)L_67) < ((int32_t)L_68)))
				{
					goto IL_0139;
				}
			}

IL_015a:
			{
				IL2CPP_LEAVE(0x1CA, FINALLY_015c);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_015c;
		}

FINALLY_015c:
		{ // begin finally (depth: 2)
			V_14 = (String_t*)NULL;
			IL2CPP_END_FINALLY(348)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(348)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0x1CA, FINALLY_01b9);
		}

IL_0160:
		{
		}

IL_0161:
		try
		{ // begin try (depth: 2)
			{
				String_t* L_69 = ___value1;
				V_19 = L_69;
				String_t* L_70 = V_19;
				V_18 = (Il2CppChar*)((intptr_t)L_70);
				Il2CppChar* L_71 = V_18;
				if (!L_71)
				{
					goto IL_0177;
				}
			}

IL_016d:
			{
				Il2CppChar* L_72 = V_18;
				int32_t L_73;
				L_73 = RuntimeHelpers_get_OffsetToStringData_mEB8E6EAEBAFAB7CD7F7A915B3081785AABB9FC42(/*hidden argument*/NULL);
				V_18 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_72, (int32_t)L_73));
			}

IL_0177:
			{
				Il2CppChar* L_74 = V_18;
				V_20 = (uint8_t*)L_74;
				intptr_t L_75;
				L_75 = GCHandle_AddrOfPinnedObject_m0604506F2BDCD2DC8C167FBC3BF3E965888F7589((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(&V_1), /*hidden argument*/NULL);
				V_6 = (intptr_t)L_75;
				void* L_76;
				L_76 = IntPtr_ToPointer_m5C7CE32B14B6E30467B378052FEA25300833C61F_inline((intptr_t*)(&V_6), /*hidden argument*/NULL);
				V_21 = (uint8_t*)L_76;
				V_22 = 0;
				goto IL_01ae;
			}

IL_0192:
			{
				uint8_t* L_77 = V_21;
				uint8_t* L_78 = (uint8_t*)L_77;
				V_21 = (uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_78, (int32_t)1));
				uint8_t* L_79 = V_20;
				uint8_t* L_80 = (uint8_t*)L_79;
				V_20 = (uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_80, (int32_t)1));
				int32_t L_81 = *((uint8_t*)L_80);
				*((int8_t*)L_78) = (int8_t)L_81;
				uint8_t* L_82 = V_20;
				V_20 = (uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_82, (int32_t)1));
				int32_t L_83 = V_22;
				V_22 = ((int32_t)il2cpp_codegen_add((int32_t)L_83, (int32_t)1));
			}

IL_01ae:
			{
				int32_t L_84 = V_22;
				int32_t L_85 = V_0;
				if ((((int32_t)L_84) < ((int32_t)L_85)))
				{
					goto IL_0192;
				}
			}

IL_01b3:
			{
				IL2CPP_LEAVE(0x1CA, FINALLY_01b5);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_01b5;
		}

FINALLY_01b5:
		{ // begin finally (depth: 2)
			V_19 = (String_t*)NULL;
			IL2CPP_END_FINALLY(437)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(437)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0x1CA, FINALLY_01b9);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01b9;
	}

FINALLY_01b9:
	{ // begin finally (depth: 1)
		{
			bool L_86;
			L_86 = GCHandle_get_IsAllocated_mEDA4DAC6AD6D881110E96CAFDAB78C068F5B144D((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(&V_1), /*hidden argument*/NULL);
			if (!L_86)
			{
				goto IL_01c9;
			}
		}

IL_01c2:
		{
			GCHandle_Free_mB4E9415544FC9F0075C02AB17E270E49AF006025((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(&V_1), /*hidden argument*/NULL);
		}

IL_01c9:
		{
			IL2CPP_END_FINALLY(441)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(441)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1CA, IL_01ca)
	}

IL_01ca:
	{
		int32_t L_87 = V_0;
		return L_87;
	}
}
// System.Void Sirenix.Utilities.Unsafe.UnsafeUtilities::MemoryCopy(System.Object,System.Object,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtilities_MemoryCopy_m9F3455E1DB0842B9A907DB06E0AC244DE6FF31F7 (RuntimeObject * ___from0, RuntimeObject * ___to1, int32_t ___byteCount2, int32_t ___fromByteOffset3, int32_t ___toByteOffset4, const RuntimeMethod* method)
{
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  V_0;
	memset((&V_0), 0, sizeof(V_0));
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	uint64_t* V_6 = NULL;
	uint64_t* V_7 = NULL;
	intptr_t V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	uint8_t* V_10 = NULL;
	uint8_t* V_11 = NULL;
	int32_t V_12 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 ));
		il2cpp_codegen_initobj((&V_1), sizeof(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 ));
		int32_t L_0 = ___fromByteOffset3;
		if (((int32_t)((int32_t)L_0%(int32_t)8)))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_1 = ___toByteOffset4;
		if (!((int32_t)((int32_t)L_1%(int32_t)8)))
		{
			goto IL_0036;
		}
	}

IL_001b:
	{
		int32_t L_2 = 8;
		RuntimeObject * L_3 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_2);
		String_t* L_4;
		L_4 = String_Concat_mFCF5F98D38F99DE7C831CBB9A1BAAAB148FC7D57(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral45E91B775C05667BB0C4313D3AF0298D560E3F90)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3F530C05EDCBF7716458575421F02CF2C179352F)), /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_5 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_5, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnsafeUtilities_MemoryCopy_m9F3455E1DB0842B9A907DB06E0AC244DE6FF31F7_RuntimeMethod_var)));
	}

IL_0036:
	{
	}

IL_0037:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_6 = ___byteCount2;
			V_2 = ((int32_t)((int32_t)L_6%(int32_t)8));
			int32_t L_7 = ___byteCount2;
			int32_t L_8 = V_2;
			V_3 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)L_8))/(int32_t)8));
			int32_t L_9 = ___fromByteOffset3;
			V_4 = ((int32_t)((int32_t)L_9/(int32_t)8));
			int32_t L_10 = ___toByteOffset4;
			V_5 = ((int32_t)((int32_t)L_10/(int32_t)8));
			RuntimeObject * L_11 = ___from0;
			GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_12;
			L_12 = GCHandle_Alloc_mBF5C4C0E8605F97427BFDF96D68AACD4A4D6DDEC(L_11, 3, /*hidden argument*/NULL);
			V_0 = L_12;
			RuntimeObject * L_13 = ___to1;
			GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_14;
			L_14 = GCHandle_Alloc_mBF5C4C0E8605F97427BFDF96D68AACD4A4D6DDEC(L_13, 3, /*hidden argument*/NULL);
			V_1 = L_14;
			intptr_t L_15;
			L_15 = GCHandle_AddrOfPinnedObject_m0604506F2BDCD2DC8C167FBC3BF3E965888F7589((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(&V_0), /*hidden argument*/NULL);
			V_8 = (intptr_t)L_15;
			void* L_16;
			L_16 = IntPtr_ToPointer_m5C7CE32B14B6E30467B378052FEA25300833C61F_inline((intptr_t*)(&V_8), /*hidden argument*/NULL);
			V_6 = (uint64_t*)L_16;
			intptr_t L_17;
			L_17 = GCHandle_AddrOfPinnedObject_m0604506F2BDCD2DC8C167FBC3BF3E965888F7589((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(&V_1), /*hidden argument*/NULL);
			V_8 = (intptr_t)L_17;
			void* L_18;
			L_18 = IntPtr_ToPointer_m5C7CE32B14B6E30467B378052FEA25300833C61F_inline((intptr_t*)(&V_8), /*hidden argument*/NULL);
			V_7 = (uint64_t*)L_18;
			int32_t L_19 = V_4;
			if ((((int32_t)L_19) <= ((int32_t)0)))
			{
				goto IL_008f;
			}
		}

IL_0085:
		{
			uint64_t* L_20 = V_6;
			int32_t L_21 = V_4;
			V_6 = (uint64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_20, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_21), (int32_t)8))));
		}

IL_008f:
		{
			int32_t L_22 = V_5;
			if ((((int32_t)L_22) <= ((int32_t)0)))
			{
				goto IL_009e;
			}
		}

IL_0094:
		{
			uint64_t* L_23 = V_7;
			int32_t L_24 = V_5;
			V_7 = (uint64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_23, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_24), (int32_t)8))));
		}

IL_009e:
		{
			V_9 = 0;
			goto IL_00b9;
		}

IL_00a3:
		{
			uint64_t* L_25 = V_7;
			uint64_t* L_26 = (uint64_t*)L_25;
			V_7 = (uint64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_26, (int32_t)8));
			uint64_t* L_27 = V_6;
			uint64_t* L_28 = (uint64_t*)L_27;
			V_6 = (uint64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_28, (int32_t)8));
			int64_t L_29 = *((int64_t*)L_28);
			*((int64_t*)L_26) = (int64_t)L_29;
			int32_t L_30 = V_9;
			V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
		}

IL_00b9:
		{
			int32_t L_31 = V_9;
			int32_t L_32 = V_3;
			if ((((int32_t)L_31) < ((int32_t)L_32)))
			{
				goto IL_00a3;
			}
		}

IL_00be:
		{
			int32_t L_33 = V_2;
			if ((((int32_t)L_33) <= ((int32_t)0)))
			{
				goto IL_00ea;
			}
		}

IL_00c2:
		{
			uint64_t* L_34 = V_6;
			V_10 = (uint8_t*)L_34;
			uint64_t* L_35 = V_7;
			V_11 = (uint8_t*)L_35;
			V_12 = 0;
			goto IL_00e5;
		}

IL_00cf:
		{
			uint8_t* L_36 = V_11;
			uint8_t* L_37 = (uint8_t*)L_36;
			V_11 = (uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_37, (int32_t)1));
			uint8_t* L_38 = V_10;
			uint8_t* L_39 = (uint8_t*)L_38;
			V_10 = (uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_39, (int32_t)1));
			int32_t L_40 = *((uint8_t*)L_39);
			*((int8_t*)L_37) = (int8_t)L_40;
			int32_t L_41 = V_12;
			V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1));
		}

IL_00e5:
		{
			int32_t L_42 = V_12;
			int32_t L_43 = V_2;
			if ((((int32_t)L_42) < ((int32_t)L_43)))
			{
				goto IL_00cf;
			}
		}

IL_00ea:
		{
			IL2CPP_LEAVE(0x10D, FINALLY_00ec);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00ec;
	}

FINALLY_00ec:
	{ // begin finally (depth: 1)
		{
			bool L_44;
			L_44 = GCHandle_get_IsAllocated_mEDA4DAC6AD6D881110E96CAFDAB78C068F5B144D((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(&V_0), /*hidden argument*/NULL);
			if (!L_44)
			{
				goto IL_00fc;
			}
		}

IL_00f5:
		{
			GCHandle_Free_mB4E9415544FC9F0075C02AB17E270E49AF006025((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(&V_0), /*hidden argument*/NULL);
		}

IL_00fc:
		{
			bool L_45;
			L_45 = GCHandle_get_IsAllocated_mEDA4DAC6AD6D881110E96CAFDAB78C068F5B144D((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(&V_1), /*hidden argument*/NULL);
			if (!L_45)
			{
				goto IL_010c;
			}
		}

IL_0105:
		{
			GCHandle_Free_mB4E9415544FC9F0075C02AB17E270E49AF006025((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(&V_1), /*hidden argument*/NULL);
		}

IL_010c:
		{
			IL2CPP_END_FINALLY(236)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(236)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x10D, IL_010d)
	}

IL_010d:
	{
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
// System.Void Sirenix.Utilities.WeakValueGetter::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakValueGetter__ctor_mEB7AAB9F39B6F3C4B7B6C43813657072DFDE193D (WeakValueGetter_t828D3829FE3BCD84DB46D8B0BB3408AFC21B0D9E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Object Sirenix.Utilities.WeakValueGetter::Invoke(System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * WeakValueGetter_Invoke_m0DEB7056C77AA5CD474202EDFE9A15106FA0B163 (WeakValueGetter_t828D3829FE3BCD84DB46D8B0BB3408AFC21B0D9E * __this, RuntimeObject ** ___instance0, const RuntimeMethod* method)
{
	RuntimeObject * result = NULL;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject **, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___instance0, targetMethod);
			}
			else
			{
				// closed
				typedef RuntimeObject * (*FunctionPointerType) (void*, RuntimeObject **, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___instance0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< RuntimeObject *, RuntimeObject ** >::Invoke(targetMethod, targetThis, ___instance0);
					else
						result = GenericVirtFuncInvoker1< RuntimeObject *, RuntimeObject ** >::Invoke(targetMethod, targetThis, ___instance0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject ** >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___instance0);
					else
						result = VirtFuncInvoker1< RuntimeObject *, RuntimeObject ** >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___instance0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject **, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___instance0, targetMethod);
				}
				else
				{
					typedef RuntimeObject * (*FunctionPointerType) (void*, RuntimeObject **, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___instance0, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Sirenix.Utilities.WeakValueGetter::BeginInvoke(System.Object&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WeakValueGetter_BeginInvoke_m8E8FF00E7AA4B955577C94F801ABFD424822C433 (WeakValueGetter_t828D3829FE3BCD84DB46D8B0BB3408AFC21B0D9E * __this, RuntimeObject ** ___instance0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = *___instance0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Object Sirenix.Utilities.WeakValueGetter::EndInvoke(System.Object&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * WeakValueGetter_EndInvoke_m795EF13D22A99323162F5B6DDB8E2932BEA998A2 (WeakValueGetter_t828D3829FE3BCD84DB46D8B0BB3408AFC21B0D9E * __this, RuntimeObject ** ___instance0, RuntimeObject* ___result1, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___instance0,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
	return (RuntimeObject *)__result;;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.Utilities.WeakValueSetter::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakValueSetter__ctor_mF31701BA1FAE619AE4E687E3A1CFF013AC89992F (WeakValueSetter_t1E87206CC24D3306743CFDDA24320FB2C6D9D299 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Sirenix.Utilities.WeakValueSetter::Invoke(System.Object&,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakValueSetter_Invoke_m77420C0497B83D89E6D42B7B9900C4C748F28903 (WeakValueSetter_t1E87206CC24D3306743CFDDA24320FB2C6D9D299 * __this, RuntimeObject ** ___instance0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject **, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___instance0, ___value1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject **, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___instance0, ___value1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< RuntimeObject **, RuntimeObject * >::Invoke(targetMethod, targetThis, ___instance0, ___value1);
					else
						GenericVirtActionInvoker2< RuntimeObject **, RuntimeObject * >::Invoke(targetMethod, targetThis, ___instance0, ___value1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject **, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___instance0, ___value1);
					else
						VirtActionInvoker2< RuntimeObject **, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___instance0, ___value1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject **, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___instance0, ___value1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject **, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___instance0, ___value1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Sirenix.Utilities.WeakValueSetter::BeginInvoke(System.Object&,System.Object,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WeakValueSetter_BeginInvoke_m69F34E9B67FB7ED1B345882BB9ACB01E2CBD543A (WeakValueSetter_t1E87206CC24D3306743CFDDA24320FB2C6D9D299 * __this, RuntimeObject ** ___instance0, RuntimeObject * ___value1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = *___instance0;
	__d_args[1] = ___value1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Sirenix.Utilities.WeakValueSetter::EndInvoke(System.Object&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakValueSetter_EndInvoke_mCD7D0E4B6ABE4EAE0A80236B7DEBD8D606C88641 (WeakValueSetter_t1E87206CC24D3306743CFDDA24320FB2C6D9D299 * __this, RuntimeObject ** ___instance0, RuntimeObject* ___result1, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___instance0,
	};
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
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
// System.Void Sirenix.Utilities.DeepReflection/<>c__DisplayClass21_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0__ctor_mC62634A77747EFD0634464609DCCA1D334506AA6 (U3CU3Ec__DisplayClass21_0_t5B1BBC194D7A6D14C701828D45682122B3AA3A59 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Sirenix.Utilities.DeepReflection/<>c__DisplayClass21_0::<CreateSlowDeepStaticValueGetterDelegate>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec__DisplayClass21_0_U3CCreateSlowDeepStaticValueGetterDelegateU3Eb__0_m4651EF48D5DD7FA1542530488BA92C9DE37BAF6E (U3CU3Ec__DisplayClass21_0_t5B1BBC194D7A6D14C701828D45682122B3AA3A59 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeepReflection_t50973B8BEB83B1402D2298C6E87748884046FCD2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m43F79DA64E0B750D0AF10F02F3BC0EA92F3E55B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m696E7898F085B752FECA712127AA61F0E1567445_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	int32_t V_1 = 0;
	{
		V_0 = NULL;
		V_1 = 0;
		goto IL_001d;
	}

IL_0006:
	{
		List_1_t1397A266905C615B22796E5B9A0C8991F37EA426 * L_0 = __this->get_memberPath_0();
		int32_t L_1 = V_1;
		NullCheck(L_0);
		PathStep_tCD606A6F71526B3263FBA4F878CD6AA82F48A95B  L_2;
		L_2 = List_1_get_Item_m696E7898F085B752FECA712127AA61F0E1567445_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_m696E7898F085B752FECA712127AA61F0E1567445_RuntimeMethod_var);
		RuntimeObject * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(DeepReflection_t50973B8BEB83B1402D2298C6E87748884046FCD2_il2cpp_TypeInfo_var);
		RuntimeObject * L_4;
		L_4 = DeepReflection_SlowGetMemberValue_m62D36CD648192B680BF5832EC62F9C90EE865BB8(L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_001d:
	{
		int32_t L_6 = V_1;
		List_1_t1397A266905C615B22796E5B9A0C8991F37EA426 * L_7 = __this->get_memberPath_0();
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_m43F79DA64E0B750D0AF10F02F3BC0EA92F3E55B7_inline(L_7, /*hidden argument*/List_1_get_Count_m43F79DA64E0B750D0AF10F02F3BC0EA92F3E55B7_RuntimeMethod_var);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_0006;
		}
	}
	{
		RuntimeObject * L_9 = V_0;
		return L_9;
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
// System.Void Sirenix.Utilities.DeepReflection/<>c__DisplayClass22_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0__ctor_mB642B9E705B73D7742BA6A2DBD385B3A097254C7 (U3CU3Ec__DisplayClass22_0_tBC2EEC202D7F688B5FB569D9DD144770CBE4F1F5 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Sirenix.Utilities.DeepReflection/<>c__DisplayClass22_0::<CreateSlowDeepInstanceValueGetterDelegate>b__0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec__DisplayClass22_0_U3CCreateSlowDeepInstanceValueGetterDelegateU3Eb__0_m268E852D48D49E78C81816B9A1AA48134CD2F575 (U3CU3Ec__DisplayClass22_0_tBC2EEC202D7F688B5FB569D9DD144770CBE4F1F5 * __this, RuntimeObject * ___instance0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeepReflection_t50973B8BEB83B1402D2298C6E87748884046FCD2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m43F79DA64E0B750D0AF10F02F3BC0EA92F3E55B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m696E7898F085B752FECA712127AA61F0E1567445_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeObject * L_0 = ___instance0;
		V_0 = L_0;
		V_1 = 0;
		goto IL_001d;
	}

IL_0006:
	{
		List_1_t1397A266905C615B22796E5B9A0C8991F37EA426 * L_1 = __this->get_memberPath_0();
		int32_t L_2 = V_1;
		NullCheck(L_1);
		PathStep_tCD606A6F71526B3263FBA4F878CD6AA82F48A95B  L_3;
		L_3 = List_1_get_Item_m696E7898F085B752FECA712127AA61F0E1567445_inline(L_1, L_2, /*hidden argument*/List_1_get_Item_m696E7898F085B752FECA712127AA61F0E1567445_RuntimeMethod_var);
		RuntimeObject * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(DeepReflection_t50973B8BEB83B1402D2298C6E87748884046FCD2_il2cpp_TypeInfo_var);
		RuntimeObject * L_5;
		L_5 = DeepReflection_SlowGetMemberValue_m62D36CD648192B680BF5832EC62F9C90EE865BB8(L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_001d:
	{
		int32_t L_7 = V_1;
		List_1_t1397A266905C615B22796E5B9A0C8991F37EA426 * L_8 = __this->get_memberPath_0();
		NullCheck(L_8);
		int32_t L_9;
		L_9 = List_1_get_Count_m43F79DA64E0B750D0AF10F02F3BC0EA92F3E55B7_inline(L_8, /*hidden argument*/List_1_get_Count_m43F79DA64E0B750D0AF10F02F3BC0EA92F3E55B7_RuntimeMethod_var);
		if ((((int32_t)L_7) < ((int32_t)L_9)))
		{
			goto IL_0006;
		}
	}
	{
		RuntimeObject * L_10 = V_0;
		return L_10;
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
// System.Void Sirenix.Utilities.DeepReflection/<>c__DisplayClass23_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass23_0__ctor_m6D84A3810FFF62F0C0BAE3BEB82D4BD86016D459 (U3CU3Ec__DisplayClass23_0_t7CE96C7EF0C1523627FA2D92ACC5094B6523C0EB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Sirenix.Utilities.DeepReflection/<>c__DisplayClass23_0::<CreateSlowDeepInstanceValueSetterDelegate>b__0(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass23_0_U3CCreateSlowDeepInstanceValueSetterDelegateU3Eb__0_mC2C4AD660414C0B6BEB3C9A218F8056148511F90 (U3CU3Ec__DisplayClass23_0_t7CE96C7EF0C1523627FA2D92ACC5094B6523C0EB * __this, RuntimeObject * ___instance0, RuntimeObject * ___arg1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeepReflection_t50973B8BEB83B1402D2298C6E87748884046FCD2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m43F79DA64E0B750D0AF10F02F3BC0EA92F3E55B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m696E7898F085B752FECA712127AA61F0E1567445_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		RuntimeObject * L_0 = ___instance0;
		V_0 = L_0;
		List_1_t1397A266905C615B22796E5B9A0C8991F37EA426 * L_1 = __this->get_memberPath_0();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m43F79DA64E0B750D0AF10F02F3BC0EA92F3E55B7_inline(L_1, /*hidden argument*/List_1_get_Count_m43F79DA64E0B750D0AF10F02F3BC0EA92F3E55B7_RuntimeMethod_var);
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1));
		V_2 = 0;
		goto IL_002b;
	}

IL_0014:
	{
		List_1_t1397A266905C615B22796E5B9A0C8991F37EA426 * L_3 = __this->get_memberPath_0();
		int32_t L_4 = V_2;
		NullCheck(L_3);
		PathStep_tCD606A6F71526B3263FBA4F878CD6AA82F48A95B  L_5;
		L_5 = List_1_get_Item_m696E7898F085B752FECA712127AA61F0E1567445_inline(L_3, L_4, /*hidden argument*/List_1_get_Item_m696E7898F085B752FECA712127AA61F0E1567445_RuntimeMethod_var);
		RuntimeObject * L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(DeepReflection_t50973B8BEB83B1402D2298C6E87748884046FCD2_il2cpp_TypeInfo_var);
		RuntimeObject * L_7;
		L_7 = DeepReflection_SlowGetMemberValue_m62D36CD648192B680BF5832EC62F9C90EE865BB8(L_5, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		int32_t L_8 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_002b:
	{
		int32_t L_9 = V_2;
		int32_t L_10 = V_1;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0014;
		}
	}
	{
		List_1_t1397A266905C615B22796E5B9A0C8991F37EA426 * L_11 = __this->get_memberPath_0();
		List_1_t1397A266905C615B22796E5B9A0C8991F37EA426 * L_12 = __this->get_memberPath_0();
		NullCheck(L_12);
		int32_t L_13;
		L_13 = List_1_get_Count_m43F79DA64E0B750D0AF10F02F3BC0EA92F3E55B7_inline(L_12, /*hidden argument*/List_1_get_Count_m43F79DA64E0B750D0AF10F02F3BC0EA92F3E55B7_RuntimeMethod_var);
		NullCheck(L_11);
		PathStep_tCD606A6F71526B3263FBA4F878CD6AA82F48A95B  L_14;
		L_14 = List_1_get_Item_m696E7898F085B752FECA712127AA61F0E1567445_inline(L_11, ((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)1)), /*hidden argument*/List_1_get_Item_m696E7898F085B752FECA712127AA61F0E1567445_RuntimeMethod_var);
		RuntimeObject * L_15 = V_0;
		RuntimeObject * L_16 = ___arg1;
		IL2CPP_RUNTIME_CLASS_INIT(DeepReflection_t50973B8BEB83B1402D2298C6E87748884046FCD2_il2cpp_TypeInfo_var);
		DeepReflection_SlowSetMemberValue_mDDDCB136A84D59B5D77CF0981B3D221AABD08797(L_14, L_15, L_16, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: Sirenix.Utilities.DeepReflection/PathStep
IL2CPP_EXTERN_C void PathStep_tCD606A6F71526B3263FBA4F878CD6AA82F48A95B_marshal_pinvoke(const PathStep_tCD606A6F71526B3263FBA4F878CD6AA82F48A95B& unmarshaled, PathStep_tCD606A6F71526B3263FBA4F878CD6AA82F48A95B_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Member_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Member' of type 'PathStep': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Member_1Exception, NULL);
}
IL2CPP_EXTERN_C void PathStep_tCD606A6F71526B3263FBA4F878CD6AA82F48A95B_marshal_pinvoke_back(const PathStep_tCD606A6F71526B3263FBA4F878CD6AA82F48A95B_marshaled_pinvoke& marshaled, PathStep_tCD606A6F71526B3263FBA4F878CD6AA82F48A95B& unmarshaled)
{
	Exception_t* ___Member_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Member' of type 'PathStep': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Member_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Sirenix.Utilities.DeepReflection/PathStep
IL2CPP_EXTERN_C void PathStep_tCD606A6F71526B3263FBA4F878CD6AA82F48A95B_marshal_pinvoke_cleanup(PathStep_tCD606A6F71526B3263FBA4F878CD6AA82F48A95B_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Sirenix.Utilities.DeepReflection/PathStep
IL2CPP_EXTERN_C void PathStep_tCD606A6F71526B3263FBA4F878CD6AA82F48A95B_marshal_com(const PathStep_tCD606A6F71526B3263FBA4F878CD6AA82F48A95B& unmarshaled, PathStep_tCD606A6F71526B3263FBA4F878CD6AA82F48A95B_marshaled_com& marshaled)
{
	Exception_t* ___Member_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Member' of type 'PathStep': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Member_1Exception, NULL);
}
IL2CPP_EXTERN_C void PathStep_tCD606A6F71526B3263FBA4F878CD6AA82F48A95B_marshal_com_back(const PathStep_tCD606A6F71526B3263FBA4F878CD6AA82F48A95B_marshaled_com& marshaled, PathStep_tCD606A6F71526B3263FBA4F878CD6AA82F48A95B& unmarshaled)
{
	Exception_t* ___Member_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Member' of type 'PathStep': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Member_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Sirenix.Utilities.DeepReflection/PathStep
IL2CPP_EXTERN_C void PathStep_tCD606A6F71526B3263FBA4F878CD6AA82F48A95B_marshal_com_cleanup(PathStep_tCD606A6F71526B3263FBA4F878CD6AA82F48A95B_marshaled_com& marshaled)
{
}
// System.Void Sirenix.Utilities.DeepReflection/PathStep::.ctor(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathStep__ctor_m92DF3C093472B68F4BD8A2BCFFCFAEE3956E251F (PathStep_tCD606A6F71526B3263FBA4F878CD6AA82F48A95B * __this, MemberInfo_t * ___member0, const RuntimeMethod* method)
{
	{
		__this->set_StepType_0(0);
		MemberInfo_t * L_0 = ___member0;
		__this->set_Member_1(L_0);
		__this->set_ElementIndex_2((-1));
		__this->set_ElementType_3((Type_t *)NULL);
		__this->set_StrongListGetItemMethod_4((MethodInfo_t *)NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void PathStep__ctor_m92DF3C093472B68F4BD8A2BCFFCFAEE3956E251F_AdjustorThunk (RuntimeObject * __this, MemberInfo_t * ___member0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PathStep_tCD606A6F71526B3263FBA4F878CD6AA82F48A95B * _thisAdjusted = reinterpret_cast<PathStep_tCD606A6F71526B3263FBA4F878CD6AA82F48A95B *>(__this + _offset);
	PathStep__ctor_m92DF3C093472B68F4BD8A2BCFFCFAEE3956E251F(_thisAdjusted, ___member0, method);
}
// System.Void Sirenix.Utilities.DeepReflection/PathStep::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathStep__ctor_m5486B14CE1D07661FDB4A226C974093AAD1B31AE (PathStep_tCD606A6F71526B3263FBA4F878CD6AA82F48A95B * __this, int32_t ___elementIndex0, const RuntimeMethod* method)
{
	{
		__this->set_StepType_0(1);
		__this->set_Member_1((MemberInfo_t *)NULL);
		int32_t L_0 = ___elementIndex0;
		__this->set_ElementIndex_2(L_0);
		__this->set_ElementType_3((Type_t *)NULL);
		__this->set_StrongListGetItemMethod_4((MethodInfo_t *)NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void PathStep__ctor_m5486B14CE1D07661FDB4A226C974093AAD1B31AE_AdjustorThunk (RuntimeObject * __this, int32_t ___elementIndex0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PathStep_tCD606A6F71526B3263FBA4F878CD6AA82F48A95B * _thisAdjusted = reinterpret_cast<PathStep_tCD606A6F71526B3263FBA4F878CD6AA82F48A95B *>(__this + _offset);
	PathStep__ctor_m5486B14CE1D07661FDB4A226C974093AAD1B31AE(_thisAdjusted, ___elementIndex0, method);
}
// System.Void Sirenix.Utilities.DeepReflection/PathStep::.ctor(System.Int32,System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathStep__ctor_m9CC89EC5A46E349387787F8DFB3FD5A1C6524B83 (PathStep_tCD606A6F71526B3263FBA4F878CD6AA82F48A95B * __this, int32_t ___elementIndex0, Type_t * ___strongListElementType1, bool ___isArray2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_tCFBEF0BE66D2411D5AEA86FDF1C1E71F013AA724_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral08908F0785BBC0CCD8F712A32DE01C9E45597F21);
		s_Il2CppMethodInitialized = true;
	}
	PathStep_tCD606A6F71526B3263FBA4F878CD6AA82F48A95B * G_B2_0 = NULL;
	PathStep_tCD606A6F71526B3263FBA4F878CD6AA82F48A95B * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	PathStep_tCD606A6F71526B3263FBA4F878CD6AA82F48A95B * G_B3_1 = NULL;
	{
		bool L_0 = ___isArray2;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 2;
		G_B3_1 = G_B1_0;
		goto IL_0008;
	}

IL_0007:
	{
		G_B3_0 = 3;
		G_B3_1 = G_B2_0;
	}

IL_0008:
	{
		G_B3_1->set_StepType_0(G_B3_0);
		__this->set_Member_1((MemberInfo_t *)NULL);
		int32_t L_1 = ___elementIndex0;
		__this->set_ElementIndex_2(L_1);
		Type_t * L_2 = ___strongListElementType1;
		__this->set_ElementType_3(L_2);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (IList_1_tCFBEF0BE66D2411D5AEA86FDF1C1E71F013AA724_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4;
		L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_3, /*hidden argument*/NULL);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_5 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)SZArrayNew(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_6 = L_5;
		Type_t * L_7 = ___strongListElementType1;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_7);
		NullCheck(L_4);
		Type_t * L_8;
		L_8 = VirtFuncInvoker1< Type_t *, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(101 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_4, L_6);
		NullCheck(L_8);
		MethodInfo_t * L_9;
		L_9 = Type_GetMethod_mDD47332AAF3036AAFC4C6626A999A452E7143DCF(L_8, _stringLiteral08908F0785BBC0CCD8F712A32DE01C9E45597F21, /*hidden argument*/NULL);
		__this->set_StrongListGetItemMethod_4(L_9);
		return;
	}
}
IL2CPP_EXTERN_C  void PathStep__ctor_m9CC89EC5A46E349387787F8DFB3FD5A1C6524B83_AdjustorThunk (RuntimeObject * __this, int32_t ___elementIndex0, Type_t * ___strongListElementType1, bool ___isArray2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PathStep_tCD606A6F71526B3263FBA4F878CD6AA82F48A95B * _thisAdjusted = reinterpret_cast<PathStep_tCD606A6F71526B3263FBA4F878CD6AA82F48A95B *>(__this + _offset);
	PathStep__ctor_m9CC89EC5A46E349387787F8DFB3FD5A1C6524B83(_thisAdjusted, ___elementIndex0, ___strongListElementType1, ___isArray2, method);
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
// System.Void Sirenix.Utilities.EmitUtilities/<>c__DisplayClass11_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0__ctor_m360DF35935C805D2145101EF34B13D4610B3DCA3 (U3CU3Ec__DisplayClass11_0_tFB125390FA0E0D088FB3103A49D94DFDAE981CCE * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Sirenix.Utilities.EmitUtilities/<>c__DisplayClass11_0::<CreateWeakInstanceFieldSetter>b__0(System.Object&,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0_U3CCreateWeakInstanceFieldSetterU3Eb__0_mAF0EA6AD0603B2988E7B444799282E2B84DEAC9E (U3CU3Ec__DisplayClass11_0_tFB125390FA0E0D088FB3103A49D94DFDAE981CCE * __this, RuntimeObject ** ___classInstance0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		FieldInfo_t * L_0 = __this->get_fieldInfo_0();
		RuntimeObject ** L_1 = ___classInstance0;
		RuntimeObject * L_2 = *((RuntimeObject **)L_1);
		RuntimeObject * L_3 = ___value1;
		NullCheck(L_0);
		FieldInfo_SetValue_mA1EFB5DA5E4B930A617744E29E909FE9DEAA663C(L_0, L_2, L_3, /*hidden argument*/NULL);
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
// System.Void Sirenix.Utilities.EmitUtilities/<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_mC4C37FB6A9F74DE44ECFEA54007E338F6336F5B8 (U3CU3Ec__DisplayClass12_0_tD25EA8A250F71D48585DC89F4F3F038262EC7B80 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Sirenix.Utilities.EmitUtilities/<>c__DisplayClass12_0::<CreateWeakInstancePropertyGetter>b__0(System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec__DisplayClass12_0_U3CCreateWeakInstancePropertyGetterU3Eb__0_m983EE97AAD6F0CA4F59ED3888CDD73638F4C0629 (U3CU3Ec__DisplayClass12_0_tD25EA8A250F71D48585DC89F4F3F038262EC7B80 * __this, RuntimeObject ** ___classInstance0, const RuntimeMethod* method)
{
	{
		PropertyInfo_t * L_0 = __this->get_propertyInfo_0();
		RuntimeObject ** L_1 = ___classInstance0;
		RuntimeObject * L_2 = *((RuntimeObject **)L_1);
		NullCheck(L_0);
		RuntimeObject * L_3;
		L_3 = VirtFuncInvoker2< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(26 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, L_0, L_2, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)NULL);
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
// System.Void Sirenix.Utilities.EmitUtilities/<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_mA98D77562E7183A9D4DB7F7814919A93C864985E (U3CU3Ec__DisplayClass13_0_t315EA5E49D4DF52CBB339CDD6BD7F96357E981D9 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Sirenix.Utilities.EmitUtilities/<>c__DisplayClass13_0::<CreateWeakInstancePropertySetter>b__0(System.Object&,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0_U3CCreateWeakInstancePropertySetterU3Eb__0_m085530408C637A7797AEA0ABEA0A39BF1B676511 (U3CU3Ec__DisplayClass13_0_t315EA5E49D4DF52CBB339CDD6BD7F96357E981D9 * __this, RuntimeObject ** ___classInstance0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		PropertyInfo_t * L_0 = __this->get_propertyInfo_0();
		RuntimeObject ** L_1 = ___classInstance0;
		RuntimeObject * L_2 = *((RuntimeObject **)L_1);
		RuntimeObject * L_3 = ___value1;
		NullCheck(L_0);
		VirtActionInvoker3< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(28 /* System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Object[]) */, L_0, L_2, L_3, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)NULL);
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
// System.Void Sirenix.Utilities.EmitUtilities/<>c__DisplayClass21_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0__ctor_mA7271A7AA2901C4EBB5238251AB150F5107339FF (U3CU3Ec__DisplayClass21_0_t859ABED2A0FC42FF5C6CFBC3B15EFD1AC4A0C81D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Sirenix.Utilities.EmitUtilities/<>c__DisplayClass21_0::<CreateWeakInstanceMethodCaller>b__0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0_U3CCreateWeakInstanceMethodCallerU3Eb__0_m9C0E6359E187EC016AA749A94A2EEBA34DFBC996 (U3CU3Ec__DisplayClass21_0_t859ABED2A0FC42FF5C6CFBC3B15EFD1AC4A0C81D * __this, RuntimeObject * ___classInstance0, const RuntimeMethod* method)
{
	{
		MethodInfo_t * L_0 = __this->get_methodInfo_0();
		RuntimeObject * L_1 = ___classInstance0;
		NullCheck(L_0);
		RuntimeObject * L_2;
		L_2 = MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3(L_0, L_1, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)NULL, /*hidden argument*/NULL);
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
// System.Void Sirenix.Utilities.EmitUtilities/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_mAFC420899CF86383EBB83B79857997CE77D3B91F (U3CU3Ec__DisplayClass3_0_t42491A938C6D3A33F5024EC431EF0FFC27825456 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Sirenix.Utilities.EmitUtilities/<>c__DisplayClass3_0::<CreateWeakStaticFieldGetter>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec__DisplayClass3_0_U3CCreateWeakStaticFieldGetterU3Eb__0_m335348EB75C862A836E7F0B6A2898B278D4F71B3 (U3CU3Ec__DisplayClass3_0_t42491A938C6D3A33F5024EC431EF0FFC27825456 * __this, const RuntimeMethod* method)
{
	{
		FieldInfo_t * L_0 = __this->get_fieldInfo_0();
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(19 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_0, NULL);
		return L_1;
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
// System.Void Sirenix.Utilities.EmitUtilities/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m57C9DDDCC40D11BE0FBD9AFEAA8E8FEEDC7FBC45 (U3CU3Ec__DisplayClass5_0_t155AE7438CF4898A93D476EE2882ABC149295DAF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Sirenix.Utilities.EmitUtilities/<>c__DisplayClass5_0::<CreateWeakStaticFieldSetter>b__0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0_U3CCreateWeakStaticFieldSetterU3Eb__0_m16CA7934B8D1E8BC1C12D512E2DAF8DFCD5C4546 (U3CU3Ec__DisplayClass5_0_t155AE7438CF4898A93D476EE2882ABC149295DAF * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		FieldInfo_t * L_0 = __this->get_fieldInfo_0();
		RuntimeObject * L_1 = ___value0;
		NullCheck(L_0);
		FieldInfo_SetValue_mA1EFB5DA5E4B930A617744E29E909FE9DEAA663C(L_0, NULL, L_1, /*hidden argument*/NULL);
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
// System.Void Sirenix.Utilities.EmitUtilities/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_mD8D6695B6B3B893734B3D7BAD6A6A980FA28E06D (U3CU3Ec__DisplayClass8_0_tB6489575E603650102DB67292784DAA3860D0366 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Sirenix.Utilities.EmitUtilities/<>c__DisplayClass8_0::<CreateWeakInstanceFieldGetter>b__0(System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec__DisplayClass8_0_U3CCreateWeakInstanceFieldGetterU3Eb__0_m4ED50536B3C45006002BA8DB9AD63FC8FCE94A7A (U3CU3Ec__DisplayClass8_0_tB6489575E603650102DB67292784DAA3860D0366 * __this, RuntimeObject ** ___classInstance0, const RuntimeMethod* method)
{
	{
		FieldInfo_t * L_0 = __this->get_fieldInfo_0();
		RuntimeObject ** L_1 = ___classInstance0;
		RuntimeObject * L_2 = *((RuntimeObject **)L_1);
		NullCheck(L_0);
		RuntimeObject * L_3;
		L_3 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(19 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_0, L_2);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.GUILayoutOption[] Sirenix.Utilities.GUILayoutOptions/GUILayoutOptionsInstance::GetCachedOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* GUILayoutOptionsInstance_GetCachedOptions_m8953E63619B13F9C883D8714BFC663C52FCC4A16 (GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mEC551CB83CE32E44EB680DACAFE76659ECEA6B0C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mE59D8221A61B1CEEBBF1F030D628DB2F2FFE9516_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutOptions_t87EB468F6835D8ED753C1D0A2A1BBA1633FBEA08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* V_0 = NULL;
	GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutOptions_t87EB468F6835D8ED753C1D0A2A1BBA1633FBEA08_il2cpp_TypeInfo_var);
		Dictionary_2_tEA9D585D97DD6BF149DE795DFC8D421DB6D18B3D * L_0 = ((GUILayoutOptions_t87EB468F6835D8ED753C1D0A2A1BBA1633FBEA08_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutOptions_t87EB468F6835D8ED753C1D0A2A1BBA1633FBEA08_il2cpp_TypeInfo_var))->get_GUILayoutOptionsCache_2();
		NullCheck(L_0);
		bool L_1;
		L_1 = Dictionary_2_TryGetValue_mEC551CB83CE32E44EB680DACAFE76659ECEA6B0C(L_0, __this, (GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B**)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_mEC551CB83CE32E44EB680DACAFE76659ECEA6B0C_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0029;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutOptions_t87EB468F6835D8ED753C1D0A2A1BBA1633FBEA08_il2cpp_TypeInfo_var);
		Dictionary_2_tEA9D585D97DD6BF149DE795DFC8D421DB6D18B3D * L_2 = ((GUILayoutOptions_t87EB468F6835D8ED753C1D0A2A1BBA1633FBEA08_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutOptions_t87EB468F6835D8ED753C1D0A2A1BBA1633FBEA08_il2cpp_TypeInfo_var))->get_GUILayoutOptionsCache_2();
		GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * L_3;
		L_3 = GUILayoutOptionsInstance_Clone_m0E873877AF4D95C74E8D42FE3B21FD22D3ABF3C1(__this, /*hidden argument*/NULL);
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_4;
		L_4 = GUILayoutOptionsInstance_CreateOptionsArary_mC57A38F7A06BF54B97FDE550771B6F12D371AC0B(__this, /*hidden argument*/NULL);
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_5 = L_4;
		V_1 = L_5;
		NullCheck(L_2);
		Dictionary_2_set_Item_mE59D8221A61B1CEEBBF1F030D628DB2F2FFE9516(L_2, L_3, L_5, /*hidden argument*/Dictionary_2_set_Item_mE59D8221A61B1CEEBBF1F030D628DB2F2FFE9516_RuntimeMethod_var);
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_6 = V_1;
		V_0 = L_6;
	}

IL_0029:
	{
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.GUILayoutOption[] Sirenix.Utilities.GUILayoutOptions/GUILayoutOptionsInstance::op_Implicit(Sirenix.Utilities.GUILayoutOptions/GUILayoutOptionsInstance)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* GUILayoutOptionsInstance_op_Implicit_m2770EC41EB71A853A266FFB4624E3F2F6E668455 (GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * ___options0, const RuntimeMethod* method)
{
	{
		GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * L_0 = ___options0;
		NullCheck(L_0);
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_1;
		L_1 = GUILayoutOptionsInstance_GetCachedOptions_m8953E63619B13F9C883D8714BFC663C52FCC4A16(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.GUILayoutOption[] Sirenix.Utilities.GUILayoutOptions/GUILayoutOptionsInstance::CreateOptionsArary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* GUILayoutOptionsInstance_CreateOptionsArary_mC57A38F7A06BF54B97FDE550771B6F12D371AC0B (GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43E5ABF5F6F629B93B05F2C19AEFAE84A17B0B2B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mF4F7ADB12FE44C8EA71EA7C72E843E26EF02B5E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD1A13F1C8FD04395BB5BAF5E2FFFDF400AD4910C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t65DB33C8EF5F2F667E78D747FBA152BF5C1C506B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t65DB33C8EF5F2F667E78D747FBA152BF5C1C506B * V_0 = NULL;
	GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * V_1 = NULL;
	int32_t V_2 = 0;
	{
		List_1_t65DB33C8EF5F2F667E78D747FBA152BF5C1C506B * L_0 = (List_1_t65DB33C8EF5F2F667E78D747FBA152BF5C1C506B *)il2cpp_codegen_object_new(List_1_t65DB33C8EF5F2F667E78D747FBA152BF5C1C506B_il2cpp_TypeInfo_var);
		List_1__ctor_mD1A13F1C8FD04395BB5BAF5E2FFFDF400AD4910C(L_0, /*hidden argument*/List_1__ctor_mD1A13F1C8FD04395BB5BAF5E2FFFDF400AD4910C_RuntimeMethod_var);
		V_0 = L_0;
		V_1 = __this;
		goto IL_00ed;
	}

IL_000d:
	{
		GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * L_1 = V_1;
		NullCheck(L_1);
		int32_t L_2 = L_1->get_GUILayoutOptionType_2();
		V_2 = L_2;
		int32_t L_3 = V_2;
		switch (L_3)
		{
			case 0:
			{
				goto IL_003f;
			}
			case 1:
			{
				goto IL_0055;
			}
			case 2:
			{
				goto IL_00a1;
			}
			case 3:
			{
				goto IL_0068;
			}
			case 4:
			{
				goto IL_007b;
			}
			case 5:
			{
				goto IL_008e;
			}
			case 6:
			{
				goto IL_00b4;
			}
			case 7:
			{
				goto IL_00ce;
			}
		}
	}
	{
		goto IL_00e6;
	}

IL_003f:
	{
		List_1_t65DB33C8EF5F2F667E78D747FBA152BF5C1C506B * L_4 = V_0;
		GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * L_5 = V_1;
		NullCheck(L_5);
		float L_6 = L_5->get_value_0();
		GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * L_7;
		L_7 = GUILayout_Width_m2529B16156A3E8109EA75B8D67C723B1B8E24C53(L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		List_1_Add_m43E5ABF5F6F629B93B05F2C19AEFAE84A17B0B2B(L_4, L_7, /*hidden argument*/List_1_Add_m43E5ABF5F6F629B93B05F2C19AEFAE84A17B0B2B_RuntimeMethod_var);
		goto IL_00e6;
	}

IL_0055:
	{
		List_1_t65DB33C8EF5F2F667E78D747FBA152BF5C1C506B * L_8 = V_0;
		GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * L_9 = V_1;
		NullCheck(L_9);
		float L_10 = L_9->get_value_0();
		GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * L_11;
		L_11 = GUILayout_Height_m6705C2917595CCEA6D934DBB5DD8399DF6F5E464(L_10, /*hidden argument*/NULL);
		NullCheck(L_8);
		List_1_Add_m43E5ABF5F6F629B93B05F2C19AEFAE84A17B0B2B(L_8, L_11, /*hidden argument*/List_1_Add_m43E5ABF5F6F629B93B05F2C19AEFAE84A17B0B2B_RuntimeMethod_var);
		goto IL_00e6;
	}

IL_0068:
	{
		List_1_t65DB33C8EF5F2F667E78D747FBA152BF5C1C506B * L_12 = V_0;
		GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * L_13 = V_1;
		NullCheck(L_13);
		float L_14 = L_13->get_value_0();
		GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * L_15;
		L_15 = GUILayout_MaxHeight_mE44EA4CF7719A4F64A20AF4462250BD0B5746AC0(L_14, /*hidden argument*/NULL);
		NullCheck(L_12);
		List_1_Add_m43E5ABF5F6F629B93B05F2C19AEFAE84A17B0B2B(L_12, L_15, /*hidden argument*/List_1_Add_m43E5ABF5F6F629B93B05F2C19AEFAE84A17B0B2B_RuntimeMethod_var);
		goto IL_00e6;
	}

IL_007b:
	{
		List_1_t65DB33C8EF5F2F667E78D747FBA152BF5C1C506B * L_16 = V_0;
		GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * L_17 = V_1;
		NullCheck(L_17);
		float L_18 = L_17->get_value_0();
		GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * L_19;
		L_19 = GUILayout_MaxWidth_mE6C754AB0A4366AB7E0BECE6D85A254CA7E553FB(L_18, /*hidden argument*/NULL);
		NullCheck(L_16);
		List_1_Add_m43E5ABF5F6F629B93B05F2C19AEFAE84A17B0B2B(L_16, L_19, /*hidden argument*/List_1_Add_m43E5ABF5F6F629B93B05F2C19AEFAE84A17B0B2B_RuntimeMethod_var);
		goto IL_00e6;
	}

IL_008e:
	{
		List_1_t65DB33C8EF5F2F667E78D747FBA152BF5C1C506B * L_20 = V_0;
		GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * L_21 = V_1;
		NullCheck(L_21);
		float L_22 = L_21->get_value_0();
		GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * L_23;
		L_23 = GUILayout_MinHeight_mABC1A656072088E6E502AA09E8D4A7D9A6D29B20(L_22, /*hidden argument*/NULL);
		NullCheck(L_20);
		List_1_Add_m43E5ABF5F6F629B93B05F2C19AEFAE84A17B0B2B(L_20, L_23, /*hidden argument*/List_1_Add_m43E5ABF5F6F629B93B05F2C19AEFAE84A17B0B2B_RuntimeMethod_var);
		goto IL_00e6;
	}

IL_00a1:
	{
		List_1_t65DB33C8EF5F2F667E78D747FBA152BF5C1C506B * L_24 = V_0;
		GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * L_25 = V_1;
		NullCheck(L_25);
		float L_26 = L_25->get_value_0();
		GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * L_27;
		L_27 = GUILayout_MinWidth_m1D097025BC9C8B286936EF0AC507559F1CE01434(L_26, /*hidden argument*/NULL);
		NullCheck(L_24);
		List_1_Add_m43E5ABF5F6F629B93B05F2C19AEFAE84A17B0B2B(L_24, L_27, /*hidden argument*/List_1_Add_m43E5ABF5F6F629B93B05F2C19AEFAE84A17B0B2B_RuntimeMethod_var);
		goto IL_00e6;
	}

IL_00b4:
	{
		List_1_t65DB33C8EF5F2F667E78D747FBA152BF5C1C506B * L_28 = V_0;
		GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * L_29 = V_1;
		NullCheck(L_29);
		float L_30 = L_29->get_value_0();
		GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * L_31;
		L_31 = GUILayout_ExpandHeight_m737A907C656C80DC5F5BC910B6E8452C43C5F094((bool)((((float)L_30) > ((float)(0.200000003f)))? 1 : 0), /*hidden argument*/NULL);
		NullCheck(L_28);
		List_1_Add_m43E5ABF5F6F629B93B05F2C19AEFAE84A17B0B2B(L_28, L_31, /*hidden argument*/List_1_Add_m43E5ABF5F6F629B93B05F2C19AEFAE84A17B0B2B_RuntimeMethod_var);
		goto IL_00e6;
	}

IL_00ce:
	{
		List_1_t65DB33C8EF5F2F667E78D747FBA152BF5C1C506B * L_32 = V_0;
		GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * L_33 = V_1;
		NullCheck(L_33);
		float L_34 = L_33->get_value_0();
		GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * L_35;
		L_35 = GUILayout_ExpandWidth_m6A1F7C7E400309F44A3D1AF91CC31FB6D49857D6((bool)((((float)L_34) > ((float)(0.200000003f)))? 1 : 0), /*hidden argument*/NULL);
		NullCheck(L_32);
		List_1_Add_m43E5ABF5F6F629B93B05F2C19AEFAE84A17B0B2B(L_32, L_35, /*hidden argument*/List_1_Add_m43E5ABF5F6F629B93B05F2C19AEFAE84A17B0B2B_RuntimeMethod_var);
	}

IL_00e6:
	{
		GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * L_36 = V_1;
		NullCheck(L_36);
		GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * L_37 = L_36->get_Parent_1();
		V_1 = L_37;
	}

IL_00ed:
	{
		GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * L_38 = V_1;
		if (L_38)
		{
			goto IL_000d;
		}
	}
	{
		List_1_t65DB33C8EF5F2F667E78D747FBA152BF5C1C506B * L_39 = V_0;
		NullCheck(L_39);
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_40;
		L_40 = List_1_ToArray_mF4F7ADB12FE44C8EA71EA7C72E843E26EF02B5E9(L_39, /*hidden argument*/List_1_ToArray_mF4F7ADB12FE44C8EA71EA7C72E843E26EF02B5E9_RuntimeMethod_var);
		return L_40;
	}
}
// Sirenix.Utilities.GUILayoutOptions/GUILayoutOptionsInstance Sirenix.Utilities.GUILayoutOptions/GUILayoutOptionsInstance::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * GUILayoutOptionsInstance_Clone_m0E873877AF4D95C74E8D42FE3B21FD22D3ABF3C1 (GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * V_0 = NULL;
	GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * V_1 = NULL;
	GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * V_2 = NULL;
	{
		V_0 = (GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C *)NULL;
		GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * L_0 = (GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C *)il2cpp_codegen_object_new(GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C_il2cpp_TypeInfo_var);
		GUILayoutOptionsInstance__ctor_mE05DC5E53C4E7E18759835E2DFB1E111F0D1C73A(L_0, /*hidden argument*/NULL);
		GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * L_1 = L_0;
		float L_2 = __this->get_value_0();
		NullCheck(L_1);
		L_1->set_value_0(L_2);
		GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * L_3 = L_1;
		int32_t L_4 = __this->get_GUILayoutOptionType_2();
		NullCheck(L_3);
		L_3->set_GUILayoutOptionType_2(L_4);
		V_0 = L_3;
		GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * L_5 = V_0;
		V_1 = L_5;
		GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * L_6 = __this->get_Parent_1();
		V_2 = L_6;
		goto IL_005c;
	}

IL_002b:
	{
		GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * L_7 = V_1;
		GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * L_8 = (GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C *)il2cpp_codegen_object_new(GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C_il2cpp_TypeInfo_var);
		GUILayoutOptionsInstance__ctor_mE05DC5E53C4E7E18759835E2DFB1E111F0D1C73A(L_8, /*hidden argument*/NULL);
		GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * L_9 = L_8;
		GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * L_10 = V_2;
		NullCheck(L_10);
		float L_11 = L_10->get_value_0();
		NullCheck(L_9);
		L_9->set_value_0(L_11);
		GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * L_12 = L_9;
		GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * L_13 = V_2;
		NullCheck(L_13);
		int32_t L_14 = L_13->get_GUILayoutOptionType_2();
		NullCheck(L_12);
		L_12->set_GUILayoutOptionType_2(L_14);
		NullCheck(L_7);
		L_7->set_Parent_1(L_12);
		GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * L_15 = V_2;
		NullCheck(L_15);
		GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * L_16 = L_15->get_Parent_1();
		V_2 = L_16;
		GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * L_17 = V_1;
		NullCheck(L_17);
		GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * L_18 = L_17->get_Parent_1();
		V_1 = L_18;
	}

IL_005c:
	{
		GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * L_19 = V_2;
		if (L_19)
		{
			goto IL_002b;
		}
	}
	{
		GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * L_20 = V_0;
		return L_20;
	}
}
// System.Void Sirenix.Utilities.GUILayoutOptions/GUILayoutOptionsInstance::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutOptionsInstance__ctor_mE05DC5E53C4E7E18759835E2DFB1E111F0D1C73A (GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// Sirenix.Utilities.GUILayoutOptions/GUILayoutOptionsInstance Sirenix.Utilities.GUILayoutOptions/GUILayoutOptionsInstance::Width(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * GUILayoutOptionsInstance_Width_m20ACB534292F44C664D515DC621E534C8F090EE5 (GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * __this, float ___width0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutOptions_t87EB468F6835D8ED753C1D0A2A1BBA1633FBEA08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutOptions_t87EB468F6835D8ED753C1D0A2A1BBA1633FBEA08_il2cpp_TypeInfo_var);
		GUILayoutOptionsInstanceU5BU5D_t803E1B7D2362A526B22D937C6D812BF819F309C5* L_0 = ((GUILayoutOptions_t87EB468F6835D8ED753C1D0A2A1BBA1633FBEA08_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutOptions_t87EB468F6835D8ED753C1D0A2A1BBA1633FBEA08_il2cpp_TypeInfo_var))->get_GUILayoutOptionsInstanceCache_1();
		int32_t L_1 = ((GUILayoutOptions_t87EB468F6835D8ED753C1D0A2A1BBA1633FBEA08_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutOptions_t87EB468F6835D8ED753C1D0A2A1BBA1633FBEA08_il2cpp_TypeInfo_var))->get_CurrentCacheIndex_0();
		int32_t L_2 = L_1;
		((GUILayoutOptions_t87EB468F6835D8ED753C1D0A2A1BBA1633FBEA08_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutOptions_t87EB468F6835D8ED753C1D0A2A1BBA1633FBEA08_il2cpp_TypeInfo_var))->set_CurrentCacheIndex_0(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)));
		NullCheck(L_0);
		int32_t L_3 = L_2;
		GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * L_5 = V_0;
		float L_6 = ___width0;
		NullCheck(L_5);
		GUILayoutOptionsInstance_SetValue_m6CDFACDD857548B0C7ACC00F81AD592D131A2834(L_5, 0, L_6, /*hidden argument*/NULL);
		GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * L_7 = V_0;
		return L_7;
	}
}
// Sirenix.Utilities.GUILayoutOptions/GUILayoutOptionsInstance Sirenix.Utilities.GUILayoutOptions/GUILayoutOptionsInstance::Height(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * GUILayoutOptionsInstance_Height_mAA0264C900C826CA7AA8917D59A745190E48537C (GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * __this, float ___height0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutOptions_t87EB468F6835D8ED753C1D0A2A1BBA1633FBEA08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutOptions_t87EB468F6835D8ED753C1D0A2A1BBA1633FBEA08_il2cpp_TypeInfo_var);
		GUILayoutOptionsInstanceU5BU5D_t803E1B7D2362A526B22D937C6D812BF819F309C5* L_0 = ((GUILayoutOptions_t87EB468F6835D8ED753C1D0A2A1BBA1633FBEA08_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutOptions_t87EB468F6835D8ED753C1D0A2A1BBA1633FBEA08_il2cpp_TypeInfo_var))->get_GUILayoutOptionsInstanceCache_1();
		int32_t L_1 = ((GUILayoutOptions_t87EB468F6835D8ED753C1D0A2A1BBA1633FBEA08_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutOptions_t87EB468F6835D8ED753C1D0A2A1BBA1633FBEA08_il2cpp_TypeInfo_var))->get_CurrentCacheIndex_0();
		int32_t L_2 = L_1;
		((GUILayoutOptions_t87EB468F6835D8ED753C1D0A2A1BBA1633FBEA08_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutOptions_t87EB468F6835D8ED753C1D0A2A1BBA1633FBEA08_il2cpp_TypeInfo_var))->set_CurrentCacheIndex_0(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)));
		NullCheck(L_0);
		int32_t L_3 = L_2;
		GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * L_5 = V_0;
		float L_6 = ___height0;
		NullCheck(L_5);
		GUILayoutOptionsInstance_SetValue_m6CDFACDD857548B0C7ACC00F81AD592D131A2834(L_5, 1, L_6, /*hidden argument*/NULL);
		GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * L_7 = V_0;
		return L_7;
	}
}
// Sirenix.Utilities.GUILayoutOptions/GUILayoutOptionsInstance Sirenix.Utilities.GUILayoutOptions/GUILayoutOptionsInstance::MaxHeight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * GUILayoutOptionsInstance_MaxHeight_mF5BA935D0FACC7EDBEEF25EBA8FFAE6F5932FACD (GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * __this, float ___height0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutOptions_t87EB468F6835D8ED753C1D0A2A1BBA1633FBEA08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutOptions_t87EB468F6835D8ED753C1D0A2A1BBA1633FBEA08_il2cpp_TypeInfo_var);
		GUILayoutOptionsInstanceU5BU5D_t803E1B7D2362A526B22D937C6D812BF819F309C5* L_0 = ((GUILayoutOptions_t87EB468F6835D8ED753C1D0A2A1BBA1633FBEA08_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutOptions_t87EB468F6835D8ED753C1D0A2A1BBA1633FBEA08_il2cpp_TypeInfo_var))->get_GUILayoutOptionsInstanceCache_1();
		int32_t L_1 = ((GUILayoutOptions_t87EB468F6835D8ED753C1D0A2A1BBA1633FBEA08_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutOptions_t87EB468F6835D8ED753C1D0A2A1BBA1633FBEA08_il2cpp_TypeInfo_var))->get_CurrentCacheIndex_0();
		int32_t L_2 = L_1;
		((GUILayoutOptions_t87EB468F6835D8ED753C1D0A2A1BBA1633FBEA08_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutOptions_t87EB468F6835D8ED753C1D0A2A1BBA1633FBEA08_il2cpp_TypeInfo_var))->set_CurrentCacheIndex_0(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)));
		NullCheck(L_0);
		int32_t L_3 = L_2;
		GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * L_5 = V_0;
		float L_6 = ___height0;
		NullCheck(L_5);
		GUILayoutOptionsInstance_SetValue_m6CDFACDD857548B0C7ACC00F81AD592D131A2834(L_5, 3, L_6, /*hidden argument*/NULL);
		GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * L_7 = V_0;
		return L_7;
	}
}
// Sirenix.Utilities.GUILayoutOptions/GUILayoutOptionsInstance Sirenix.Utilities.GUILayoutOptions/GUILayoutOptionsInstance::MaxWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * GUILayoutOptionsInstance_MaxWidth_m30853680E1174A27DFB858C1B85227C56876A176 (GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * __this, float ___width0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutOptions_t87EB468F6835D8ED753C1D0A2A1BBA1633FBEA08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutOptions_t87EB468F6835D8ED753C1D0A2A1BBA1633FBEA08_il2cpp_TypeInfo_var);
		GUILayoutOptionsInstanceU5BU5D_t803E1B7D2362A526B22D937C6D812BF819F309C5* L_0 = ((GUILayoutOptions_t87EB468F6835D8ED753C1D0A2A1BBA1633FBEA08_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutOptions_t87EB468F6835D8ED753C1D0A2A1BBA1633FBEA08_il2cpp_TypeInfo_var))->get_GUILayoutOptionsInstanceCache_1();
		int32_t L_1 = ((GUILayoutOptions_t87EB468F6835D8ED753C1D0A2A1BBA1633FBEA08_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutOptions_t87EB468F6835D8ED753C1D0A2A1BBA1633FBEA08_il2cpp_TypeInfo_var))->get_CurrentCacheIndex_0();
		int32_t L_2 = L_1;
		((GUILayoutOptions_t87EB468F6835D8ED753C1D0A2A1BBA1633FBEA08_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutOptions_t87EB468F6835D8ED753C1D0A2A1BBA1633FBEA08_il2cpp_TypeInfo_var))->set_CurrentCacheIndex_0(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)));
		NullCheck(L_0);
		int32_t L_3 = L_2;
		GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * L_5 = V_0;
		float L_6 = ___width0;
		NullCheck(L_5);
		GUILayoutOptionsInstance_SetValue_m6CDFACDD857548B0C7ACC00F81AD592D131A2834(L_5, 4, L_6, /*hidden argument*/NULL);
		GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * L_7 = V_0;
		return L_7;
	}
}
// Sirenix.Utilities.GUILayoutOptions/GUILayoutOptionsInstance Sirenix.Utilities.GUILayoutOptions/GUILayoutOptionsInstance::MinHeight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * GUILayoutOptionsInstance_MinHeight_m101444FC394818B57C2BBCE249912D57FFC7451E (GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * __this, float ___height0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutOptions_t87EB468F6835D8ED753C1D0A2A1BBA1633FBEA08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutOptions_t87EB468F6835D8ED753C1D0A2A1BBA1633FBEA08_il2cpp_TypeInfo_var);
		GUILayoutOptionsInstanceU5BU5D_t803E1B7D2362A526B22D937C6D812BF819F309C5* L_0 = ((GUILayoutOptions_t87EB468F6835D8ED753C1D0A2A1BBA1633FBEA08_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutOptions_t87EB468F6835D8ED753C1D0A2A1BBA1633FBEA08_il2cpp_TypeInfo_var))->get_GUILayoutOptionsInstanceCache_1();
		int32_t L_1 = ((GUILayoutOptions_t87EB468F6835D8ED753C1D0A2A1BBA1633FBEA08_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutOptions_t87EB468F6835D8ED753C1D0A2A1BBA1633FBEA08_il2cpp_TypeInfo_var))->get_CurrentCacheIndex_0();
		int32_t L_2 = L_1;
		((GUILayoutOptions_t87EB468F6835D8ED753C1D0A2A1BBA1633FBEA08_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutOptions_t87EB468F6835D8ED753C1D0A2A1BBA1633FBEA08_il2cpp_TypeInfo_var))->set_CurrentCacheIndex_0(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)));
		NullCheck(L_0);
		int32_t L_3 = L_2;
		GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * L_5 = V_0;
		float L_6 = ___height0;
		NullCheck(L_5);
		GUILayoutOptionsInstance_SetValue_m6CDFACDD857548B0C7ACC00F81AD592D131A2834(L_5, 5, L_6, /*hidden argument*/NULL);
		GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * L_7 = V_0;
		return L_7;
	}
}
// Sirenix.Utilities.GUILayoutOptions/GUILayoutOptionsInstance Sirenix.Utilities.GUILayoutOptions/GUILayoutOptionsInstance::MinWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * GUILayoutOptionsInstance_MinWidth_m844C1EA2017D62235E821DB02C304A5581D24127 (GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * __this, float ___width0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutOptions_t87EB468F6835D8ED753C1D0A2A1BBA1633FBEA08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutOptions_t87EB468F6835D8ED753C1D0A2A1BBA1633FBEA08_il2cpp_TypeInfo_var);
		GUILayoutOptionsInstanceU5BU5D_t803E1B7D2362A526B22D937C6D812BF819F309C5* L_0 = ((GUILayoutOptions_t87EB468F6835D8ED753C1D0A2A1BBA1633FBEA08_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutOptions_t87EB468F6835D8ED753C1D0A2A1BBA1633FBEA08_il2cpp_TypeInfo_var))->get_GUILayoutOptionsInstanceCache_1();
		int32_t L_1 = ((GUILayoutOptions_t87EB468F6835D8ED753C1D0A2A1BBA1633FBEA08_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutOptions_t87EB468F6835D8ED753C1D0A2A1BBA1633FBEA08_il2cpp_TypeInfo_var))->get_CurrentCacheIndex_0();
		int32_t L_2 = L_1;
		((GUILayoutOptions_t87EB468F6835D8ED753C1D0A2A1BBA1633FBEA08_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutOptions_t87EB468F6835D8ED753C1D0A2A1BBA1633FBEA08_il2cpp_TypeInfo_var))->set_CurrentCacheIndex_0(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)));
		NullCheck(L_0);
		int32_t L_3 = L_2;
		GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * L_5 = V_0;
		float L_6 = ___width0;
		NullCheck(L_5);
		GUILayoutOptionsInstance_SetValue_m6CDFACDD857548B0C7ACC00F81AD592D131A2834(L_5, 2, L_6, /*hidden argument*/NULL);
		GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * L_7 = V_0;
		return L_7;
	}
}
// Sirenix.Utilities.GUILayoutOptions/GUILayoutOptionsInstance Sirenix.Utilities.GUILayoutOptions/GUILayoutOptionsInstance::ExpandHeight(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * GUILayoutOptionsInstance_ExpandHeight_m529B44267299F4A7BA07389A29D35BA42D48CF8C (GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * __this, bool ___expand0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutOptions_t87EB468F6835D8ED753C1D0A2A1BBA1633FBEA08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutOptions_t87EB468F6835D8ED753C1D0A2A1BBA1633FBEA08_il2cpp_TypeInfo_var);
		GUILayoutOptionsInstanceU5BU5D_t803E1B7D2362A526B22D937C6D812BF819F309C5* L_0 = ((GUILayoutOptions_t87EB468F6835D8ED753C1D0A2A1BBA1633FBEA08_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutOptions_t87EB468F6835D8ED753C1D0A2A1BBA1633FBEA08_il2cpp_TypeInfo_var))->get_GUILayoutOptionsInstanceCache_1();
		int32_t L_1 = ((GUILayoutOptions_t87EB468F6835D8ED753C1D0A2A1BBA1633FBEA08_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutOptions_t87EB468F6835D8ED753C1D0A2A1BBA1633FBEA08_il2cpp_TypeInfo_var))->get_CurrentCacheIndex_0();
		int32_t L_2 = L_1;
		((GUILayoutOptions_t87EB468F6835D8ED753C1D0A2A1BBA1633FBEA08_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutOptions_t87EB468F6835D8ED753C1D0A2A1BBA1633FBEA08_il2cpp_TypeInfo_var))->set_CurrentCacheIndex_0(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)));
		NullCheck(L_0);
		int32_t L_3 = L_2;
		GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * L_5 = V_0;
		bool L_6 = ___expand0;
		NullCheck(L_5);
		GUILayoutOptionsInstance_SetValue_m6597E241961F01BCACCBA8085FEED22E19DFC354(L_5, 6, L_6, /*hidden argument*/NULL);
		GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * L_7 = V_0;
		return L_7;
	}
}
// Sirenix.Utilities.GUILayoutOptions/GUILayoutOptionsInstance Sirenix.Utilities.GUILayoutOptions/GUILayoutOptionsInstance::ExpandWidth(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * GUILayoutOptionsInstance_ExpandWidth_mC5F215F273F04E89EA3298F56B5653C15054A1DC (GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * __this, bool ___expand0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutOptions_t87EB468F6835D8ED753C1D0A2A1BBA1633FBEA08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutOptions_t87EB468F6835D8ED753C1D0A2A1BBA1633FBEA08_il2cpp_TypeInfo_var);
		GUILayoutOptionsInstanceU5BU5D_t803E1B7D2362A526B22D937C6D812BF819F309C5* L_0 = ((GUILayoutOptions_t87EB468F6835D8ED753C1D0A2A1BBA1633FBEA08_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutOptions_t87EB468F6835D8ED753C1D0A2A1BBA1633FBEA08_il2cpp_TypeInfo_var))->get_GUILayoutOptionsInstanceCache_1();
		int32_t L_1 = ((GUILayoutOptions_t87EB468F6835D8ED753C1D0A2A1BBA1633FBEA08_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutOptions_t87EB468F6835D8ED753C1D0A2A1BBA1633FBEA08_il2cpp_TypeInfo_var))->get_CurrentCacheIndex_0();
		int32_t L_2 = L_1;
		((GUILayoutOptions_t87EB468F6835D8ED753C1D0A2A1BBA1633FBEA08_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutOptions_t87EB468F6835D8ED753C1D0A2A1BBA1633FBEA08_il2cpp_TypeInfo_var))->set_CurrentCacheIndex_0(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)));
		NullCheck(L_0);
		int32_t L_3 = L_2;
		GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * L_5 = V_0;
		bool L_6 = ___expand0;
		NullCheck(L_5);
		GUILayoutOptionsInstance_SetValue_m6597E241961F01BCACCBA8085FEED22E19DFC354(L_5, 7, L_6, /*hidden argument*/NULL);
		GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * L_7 = V_0;
		return L_7;
	}
}
// System.Void Sirenix.Utilities.GUILayoutOptions/GUILayoutOptionsInstance::SetValue(Sirenix.Utilities.GUILayoutOptions/GUILayoutOptionType,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutOptionsInstance_SetValue_m6CDFACDD857548B0C7ACC00F81AD592D131A2834 (GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * __this, int32_t ___type0, float ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___type0;
		__this->set_GUILayoutOptionType_2(L_0);
		float L_1 = ___value1;
		__this->set_value_0(L_1);
		return;
	}
}
// System.Void Sirenix.Utilities.GUILayoutOptions/GUILayoutOptionsInstance::SetValue(Sirenix.Utilities.GUILayoutOptions/GUILayoutOptionType,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutOptionsInstance_SetValue_m6597E241961F01BCACCBA8085FEED22E19DFC354 (GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * __this, int32_t ___type0, bool ___value1, const RuntimeMethod* method)
{
	GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * G_B2_0 = NULL;
	GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * G_B3_1 = NULL;
	{
		int32_t L_0 = ___type0;
		__this->set_GUILayoutOptionType_2(L_0);
		bool L_1 = ___value1;
		G_B1_0 = __this;
		if (L_1)
		{
			G_B2_0 = __this;
			goto IL_000e;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000f;
	}

IL_000e:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_000f:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_value_0(((float)((float)G_B3_0)));
		return;
	}
}
// System.Boolean Sirenix.Utilities.GUILayoutOptions/GUILayoutOptionsInstance::Equals(Sirenix.Utilities.GUILayoutOptions/GUILayoutOptionsInstance)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUILayoutOptionsInstance_Equals_mEB7C7AEC49840A2B3449315B67C9DC036309C154 (GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * __this, GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * ___other0, const RuntimeMethod* method)
{
	GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * V_0 = NULL;
	GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * V_1 = NULL;
	{
		V_0 = __this;
		GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * L_0 = ___other0;
		V_1 = L_0;
		goto IL_0032;
	}

IL_0006:
	{
		GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * L_1 = V_0;
		NullCheck(L_1);
		int32_t L_2 = L_1->get_GUILayoutOptionType_2();
		GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * L_3 = V_1;
		NullCheck(L_3);
		int32_t L_4 = L_3->get_GUILayoutOptionType_2();
		if ((!(((uint32_t)L_2) == ((uint32_t)L_4))))
		{
			goto IL_0022;
		}
	}
	{
		GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * L_5 = V_0;
		NullCheck(L_5);
		float L_6 = L_5->get_value_0();
		GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * L_7 = V_1;
		NullCheck(L_7);
		float L_8 = L_7->get_value_0();
		if ((((float)L_6) == ((float)L_8)))
		{
			goto IL_0024;
		}
	}

IL_0022:
	{
		return (bool)0;
	}

IL_0024:
	{
		GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * L_9 = V_0;
		NullCheck(L_9);
		GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * L_10 = L_9->get_Parent_1();
		V_0 = L_10;
		GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * L_11 = V_1;
		NullCheck(L_11);
		GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * L_12 = L_11->get_Parent_1();
		V_1 = L_12;
	}

IL_0032:
	{
		GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * L_13 = V_0;
		if (!L_13)
		{
			goto IL_0038;
		}
	}
	{
		GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * L_14 = V_1;
		if (L_14)
		{
			goto IL_0006;
		}
	}

IL_0038:
	{
		GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * L_15 = V_1;
		if (L_15)
		{
			goto IL_003e;
		}
	}
	{
		GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * L_16 = V_0;
		if (!L_16)
		{
			goto IL_0040;
		}
	}

IL_003e:
	{
		return (bool)0;
	}

IL_0040:
	{
		return (bool)1;
	}
}
// System.Int32 Sirenix.Utilities.GUILayoutOptions/GUILayoutOptionsInstance::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUILayoutOptionsInstance_GetHashCode_m90ACC1CA9673839C6E6E1C9CB17FAFE81B7AF30F (GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * V_2 = NULL;
	{
		V_0 = 0;
		V_1 = ((int32_t)17);
		V_2 = __this;
		goto IL_003c;
	}

IL_0009:
	{
		int32_t L_0 = V_1;
		int32_t* L_1 = __this->get_address_of_GUILayoutOptionType_2();
		int32_t L_2;
		L_2 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)L_1, /*hidden argument*/NULL);
		float* L_3 = __this->get_address_of_value_0();
		int32_t L_4;
		L_4 = Single_GetHashCode_m7662E1812DDDBC85D464398740CFFC3588DFB2C9((float*)L_3, /*hidden argument*/NULL);
		int32_t L_5 = V_0;
		int32_t L_6 = L_5;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)((int32_t)29))), (int32_t)L_2)), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_4, (int32_t)((int32_t)17))))), (int32_t)L_6));
		GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * L_7 = V_2;
		NullCheck(L_7);
		GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * L_8 = L_7->get_Parent_1();
		V_2 = L_8;
	}

IL_003c:
	{
		GUILayoutOptionsInstance_t17BD4545DD9678F7698854DB864CE20535175C2C * L_9 = V_2;
		if (L_9)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_10 = V_1;
		return L_10;
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
// System.Void Sirenix.Utilities.ImmutableList/<System-Collections-Generic-IEnumerable<System-Object>-GetEnumerator>d__25::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25__ctor_m0CB49571AB03B45B152B4A518168283A3626A882 (U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_t9676F100F6E148EC1848685DF6FDD8822072D3EC * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Sirenix.Utilities.ImmutableList/<System-Collections-Generic-IEnumerable<System-Object>-GetEnumerator>d__25::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_System_IDisposable_Dispose_m233D07626A7782E7D3C23405DF37E703A13A7CCC (U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_t9676F100F6E148EC1848685DF6FDD8822072D3EC * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x1A, FINALLY_0013);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0013;
	}

FINALLY_0013:
	{ // begin finally (depth: 1)
		U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_U3CU3Em__Finally1_m8F07736A73B9753D236E45DC287E521885F2D2E0(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(19)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(19)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1A, IL_001a)
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean Sirenix.Utilities.ImmutableList/<System-Collections-Generic-IEnumerable<System-Object>-GetEnumerator>d__25::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_MoveNext_m83ED35BB01591E08BE1A41ED1945E5E1666DCC45 (U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_t9676F100F6E148EC1848685DF6FDD8822072D3EC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	ImmutableList_tB95C3BA00C89D0B8BB482F454854C7DF54BB8E52 * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			ImmutableList_tB95C3BA00C89D0B8BB482F454854C7DF54BB8E52 * L_1 = __this->get_U3CU3E4__this_2();
			V_2 = L_1;
			int32_t L_2 = V_1;
			if (!L_2)
			{
				goto IL_0019;
			}
		}

IL_0011:
		{
			int32_t L_3 = V_1;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_0059;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			goto IL_0086;
		}

IL_0019:
		{
			__this->set_U3CU3E1__state_0((-1));
			ImmutableList_tB95C3BA00C89D0B8BB482F454854C7DF54BB8E52 * L_4 = V_2;
			NullCheck(L_4);
			RuntimeObject* L_5 = L_4->get_innerList_0();
			NullCheck(L_5);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var, L_5);
			__this->set_U3CU3E7__wrap1_3(L_6);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_0061;
		}

IL_003b:
		{
			RuntimeObject* L_7 = __this->get_U3CU3E7__wrap1_3();
			NullCheck(L_7);
			RuntimeObject * L_8;
			L_8 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_7);
			V_3 = L_8;
			RuntimeObject * L_9 = V_3;
			__this->set_U3CU3E2__current_1(L_9);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_0086;
		}

IL_0059:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
		}

IL_0061:
		{
			RuntimeObject* L_10 = __this->get_U3CU3E7__wrap1_3();
			NullCheck(L_10);
			bool L_11;
			L_11 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_10);
			if (L_11)
			{
				goto IL_003b;
			}
		}

IL_006e:
		{
			U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_U3CU3Em__Finally1_m8F07736A73B9753D236E45DC287E521885F2D2E0(__this, /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap1_3((RuntimeObject*)NULL);
			V_0 = (bool)0;
			goto IL_0086;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_007f;
	}

FAULT_007f:
	{ // begin fault (depth: 1)
		U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_System_IDisposable_Dispose_m233D07626A7782E7D3C23405DF37E703A13A7CCC(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(127)
	} // end fault
	IL2CPP_CLEANUP(127)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0086:
	{
		bool L_12 = V_0;
		return L_12;
	}
}
// System.Void Sirenix.Utilities.ImmutableList/<System-Collections-Generic-IEnumerable<System-Object>-GetEnumerator>d__25::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_U3CU3Em__Finally1_m8F07736A73B9753D236E45DC287E521885F2D2E0 (U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_t9676F100F6E148EC1848685DF6FDD8822072D3EC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		__this->set_U3CU3E1__state_0((-1));
		RuntimeObject* L_0 = __this->get_U3CU3E7__wrap1_3();
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_2);
	}

IL_001c:
	{
		return;
	}
}
// System.Object Sirenix.Utilities.ImmutableList/<System-Collections-Generic-IEnumerable<System-Object>-GetEnumerator>d__25::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m76D39AE57FCE713B736CE012FB5BEFF52DE6F8DB (U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_t9676F100F6E148EC1848685DF6FDD8822072D3EC * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Sirenix.Utilities.ImmutableList/<System-Collections-Generic-IEnumerable<System-Object>-GetEnumerator>d__25::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_System_Collections_IEnumerator_Reset_mCC7B262EBA6CD865C53DED2CE46E5D138AA2194E (U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_t9676F100F6E148EC1848685DF6FDD8822072D3EC * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_System_Collections_IEnumerator_Reset_mCC7B262EBA6CD865C53DED2CE46E5D138AA2194E_RuntimeMethod_var)));
	}
}
// System.Object Sirenix.Utilities.ImmutableList/<System-Collections-Generic-IEnumerable<System-Object>-GetEnumerator>d__25::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_System_Collections_IEnumerator_get_Current_mDEABF05B62843920A655FA423057F70F66E89140 (U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_t9676F100F6E148EC1848685DF6FDD8822072D3EC * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void Sirenix.Utilities.SirenixAssetPaths/<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_mB03F7B3D0E86ABBC27AB3D9F5EE78CC9CAB5BFDD (U3CU3Ec__DisplayClass12_0_t1DE250270549C484B2929D67484F579EB63FE486 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Char Sirenix.Utilities.SirenixAssetPaths/<>c__DisplayClass12_0::<ToPathSafeString>b__0(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar U3CU3Ec__DisplayClass12_0_U3CToPathSafeStringU3Eb__0_m39B5496836C8C3D177CB0141FAF0DAB778539C3B (U3CU3Ec__DisplayClass12_0_t1DE250270549C484B2929D67484F579EB63FE486 * __this, Il2CppChar ___c0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Contains_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_m832DBC12FA0773F2E47557F7885E452BB0F9A21D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_0 = __this->get_invalids_0();
		Il2CppChar L_1 = ___c0;
		bool L_2;
		L_2 = Enumerable_Contains_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_m832DBC12FA0773F2E47557F7885E452BB0F9A21D((RuntimeObject*)(RuntimeObject*)L_0, L_1, /*hidden argument*/Enumerable_Contains_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_m832DBC12FA0773F2E47557F7885E452BB0F9A21D_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0010;
		}
	}
	{
		Il2CppChar L_3 = ___c0;
		return L_3;
	}

IL_0010:
	{
		Il2CppChar L_4 = __this->get_replace_1();
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
// System.Void Sirenix.Utilities.TypeExtensions/<>c__DisplayClass29_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass29_0__ctor_mF51CFC4544DC5996EF8FBF304F5E7F899E2B48A0 (U3CU3Ec__DisplayClass29_0_tCA31F23460E600747F7250F76EA9B026170F60F5 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Sirenix.Utilities.TypeExtensions/<>c__DisplayClass29_0::<GetCastMethodDelegate>b__0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec__DisplayClass29_0_U3CGetCastMethodDelegateU3Eb__0_m365286778A5D4D80F3FA672D340CC38C0BC5884B (U3CU3Ec__DisplayClass29_0_tCA31F23460E600747F7250F76EA9B026170F60F5 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodInfo_t * L_0 = __this->get_method_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		RuntimeObject * L_3 = ___obj0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		NullCheck(L_0);
		RuntimeObject * L_4;
		L_4 = MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3(L_0, NULL, L_2, /*hidden argument*/NULL);
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
// System.Void Sirenix.Utilities.TypeExtensions/<>c__DisplayClass45_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass45_0__ctor_m355AC620519AF11CF6B855B5191F046D4FA6077D (U3CU3Ec__DisplayClass45_0_t16E5F2D65FAE8361143998F5DE99E7C93C5CBC95 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Sirenix.Utilities.TypeExtensions/<>c__DisplayClass45_0::<GetOperatorMethod>b__0(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass45_0_U3CGetOperatorMethodU3Eb__0_m2F1C31CEA688E1F71179E8AAD1BDE9B13E5C5328 (U3CU3Ec__DisplayClass45_0_t16E5F2D65FAE8361143998F5DE99E7C93C5CBC95 * __this, MethodInfo_t * ___m0, const RuntimeMethod* method)
{
	{
		MethodInfo_t * L_0 = ___m0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		String_t* L_2 = __this->get_methodName_0();
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, L_2, /*hidden argument*/NULL);
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
// System.Void Sirenix.Utilities.TypeExtensions/<>c__DisplayClass46_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass46_0__ctor_m5B2ECADE9DD2735463626EAB57512DB071AD0770 (U3CU3Ec__DisplayClass46_0_t5DF7E38388EC8F406BE16F9223BC552F3504B250 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Sirenix.Utilities.TypeExtensions/<>c__DisplayClass46_0::<GetOperatorMethods>b__0(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass46_0_U3CGetOperatorMethodsU3Eb__0_m459452A77E0B6D308C6DFAC542540889DC347BE7 (U3CU3Ec__DisplayClass46_0_t5DF7E38388EC8F406BE16F9223BC552F3504B250 * __this, MethodInfo_t * ___x0, const RuntimeMethod* method)
{
	{
		MethodInfo_t * L_0 = ___x0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		String_t* L_2 = __this->get_methodName_0();
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, L_2, /*hidden argument*/NULL);
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
// System.Void Sirenix.Utilities.TypeExtensions/<GetAllMembers>d__47::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllMembersU3Ed__47__ctor_m1B909AD08FE996448E8642973B3C1B2984C6105D (U3CGetAllMembersU3Ed__47_t4C90809A102D2827FDE5A986E216A49824F8D2A0 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_1;
		L_1 = Thread_get_CurrentThread_m80236D2457FBCC1F76A08711E059A0B738DA71EC(/*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0(L_1, /*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_2);
		return;
	}
}
// System.Void Sirenix.Utilities.TypeExtensions/<GetAllMembers>d__47::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllMembersU3Ed__47_System_IDisposable_Dispose_mDACB62B3E5D46AF71CFC32BD4C04A49C0A488F01 (U3CGetAllMembersU3Ed__47_t4C90809A102D2827FDE5A986E216A49824F8D2A0 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Sirenix.Utilities.TypeExtensions/<GetAllMembers>d__47::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetAllMembersU3Ed__47_MoveNext_m05160F6643B3AB5120052F6069BAEE5BDBD6BAE1 (U3CGetAllMembersU3Ed__47_t4C90809A102D2827FDE5A986E216A49824F8D2A0 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	MemberInfo_t * V_1 = NULL;
	MemberInfo_t * V_2 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_0077;
			}
			case 2:
			{
				goto IL_00f4;
			}
		}
	}
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->set_U3CU3E1__state_0((-1));
		Type_t * L_2 = __this->get_type_3();
		__this->set_U3CcurrentTypeU3E5__1_7(L_2);
		int32_t L_3 = __this->get_flags_5();
		if ((!(((uint32_t)((int32_t)((int32_t)L_3&(int32_t)2))) == ((uint32_t)2))))
		{
			goto IL_00a8;
		}
	}
	{
		Type_t * L_4 = __this->get_U3CcurrentTypeU3E5__1_7();
		int32_t L_5 = __this->get_flags_5();
		NullCheck(L_4);
		MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E* L_6;
		L_6 = VirtFuncInvoker1< MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E*, int32_t >::Invoke(63 /* System.Reflection.MemberInfo[] System.Type::GetMembers(System.Reflection.BindingFlags) */, L_4, L_5);
		__this->set_U3CU3E7__wrap1_8(L_6);
		__this->set_U3CU3E7__wrap2_9(0);
		goto IL_008c;
	}

IL_0059:
	{
		MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E* L_7 = __this->get_U3CU3E7__wrap1_8();
		int32_t L_8 = __this->get_U3CU3E7__wrap2_9();
		NullCheck(L_7);
		int32_t L_9 = L_8;
		MemberInfo_t * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_1 = L_10;
		MemberInfo_t * L_11 = V_1;
		__this->set_U3CU3E2__current_1(L_11);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0077:
	{
		__this->set_U3CU3E1__state_0((-1));
		int32_t L_12 = __this->get_U3CU3E7__wrap2_9();
		__this->set_U3CU3E7__wrap2_9(((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1)));
	}

IL_008c:
	{
		int32_t L_13 = __this->get_U3CU3E7__wrap2_9();
		MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E* L_14 = __this->get_U3CU3E7__wrap1_8();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0059;
		}
	}
	{
		__this->set_U3CU3E7__wrap1_8((MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E*)NULL);
		goto IL_013c;
	}

IL_00a8:
	{
		int32_t L_15 = __this->get_flags_5();
		__this->set_flags_5(((int32_t)((int32_t)L_15|(int32_t)2)));
	}

IL_00b6:
	{
		Type_t * L_16 = __this->get_U3CcurrentTypeU3E5__1_7();
		int32_t L_17 = __this->get_flags_5();
		NullCheck(L_16);
		MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E* L_18;
		L_18 = VirtFuncInvoker1< MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E*, int32_t >::Invoke(63 /* System.Reflection.MemberInfo[] System.Type::GetMembers(System.Reflection.BindingFlags) */, L_16, L_17);
		__this->set_U3CU3E7__wrap1_8(L_18);
		__this->set_U3CU3E7__wrap2_9(0);
		goto IL_0109;
	}

IL_00d6:
	{
		MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E* L_19 = __this->get_U3CU3E7__wrap1_8();
		int32_t L_20 = __this->get_U3CU3E7__wrap2_9();
		NullCheck(L_19);
		int32_t L_21 = L_20;
		MemberInfo_t * L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_2 = L_22;
		MemberInfo_t * L_23 = V_2;
		__this->set_U3CU3E2__current_1(L_23);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_00f4:
	{
		__this->set_U3CU3E1__state_0((-1));
		int32_t L_24 = __this->get_U3CU3E7__wrap2_9();
		__this->set_U3CU3E7__wrap2_9(((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1)));
	}

IL_0109:
	{
		int32_t L_25 = __this->get_U3CU3E7__wrap2_9();
		MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E* L_26 = __this->get_U3CU3E7__wrap1_8();
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length))))))
		{
			goto IL_00d6;
		}
	}
	{
		__this->set_U3CU3E7__wrap1_8((MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E*)NULL);
		Type_t * L_27 = __this->get_U3CcurrentTypeU3E5__1_7();
		NullCheck(L_27);
		Type_t * L_28;
		L_28 = VirtFuncInvoker0< Type_t * >::Invoke(29 /* System.Type System.Type::get_BaseType() */, L_27);
		__this->set_U3CcurrentTypeU3E5__1_7(L_28);
		Type_t * L_29 = __this->get_U3CcurrentTypeU3E5__1_7();
		if (L_29)
		{
			goto IL_00b6;
		}
	}

IL_013c:
	{
		return (bool)0;
	}
}
// System.Reflection.MemberInfo Sirenix.Utilities.TypeExtensions/<GetAllMembers>d__47::System.Collections.Generic.IEnumerator<System.Reflection.MemberInfo>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemberInfo_t * U3CGetAllMembersU3Ed__47_System_Collections_Generic_IEnumeratorU3CSystem_Reflection_MemberInfoU3E_get_Current_m7FF4F86BA5475A51000E5B3C7C38B22CF53161F1 (U3CGetAllMembersU3Ed__47_t4C90809A102D2827FDE5A986E216A49824F8D2A0 * __this, const RuntimeMethod* method)
{
	{
		MemberInfo_t * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Sirenix.Utilities.TypeExtensions/<GetAllMembers>d__47::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllMembersU3Ed__47_System_Collections_IEnumerator_Reset_mB364C7B473F1F0CFA6DE380A7E7FCA5BF60EF61D (U3CGetAllMembersU3Ed__47_t4C90809A102D2827FDE5A986E216A49824F8D2A0 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetAllMembersU3Ed__47_System_Collections_IEnumerator_Reset_mB364C7B473F1F0CFA6DE380A7E7FCA5BF60EF61D_RuntimeMethod_var)));
	}
}
// System.Object Sirenix.Utilities.TypeExtensions/<GetAllMembers>d__47::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetAllMembersU3Ed__47_System_Collections_IEnumerator_get_Current_m4160C3DC951F94C6C96017643DEFE715F856D62B (U3CGetAllMembersU3Ed__47_t4C90809A102D2827FDE5A986E216A49824F8D2A0 * __this, const RuntimeMethod* method)
{
	{
		MemberInfo_t * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Reflection.MemberInfo> Sirenix.Utilities.TypeExtensions/<GetAllMembers>d__47::System.Collections.Generic.IEnumerable<System.Reflection.MemberInfo>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAllMembersU3Ed__47_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MemberInfoU3E_GetEnumerator_m8495D250E34F9DCEA9CF08772B7FE553027ADD96 (U3CGetAllMembersU3Ed__47_t4C90809A102D2827FDE5A986E216A49824F8D2A0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetAllMembersU3Ed__47_t4C90809A102D2827FDE5A986E216A49824F8D2A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetAllMembersU3Ed__47_t4C90809A102D2827FDE5A986E216A49824F8D2A0 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_2;
		L_2 = Thread_get_CurrentThread_m80236D2457FBCC1F76A08711E059A0B738DA71EC(/*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0027;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_002e;
	}

IL_0027:
	{
		U3CGetAllMembersU3Ed__47_t4C90809A102D2827FDE5A986E216A49824F8D2A0 * L_4 = (U3CGetAllMembersU3Ed__47_t4C90809A102D2827FDE5A986E216A49824F8D2A0 *)il2cpp_codegen_object_new(U3CGetAllMembersU3Ed__47_t4C90809A102D2827FDE5A986E216A49824F8D2A0_il2cpp_TypeInfo_var);
		U3CGetAllMembersU3Ed__47__ctor_m1B909AD08FE996448E8642973B3C1B2984C6105D(L_4, 0, /*hidden argument*/NULL);
		V_0 = L_4;
	}

IL_002e:
	{
		U3CGetAllMembersU3Ed__47_t4C90809A102D2827FDE5A986E216A49824F8D2A0 * L_5 = V_0;
		Type_t * L_6 = __this->get_U3CU3E3__type_4();
		NullCheck(L_5);
		L_5->set_type_3(L_6);
		U3CGetAllMembersU3Ed__47_t4C90809A102D2827FDE5A986E216A49824F8D2A0 * L_7 = V_0;
		int32_t L_8 = __this->get_U3CU3E3__flags_6();
		NullCheck(L_7);
		L_7->set_flags_5(L_8);
		U3CGetAllMembersU3Ed__47_t4C90809A102D2827FDE5A986E216A49824F8D2A0 * L_9 = V_0;
		return L_9;
	}
}
// System.Collections.IEnumerator Sirenix.Utilities.TypeExtensions/<GetAllMembers>d__47::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAllMembersU3Ed__47_System_Collections_IEnumerable_GetEnumerator_mEEB289714EC17C9179B809184E2C3B4DC5D778C9 (U3CGetAllMembersU3Ed__47_t4C90809A102D2827FDE5A986E216A49824F8D2A0 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3CGetAllMembersU3Ed__47_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MemberInfoU3E_GetEnumerator_m8495D250E34F9DCEA9CF08772B7FE553027ADD96(__this, /*hidden argument*/NULL);
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
// System.Void Sirenix.Utilities.TypeExtensions/<GetAllMembers>d__48::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllMembersU3Ed__48__ctor_mB3B0E88A06451F1BC378E52346BD3505F45C88ED (U3CGetAllMembersU3Ed__48_t4875E6379D17BB16E2C05B2CBB7645C86F3D357D * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_1;
		L_1 = Thread_get_CurrentThread_m80236D2457FBCC1F76A08711E059A0B738DA71EC(/*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0(L_1, /*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_2);
		return;
	}
}
// System.Void Sirenix.Utilities.TypeExtensions/<GetAllMembers>d__48::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllMembersU3Ed__48_System_IDisposable_Dispose_m1E3D611B8297D76A6F5A30AD422761E1EF6EB1E5 (U3CGetAllMembersU3Ed__48_t4875E6379D17BB16E2C05B2CBB7645C86F3D357D * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x1A, FINALLY_0013);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0013;
	}

FINALLY_0013:
	{ // begin finally (depth: 1)
		U3CGetAllMembersU3Ed__48_U3CU3Em__Finally1_m9B587CB8159B5897C40E1186A65995697DCF32F8(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(19)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(19)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1A, IL_001a)
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean Sirenix.Utilities.TypeExtensions/<GetAllMembers>d__48::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetAllMembersU3Ed__48_MoveNext_mBB2CAA462474A250FE22B27AEA787142298E4842 (U3CGetAllMembersU3Ed__48_t4875E6379D17BB16E2C05B2CBB7645C86F3D357D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tC1469845CEBD36D92E7FE77DA40BA86D0F5DD295_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t556F6E5384E7EA0D2E211524A603938CEA2CFDAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_tDAC2F4590E6EF3CA7C41B48DB93D2240BEA8109C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	MemberInfo_t * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			int32_t L_1 = V_1;
			if (!L_1)
			{
				goto IL_0015;
			}
		}

IL_000a:
		{
			int32_t L_2 = V_1;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_0073;
			}
		}

IL_000e:
		{
			V_0 = (bool)0;
			goto IL_00a0;
		}

IL_0015:
		{
			__this->set_U3CU3E1__state_0((-1));
			Type_t * L_3 = __this->get_type_3();
			int32_t L_4 = __this->get_flags_5();
			IL2CPP_RUNTIME_CLASS_INIT(TypeExtensions_tDAC2F4590E6EF3CA7C41B48DB93D2240BEA8109C_il2cpp_TypeInfo_var);
			RuntimeObject* L_5;
			L_5 = TypeExtensions_GetAllMembers_m940D65E6CA84C7563317387533538E030067CC57(L_3, L_4, /*hidden argument*/NULL);
			NullCheck(L_5);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo>::GetEnumerator() */, IEnumerable_1_tC1469845CEBD36D92E7FE77DA40BA86D0F5DD295_il2cpp_TypeInfo_var, L_5);
			__this->set_U3CU3E7__wrap1_9(L_6);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_007b;
		}

IL_0042:
		{
			RuntimeObject* L_7 = __this->get_U3CU3E7__wrap1_9();
			NullCheck(L_7);
			MemberInfo_t * L_8;
			L_8 = InterfaceFuncInvoker0< MemberInfo_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Reflection.MemberInfo>::get_Current() */, IEnumerator_1_t556F6E5384E7EA0D2E211524A603938CEA2CFDAC_il2cpp_TypeInfo_var, L_7);
			V_2 = L_8;
			MemberInfo_t * L_9 = V_2;
			NullCheck(L_9);
			String_t* L_10;
			L_10 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_9);
			String_t* L_11 = __this->get_name_7();
			bool L_12;
			L_12 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_10, L_11, /*hidden argument*/NULL);
			if (L_12)
			{
				goto IL_007b;
			}
		}

IL_0061:
		{
			MemberInfo_t * L_13 = V_2;
			__this->set_U3CU3E2__current_1(L_13);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_00a0;
		}

IL_0073:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
		}

IL_007b:
		{
			RuntimeObject* L_14 = __this->get_U3CU3E7__wrap1_9();
			NullCheck(L_14);
			bool L_15;
			L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_14);
			if (L_15)
			{
				goto IL_0042;
			}
		}

IL_0088:
		{
			U3CGetAllMembersU3Ed__48_U3CU3Em__Finally1_m9B587CB8159B5897C40E1186A65995697DCF32F8(__this, /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap1_9((RuntimeObject*)NULL);
			V_0 = (bool)0;
			goto IL_00a0;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_0099;
	}

FAULT_0099:
	{ // begin fault (depth: 1)
		U3CGetAllMembersU3Ed__48_System_IDisposable_Dispose_m1E3D611B8297D76A6F5A30AD422761E1EF6EB1E5(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(153)
	} // end fault
	IL2CPP_CLEANUP(153)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00a0:
	{
		bool L_16 = V_0;
		return L_16;
	}
}
// System.Void Sirenix.Utilities.TypeExtensions/<GetAllMembers>d__48::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllMembersU3Ed__48_U3CU3Em__Finally1_m9B587CB8159B5897C40E1186A65995697DCF32F8 (U3CGetAllMembersU3Ed__48_t4875E6379D17BB16E2C05B2CBB7645C86F3D357D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		RuntimeObject* L_0 = __this->get_U3CU3E7__wrap1_9();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_U3CU3E7__wrap1_9();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Reflection.MemberInfo Sirenix.Utilities.TypeExtensions/<GetAllMembers>d__48::System.Collections.Generic.IEnumerator<System.Reflection.MemberInfo>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemberInfo_t * U3CGetAllMembersU3Ed__48_System_Collections_Generic_IEnumeratorU3CSystem_Reflection_MemberInfoU3E_get_Current_m6A2688DFCBB62636BCFF021AE2D397347FA3F07A (U3CGetAllMembersU3Ed__48_t4875E6379D17BB16E2C05B2CBB7645C86F3D357D * __this, const RuntimeMethod* method)
{
	{
		MemberInfo_t * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Sirenix.Utilities.TypeExtensions/<GetAllMembers>d__48::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllMembersU3Ed__48_System_Collections_IEnumerator_Reset_m9403D56F1D7257C8A52B6F0828D81AFD942AC978 (U3CGetAllMembersU3Ed__48_t4875E6379D17BB16E2C05B2CBB7645C86F3D357D * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetAllMembersU3Ed__48_System_Collections_IEnumerator_Reset_m9403D56F1D7257C8A52B6F0828D81AFD942AC978_RuntimeMethod_var)));
	}
}
// System.Object Sirenix.Utilities.TypeExtensions/<GetAllMembers>d__48::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetAllMembersU3Ed__48_System_Collections_IEnumerator_get_Current_mB4C4755DF4A022C1D9D5BA85E3AE3C0FB4AF9CCF (U3CGetAllMembersU3Ed__48_t4875E6379D17BB16E2C05B2CBB7645C86F3D357D * __this, const RuntimeMethod* method)
{
	{
		MemberInfo_t * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Reflection.MemberInfo> Sirenix.Utilities.TypeExtensions/<GetAllMembers>d__48::System.Collections.Generic.IEnumerable<System.Reflection.MemberInfo>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAllMembersU3Ed__48_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MemberInfoU3E_GetEnumerator_m76C13B6396ED2AE69B303408FD6CBF5F369C2490 (U3CGetAllMembersU3Ed__48_t4875E6379D17BB16E2C05B2CBB7645C86F3D357D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetAllMembersU3Ed__48_t4875E6379D17BB16E2C05B2CBB7645C86F3D357D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetAllMembersU3Ed__48_t4875E6379D17BB16E2C05B2CBB7645C86F3D357D * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_2;
		L_2 = Thread_get_CurrentThread_m80236D2457FBCC1F76A08711E059A0B738DA71EC(/*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0027;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_002e;
	}

IL_0027:
	{
		U3CGetAllMembersU3Ed__48_t4875E6379D17BB16E2C05B2CBB7645C86F3D357D * L_4 = (U3CGetAllMembersU3Ed__48_t4875E6379D17BB16E2C05B2CBB7645C86F3D357D *)il2cpp_codegen_object_new(U3CGetAllMembersU3Ed__48_t4875E6379D17BB16E2C05B2CBB7645C86F3D357D_il2cpp_TypeInfo_var);
		U3CGetAllMembersU3Ed__48__ctor_mB3B0E88A06451F1BC378E52346BD3505F45C88ED(L_4, 0, /*hidden argument*/NULL);
		V_0 = L_4;
	}

IL_002e:
	{
		U3CGetAllMembersU3Ed__48_t4875E6379D17BB16E2C05B2CBB7645C86F3D357D * L_5 = V_0;
		Type_t * L_6 = __this->get_U3CU3E3__type_4();
		NullCheck(L_5);
		L_5->set_type_3(L_6);
		U3CGetAllMembersU3Ed__48_t4875E6379D17BB16E2C05B2CBB7645C86F3D357D * L_7 = V_0;
		String_t* L_8 = __this->get_U3CU3E3__name_8();
		NullCheck(L_7);
		L_7->set_name_7(L_8);
		U3CGetAllMembersU3Ed__48_t4875E6379D17BB16E2C05B2CBB7645C86F3D357D * L_9 = V_0;
		int32_t L_10 = __this->get_U3CU3E3__flags_6();
		NullCheck(L_9);
		L_9->set_flags_5(L_10);
		U3CGetAllMembersU3Ed__48_t4875E6379D17BB16E2C05B2CBB7645C86F3D357D * L_11 = V_0;
		return L_11;
	}
}
// System.Collections.IEnumerator Sirenix.Utilities.TypeExtensions/<GetAllMembers>d__48::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAllMembersU3Ed__48_System_Collections_IEnumerable_GetEnumerator_mD63E3A09AF42BE33D852184FDA649AD1E761E91C (U3CGetAllMembersU3Ed__48_t4875E6379D17BB16E2C05B2CBB7645C86F3D357D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3CGetAllMembersU3Ed__48_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MemberInfoU3E_GetEnumerator_m76C13B6396ED2AE69B303408FD6CBF5F369C2490(__this, /*hidden argument*/NULL);
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
// System.Void Sirenix.Utilities.TypeExtensions/<GetBaseClasses>d__53::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetBaseClassesU3Ed__53__ctor_mCEE2413347DF567766E164FC2A734871FB90A3C9 (U3CGetBaseClassesU3Ed__53_t698E0333B78EF858B505025B28A4EE6F4718CBB7 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_1;
		L_1 = Thread_get_CurrentThread_m80236D2457FBCC1F76A08711E059A0B738DA71EC(/*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0(L_1, /*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_2);
		return;
	}
}
// System.Void Sirenix.Utilities.TypeExtensions/<GetBaseClasses>d__53::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetBaseClassesU3Ed__53_System_IDisposable_Dispose_m0052858E96993AF99E629B7E375D36B5F600C9F6 (U3CGetBaseClassesU3Ed__53_t698E0333B78EF858B505025B28A4EE6F4718CBB7 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Sirenix.Utilities.TypeExtensions/<GetBaseClasses>d__53::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetBaseClassesU3Ed__53_MoveNext_mA530D06F728440226A3EE29A293C7B5B0F194068 (U3CGetBaseClassesU3Ed__53_t698E0333B78EF858B505025B28A4EE6F4718CBB7 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_0056;
			}
			case 2:
			{
				goto IL_0085;
			}
		}
	}
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->set_U3CU3E1__state_0((-1));
		Type_t * L_2 = __this->get_type_3();
		if (!L_2)
		{
			goto IL_0037;
		}
	}
	{
		Type_t * L_3 = __this->get_type_3();
		NullCheck(L_3);
		Type_t * L_4;
		L_4 = VirtFuncInvoker0< Type_t * >::Invoke(29 /* System.Type System.Type::get_BaseType() */, L_3);
		if (L_4)
		{
			goto IL_0039;
		}
	}

IL_0037:
	{
		return (bool)0;
	}

IL_0039:
	{
		bool L_5 = __this->get_includeSelf_5();
		if (!L_5)
		{
			goto IL_005d;
		}
	}
	{
		Type_t * L_6 = __this->get_type_3();
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0056:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_005d:
	{
		Type_t * L_7 = __this->get_type_3();
		NullCheck(L_7);
		Type_t * L_8;
		L_8 = VirtFuncInvoker0< Type_t * >::Invoke(29 /* System.Type System.Type::get_BaseType() */, L_7);
		__this->set_U3CcurrentU3E5__1_7(L_8);
		goto IL_009d;
	}

IL_0070:
	{
		Type_t * L_9 = __this->get_U3CcurrentU3E5__1_7();
		__this->set_U3CU3E2__current_1(L_9);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0085:
	{
		__this->set_U3CU3E1__state_0((-1));
		Type_t * L_10 = __this->get_U3CcurrentU3E5__1_7();
		NullCheck(L_10);
		Type_t * L_11;
		L_11 = VirtFuncInvoker0< Type_t * >::Invoke(29 /* System.Type System.Type::get_BaseType() */, L_10);
		__this->set_U3CcurrentU3E5__1_7(L_11);
	}

IL_009d:
	{
		Type_t * L_12 = __this->get_U3CcurrentU3E5__1_7();
		if (L_12)
		{
			goto IL_0070;
		}
	}
	{
		return (bool)0;
	}
}
// System.Type Sirenix.Utilities.TypeExtensions/<GetBaseClasses>d__53::System.Collections.Generic.IEnumerator<System.Type>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * U3CGetBaseClassesU3Ed__53_System_Collections_Generic_IEnumeratorU3CSystem_TypeU3E_get_Current_m5D84307423D1F28E1DFEDBAF75BFB55C25EF0467 (U3CGetBaseClassesU3Ed__53_t698E0333B78EF858B505025B28A4EE6F4718CBB7 * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Sirenix.Utilities.TypeExtensions/<GetBaseClasses>d__53::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetBaseClassesU3Ed__53_System_Collections_IEnumerator_Reset_mDB88BC8D16D6D95FFB58AC5020C5D45BAF1D92A6 (U3CGetBaseClassesU3Ed__53_t698E0333B78EF858B505025B28A4EE6F4718CBB7 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetBaseClassesU3Ed__53_System_Collections_IEnumerator_Reset_mDB88BC8D16D6D95FFB58AC5020C5D45BAF1D92A6_RuntimeMethod_var)));
	}
}
// System.Object Sirenix.Utilities.TypeExtensions/<GetBaseClasses>d__53::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetBaseClassesU3Ed__53_System_Collections_IEnumerator_get_Current_m0F354E9E081D05375516B48ADB9A82007F524477 (U3CGetBaseClassesU3Ed__53_t698E0333B78EF858B505025B28A4EE6F4718CBB7 * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Type> Sirenix.Utilities.TypeExtensions/<GetBaseClasses>d__53::System.Collections.Generic.IEnumerable<System.Type>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetBaseClassesU3Ed__53_System_Collections_Generic_IEnumerableU3CSystem_TypeU3E_GetEnumerator_m97F965CE8D6F2606A8ED743D4A924C6E4FCC8F13 (U3CGetBaseClassesU3Ed__53_t698E0333B78EF858B505025B28A4EE6F4718CBB7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetBaseClassesU3Ed__53_t698E0333B78EF858B505025B28A4EE6F4718CBB7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetBaseClassesU3Ed__53_t698E0333B78EF858B505025B28A4EE6F4718CBB7 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_2;
		L_2 = Thread_get_CurrentThread_m80236D2457FBCC1F76A08711E059A0B738DA71EC(/*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0027;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_002e;
	}

IL_0027:
	{
		U3CGetBaseClassesU3Ed__53_t698E0333B78EF858B505025B28A4EE6F4718CBB7 * L_4 = (U3CGetBaseClassesU3Ed__53_t698E0333B78EF858B505025B28A4EE6F4718CBB7 *)il2cpp_codegen_object_new(U3CGetBaseClassesU3Ed__53_t698E0333B78EF858B505025B28A4EE6F4718CBB7_il2cpp_TypeInfo_var);
		U3CGetBaseClassesU3Ed__53__ctor_mCEE2413347DF567766E164FC2A734871FB90A3C9(L_4, 0, /*hidden argument*/NULL);
		V_0 = L_4;
	}

IL_002e:
	{
		U3CGetBaseClassesU3Ed__53_t698E0333B78EF858B505025B28A4EE6F4718CBB7 * L_5 = V_0;
		Type_t * L_6 = __this->get_U3CU3E3__type_4();
		NullCheck(L_5);
		L_5->set_type_3(L_6);
		U3CGetBaseClassesU3Ed__53_t698E0333B78EF858B505025B28A4EE6F4718CBB7 * L_7 = V_0;
		bool L_8 = __this->get_U3CU3E3__includeSelf_6();
		NullCheck(L_7);
		L_7->set_includeSelf_5(L_8);
		U3CGetBaseClassesU3Ed__53_t698E0333B78EF858B505025B28A4EE6F4718CBB7 * L_9 = V_0;
		return L_9;
	}
}
// System.Collections.IEnumerator Sirenix.Utilities.TypeExtensions/<GetBaseClasses>d__53::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetBaseClassesU3Ed__53_System_Collections_IEnumerable_GetEnumerator_m9F85656BF71A85587DF053DBF12395D36B14D738 (U3CGetBaseClassesU3Ed__53_t698E0333B78EF858B505025B28A4EE6F4718CBB7 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3CGetBaseClassesU3Ed__53_System_Collections_Generic_IEnumerableU3CSystem_TypeU3E_GetEnumerator_m97F965CE8D6F2606A8ED743D4A924C6E4FCC8F13(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m5C7CE32B14B6E30467B378052FEA25300833C61F_inline (intptr_t* __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = *__this;
		return (void*)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PathStep_tCD606A6F71526B3263FBA4F878CD6AA82F48A95B  List_1_get_Item_m696E7898F085B752FECA712127AA61F0E1567445_gshared_inline (List_1_t1397A266905C615B22796E5B9A0C8991F37EA426 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		PathStepU5BU5D_t9124581E037D41E9CE32806A421630205066601D* L_2 = (PathStepU5BU5D_t9124581E037D41E9CE32806A421630205066601D*)__this->get__items_1();
		int32_t L_3 = ___index0;
		PathStep_tCD606A6F71526B3263FBA4F878CD6AA82F48A95B  L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((PathStepU5BU5D_t9124581E037D41E9CE32806A421630205066601D*)L_2, (int32_t)L_3);
		return (PathStep_tCD606A6F71526B3263FBA4F878CD6AA82F48A95B )L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m43F79DA64E0B750D0AF10F02F3BC0EA92F3E55B7_gshared_inline (List_1_t1397A266905C615B22796E5B9A0C8991F37EA426 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
