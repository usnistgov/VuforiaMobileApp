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
template <typename T1, typename T2, typename T3, typename T4>
struct VirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericVirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Boolean[]
struct BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Int32>[]
struct EntryU5BU5D_tE3A30635C5B794ABD7983F09075F9D4F740716D9;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
struct KeyCollection_tEECFF3D52DBAFA05FAD1589D36F0A8EEF9E2670E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t7B108E5949AABED7EBC85ED1016365781619DAB7;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Networking.NetworkBehaviour/Invoker>
struct Dictionary_2_tCB6A26454DC24D4ED3A427AD6A6B9ADDA3A74D0D;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A;
// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_t2BC1A062E48809D18CE313B19D603CA8BA5A0671;
// System.Collections.Generic.IEnumerator`1<System.Boolean>
struct IEnumerator_1_t79DBAD8EFA3332B8CE0D7CBEF6F1AC175331AC38;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t7348E69CA57FC75395C9BBB4A9FBB33953F29F27;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_tDDB69E91697CCB64C7993B651487CEEC287DB7E8;
// System.Collections.Generic.IEnumerator`1<System.Single>
struct IEnumerator_1_t5BBF33C66D868C3B9C722A703D57C2AD3F18EE30;
// System.Collections.Generic.IEnumerator`1<System.UInt32>
struct IEnumerator_1_t6AEF21B80E2C499BFFB48F8148C3026FBBA3FD72;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_tAE7A8756D8CF0882DD348DC328FB36FEE0FB7DD0;
// System.Collections.Generic.List`1<System.Boolean>
struct List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37;
// System.Collections.Generic.List`1<System.UInt32>
struct List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752;
// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5;
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
struct List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694;
// System.Collections.Generic.List`1<UnityEngine.Networking.NetworkConnection>
struct List_1_t8B02DD1F0211D3E19F6A6E0204AF7D7537912362;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<System.Int32>>
struct Stack_1_tD844FBAA7E7F6C2AE4AB607F96FC1DB969C7B071;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<System.Object>>
struct Stack_1_t96AD2B51E90CA005961D57AFF08B2E4399221839;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Color32>>
struct Stack_1_tD3686B49BE87370A979ADAFA6DEAAE30B3FB6452;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct Stack_1_tDDB642ED18C289FF860C44FD24B801BAC507139A;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Vector2>>
struct Stack_1_t6CD8A23D0684D010CD60BE0EC39253502CB8D20D;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>
struct Stack_1_tB88789DF6FEC373BE3216AC28D17A22FDB65D489;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Vector4>>
struct Stack_1_tCFA2A645438950A02F8F2217C68D78686F8FDABB;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.Comparison`1<System.Object>
struct Comparison_1_tD9DBDF7B2E4774B4D35E113A76D75828A24641F4;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.NotImplementedException
struct NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4;
// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Predicate`1<System.Object>
struct Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.UInt32[]
struct UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB;
// System.Uri
struct Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Color32[]
struct Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5;
// UnityEngine.Events.BaseInvokableCall[]
struct BaseInvokableCallU5BU5D_t5AA0EABD8006EFF721EE7FCC34BF5AA1418173D3;
// UnityEngine.Events.InvokableCall
struct InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F;
// UnityEngine.Events.UnityAction
struct UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<System.Int32>>
struct UnityAction_1_tCFF1D446AB859368D0E404A2D6738C98E10FCC6A;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<System.Object>>
struct UnityAction_1_t37A77CD76DBB81733157A401AB7F0E8B10692A0C;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Color32>>
struct UnityAction_1_tBFC448984D861333BFB83317707C2F208D61E3D1;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct UnityAction_1_t6CAED93F6613F01731695AAC7F8201ABB209CC0A;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Vector2>>
struct UnityAction_1_tAF537B97BFBDAFB0D27DBBE2DC414D654B6C41EC;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>
struct UnityAction_1_tFFEAFE33FC07D89E336EC0E8863403BAC10853CA;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Vector4>>
struct UnityAction_1_t4CA653A7B54DA3D30EC370F89843FDF53F602008;
// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9;
// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
struct UnityAction_1_t8523D5D21ADA168AED3BD9CFFCED8FF87199DE9D;
// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
struct UnityAction_1_tC29A4BDE80E6622E5794F177E3DAA65BB4342B44;
// UnityEngine.Events.UnityAction`1<UnityEngine.Vector3>
struct UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C;
// UnityEngine.Events.UnityAction`2<System.Char,System.Int32>
struct UnityAction_2_t8470724C44D27428CCDE1F8FA9C517D58A99FF9C;
// UnityEngine.Events.UnityAction`2<System.Object,System.Object>
struct UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2;
// UnityEngine.Events.UnityAction`2<UnityEngine.Vector3,UnityEngine.Vector3>
struct UnityAction_2_tF6C9DFC311E64D1A3FF55407E541034432E32DE2;
// UnityEngine.Events.UnityAction`3<System.Object,System.Int32,System.Int32>
struct UnityAction_3_t1FF48E6A020CC297A52A774322E1ABAFB7F989F7;
// UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Int32>
struct UnityAction_3_t2103C0F42D01FF19D30CCB1C9BA2EB2BE7BC9DCC;
// UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>
struct UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89;
// UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>
struct UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5;
// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_tE040CE348097B63925504E9E6AFCD89D46798FE3;
// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_t6DD758393B13FC2A58BE44E647D9EBEA4F27D914;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D;
// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_tD2F68F6DD363B64D94CB72CA4170B8DC7A1117F6;
// UnityEngine.Events.UnityEvent`1<UnityEngine.Color>
struct UnityEvent_1_tFB475F569CC8852B004B3F2DE7536E67324C2AF8;
// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>
struct UnityEvent_1_t60552D56FE9D9EC7B17849EE5D16EF96110E69A0;
// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector3>
struct UnityEvent_1_t5D12B60679DCDB91E0DF66ABA5F8D3C7AD66C766;
// UnityEngine.Events.UnityEvent`2<System.Char,System.Int32>
struct UnityEvent_2_t652BB56D3A70C4F3DB42D6CCD83473A98EE1860A;
// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
struct UnityEvent_2_tCABE16DD12281C927273F04C2F6D54BE6ED094EC;
// UnityEngine.Events.UnityEvent`2<UnityEngine.Vector3,UnityEngine.Vector3>
struct UnityEvent_2_t2278D9A02F1B106209E4C560EE1B371E13EAABC2;
// UnityEngine.Events.UnityEvent`3<System.Object,System.Int32,System.Int32>
struct UnityEvent_3_t2B0296963C7C76F6A5D478C34AFAA9759C1CA3F2;
// UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Int32>
struct UnityEvent_3_tBDBEEB66A13CAD2A4067CE23F6BE52B4CEE94E15;
// UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>
struct UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9;
// UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>
struct UnityEvent_4_t2145BBDEE01F7E33D8060C904609F2FFD8845A0A;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.ISubsystemDescriptor
struct ISubsystemDescriptor_t44607A9BE5154ED0C7924B81776A709724545E6C;
// UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t3DA4A857E71E63A49B52353DBD88FA880196117E;
// UnityEngine.IntegratedSubsystemDescriptor
struct IntegratedSubsystemDescriptor_tCC675C388E8A720B9467FCE039B00E7BE7693812;
// UnityEngine.IntegratedSubsystemDescriptor`1<System.Object>
struct IntegratedSubsystemDescriptor_1_t2426B50A97CC5BA8E2BFE696F2EA1DDFC2174909;
// UnityEngine.IntegratedSubsystem`1<System.Object>
struct IntegratedSubsystem_1_t2DE7C58DE8F60DCFD451AAFB0B75E6B1BF94C134;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9;
// UnityEngine.Networking.Match.NetworkMatch/<ProcessMatchResponse>c__Iterator0`2<System.Object,System.Object>
struct U3CProcessMatchResponseU3Ec__Iterator0_2_t72427F307E745E32CC54F0508FBB2CE01CFE0B50;
// UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<System.Object>
struct DataResponseDelegate_1_t26170CF2105600AC9B412E932EB4103D80D763C1;
// UnityEngine.Networking.Match.NetworkMatch/InternalResponseDelegate`2<System.Object,System.Object>
struct InternalResponseDelegate_2_tA096DAC41C013FEB4017B65B26A3B13B2C9F51C7;
// UnityEngine.Networking.Match.Response
struct Response_tE3D1110D7F08CC65754EE4BF0F780D24FEB37742;
// UnityEngine.Networking.NetBuffer
struct NetBuffer_t2BA43CF3688776F372BECD54D28F90CB0559B36C;
// UnityEngine.Networking.NetworkBehaviour
struct NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C;
// UnityEngine.Networking.NetworkBehaviour[]
struct NetworkBehaviourU5BU5D_tA321D64478B9213228935C52651EBFA3E352C7CB;
// UnityEngine.Networking.NetworkConnection
struct NetworkConnection_t56E90DAE06B07A4A3233611CC9C0CBCD0A1CAFBA;
// UnityEngine.Networking.NetworkIdentity
struct NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B;
// UnityEngine.Networking.NetworkIdentity/ClientAuthorityCallback
struct ClientAuthorityCallback_tB6533BDCE069DE0B5628A9BEE08EDCC76F373644;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030;
// UnityEngine.Networking.SyncList`1/SyncListChanged<System.Boolean>
struct SyncListChanged_t5156E5B2411DE07D5AEA8F98B87E4FBD1E626D6E;
// UnityEngine.Networking.SyncList`1/SyncListChanged<System.Int32>
struct SyncListChanged_t1A1EBC018732CBF3B1F86CE21BE59B5107844339;
// UnityEngine.Networking.SyncList`1/SyncListChanged<System.Object>
struct SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643;
// UnityEngine.Networking.SyncList`1/SyncListChanged<System.Single>
struct SyncListChanged_t63BE6CD22C2B89F865722BF980F4351DF0EC68D6;
// UnityEngine.Networking.SyncList`1/SyncListChanged<System.UInt32>
struct SyncListChanged_t1804C1A09093327076629C515EC006A30F38C1B8;
// UnityEngine.Networking.SyncList`1<System.Boolean>
struct SyncList_1_tDDF00E08E649A86264E50205CB99495D1AD2E8D0;
// UnityEngine.Networking.SyncList`1<System.Int32>
struct SyncList_1_t8595ACD08C8686AC9547A225ACF209C171FF0665;
// UnityEngine.Networking.SyncList`1<System.Object>
struct SyncList_1_tDC9BD47B0C55962FA07DEC77A578A1F5231B0238;
// UnityEngine.Networking.SyncList`1<System.Single>
struct SyncList_1_tDEB03E3C5252571915662095C7060998910FD0A2;
// UnityEngine.Networking.SyncList`1<System.UInt32>
struct SyncList_1_t6931FBA5633802C1CAE04093D0C6D9C88EE66627;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Subsystem
struct Subsystem_t6B987736D8E48098F860AC55D76905DE1F48CE8C;
// UnityEngine.SubsystemDescriptor
struct SubsystemDescriptor_t889FE96B75F157379A8337541A119F08DD9C75D4;
// UnityEngine.SubsystemDescriptor`1<System.Object>
struct SubsystemDescriptor_1_t31BEFA7AE91777434F9B5622527F596E81E5C715;
// UnityEngine.Subsystem`1<System.Object>
struct Subsystem_1_tCB27FB16758FC2D855673CA14E86150F070453F6;
// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t240606B62D2B3D9912AED248655C0479DD5BDE0C;
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
struct ObjectPool_1_tE40D9BEC5B067540DB2F9331C8AD1F3B071F974B;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Object>>
struct ObjectPool_1_t3A70BDB59315D0B41F26C2019575B584BE9816CE;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Color32>>
struct ObjectPool_1_tA42695C1C422850E35146976898DA19272914AC8;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct ObjectPool_1_t8C6F590942FFC5DFF0DF79569711056BE7883062;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Vector2>>
struct ObjectPool_1_t592C52579DFFCDED9A816AE87CA33C2A992F7E26;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>
struct ObjectPool_1_t559B14380295E744507B0BF258F6EB60B6D3B902;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Vector4>>
struct ObjectPool_1_tB6CF67DEBE320D035ADE0A7E0AB9B2C8F96E7338;
// UnityEngine.UI.ObjectPool`1<System.Object>
struct ObjectPool_1_t3EF1AC01FF09BFF602D9F00F7E9C508ED5883E9B;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66;
// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<System.Object,System.Object>
struct SubsystemLifecycleManager_2_tFCA70F51985A33F831E1B98350EF7CB79B9F0261;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>
struct TrackingSubsystem_2_t3EB27DAF7DE2C1954FFCC178A2D5B14B2560C403;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>
struct TrackingSubsystem_2_t3EC8D7E050800A819879CB4B105623452C631D7A;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>
struct TrackingSubsystem_2_t13B09A7DD60BB228A81595F3289379D17A4D033E;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Internal_SubsystemInstances_t9F2EF23554998590D7E6B0872790103F0A87F1C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogFilter_t5202A297E770086F7954B8D6703BAC03C22654ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkServer_tFD62C268FC6F01624A5989BFC1D0DD689A66B4A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Operation_t1B75654F0759475B2C029E92A9B3C443D5D644C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Operation_t7839B7BA805803FF180DD035BA3BDC66E36C8367_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Operation_t8297DBEBB31DE17FBA6F294DA35BE1F5F37AC315_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Operation_tAF7E4E7F5B99C35049BD5BA1224C52CF15F1D2D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Operation_tD52C254604455280BBCD2C3F23F8AFA5BA756F84_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemManager_tA76309B3302C9AA31F3BCFFF64BFD98606F0231F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral02A1CE557DC872E91BC93ED77E8B60DF3DFB4A00;
IL2CPP_EXTERN_C String_t* _stringLiteral04231B44477132B3DBEFE7768A921AE5A13A00FC;
IL2CPP_EXTERN_C String_t* _stringLiteral22AC1B9DAB1A5A272FEBD04091C310E3D95A6989;
IL2CPP_EXTERN_C String_t* _stringLiteral3342B21D08DB470F1A14F4B1318C15B43E9B7D64;
IL2CPP_EXTERN_C String_t* _stringLiteralA413973124713A2B7B3570CE8D97C7151C8628A9;
IL2CPP_EXTERN_C String_t* _stringLiteralBF59C8E6CEE45F36DB6254667EE895B2731A0750;
IL2CPP_EXTERN_C String_t* _stringLiteralDFADDFA065E9D92CFE8B8F06444DD5652DFC1D58;
IL2CPP_EXTERN_C String_t* _stringLiteralE35C7729141357B5A11D8FBAAC5AFED079F1C9B8;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisNetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B_m1B246F83788387F4E1BD668088D39CF221FD3F59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IndexedSet_1_GetEnumerator_mC16C0BE13B73DB47882CA51DB581747C19C7128B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IndexedSet_1_Insert_mB43CB3AA6D461E94217E51DE6DD4ED3F5E1607CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CProcessMatchResponseU3Ec__Iterator0_2_Reset_m895D33F47E0E7BB10A4DF619804900F98F0AD537_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartU3Ed__2_System_Collections_IEnumerator_Reset_m4AE666FAF40BAF18CA8D1BCAFDB0D428DEA5DFF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartU3Ed__2_System_Collections_IEnumerator_Reset_m605D45F96449D5CF6DDFACF60880651C85F29195_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t DataResponseDelegate_1_BeginInvoke_mDF10224CF1CB08DFD4E2398664E3C7ED5EEAE168_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IndexedSet_1_GetEnumerator_mC16C0BE13B73DB47882CA51DB581747C19C7128B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IndexedSet_1_Insert_mB43CB3AA6D461E94217E51DE6DD4ED3F5E1607CD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ObjectPool_1_Release_m11F10A7199F0544250785EAA41F819E03D65BC17_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SubsystemDescriptor_1_Create_m29255F0D2FA37F2A73BDB9785BBE9BFB29B9C14F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SubsystemLifecycleManager_2_CreateSubsystem_m842F61DD74EA40C75EAB9CF62627FAD5BB264B5C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SubsystemLifecycleManager_2_GetActiveSubsystemInstance_m3762537813B7C28180C4CF9B99CCB8E176C50A25_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SyncListChanged_BeginInvoke_m4A6F16D5F925A0182F32C3BB8935E522A8498469_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SyncListChanged_BeginInvoke_m80020B83FE3AC6E14E1D7A96E3D3BC44DEA8ABFF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SyncListChanged_BeginInvoke_mABAF976159048FE4F156A75B787587251A0C42C1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SyncListChanged_BeginInvoke_mD543F64DDAC1F56B03AD5B280443A1021A76FADB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SyncListChanged_BeginInvoke_mFDBA43D705352562352A10697B2CE3565373D8E7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SyncList_1_SendMsg_m14E7C1C06943096A4D0171D8DDBCC192D615EF3D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SyncList_1_SendMsg_m35BB9204DA6B6F41BDACA993F982DCA8084FFE77_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SyncList_1_SendMsg_m7A891D9BFEB0B1CE90D7193797D0FF9204FEE417_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SyncList_1_SendMsg_m7A9B6D2648AA0292EA0F70E282BC6BD5321AD14F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SyncList_1_SendMsg_m974D00A9CFC789ADA65D7D1A83E06BCEE7FE2B09_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TweenRunner_1_StartTween_m1C12D6475DFCA47D74844FD2395C1057AF1CA41D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TweenRunner_1_StartTween_m96867F74662CBAED655A9C7B3AF0036E5282F945_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CProcessMatchResponseU3Ec__Iterator0_2_MoveNext_mE92921DD448A33BA2BF787B5D5C9213886FDFE5B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CProcessMatchResponseU3Ec__Iterator0_2_Reset_m895D33F47E0E7BB10A4DF619804900F98F0AD537_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CStartU3Ed__2_MoveNext_m072CCA02187FAAE6E23766279083847801807198_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CStartU3Ed__2_MoveNext_m1F9733709DEC4B352BBFD9939F2B27D0A01137AF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CStartU3Ed__2_System_Collections_IEnumerator_Reset_m4AE666FAF40BAF18CA8D1BCAFDB0D428DEA5DFF8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CStartU3Ed__2_System_Collections_IEnumerator_Reset_m605D45F96449D5CF6DDFACF60880651C85F29195_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEvent_1_FindMethod_Impl_m2B6143F06E866A0E7E58F7CA948F0C6635220D24_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEvent_1_FindMethod_Impl_m2EB10E941A967C89B4297A9278FBA88053A2D828_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEvent_1_FindMethod_Impl_m5DC384FDD452EC00E3EE247D2AE8FF8B941DED23_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEvent_1_FindMethod_Impl_m79E67DC6496C7600A01FFD9339CB8FF97C885FD1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEvent_1_FindMethod_Impl_mC30379BAD6B7B83B04ACD4466AE94B6F2A26FC72_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEvent_1_FindMethod_Impl_mDD1047ED8F4A1CABD0ACBC76D73B344DCDAC3126_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEvent_1_FindMethod_Impl_mE864CF4CD0578B8D425C65CB10D95458D88678C8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEvent_1_Invoke_m027706B0C7150736F066D5C663304CB0B80ABBF0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEvent_1_Invoke_m6D64470308FE35C0990F9878C1E3F6735643D39E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEvent_1_Invoke_m79A370B4DEEE382453AA91E44FE0718B354DC759_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEvent_1_Invoke_mA7AC09C8B1D7365AA092C88716D2591DB283565F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEvent_1_Invoke_mAC9BEEF287D58E79A447A57E28D3679F9B199D70_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEvent_1_Invoke_mCE560143B04F1E258D4804391B491C096D99D788_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEvent_1_Invoke_mEAC5EB16761F76B58EC0F5F6191D53577165B247_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEvent_2_FindMethod_Impl_m03311CACE68316DC88479DFD2AF9AA0A88A615A3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEvent_2_FindMethod_Impl_m0B12FC43A157F1A49B79F92B1757CA21631FF8CF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEvent_2_FindMethod_Impl_m77399949DDF32B977379A0113301316608705847_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEvent_2_Invoke_m0AD2FBFAB78497BA355C8631731B5E002580F725_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEvent_2_Invoke_m104BA364B9C5FEF97DFD23D90A6F0A4E5F09A8AF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEvent_2_Invoke_mF9D7D85FFC5A521534279B8F501B93FFB9A01458_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEvent_3_FindMethod_Impl_mC93B777A0D291968576441D555D787D0930754B1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEvent_3_FindMethod_Impl_mDEE1409662BC040478ADF5E0ABF95B8E381D32C4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEvent_3_FindMethod_Impl_mF15A2B2F6BFE33613B6675FD2500E144CEF40FFA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEvent_3_Invoke_m012D72FFB78BAC1A48A2B8C027CC180D96E963DA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEvent_3_Invoke_m491E2207B7E6F885A7C0B12846108363E8D9BCC4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEvent_3_Invoke_m73493A0DE0D3DB59CC6BE8B59C057765ABCAB77D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEvent_4_FindMethod_Impl_m74BBF94AAC7B6B09A4BC3E4A923CBFE4781D08A1_MetadataUsageId;
struct CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_com;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_com;
struct UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_pinvoke;
struct UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_com;

struct BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040;
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
struct UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB;

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
	KeyCollection_tEECFF3D52DBAFA05FAD1589D36F0A8EEF9E2670E * ___keys_7;
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
	inline KeyCollection_tEECFF3D52DBAFA05FAD1589D36F0A8EEF9E2670E * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tEECFF3D52DBAFA05FAD1589D36F0A8EEF9E2670E ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tEECFF3D52DBAFA05FAD1589D36F0A8EEF9E2670E * value)
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


// System.Collections.Generic.List`1<System.Boolean>
struct  List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75, ____items_1)); }
	inline BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* get__items_1() const { return ____items_1; }
	inline BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75_StaticFields, ____emptyArray_5)); }
	inline BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* get__emptyArray_5() const { return ____emptyArray_5; }
	inline BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
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


// System.Collections.Generic.List`1<System.Single>
struct  List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37, ____items_1)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get__items_1() const { return ____items_1; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37_StaticFields, ____emptyArray_5)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.UInt32>
struct  List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752, ____items_1)); }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* get__items_1() const { return ____items_1; }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752_StaticFields, ____emptyArray_5)); }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* get__emptyArray_5() const { return ____emptyArray_5; }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* value)
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


// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
struct  List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	BaseInvokableCallU5BU5D_t5AA0EABD8006EFF721EE7FCC34BF5AA1418173D3* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694, ____items_1)); }
	inline BaseInvokableCallU5BU5D_t5AA0EABD8006EFF721EE7FCC34BF5AA1418173D3* get__items_1() const { return ____items_1; }
	inline BaseInvokableCallU5BU5D_t5AA0EABD8006EFF721EE7FCC34BF5AA1418173D3** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(BaseInvokableCallU5BU5D_t5AA0EABD8006EFF721EE7FCC34BF5AA1418173D3* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	BaseInvokableCallU5BU5D_t5AA0EABD8006EFF721EE7FCC34BF5AA1418173D3* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694_StaticFields, ____emptyArray_5)); }
	inline BaseInvokableCallU5BU5D_t5AA0EABD8006EFF721EE7FCC34BF5AA1418173D3* get__emptyArray_5() const { return ____emptyArray_5; }
	inline BaseInvokableCallU5BU5D_t5AA0EABD8006EFF721EE7FCC34BF5AA1418173D3** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(BaseInvokableCallU5BU5D_t5AA0EABD8006EFF721EE7FCC34BF5AA1418173D3* value)
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
struct  Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954, ____array_0)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954, ____version_2)); }
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

// UnityEngine.Events.BaseInvokableCall
struct  BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * ___m_PersistentCalls_1;
	// System.String UnityEngine.Events.UnityEventBase::m_TypeName
	String_t* ___m_TypeName_2;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_3;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_Calls_0)); }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_TypeName_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_TypeName_2)); }
	inline String_t* get_m_TypeName_2() const { return ___m_TypeName_2; }
	inline String_t** get_address_of_m_TypeName_2() { return &___m_TypeName_2; }
	inline void set_m_TypeName_2(String_t* value)
	{
		___m_TypeName_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TypeName_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_3() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_CallsDirty_3)); }
	inline bool get_m_CallsDirty_3() const { return ___m_CallsDirty_3; }
	inline bool* get_address_of_m_CallsDirty_3() { return &___m_CallsDirty_3; }
	inline void set_m_CallsDirty_3(bool value)
	{
		___m_CallsDirty_3 = value;
	}
};


// UnityEngine.Networking.Match.NetworkMatch_<ProcessMatchResponse>c__Iterator0`2<System.Object,System.Object>
struct  U3CProcessMatchResponseU3Ec__Iterator0_2_t72427F307E745E32CC54F0508FBB2CE01CFE0B50  : public RuntimeObject
{
public:
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.Match.NetworkMatch_<ProcessMatchResponse>c__Iterator0`2::client
	UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * ___client_0;
	// JSONRESPONSE UnityEngine.Networking.Match.NetworkMatch_<ProcessMatchResponse>c__Iterator0`2::<jsonInterface>__0
	RuntimeObject * ___U3CjsonInterfaceU3E__0_1;
	// UnityEngine.Networking.Match.NetworkMatch_InternalResponseDelegate`2<JSONRESPONSE,USERRESPONSEDELEGATETYPE> UnityEngine.Networking.Match.NetworkMatch_<ProcessMatchResponse>c__Iterator0`2::internalCallback
	InternalResponseDelegate_2_tA096DAC41C013FEB4017B65B26A3B13B2C9F51C7 * ___internalCallback_2;
	// USERRESPONSEDELEGATETYPE UnityEngine.Networking.Match.NetworkMatch_<ProcessMatchResponse>c__Iterator0`2::userCallback
	RuntimeObject * ___userCallback_3;
	// System.Object UnityEngine.Networking.Match.NetworkMatch_<ProcessMatchResponse>c__Iterator0`2::U24current
	RuntimeObject * ___U24current_4;
	// System.Boolean UnityEngine.Networking.Match.NetworkMatch_<ProcessMatchResponse>c__Iterator0`2::U24disposing
	bool ___U24disposing_5;
	// System.Int32 UnityEngine.Networking.Match.NetworkMatch_<ProcessMatchResponse>c__Iterator0`2::U24PC
	int32_t ___U24PC_6;

public:
	inline static int32_t get_offset_of_client_0() { return static_cast<int32_t>(offsetof(U3CProcessMatchResponseU3Ec__Iterator0_2_t72427F307E745E32CC54F0508FBB2CE01CFE0B50, ___client_0)); }
	inline UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * get_client_0() const { return ___client_0; }
	inline UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 ** get_address_of_client_0() { return &___client_0; }
	inline void set_client_0(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * value)
	{
		___client_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CjsonInterfaceU3E__0_1() { return static_cast<int32_t>(offsetof(U3CProcessMatchResponseU3Ec__Iterator0_2_t72427F307E745E32CC54F0508FBB2CE01CFE0B50, ___U3CjsonInterfaceU3E__0_1)); }
	inline RuntimeObject * get_U3CjsonInterfaceU3E__0_1() const { return ___U3CjsonInterfaceU3E__0_1; }
	inline RuntimeObject ** get_address_of_U3CjsonInterfaceU3E__0_1() { return &___U3CjsonInterfaceU3E__0_1; }
	inline void set_U3CjsonInterfaceU3E__0_1(RuntimeObject * value)
	{
		___U3CjsonInterfaceU3E__0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CjsonInterfaceU3E__0_1), (void*)value);
	}

	inline static int32_t get_offset_of_internalCallback_2() { return static_cast<int32_t>(offsetof(U3CProcessMatchResponseU3Ec__Iterator0_2_t72427F307E745E32CC54F0508FBB2CE01CFE0B50, ___internalCallback_2)); }
	inline InternalResponseDelegate_2_tA096DAC41C013FEB4017B65B26A3B13B2C9F51C7 * get_internalCallback_2() const { return ___internalCallback_2; }
	inline InternalResponseDelegate_2_tA096DAC41C013FEB4017B65B26A3B13B2C9F51C7 ** get_address_of_internalCallback_2() { return &___internalCallback_2; }
	inline void set_internalCallback_2(InternalResponseDelegate_2_tA096DAC41C013FEB4017B65B26A3B13B2C9F51C7 * value)
	{
		___internalCallback_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internalCallback_2), (void*)value);
	}

	inline static int32_t get_offset_of_userCallback_3() { return static_cast<int32_t>(offsetof(U3CProcessMatchResponseU3Ec__Iterator0_2_t72427F307E745E32CC54F0508FBB2CE01CFE0B50, ___userCallback_3)); }
	inline RuntimeObject * get_userCallback_3() const { return ___userCallback_3; }
	inline RuntimeObject ** get_address_of_userCallback_3() { return &___userCallback_3; }
	inline void set_userCallback_3(RuntimeObject * value)
	{
		___userCallback_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___userCallback_3), (void*)value);
	}

	inline static int32_t get_offset_of_U24current_4() { return static_cast<int32_t>(offsetof(U3CProcessMatchResponseU3Ec__Iterator0_2_t72427F307E745E32CC54F0508FBB2CE01CFE0B50, ___U24current_4)); }
	inline RuntimeObject * get_U24current_4() const { return ___U24current_4; }
	inline RuntimeObject ** get_address_of_U24current_4() { return &___U24current_4; }
	inline void set_U24current_4(RuntimeObject * value)
	{
		___U24current_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U24current_4), (void*)value);
	}

	inline static int32_t get_offset_of_U24disposing_5() { return static_cast<int32_t>(offsetof(U3CProcessMatchResponseU3Ec__Iterator0_2_t72427F307E745E32CC54F0508FBB2CE01CFE0B50, ___U24disposing_5)); }
	inline bool get_U24disposing_5() const { return ___U24disposing_5; }
	inline bool* get_address_of_U24disposing_5() { return &___U24disposing_5; }
	inline void set_U24disposing_5(bool value)
	{
		___U24disposing_5 = value;
	}

	inline static int32_t get_offset_of_U24PC_6() { return static_cast<int32_t>(offsetof(U3CProcessMatchResponseU3Ec__Iterator0_2_t72427F307E745E32CC54F0508FBB2CE01CFE0B50, ___U24PC_6)); }
	inline int32_t get_U24PC_6() const { return ___U24PC_6; }
	inline int32_t* get_address_of_U24PC_6() { return &___U24PC_6; }
	inline void set_U24PC_6(int32_t value)
	{
		___U24PC_6 = value;
	}
};


// UnityEngine.Networking.Match.Response
struct  Response_tE3D1110D7F08CC65754EE4BF0F780D24FEB37742  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.Networking.Match.Response::success
	bool ___success_0;
	// System.String UnityEngine.Networking.Match.Response::extendedInfo
	String_t* ___extendedInfo_1;

public:
	inline static int32_t get_offset_of_success_0() { return static_cast<int32_t>(offsetof(Response_tE3D1110D7F08CC65754EE4BF0F780D24FEB37742, ___success_0)); }
	inline bool get_success_0() const { return ___success_0; }
	inline bool* get_address_of_success_0() { return &___success_0; }
	inline void set_success_0(bool value)
	{
		___success_0 = value;
	}

	inline static int32_t get_offset_of_extendedInfo_1() { return static_cast<int32_t>(offsetof(Response_tE3D1110D7F08CC65754EE4BF0F780D24FEB37742, ___extendedInfo_1)); }
	inline String_t* get_extendedInfo_1() const { return ___extendedInfo_1; }
	inline String_t** get_address_of_extendedInfo_1() { return &___extendedInfo_1; }
	inline void set_extendedInfo_1(String_t* value)
	{
		___extendedInfo_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___extendedInfo_1), (void*)value);
	}
};


// UnityEngine.Networking.NetworkReader
struct  NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12  : public RuntimeObject
{
public:
	// UnityEngine.Networking.NetBuffer UnityEngine.Networking.NetworkReader::m_buf
	NetBuffer_t2BA43CF3688776F372BECD54D28F90CB0559B36C * ___m_buf_0;

public:
	inline static int32_t get_offset_of_m_buf_0() { return static_cast<int32_t>(offsetof(NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12, ___m_buf_0)); }
	inline NetBuffer_t2BA43CF3688776F372BECD54D28F90CB0559B36C * get_m_buf_0() const { return ___m_buf_0; }
	inline NetBuffer_t2BA43CF3688776F372BECD54D28F90CB0559B36C ** get_address_of_m_buf_0() { return &___m_buf_0; }
	inline void set_m_buf_0(NetBuffer_t2BA43CF3688776F372BECD54D28F90CB0559B36C * value)
	{
		___m_buf_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_buf_0), (void*)value);
	}
};

struct NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12_StaticFields
{
public:
	// System.Byte[] UnityEngine.Networking.NetworkReader::s_StringReaderBuffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___s_StringReaderBuffer_3;
	// System.Text.Encoding UnityEngine.Networking.NetworkReader::s_Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___s_Encoding_4;

public:
	inline static int32_t get_offset_of_s_StringReaderBuffer_3() { return static_cast<int32_t>(offsetof(NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12_StaticFields, ___s_StringReaderBuffer_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_s_StringReaderBuffer_3() const { return ___s_StringReaderBuffer_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_s_StringReaderBuffer_3() { return &___s_StringReaderBuffer_3; }
	inline void set_s_StringReaderBuffer_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___s_StringReaderBuffer_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_StringReaderBuffer_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_Encoding_4() { return static_cast<int32_t>(offsetof(NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12_StaticFields, ___s_Encoding_4)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_s_Encoding_4() const { return ___s_Encoding_4; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_s_Encoding_4() { return &___s_Encoding_4; }
	inline void set_s_Encoding_4(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___s_Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Encoding_4), (void*)value);
	}
};


// UnityEngine.Networking.SyncList`1<System.Boolean>
struct  SyncList_1_tDDF00E08E649A86264E50205CB99495D1AD2E8D0  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<T> UnityEngine.Networking.SyncList`1::m_Objects
	List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 * ___m_Objects_0;
	// UnityEngine.Networking.NetworkBehaviour UnityEngine.Networking.SyncList`1::m_Behaviour
	NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * ___m_Behaviour_1;
	// System.Int32 UnityEngine.Networking.SyncList`1::m_CmdHash
	int32_t ___m_CmdHash_2;
	// UnityEngine.Networking.SyncList`1_SyncListChanged<T> UnityEngine.Networking.SyncList`1::m_Callback
	SyncListChanged_t5156E5B2411DE07D5AEA8F98B87E4FBD1E626D6E * ___m_Callback_3;

public:
	inline static int32_t get_offset_of_m_Objects_0() { return static_cast<int32_t>(offsetof(SyncList_1_tDDF00E08E649A86264E50205CB99495D1AD2E8D0, ___m_Objects_0)); }
	inline List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 * get_m_Objects_0() const { return ___m_Objects_0; }
	inline List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 ** get_address_of_m_Objects_0() { return &___m_Objects_0; }
	inline void set_m_Objects_0(List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 * value)
	{
		___m_Objects_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Objects_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Behaviour_1() { return static_cast<int32_t>(offsetof(SyncList_1_tDDF00E08E649A86264E50205CB99495D1AD2E8D0, ___m_Behaviour_1)); }
	inline NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * get_m_Behaviour_1() const { return ___m_Behaviour_1; }
	inline NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C ** get_address_of_m_Behaviour_1() { return &___m_Behaviour_1; }
	inline void set_m_Behaviour_1(NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * value)
	{
		___m_Behaviour_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Behaviour_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CmdHash_2() { return static_cast<int32_t>(offsetof(SyncList_1_tDDF00E08E649A86264E50205CB99495D1AD2E8D0, ___m_CmdHash_2)); }
	inline int32_t get_m_CmdHash_2() const { return ___m_CmdHash_2; }
	inline int32_t* get_address_of_m_CmdHash_2() { return &___m_CmdHash_2; }
	inline void set_m_CmdHash_2(int32_t value)
	{
		___m_CmdHash_2 = value;
	}

	inline static int32_t get_offset_of_m_Callback_3() { return static_cast<int32_t>(offsetof(SyncList_1_tDDF00E08E649A86264E50205CB99495D1AD2E8D0, ___m_Callback_3)); }
	inline SyncListChanged_t5156E5B2411DE07D5AEA8F98B87E4FBD1E626D6E * get_m_Callback_3() const { return ___m_Callback_3; }
	inline SyncListChanged_t5156E5B2411DE07D5AEA8F98B87E4FBD1E626D6E ** get_address_of_m_Callback_3() { return &___m_Callback_3; }
	inline void set_m_Callback_3(SyncListChanged_t5156E5B2411DE07D5AEA8F98B87E4FBD1E626D6E * value)
	{
		___m_Callback_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Callback_3), (void*)value);
	}
};


// UnityEngine.Networking.SyncList`1<System.Int32>
struct  SyncList_1_t8595ACD08C8686AC9547A225ACF209C171FF0665  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<T> UnityEngine.Networking.SyncList`1::m_Objects
	List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___m_Objects_0;
	// UnityEngine.Networking.NetworkBehaviour UnityEngine.Networking.SyncList`1::m_Behaviour
	NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * ___m_Behaviour_1;
	// System.Int32 UnityEngine.Networking.SyncList`1::m_CmdHash
	int32_t ___m_CmdHash_2;
	// UnityEngine.Networking.SyncList`1_SyncListChanged<T> UnityEngine.Networking.SyncList`1::m_Callback
	SyncListChanged_t1A1EBC018732CBF3B1F86CE21BE59B5107844339 * ___m_Callback_3;

public:
	inline static int32_t get_offset_of_m_Objects_0() { return static_cast<int32_t>(offsetof(SyncList_1_t8595ACD08C8686AC9547A225ACF209C171FF0665, ___m_Objects_0)); }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * get_m_Objects_0() const { return ___m_Objects_0; }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 ** get_address_of_m_Objects_0() { return &___m_Objects_0; }
	inline void set_m_Objects_0(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * value)
	{
		___m_Objects_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Objects_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Behaviour_1() { return static_cast<int32_t>(offsetof(SyncList_1_t8595ACD08C8686AC9547A225ACF209C171FF0665, ___m_Behaviour_1)); }
	inline NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * get_m_Behaviour_1() const { return ___m_Behaviour_1; }
	inline NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C ** get_address_of_m_Behaviour_1() { return &___m_Behaviour_1; }
	inline void set_m_Behaviour_1(NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * value)
	{
		___m_Behaviour_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Behaviour_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CmdHash_2() { return static_cast<int32_t>(offsetof(SyncList_1_t8595ACD08C8686AC9547A225ACF209C171FF0665, ___m_CmdHash_2)); }
	inline int32_t get_m_CmdHash_2() const { return ___m_CmdHash_2; }
	inline int32_t* get_address_of_m_CmdHash_2() { return &___m_CmdHash_2; }
	inline void set_m_CmdHash_2(int32_t value)
	{
		___m_CmdHash_2 = value;
	}

	inline static int32_t get_offset_of_m_Callback_3() { return static_cast<int32_t>(offsetof(SyncList_1_t8595ACD08C8686AC9547A225ACF209C171FF0665, ___m_Callback_3)); }
	inline SyncListChanged_t1A1EBC018732CBF3B1F86CE21BE59B5107844339 * get_m_Callback_3() const { return ___m_Callback_3; }
	inline SyncListChanged_t1A1EBC018732CBF3B1F86CE21BE59B5107844339 ** get_address_of_m_Callback_3() { return &___m_Callback_3; }
	inline void set_m_Callback_3(SyncListChanged_t1A1EBC018732CBF3B1F86CE21BE59B5107844339 * value)
	{
		___m_Callback_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Callback_3), (void*)value);
	}
};


// UnityEngine.Networking.SyncList`1<System.Object>
struct  SyncList_1_tDC9BD47B0C55962FA07DEC77A578A1F5231B0238  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<T> UnityEngine.Networking.SyncList`1::m_Objects
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___m_Objects_0;
	// UnityEngine.Networking.NetworkBehaviour UnityEngine.Networking.SyncList`1::m_Behaviour
	NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * ___m_Behaviour_1;
	// System.Int32 UnityEngine.Networking.SyncList`1::m_CmdHash
	int32_t ___m_CmdHash_2;
	// UnityEngine.Networking.SyncList`1_SyncListChanged<T> UnityEngine.Networking.SyncList`1::m_Callback
	SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 * ___m_Callback_3;

public:
	inline static int32_t get_offset_of_m_Objects_0() { return static_cast<int32_t>(offsetof(SyncList_1_tDC9BD47B0C55962FA07DEC77A578A1F5231B0238, ___m_Objects_0)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_m_Objects_0() const { return ___m_Objects_0; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_m_Objects_0() { return &___m_Objects_0; }
	inline void set_m_Objects_0(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___m_Objects_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Objects_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Behaviour_1() { return static_cast<int32_t>(offsetof(SyncList_1_tDC9BD47B0C55962FA07DEC77A578A1F5231B0238, ___m_Behaviour_1)); }
	inline NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * get_m_Behaviour_1() const { return ___m_Behaviour_1; }
	inline NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C ** get_address_of_m_Behaviour_1() { return &___m_Behaviour_1; }
	inline void set_m_Behaviour_1(NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * value)
	{
		___m_Behaviour_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Behaviour_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CmdHash_2() { return static_cast<int32_t>(offsetof(SyncList_1_tDC9BD47B0C55962FA07DEC77A578A1F5231B0238, ___m_CmdHash_2)); }
	inline int32_t get_m_CmdHash_2() const { return ___m_CmdHash_2; }
	inline int32_t* get_address_of_m_CmdHash_2() { return &___m_CmdHash_2; }
	inline void set_m_CmdHash_2(int32_t value)
	{
		___m_CmdHash_2 = value;
	}

	inline static int32_t get_offset_of_m_Callback_3() { return static_cast<int32_t>(offsetof(SyncList_1_tDC9BD47B0C55962FA07DEC77A578A1F5231B0238, ___m_Callback_3)); }
	inline SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 * get_m_Callback_3() const { return ___m_Callback_3; }
	inline SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 ** get_address_of_m_Callback_3() { return &___m_Callback_3; }
	inline void set_m_Callback_3(SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 * value)
	{
		___m_Callback_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Callback_3), (void*)value);
	}
};


// UnityEngine.Networking.SyncList`1<System.Single>
struct  SyncList_1_tDEB03E3C5252571915662095C7060998910FD0A2  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<T> UnityEngine.Networking.SyncList`1::m_Objects
	List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 * ___m_Objects_0;
	// UnityEngine.Networking.NetworkBehaviour UnityEngine.Networking.SyncList`1::m_Behaviour
	NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * ___m_Behaviour_1;
	// System.Int32 UnityEngine.Networking.SyncList`1::m_CmdHash
	int32_t ___m_CmdHash_2;
	// UnityEngine.Networking.SyncList`1_SyncListChanged<T> UnityEngine.Networking.SyncList`1::m_Callback
	SyncListChanged_t63BE6CD22C2B89F865722BF980F4351DF0EC68D6 * ___m_Callback_3;

public:
	inline static int32_t get_offset_of_m_Objects_0() { return static_cast<int32_t>(offsetof(SyncList_1_tDEB03E3C5252571915662095C7060998910FD0A2, ___m_Objects_0)); }
	inline List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 * get_m_Objects_0() const { return ___m_Objects_0; }
	inline List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 ** get_address_of_m_Objects_0() { return &___m_Objects_0; }
	inline void set_m_Objects_0(List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 * value)
	{
		___m_Objects_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Objects_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Behaviour_1() { return static_cast<int32_t>(offsetof(SyncList_1_tDEB03E3C5252571915662095C7060998910FD0A2, ___m_Behaviour_1)); }
	inline NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * get_m_Behaviour_1() const { return ___m_Behaviour_1; }
	inline NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C ** get_address_of_m_Behaviour_1() { return &___m_Behaviour_1; }
	inline void set_m_Behaviour_1(NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * value)
	{
		___m_Behaviour_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Behaviour_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CmdHash_2() { return static_cast<int32_t>(offsetof(SyncList_1_tDEB03E3C5252571915662095C7060998910FD0A2, ___m_CmdHash_2)); }
	inline int32_t get_m_CmdHash_2() const { return ___m_CmdHash_2; }
	inline int32_t* get_address_of_m_CmdHash_2() { return &___m_CmdHash_2; }
	inline void set_m_CmdHash_2(int32_t value)
	{
		___m_CmdHash_2 = value;
	}

	inline static int32_t get_offset_of_m_Callback_3() { return static_cast<int32_t>(offsetof(SyncList_1_tDEB03E3C5252571915662095C7060998910FD0A2, ___m_Callback_3)); }
	inline SyncListChanged_t63BE6CD22C2B89F865722BF980F4351DF0EC68D6 * get_m_Callback_3() const { return ___m_Callback_3; }
	inline SyncListChanged_t63BE6CD22C2B89F865722BF980F4351DF0EC68D6 ** get_address_of_m_Callback_3() { return &___m_Callback_3; }
	inline void set_m_Callback_3(SyncListChanged_t63BE6CD22C2B89F865722BF980F4351DF0EC68D6 * value)
	{
		___m_Callback_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Callback_3), (void*)value);
	}
};


// UnityEngine.Networking.SyncList`1<System.UInt32>
struct  SyncList_1_t6931FBA5633802C1CAE04093D0C6D9C88EE66627  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<T> UnityEngine.Networking.SyncList`1::m_Objects
	List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 * ___m_Objects_0;
	// UnityEngine.Networking.NetworkBehaviour UnityEngine.Networking.SyncList`1::m_Behaviour
	NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * ___m_Behaviour_1;
	// System.Int32 UnityEngine.Networking.SyncList`1::m_CmdHash
	int32_t ___m_CmdHash_2;
	// UnityEngine.Networking.SyncList`1_SyncListChanged<T> UnityEngine.Networking.SyncList`1::m_Callback
	SyncListChanged_t1804C1A09093327076629C515EC006A30F38C1B8 * ___m_Callback_3;

public:
	inline static int32_t get_offset_of_m_Objects_0() { return static_cast<int32_t>(offsetof(SyncList_1_t6931FBA5633802C1CAE04093D0C6D9C88EE66627, ___m_Objects_0)); }
	inline List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 * get_m_Objects_0() const { return ___m_Objects_0; }
	inline List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 ** get_address_of_m_Objects_0() { return &___m_Objects_0; }
	inline void set_m_Objects_0(List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 * value)
	{
		___m_Objects_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Objects_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Behaviour_1() { return static_cast<int32_t>(offsetof(SyncList_1_t6931FBA5633802C1CAE04093D0C6D9C88EE66627, ___m_Behaviour_1)); }
	inline NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * get_m_Behaviour_1() const { return ___m_Behaviour_1; }
	inline NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C ** get_address_of_m_Behaviour_1() { return &___m_Behaviour_1; }
	inline void set_m_Behaviour_1(NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * value)
	{
		___m_Behaviour_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Behaviour_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CmdHash_2() { return static_cast<int32_t>(offsetof(SyncList_1_t6931FBA5633802C1CAE04093D0C6D9C88EE66627, ___m_CmdHash_2)); }
	inline int32_t get_m_CmdHash_2() const { return ___m_CmdHash_2; }
	inline int32_t* get_address_of_m_CmdHash_2() { return &___m_CmdHash_2; }
	inline void set_m_CmdHash_2(int32_t value)
	{
		___m_CmdHash_2 = value;
	}

	inline static int32_t get_offset_of_m_Callback_3() { return static_cast<int32_t>(offsetof(SyncList_1_t6931FBA5633802C1CAE04093D0C6D9C88EE66627, ___m_Callback_3)); }
	inline SyncListChanged_t1804C1A09093327076629C515EC006A30F38C1B8 * get_m_Callback_3() const { return ___m_Callback_3; }
	inline SyncListChanged_t1804C1A09093327076629C515EC006A30F38C1B8 ** get_address_of_m_Callback_3() { return &___m_Callback_3; }
	inline void set_m_Callback_3(SyncListChanged_t1804C1A09093327076629C515EC006A30F38C1B8 * value)
	{
		___m_Callback_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Callback_3), (void*)value);
	}
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
struct  IndexedSet_1_t240606B62D2B3D9912AED248655C0479DD5BDE0C  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<T> UnityEngine.UI.Collections.IndexedSet`1::m_List
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___m_List_0;
	// System.Collections.Generic.Dictionary`2<T,System.Int32> UnityEngine.UI.Collections.IndexedSet`1::m_Dictionary
	Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * ___m_Dictionary_1;

public:
	inline static int32_t get_offset_of_m_List_0() { return static_cast<int32_t>(offsetof(IndexedSet_1_t240606B62D2B3D9912AED248655C0479DD5BDE0C, ___m_List_0)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_m_List_0() const { return ___m_List_0; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_m_List_0() { return &___m_List_0; }
	inline void set_m_List_0(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___m_List_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_List_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Dictionary_1() { return static_cast<int32_t>(offsetof(IndexedSet_1_t240606B62D2B3D9912AED248655C0479DD5BDE0C, ___m_Dictionary_1)); }
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
struct  ListPool_1_tCDBE9EE6C0FC882FB66BA0B6D36CA8E17652B15A  : public RuntimeObject
{
public:

public:
};

struct ListPool_1_tCDBE9EE6C0FC882FB66BA0B6D36CA8E17652B15A_StaticFields
{
public:
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::s_ListPool
	ObjectPool_1_tE40D9BEC5B067540DB2F9331C8AD1F3B071F974B * ___s_ListPool_0;

public:
	inline static int32_t get_offset_of_s_ListPool_0() { return static_cast<int32_t>(offsetof(ListPool_1_tCDBE9EE6C0FC882FB66BA0B6D36CA8E17652B15A_StaticFields, ___s_ListPool_0)); }
	inline ObjectPool_1_tE40D9BEC5B067540DB2F9331C8AD1F3B071F974B * get_s_ListPool_0() const { return ___s_ListPool_0; }
	inline ObjectPool_1_tE40D9BEC5B067540DB2F9331C8AD1F3B071F974B ** get_address_of_s_ListPool_0() { return &___s_ListPool_0; }
	inline void set_s_ListPool_0(ObjectPool_1_tE40D9BEC5B067540DB2F9331C8AD1F3B071F974B * value)
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
	ObjectPool_1_t3A70BDB59315D0B41F26C2019575B584BE9816CE * ___s_ListPool_0;

public:
	inline static int32_t get_offset_of_s_ListPool_0() { return static_cast<int32_t>(offsetof(ListPool_1_t66B0CA6885E680896C9747F9C0E28458D59743BE_StaticFields, ___s_ListPool_0)); }
	inline ObjectPool_1_t3A70BDB59315D0B41F26C2019575B584BE9816CE * get_s_ListPool_0() const { return ___s_ListPool_0; }
	inline ObjectPool_1_t3A70BDB59315D0B41F26C2019575B584BE9816CE ** get_address_of_s_ListPool_0() { return &___s_ListPool_0; }
	inline void set_s_ListPool_0(ObjectPool_1_t3A70BDB59315D0B41F26C2019575B584BE9816CE * value)
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
	ObjectPool_1_tA42695C1C422850E35146976898DA19272914AC8 * ___s_ListPool_0;

public:
	inline static int32_t get_offset_of_s_ListPool_0() { return static_cast<int32_t>(offsetof(ListPool_1_tFB4F0894A1EF21042E633BD1514A9258601CB1F1_StaticFields, ___s_ListPool_0)); }
	inline ObjectPool_1_tA42695C1C422850E35146976898DA19272914AC8 * get_s_ListPool_0() const { return ___s_ListPool_0; }
	inline ObjectPool_1_tA42695C1C422850E35146976898DA19272914AC8 ** get_address_of_s_ListPool_0() { return &___s_ListPool_0; }
	inline void set_s_ListPool_0(ObjectPool_1_tA42695C1C422850E35146976898DA19272914AC8 * value)
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
	ObjectPool_1_t8C6F590942FFC5DFF0DF79569711056BE7883062 * ___s_ListPool_0;

public:
	inline static int32_t get_offset_of_s_ListPool_0() { return static_cast<int32_t>(offsetof(ListPool_1_tC140413ABBDAF87428D43AA5EFDD842394341CF6_StaticFields, ___s_ListPool_0)); }
	inline ObjectPool_1_t8C6F590942FFC5DFF0DF79569711056BE7883062 * get_s_ListPool_0() const { return ___s_ListPool_0; }
	inline ObjectPool_1_t8C6F590942FFC5DFF0DF79569711056BE7883062 ** get_address_of_s_ListPool_0() { return &___s_ListPool_0; }
	inline void set_s_ListPool_0(ObjectPool_1_t8C6F590942FFC5DFF0DF79569711056BE7883062 * value)
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
	ObjectPool_1_t592C52579DFFCDED9A816AE87CA33C2A992F7E26 * ___s_ListPool_0;

public:
	inline static int32_t get_offset_of_s_ListPool_0() { return static_cast<int32_t>(offsetof(ListPool_1_tEC2CD2FE52DC3A8B1F3E2BF498E60420B6ABDDF8_StaticFields, ___s_ListPool_0)); }
	inline ObjectPool_1_t592C52579DFFCDED9A816AE87CA33C2A992F7E26 * get_s_ListPool_0() const { return ___s_ListPool_0; }
	inline ObjectPool_1_t592C52579DFFCDED9A816AE87CA33C2A992F7E26 ** get_address_of_s_ListPool_0() { return &___s_ListPool_0; }
	inline void set_s_ListPool_0(ObjectPool_1_t592C52579DFFCDED9A816AE87CA33C2A992F7E26 * value)
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
	ObjectPool_1_t559B14380295E744507B0BF258F6EB60B6D3B902 * ___s_ListPool_0;

public:
	inline static int32_t get_offset_of_s_ListPool_0() { return static_cast<int32_t>(offsetof(ListPool_1_t5E8D36B177BEE61E319DF7927E463DFBAC58E09D_StaticFields, ___s_ListPool_0)); }
	inline ObjectPool_1_t559B14380295E744507B0BF258F6EB60B6D3B902 * get_s_ListPool_0() const { return ___s_ListPool_0; }
	inline ObjectPool_1_t559B14380295E744507B0BF258F6EB60B6D3B902 ** get_address_of_s_ListPool_0() { return &___s_ListPool_0; }
	inline void set_s_ListPool_0(ObjectPool_1_t559B14380295E744507B0BF258F6EB60B6D3B902 * value)
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
	ObjectPool_1_tB6CF67DEBE320D035ADE0A7E0AB9B2C8F96E7338 * ___s_ListPool_0;

public:
	inline static int32_t get_offset_of_s_ListPool_0() { return static_cast<int32_t>(offsetof(ListPool_1_tD46C00F7C693AF94203B6B004906149A661AA540_StaticFields, ___s_ListPool_0)); }
	inline ObjectPool_1_tB6CF67DEBE320D035ADE0A7E0AB9B2C8F96E7338 * get_s_ListPool_0() const { return ___s_ListPool_0; }
	inline ObjectPool_1_tB6CF67DEBE320D035ADE0A7E0AB9B2C8F96E7338 ** get_address_of_s_ListPool_0() { return &___s_ListPool_0; }
	inline void set_s_ListPool_0(ObjectPool_1_tB6CF67DEBE320D035ADE0A7E0AB9B2C8F96E7338 * value)
	{
		___s_ListPool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ListPool_0), (void*)value);
	}
};


// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Int32>>
struct  ObjectPool_1_tE40D9BEC5B067540DB2F9331C8AD1F3B071F974B  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_tD844FBAA7E7F6C2AE4AB607F96FC1DB969C7B071 * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_tCFF1D446AB859368D0E404A2D6738C98E10FCC6A * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_tCFF1D446AB859368D0E404A2D6738C98E10FCC6A * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_tE40D9BEC5B067540DB2F9331C8AD1F3B071F974B, ___m_Stack_0)); }
	inline Stack_1_tD844FBAA7E7F6C2AE4AB607F96FC1DB969C7B071 * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_tD844FBAA7E7F6C2AE4AB607F96FC1DB969C7B071 ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_tD844FBAA7E7F6C2AE4AB607F96FC1DB969C7B071 * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Stack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_tE40D9BEC5B067540DB2F9331C8AD1F3B071F974B, ___m_ActionOnGet_1)); }
	inline UnityAction_1_tCFF1D446AB859368D0E404A2D6738C98E10FCC6A * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_tCFF1D446AB859368D0E404A2D6738C98E10FCC6A ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_tCFF1D446AB859368D0E404A2D6738C98E10FCC6A * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnGet_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_tE40D9BEC5B067540DB2F9331C8AD1F3B071F974B, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_tCFF1D446AB859368D0E404A2D6738C98E10FCC6A * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_tCFF1D446AB859368D0E404A2D6738C98E10FCC6A ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_tCFF1D446AB859368D0E404A2D6738C98E10FCC6A * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnRelease_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_tE40D9BEC5B067540DB2F9331C8AD1F3B071F974B, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};


// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Object>>
struct  ObjectPool_1_t3A70BDB59315D0B41F26C2019575B584BE9816CE  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_t96AD2B51E90CA005961D57AFF08B2E4399221839 * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_t37A77CD76DBB81733157A401AB7F0E8B10692A0C * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_t37A77CD76DBB81733157A401AB7F0E8B10692A0C * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_t3A70BDB59315D0B41F26C2019575B584BE9816CE, ___m_Stack_0)); }
	inline Stack_1_t96AD2B51E90CA005961D57AFF08B2E4399221839 * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_t96AD2B51E90CA005961D57AFF08B2E4399221839 ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_t96AD2B51E90CA005961D57AFF08B2E4399221839 * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Stack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_t3A70BDB59315D0B41F26C2019575B584BE9816CE, ___m_ActionOnGet_1)); }
	inline UnityAction_1_t37A77CD76DBB81733157A401AB7F0E8B10692A0C * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_t37A77CD76DBB81733157A401AB7F0E8B10692A0C ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_t37A77CD76DBB81733157A401AB7F0E8B10692A0C * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnGet_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_t3A70BDB59315D0B41F26C2019575B584BE9816CE, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_t37A77CD76DBB81733157A401AB7F0E8B10692A0C * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_t37A77CD76DBB81733157A401AB7F0E8B10692A0C ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_t37A77CD76DBB81733157A401AB7F0E8B10692A0C * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnRelease_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_t3A70BDB59315D0B41F26C2019575B584BE9816CE, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};


// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Color32>>
struct  ObjectPool_1_tA42695C1C422850E35146976898DA19272914AC8  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_tD3686B49BE87370A979ADAFA6DEAAE30B3FB6452 * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_tBFC448984D861333BFB83317707C2F208D61E3D1 * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_tBFC448984D861333BFB83317707C2F208D61E3D1 * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_tA42695C1C422850E35146976898DA19272914AC8, ___m_Stack_0)); }
	inline Stack_1_tD3686B49BE87370A979ADAFA6DEAAE30B3FB6452 * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_tD3686B49BE87370A979ADAFA6DEAAE30B3FB6452 ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_tD3686B49BE87370A979ADAFA6DEAAE30B3FB6452 * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Stack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_tA42695C1C422850E35146976898DA19272914AC8, ___m_ActionOnGet_1)); }
	inline UnityAction_1_tBFC448984D861333BFB83317707C2F208D61E3D1 * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_tBFC448984D861333BFB83317707C2F208D61E3D1 ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_tBFC448984D861333BFB83317707C2F208D61E3D1 * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnGet_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_tA42695C1C422850E35146976898DA19272914AC8, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_tBFC448984D861333BFB83317707C2F208D61E3D1 * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_tBFC448984D861333BFB83317707C2F208D61E3D1 ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_tBFC448984D861333BFB83317707C2F208D61E3D1 * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnRelease_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_tA42695C1C422850E35146976898DA19272914AC8, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};


// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct  ObjectPool_1_t8C6F590942FFC5DFF0DF79569711056BE7883062  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_tDDB642ED18C289FF860C44FD24B801BAC507139A * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_t6CAED93F6613F01731695AAC7F8201ABB209CC0A * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_t6CAED93F6613F01731695AAC7F8201ABB209CC0A * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_t8C6F590942FFC5DFF0DF79569711056BE7883062, ___m_Stack_0)); }
	inline Stack_1_tDDB642ED18C289FF860C44FD24B801BAC507139A * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_tDDB642ED18C289FF860C44FD24B801BAC507139A ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_tDDB642ED18C289FF860C44FD24B801BAC507139A * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Stack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_t8C6F590942FFC5DFF0DF79569711056BE7883062, ___m_ActionOnGet_1)); }
	inline UnityAction_1_t6CAED93F6613F01731695AAC7F8201ABB209CC0A * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_t6CAED93F6613F01731695AAC7F8201ABB209CC0A ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_t6CAED93F6613F01731695AAC7F8201ABB209CC0A * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnGet_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_t8C6F590942FFC5DFF0DF79569711056BE7883062, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_t6CAED93F6613F01731695AAC7F8201ABB209CC0A * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_t6CAED93F6613F01731695AAC7F8201ABB209CC0A ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_t6CAED93F6613F01731695AAC7F8201ABB209CC0A * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnRelease_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_t8C6F590942FFC5DFF0DF79569711056BE7883062, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};


// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Vector2>>
struct  ObjectPool_1_t592C52579DFFCDED9A816AE87CA33C2A992F7E26  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_t6CD8A23D0684D010CD60BE0EC39253502CB8D20D * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_tAF537B97BFBDAFB0D27DBBE2DC414D654B6C41EC * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_tAF537B97BFBDAFB0D27DBBE2DC414D654B6C41EC * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_t592C52579DFFCDED9A816AE87CA33C2A992F7E26, ___m_Stack_0)); }
	inline Stack_1_t6CD8A23D0684D010CD60BE0EC39253502CB8D20D * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_t6CD8A23D0684D010CD60BE0EC39253502CB8D20D ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_t6CD8A23D0684D010CD60BE0EC39253502CB8D20D * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Stack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_t592C52579DFFCDED9A816AE87CA33C2A992F7E26, ___m_ActionOnGet_1)); }
	inline UnityAction_1_tAF537B97BFBDAFB0D27DBBE2DC414D654B6C41EC * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_tAF537B97BFBDAFB0D27DBBE2DC414D654B6C41EC ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_tAF537B97BFBDAFB0D27DBBE2DC414D654B6C41EC * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnGet_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_t592C52579DFFCDED9A816AE87CA33C2A992F7E26, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_tAF537B97BFBDAFB0D27DBBE2DC414D654B6C41EC * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_tAF537B97BFBDAFB0D27DBBE2DC414D654B6C41EC ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_tAF537B97BFBDAFB0D27DBBE2DC414D654B6C41EC * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnRelease_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_t592C52579DFFCDED9A816AE87CA33C2A992F7E26, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};


// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>
struct  ObjectPool_1_t559B14380295E744507B0BF258F6EB60B6D3B902  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_tB88789DF6FEC373BE3216AC28D17A22FDB65D489 * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_tFFEAFE33FC07D89E336EC0E8863403BAC10853CA * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_tFFEAFE33FC07D89E336EC0E8863403BAC10853CA * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_t559B14380295E744507B0BF258F6EB60B6D3B902, ___m_Stack_0)); }
	inline Stack_1_tB88789DF6FEC373BE3216AC28D17A22FDB65D489 * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_tB88789DF6FEC373BE3216AC28D17A22FDB65D489 ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_tB88789DF6FEC373BE3216AC28D17A22FDB65D489 * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Stack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_t559B14380295E744507B0BF258F6EB60B6D3B902, ___m_ActionOnGet_1)); }
	inline UnityAction_1_tFFEAFE33FC07D89E336EC0E8863403BAC10853CA * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_tFFEAFE33FC07D89E336EC0E8863403BAC10853CA ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_tFFEAFE33FC07D89E336EC0E8863403BAC10853CA * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnGet_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_t559B14380295E744507B0BF258F6EB60B6D3B902, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_tFFEAFE33FC07D89E336EC0E8863403BAC10853CA * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_tFFEAFE33FC07D89E336EC0E8863403BAC10853CA ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_tFFEAFE33FC07D89E336EC0E8863403BAC10853CA * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnRelease_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_t559B14380295E744507B0BF258F6EB60B6D3B902, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};


// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Vector4>>
struct  ObjectPool_1_tB6CF67DEBE320D035ADE0A7E0AB9B2C8F96E7338  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_tCFA2A645438950A02F8F2217C68D78686F8FDABB * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_t4CA653A7B54DA3D30EC370F89843FDF53F602008 * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_t4CA653A7B54DA3D30EC370F89843FDF53F602008 * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_tB6CF67DEBE320D035ADE0A7E0AB9B2C8F96E7338, ___m_Stack_0)); }
	inline Stack_1_tCFA2A645438950A02F8F2217C68D78686F8FDABB * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_tCFA2A645438950A02F8F2217C68D78686F8FDABB ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_tCFA2A645438950A02F8F2217C68D78686F8FDABB * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Stack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_tB6CF67DEBE320D035ADE0A7E0AB9B2C8F96E7338, ___m_ActionOnGet_1)); }
	inline UnityAction_1_t4CA653A7B54DA3D30EC370F89843FDF53F602008 * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_t4CA653A7B54DA3D30EC370F89843FDF53F602008 ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_t4CA653A7B54DA3D30EC370F89843FDF53F602008 * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnGet_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_tB6CF67DEBE320D035ADE0A7E0AB9B2C8F96E7338, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_t4CA653A7B54DA3D30EC370F89843FDF53F602008 * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_t4CA653A7B54DA3D30EC370F89843FDF53F602008 ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_t4CA653A7B54DA3D30EC370F89843FDF53F602008 * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnRelease_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_tB6CF67DEBE320D035ADE0A7E0AB9B2C8F96E7338, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};


// UnityEngine.UI.ObjectPool`1<System.Object>
struct  ObjectPool_1_t3EF1AC01FF09BFF602D9F00F7E9C508ED5883E9B  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_t3EF1AC01FF09BFF602D9F00F7E9C508ED5883E9B, ___m_Stack_0)); }
	inline Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Stack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_t3EF1AC01FF09BFF602D9F00F7E9C508ED5883E9B, ___m_ActionOnGet_1)); }
	inline UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnGet_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_t3EF1AC01FF09BFF602D9F00F7E9C508ED5883E9B, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnRelease_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_t3EF1AC01FF09BFF602D9F00F7E9C508ED5883E9B, ___U3CcountAllU3Ek__BackingField_3)); }
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


// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Char
struct  Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<System.Boolean>
struct  Enumerator_t70B763692CD8F7854E25DF83069FA76B7C4C7783 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	bool ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t70B763692CD8F7854E25DF83069FA76B7C4C7783, ___list_0)); }
	inline List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 * get_list_0() const { return ___list_0; }
	inline List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t70B763692CD8F7854E25DF83069FA76B7C4C7783, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t70B763692CD8F7854E25DF83069FA76B7C4C7783, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t70B763692CD8F7854E25DF83069FA76B7C4C7783, ___current_3)); }
	inline bool get_current_3() const { return ___current_3; }
	inline bool* get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(bool value)
	{
		___current_3 = value;
	}
};


// System.Collections.Generic.List`1_Enumerator<System.Int32>
struct  Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	int32_t ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C, ___list_0)); }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * get_list_0() const { return ___list_0; }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C, ___current_3)); }
	inline int32_t get_current_3() const { return ___current_3; }
	inline int32_t* get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(int32_t value)
	{
		___current_3 = value;
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


// System.Collections.Generic.List`1_Enumerator<System.Single>
struct  Enumerator_tFAFBEAFCC7B8C7F0A58F04A243A8773B576C4EFD 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	float ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tFAFBEAFCC7B8C7F0A58F04A243A8773B576C4EFD, ___list_0)); }
	inline List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 * get_list_0() const { return ___list_0; }
	inline List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tFAFBEAFCC7B8C7F0A58F04A243A8773B576C4EFD, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tFAFBEAFCC7B8C7F0A58F04A243A8773B576C4EFD, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tFAFBEAFCC7B8C7F0A58F04A243A8773B576C4EFD, ___current_3)); }
	inline float get_current_3() const { return ___current_3; }
	inline float* get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(float value)
	{
		___current_3 = value;
	}
};


// System.Collections.Generic.List`1_Enumerator<System.UInt32>
struct  Enumerator_t6C6061565EA2787387759C1CA5549E561A4FABBC 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	uint32_t ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t6C6061565EA2787387759C1CA5549E561A4FABBC, ___list_0)); }
	inline List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 * get_list_0() const { return ___list_0; }
	inline List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t6C6061565EA2787387759C1CA5549E561A4FABBC, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t6C6061565EA2787387759C1CA5549E561A4FABBC, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t6C6061565EA2787387759C1CA5549E561A4FABBC, ___current_3)); }
	inline uint32_t get_current_3() const { return ___current_3; }
	inline uint32_t* get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(uint32_t value)
	{
		___current_3 = value;
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


// System.Reflection.MethodBase
struct  MethodBase_t  : public MemberInfo_t
{
public:

public:
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


// System.UInt32
struct  UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
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


// UnityEngine.Events.InvokableCall
struct  InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC  : public BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5
{
public:
	// UnityEngine.Events.UnityAction UnityEngine.Events.InvokableCall::Delegate
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC, ___Delegate_0)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`1<System.Boolean>
struct  InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB  : public BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5
{
public:
	// UnityEngine.Events.UnityAction`1<T1> UnityEngine.Events.InvokableCall`1::Delegate
	UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB, ___Delegate_0)); }
	inline UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`1<System.Int32>
struct  InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5  : public BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5
{
public:
	// UnityEngine.Events.UnityAction`1<T1> UnityEngine.Events.InvokableCall`1::Delegate
	UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5, ___Delegate_0)); }
	inline UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`1<System.Object>
struct  InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC  : public BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5
{
public:
	// UnityEngine.Events.UnityAction`1<T1> UnityEngine.Events.InvokableCall`1::Delegate
	UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC, ___Delegate_0)); }
	inline UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`1<System.Single>
struct  InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26  : public BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5
{
public:
	// UnityEngine.Events.UnityAction`1<T1> UnityEngine.Events.InvokableCall`1::Delegate
	UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26, ___Delegate_0)); }
	inline UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`1<UnityEngine.Color>
struct  InvokableCall_1_tC86BE910A8FD5C12EDAAF19D24E35C59C484CEAA  : public BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5
{
public:
	// UnityEngine.Events.UnityAction`1<T1> UnityEngine.Events.InvokableCall`1::Delegate
	UnityAction_1_t8523D5D21ADA168AED3BD9CFFCED8FF87199DE9D * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_1_tC86BE910A8FD5C12EDAAF19D24E35C59C484CEAA, ___Delegate_0)); }
	inline UnityAction_1_t8523D5D21ADA168AED3BD9CFFCED8FF87199DE9D * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_1_t8523D5D21ADA168AED3BD9CFFCED8FF87199DE9D ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_1_t8523D5D21ADA168AED3BD9CFFCED8FF87199DE9D * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>
struct  InvokableCall_1_t470687C56312E855046B6CC5CDC84075DFEB954E  : public BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5
{
public:
	// UnityEngine.Events.UnityAction`1<T1> UnityEngine.Events.InvokableCall`1::Delegate
	UnityAction_1_tC29A4BDE80E6622E5794F177E3DAA65BB4342B44 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_1_t470687C56312E855046B6CC5CDC84075DFEB954E, ___Delegate_0)); }
	inline UnityAction_1_tC29A4BDE80E6622E5794F177E3DAA65BB4342B44 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_1_tC29A4BDE80E6622E5794F177E3DAA65BB4342B44 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_1_tC29A4BDE80E6622E5794F177E3DAA65BB4342B44 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`1<UnityEngine.Vector3>
struct  InvokableCall_1_tA8B5CCF52E73FE7E85A4483F5DF2471E88A4194B  : public BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5
{
public:
	// UnityEngine.Events.UnityAction`1<T1> UnityEngine.Events.InvokableCall`1::Delegate
	UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_1_tA8B5CCF52E73FE7E85A4483F5DF2471E88A4194B, ___Delegate_0)); }
	inline UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`2<System.Char,System.Int32>
struct  InvokableCall_2_t221281D14257F005E5D0DF50E3819E579316088E  : public BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5
{
public:
	// UnityEngine.Events.UnityAction`2<T1,T2> UnityEngine.Events.InvokableCall`2::Delegate
	UnityAction_2_t8470724C44D27428CCDE1F8FA9C517D58A99FF9C * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_2_t221281D14257F005E5D0DF50E3819E579316088E, ___Delegate_0)); }
	inline UnityAction_2_t8470724C44D27428CCDE1F8FA9C517D58A99FF9C * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_2_t8470724C44D27428CCDE1F8FA9C517D58A99FF9C ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_2_t8470724C44D27428CCDE1F8FA9C517D58A99FF9C * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`2<System.Object,System.Object>
struct  InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E  : public BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5
{
public:
	// UnityEngine.Events.UnityAction`2<T1,T2> UnityEngine.Events.InvokableCall`2::Delegate
	UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E, ___Delegate_0)); }
	inline UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`2<UnityEngine.Vector3,UnityEngine.Vector3>
struct  InvokableCall_2_t3EAAD221313F6BD06E1AB8DA06796EE9236B3840  : public BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5
{
public:
	// UnityEngine.Events.UnityAction`2<T1,T2> UnityEngine.Events.InvokableCall`2::Delegate
	UnityAction_2_tF6C9DFC311E64D1A3FF55407E541034432E32DE2 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_2_t3EAAD221313F6BD06E1AB8DA06796EE9236B3840, ___Delegate_0)); }
	inline UnityAction_2_tF6C9DFC311E64D1A3FF55407E541034432E32DE2 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_2_tF6C9DFC311E64D1A3FF55407E541034432E32DE2 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_2_tF6C9DFC311E64D1A3FF55407E541034432E32DE2 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`3<System.Object,System.Int32,System.Int32>
struct  InvokableCall_3_t6A8BFB842DE22C189B46EBAB57685EB9778BE9ED  : public BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5
{
public:
	// UnityEngine.Events.UnityAction`3<T1,T2,T3> UnityEngine.Events.InvokableCall`3::Delegate
	UnityAction_3_t1FF48E6A020CC297A52A774322E1ABAFB7F989F7 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_3_t6A8BFB842DE22C189B46EBAB57685EB9778BE9ED, ___Delegate_0)); }
	inline UnityAction_3_t1FF48E6A020CC297A52A774322E1ABAFB7F989F7 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_3_t1FF48E6A020CC297A52A774322E1ABAFB7F989F7 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_3_t1FF48E6A020CC297A52A774322E1ABAFB7F989F7 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Int32>
struct  InvokableCall_3_t38BF33D846430AB39B24753B39023D6FA42734B5  : public BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5
{
public:
	// UnityEngine.Events.UnityAction`3<T1,T2,T3> UnityEngine.Events.InvokableCall`3::Delegate
	UnityAction_3_t2103C0F42D01FF19D30CCB1C9BA2EB2BE7BC9DCC * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_3_t38BF33D846430AB39B24753B39023D6FA42734B5, ___Delegate_0)); }
	inline UnityAction_3_t2103C0F42D01FF19D30CCB1C9BA2EB2BE7BC9DCC * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_3_t2103C0F42D01FF19D30CCB1C9BA2EB2BE7BC9DCC ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_3_t2103C0F42D01FF19D30CCB1C9BA2EB2BE7BC9DCC * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>
struct  InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D  : public BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5
{
public:
	// UnityEngine.Events.UnityAction`3<T1,T2,T3> UnityEngine.Events.InvokableCall`3::Delegate
	UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D, ___Delegate_0)); }
	inline UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>
struct  InvokableCall_4_t72FB1137599CE871685340E96EFDD317DB4831E6  : public BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5
{
public:
	// UnityEngine.Events.UnityAction`4<T1,T2,T3,T4> UnityEngine.Events.InvokableCall`4::Delegate
	UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_4_t72FB1137599CE871685340E96EFDD317DB4831E6, ___Delegate_0)); }
	inline UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct  UnityEvent_1_tE040CE348097B63925504E9E6AFCD89D46798FE3  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_tE040CE348097B63925504E9E6AFCD89D46798FE3, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_4), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<System.Int32>
struct  UnityEvent_1_t6DD758393B13FC2A58BE44E647D9EBEA4F27D914  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t6DD758393B13FC2A58BE44E647D9EBEA4F27D914, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_4), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<System.Object>
struct  UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_4), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<System.Single>
struct  UnityEvent_1_tD2F68F6DD363B64D94CB72CA4170B8DC7A1117F6  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_tD2F68F6DD363B64D94CB72CA4170B8DC7A1117F6, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_4), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<UnityEngine.Color>
struct  UnityEvent_1_tFB475F569CC8852B004B3F2DE7536E67324C2AF8  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_tFB475F569CC8852B004B3F2DE7536E67324C2AF8, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_4), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>
struct  UnityEvent_1_t60552D56FE9D9EC7B17849EE5D16EF96110E69A0  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t60552D56FE9D9EC7B17849EE5D16EF96110E69A0, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_4), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector3>
struct  UnityEvent_1_t5D12B60679DCDB91E0DF66ABA5F8D3C7AD66C766  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t5D12B60679DCDB91E0DF66ABA5F8D3C7AD66C766, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_4), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`2<System.Char,System.Int32>
struct  UnityEvent_2_t652BB56D3A70C4F3DB42D6CCD83473A98EE1860A  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_2_t652BB56D3A70C4F3DB42D6CCD83473A98EE1860A, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_4), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
struct  UnityEvent_2_tCABE16DD12281C927273F04C2F6D54BE6ED094EC  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_2_tCABE16DD12281C927273F04C2F6D54BE6ED094EC, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_4), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`2<UnityEngine.Vector3,UnityEngine.Vector3>
struct  UnityEvent_2_t2278D9A02F1B106209E4C560EE1B371E13EAABC2  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_2_t2278D9A02F1B106209E4C560EE1B371E13EAABC2, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_4), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`3<System.Object,System.Int32,System.Int32>
struct  UnityEvent_3_t2B0296963C7C76F6A5D478C34AFAA9759C1CA3F2  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`3::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_3_t2B0296963C7C76F6A5D478C34AFAA9759C1CA3F2, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_4), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Int32>
struct  UnityEvent_3_tBDBEEB66A13CAD2A4067CE23F6BE52B4CEE94E15  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`3::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_3_tBDBEEB66A13CAD2A4067CE23F6BE52B4CEE94E15, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_4), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>
struct  UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`3::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_4), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>
struct  UnityEvent_4_t2145BBDEE01F7E33D8060C904609F2FFD8845A0A  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`4::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_4_t2145BBDEE01F7E33D8060C904609F2FFD8845A0A, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_4), (void*)value);
	}
};


// UnityEngine.Networking.NetworkHash128
struct  NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C 
{
public:
	// System.Byte UnityEngine.Networking.NetworkHash128::i0
	uint8_t ___i0_0;
	// System.Byte UnityEngine.Networking.NetworkHash128::i1
	uint8_t ___i1_1;
	// System.Byte UnityEngine.Networking.NetworkHash128::i2
	uint8_t ___i2_2;
	// System.Byte UnityEngine.Networking.NetworkHash128::i3
	uint8_t ___i3_3;
	// System.Byte UnityEngine.Networking.NetworkHash128::i4
	uint8_t ___i4_4;
	// System.Byte UnityEngine.Networking.NetworkHash128::i5
	uint8_t ___i5_5;
	// System.Byte UnityEngine.Networking.NetworkHash128::i6
	uint8_t ___i6_6;
	// System.Byte UnityEngine.Networking.NetworkHash128::i7
	uint8_t ___i7_7;
	// System.Byte UnityEngine.Networking.NetworkHash128::i8
	uint8_t ___i8_8;
	// System.Byte UnityEngine.Networking.NetworkHash128::i9
	uint8_t ___i9_9;
	// System.Byte UnityEngine.Networking.NetworkHash128::i10
	uint8_t ___i10_10;
	// System.Byte UnityEngine.Networking.NetworkHash128::i11
	uint8_t ___i11_11;
	// System.Byte UnityEngine.Networking.NetworkHash128::i12
	uint8_t ___i12_12;
	// System.Byte UnityEngine.Networking.NetworkHash128::i13
	uint8_t ___i13_13;
	// System.Byte UnityEngine.Networking.NetworkHash128::i14
	uint8_t ___i14_14;
	// System.Byte UnityEngine.Networking.NetworkHash128::i15
	uint8_t ___i15_15;

public:
	inline static int32_t get_offset_of_i0_0() { return static_cast<int32_t>(offsetof(NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C, ___i0_0)); }
	inline uint8_t get_i0_0() const { return ___i0_0; }
	inline uint8_t* get_address_of_i0_0() { return &___i0_0; }
	inline void set_i0_0(uint8_t value)
	{
		___i0_0 = value;
	}

	inline static int32_t get_offset_of_i1_1() { return static_cast<int32_t>(offsetof(NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C, ___i1_1)); }
	inline uint8_t get_i1_1() const { return ___i1_1; }
	inline uint8_t* get_address_of_i1_1() { return &___i1_1; }
	inline void set_i1_1(uint8_t value)
	{
		___i1_1 = value;
	}

	inline static int32_t get_offset_of_i2_2() { return static_cast<int32_t>(offsetof(NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C, ___i2_2)); }
	inline uint8_t get_i2_2() const { return ___i2_2; }
	inline uint8_t* get_address_of_i2_2() { return &___i2_2; }
	inline void set_i2_2(uint8_t value)
	{
		___i2_2 = value;
	}

	inline static int32_t get_offset_of_i3_3() { return static_cast<int32_t>(offsetof(NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C, ___i3_3)); }
	inline uint8_t get_i3_3() const { return ___i3_3; }
	inline uint8_t* get_address_of_i3_3() { return &___i3_3; }
	inline void set_i3_3(uint8_t value)
	{
		___i3_3 = value;
	}

	inline static int32_t get_offset_of_i4_4() { return static_cast<int32_t>(offsetof(NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C, ___i4_4)); }
	inline uint8_t get_i4_4() const { return ___i4_4; }
	inline uint8_t* get_address_of_i4_4() { return &___i4_4; }
	inline void set_i4_4(uint8_t value)
	{
		___i4_4 = value;
	}

	inline static int32_t get_offset_of_i5_5() { return static_cast<int32_t>(offsetof(NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C, ___i5_5)); }
	inline uint8_t get_i5_5() const { return ___i5_5; }
	inline uint8_t* get_address_of_i5_5() { return &___i5_5; }
	inline void set_i5_5(uint8_t value)
	{
		___i5_5 = value;
	}

	inline static int32_t get_offset_of_i6_6() { return static_cast<int32_t>(offsetof(NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C, ___i6_6)); }
	inline uint8_t get_i6_6() const { return ___i6_6; }
	inline uint8_t* get_address_of_i6_6() { return &___i6_6; }
	inline void set_i6_6(uint8_t value)
	{
		___i6_6 = value;
	}

	inline static int32_t get_offset_of_i7_7() { return static_cast<int32_t>(offsetof(NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C, ___i7_7)); }
	inline uint8_t get_i7_7() const { return ___i7_7; }
	inline uint8_t* get_address_of_i7_7() { return &___i7_7; }
	inline void set_i7_7(uint8_t value)
	{
		___i7_7 = value;
	}

	inline static int32_t get_offset_of_i8_8() { return static_cast<int32_t>(offsetof(NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C, ___i8_8)); }
	inline uint8_t get_i8_8() const { return ___i8_8; }
	inline uint8_t* get_address_of_i8_8() { return &___i8_8; }
	inline void set_i8_8(uint8_t value)
	{
		___i8_8 = value;
	}

	inline static int32_t get_offset_of_i9_9() { return static_cast<int32_t>(offsetof(NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C, ___i9_9)); }
	inline uint8_t get_i9_9() const { return ___i9_9; }
	inline uint8_t* get_address_of_i9_9() { return &___i9_9; }
	inline void set_i9_9(uint8_t value)
	{
		___i9_9 = value;
	}

	inline static int32_t get_offset_of_i10_10() { return static_cast<int32_t>(offsetof(NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C, ___i10_10)); }
	inline uint8_t get_i10_10() const { return ___i10_10; }
	inline uint8_t* get_address_of_i10_10() { return &___i10_10; }
	inline void set_i10_10(uint8_t value)
	{
		___i10_10 = value;
	}

	inline static int32_t get_offset_of_i11_11() { return static_cast<int32_t>(offsetof(NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C, ___i11_11)); }
	inline uint8_t get_i11_11() const { return ___i11_11; }
	inline uint8_t* get_address_of_i11_11() { return &___i11_11; }
	inline void set_i11_11(uint8_t value)
	{
		___i11_11 = value;
	}

	inline static int32_t get_offset_of_i12_12() { return static_cast<int32_t>(offsetof(NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C, ___i12_12)); }
	inline uint8_t get_i12_12() const { return ___i12_12; }
	inline uint8_t* get_address_of_i12_12() { return &___i12_12; }
	inline void set_i12_12(uint8_t value)
	{
		___i12_12 = value;
	}

	inline static int32_t get_offset_of_i13_13() { return static_cast<int32_t>(offsetof(NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C, ___i13_13)); }
	inline uint8_t get_i13_13() const { return ___i13_13; }
	inline uint8_t* get_address_of_i13_13() { return &___i13_13; }
	inline void set_i13_13(uint8_t value)
	{
		___i13_13 = value;
	}

	inline static int32_t get_offset_of_i14_14() { return static_cast<int32_t>(offsetof(NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C, ___i14_14)); }
	inline uint8_t get_i14_14() const { return ___i14_14; }
	inline uint8_t* get_address_of_i14_14() { return &___i14_14; }
	inline void set_i14_14(uint8_t value)
	{
		___i14_14 = value;
	}

	inline static int32_t get_offset_of_i15_15() { return static_cast<int32_t>(offsetof(NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C, ___i15_15)); }
	inline uint8_t get_i15_15() const { return ___i15_15; }
	inline uint8_t* get_address_of_i15_15() { return &___i15_15; }
	inline void set_i15_15(uint8_t value)
	{
		___i15_15 = value;
	}
};


// UnityEngine.Networking.NetworkInstanceId
struct  NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615 
{
public:
	// System.UInt32 UnityEngine.Networking.NetworkInstanceId::m_Value
	uint32_t ___m_Value_0;

public:
	inline static int32_t get_offset_of_m_Value_0() { return static_cast<int32_t>(offsetof(NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615, ___m_Value_0)); }
	inline uint32_t get_m_Value_0() const { return ___m_Value_0; }
	inline uint32_t* get_address_of_m_Value_0() { return &___m_Value_0; }
	inline void set_m_Value_0(uint32_t value)
	{
		___m_Value_0 = value;
	}
};

struct NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615_StaticFields
{
public:
	// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkInstanceId::Invalid
	NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615  ___Invalid_1;
	// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkInstanceId::Zero
	NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615  ___Zero_2;

public:
	inline static int32_t get_offset_of_Invalid_1() { return static_cast<int32_t>(offsetof(NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615_StaticFields, ___Invalid_1)); }
	inline NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615  get_Invalid_1() const { return ___Invalid_1; }
	inline NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615 * get_address_of_Invalid_1() { return &___Invalid_1; }
	inline void set_Invalid_1(NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615  value)
	{
		___Invalid_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615_StaticFields, ___Zero_2)); }
	inline NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615  get_Zero_2() const { return ___Zero_2; }
	inline NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615  value)
	{
		___Zero_2 = value;
	}
};


// UnityEngine.Networking.NetworkSceneId
struct  NetworkSceneId_t462EC62A23A1B7AF60637C48CD916A09BC493340 
{
public:
	// System.UInt32 UnityEngine.Networking.NetworkSceneId::m_Value
	uint32_t ___m_Value_0;

public:
	inline static int32_t get_offset_of_m_Value_0() { return static_cast<int32_t>(offsetof(NetworkSceneId_t462EC62A23A1B7AF60637C48CD916A09BC493340, ___m_Value_0)); }
	inline uint32_t get_m_Value_0() const { return ___m_Value_0; }
	inline uint32_t* get_address_of_m_Value_0() { return &___m_Value_0; }
	inline void set_m_Value_0(uint32_t value)
	{
		___m_Value_0 = value;
	}
};


// UnityEngine.Networking.UIntFloat
struct  UIntFloat_tFF4D5273EEDE59506E38E1C3A3932139C4EACBE0 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single UnityEngine.Networking.UIntFloat::floatValue
			float ___floatValue_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___floatValue_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt32 UnityEngine.Networking.UIntFloat::intValue
			uint32_t ___intValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___intValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Double UnityEngine.Networking.UIntFloat::doubleValue
			double ___doubleValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___doubleValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 UnityEngine.Networking.UIntFloat::longValue
			uint64_t ___longValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___longValue_3_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_floatValue_0() { return static_cast<int32_t>(offsetof(UIntFloat_tFF4D5273EEDE59506E38E1C3A3932139C4EACBE0, ___floatValue_0)); }
	inline float get_floatValue_0() const { return ___floatValue_0; }
	inline float* get_address_of_floatValue_0() { return &___floatValue_0; }
	inline void set_floatValue_0(float value)
	{
		___floatValue_0 = value;
	}

	inline static int32_t get_offset_of_intValue_1() { return static_cast<int32_t>(offsetof(UIntFloat_tFF4D5273EEDE59506E38E1C3A3932139C4EACBE0, ___intValue_1)); }
	inline uint32_t get_intValue_1() const { return ___intValue_1; }
	inline uint32_t* get_address_of_intValue_1() { return &___intValue_1; }
	inline void set_intValue_1(uint32_t value)
	{
		___intValue_1 = value;
	}

	inline static int32_t get_offset_of_doubleValue_2() { return static_cast<int32_t>(offsetof(UIntFloat_tFF4D5273EEDE59506E38E1C3A3932139C4EACBE0, ___doubleValue_2)); }
	inline double get_doubleValue_2() const { return ___doubleValue_2; }
	inline double* get_address_of_doubleValue_2() { return &___doubleValue_2; }
	inline void set_doubleValue_2(double value)
	{
		___doubleValue_2 = value;
	}

	inline static int32_t get_offset_of_longValue_3() { return static_cast<int32_t>(offsetof(UIntFloat_tFF4D5273EEDE59506E38E1C3A3932139C4EACBE0, ___longValue_3)); }
	inline uint64_t get_longValue_3() const { return ___longValue_3; }
	inline uint64_t* get_address_of_longValue_3() { return &___longValue_3; }
	inline void set_longValue_3(uint64_t value)
	{
		___longValue_3 = value;
	}
};


// UnityEngine.SubsystemDescriptor`1<System.Object>
struct  SubsystemDescriptor_1_t31BEFA7AE91777434F9B5622527F596E81E5C715  : public SubsystemDescriptor_t889FE96B75F157379A8337541A119F08DD9C75D4
{
public:

public:
};


// UnityEngine.Subsystem`1<System.Object>
struct  Subsystem_1_tCB27FB16758FC2D855673CA14E86150F070453F6  : public Subsystem_t6B987736D8E48098F860AC55D76905DE1F48CE8C
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


// System.Reflection.MethodInfo
struct  MethodInfo_t  : public MethodBase_t
{
public:

public:
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


// UnityEngine.AsyncOperation
struct  AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D, ___m_completeCallback_1)); }
	inline Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_completeCallback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
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

// UnityEngine.IntegratedSubsystem
struct  IntegratedSubsystem_t3DA4A857E71E63A49B52353DBD88FA880196117E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.IntegratedSubsystem::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.ISubsystemDescriptor UnityEngine.IntegratedSubsystem::m_subsystemDescriptor
	RuntimeObject* ___m_subsystemDescriptor_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(IntegratedSubsystem_t3DA4A857E71E63A49B52353DBD88FA880196117E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_subsystemDescriptor_1() { return static_cast<int32_t>(offsetof(IntegratedSubsystem_t3DA4A857E71E63A49B52353DBD88FA880196117E, ___m_subsystemDescriptor_1)); }
	inline RuntimeObject* get_m_subsystemDescriptor_1() const { return ___m_subsystemDescriptor_1; }
	inline RuntimeObject** get_address_of_m_subsystemDescriptor_1() { return &___m_subsystemDescriptor_1; }
	inline void set_m_subsystemDescriptor_1(RuntimeObject* value)
	{
		___m_subsystemDescriptor_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_subsystemDescriptor_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t3DA4A857E71E63A49B52353DBD88FA880196117E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_subsystemDescriptor_1;
};
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t3DA4A857E71E63A49B52353DBD88FA880196117E_marshaled_com
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_subsystemDescriptor_1;
};

// UnityEngine.IntegratedSubsystemDescriptor
struct  IntegratedSubsystemDescriptor_tCC675C388E8A720B9467FCE039B00E7BE7693812  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.IntegratedSubsystemDescriptor::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(IntegratedSubsystemDescriptor_tCC675C388E8A720B9467FCE039B00E7BE7693812, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystemDescriptor
struct IntegratedSubsystemDescriptor_tCC675C388E8A720B9467FCE039B00E7BE7693812_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystemDescriptor
struct IntegratedSubsystemDescriptor_tCC675C388E8A720B9467FCE039B00E7BE7693812_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Networking.CertificateHandler
struct  CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Networking.DownloadHandler
struct  DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Networking.NetworkWriter
struct  NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030  : public RuntimeObject
{
public:
	// UnityEngine.Networking.NetBuffer UnityEngine.Networking.NetworkWriter::m_Buffer
	NetBuffer_t2BA43CF3688776F372BECD54D28F90CB0559B36C * ___m_Buffer_1;

public:
	inline static int32_t get_offset_of_m_Buffer_1() { return static_cast<int32_t>(offsetof(NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030, ___m_Buffer_1)); }
	inline NetBuffer_t2BA43CF3688776F372BECD54D28F90CB0559B36C * get_m_Buffer_1() const { return ___m_Buffer_1; }
	inline NetBuffer_t2BA43CF3688776F372BECD54D28F90CB0559B36C ** get_address_of_m_Buffer_1() { return &___m_Buffer_1; }
	inline void set_m_Buffer_1(NetBuffer_t2BA43CF3688776F372BECD54D28F90CB0559B36C * value)
	{
		___m_Buffer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Buffer_1), (void*)value);
	}
};

struct NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030_StaticFields
{
public:
	// System.Text.Encoding UnityEngine.Networking.NetworkWriter::s_Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___s_Encoding_2;
	// System.Byte[] UnityEngine.Networking.NetworkWriter::s_StringWriteBuffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___s_StringWriteBuffer_3;
	// UnityEngine.Networking.UIntFloat UnityEngine.Networking.NetworkWriter::s_FloatConverter
	UIntFloat_tFF4D5273EEDE59506E38E1C3A3932139C4EACBE0  ___s_FloatConverter_4;

public:
	inline static int32_t get_offset_of_s_Encoding_2() { return static_cast<int32_t>(offsetof(NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030_StaticFields, ___s_Encoding_2)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_s_Encoding_2() const { return ___s_Encoding_2; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_s_Encoding_2() { return &___s_Encoding_2; }
	inline void set_s_Encoding_2(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___s_Encoding_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Encoding_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_StringWriteBuffer_3() { return static_cast<int32_t>(offsetof(NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030_StaticFields, ___s_StringWriteBuffer_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_s_StringWriteBuffer_3() const { return ___s_StringWriteBuffer_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_s_StringWriteBuffer_3() { return &___s_StringWriteBuffer_3; }
	inline void set_s_StringWriteBuffer_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___s_StringWriteBuffer_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_StringWriteBuffer_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_FloatConverter_4() { return static_cast<int32_t>(offsetof(NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030_StaticFields, ___s_FloatConverter_4)); }
	inline UIntFloat_tFF4D5273EEDE59506E38E1C3A3932139C4EACBE0  get_s_FloatConverter_4() const { return ___s_FloatConverter_4; }
	inline UIntFloat_tFF4D5273EEDE59506E38E1C3A3932139C4EACBE0 * get_address_of_s_FloatConverter_4() { return &___s_FloatConverter_4; }
	inline void set_s_FloatConverter_4(UIntFloat_tFF4D5273EEDE59506E38E1C3A3932139C4EACBE0  value)
	{
		___s_FloatConverter_4 = value;
	}
};


// UnityEngine.Networking.SyncList`1_Operation<System.Boolean>
struct  Operation_tAF7E4E7F5B99C35049BD5BA1224C52CF15F1D2D5 
{
public:
	// System.Int32 UnityEngine.Networking.SyncList`1_Operation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Operation_tAF7E4E7F5B99C35049BD5BA1224C52CF15F1D2D5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.SyncList`1_Operation<System.Int32>
struct  Operation_tD52C254604455280BBCD2C3F23F8AFA5BA756F84 
{
public:
	// System.Int32 UnityEngine.Networking.SyncList`1_Operation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Operation_tD52C254604455280BBCD2C3F23F8AFA5BA756F84, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.SyncList`1_Operation<System.Object>
struct  Operation_t1B75654F0759475B2C029E92A9B3C443D5D644C9 
{
public:
	// System.Int32 UnityEngine.Networking.SyncList`1_Operation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Operation_t1B75654F0759475B2C029E92A9B3C443D5D644C9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.SyncList`1_Operation<System.Single>
struct  Operation_t8297DBEBB31DE17FBA6F294DA35BE1F5F37AC315 
{
public:
	// System.Int32 UnityEngine.Networking.SyncList`1_Operation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Operation_t8297DBEBB31DE17FBA6F294DA35BE1F5F37AC315, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.SyncList`1_Operation<System.UInt32>
struct  Operation_t7839B7BA805803FF180DD035BA3BDC66E36C8367 
{
public:
	// System.Int32 UnityEngine.Networking.SyncList`1_Operation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Operation_t7839B7BA805803FF180DD035BA3BDC66E36C8367, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.UploadHandler
struct  UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_com
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


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>
struct  TrackingSubsystem_2_t3EB27DAF7DE2C1954FFCC178A2D5B14B2560C403  : public Subsystem_1_tCB27FB16758FC2D855673CA14E86150F070453F6
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackingSubsystem`2::m_Running
	bool ___m_Running_1;

public:
	inline static int32_t get_offset_of_m_Running_1() { return static_cast<int32_t>(offsetof(TrackingSubsystem_2_t3EB27DAF7DE2C1954FFCC178A2D5B14B2560C403, ___m_Running_1)); }
	inline bool get_m_Running_1() const { return ___m_Running_1; }
	inline bool* get_address_of_m_Running_1() { return &___m_Running_1; }
	inline void set_m_Running_1(bool value)
	{
		___m_Running_1 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>
struct  TrackingSubsystem_2_t3EC8D7E050800A819879CB4B105623452C631D7A  : public Subsystem_1_tCB27FB16758FC2D855673CA14E86150F070453F6
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackingSubsystem`2::m_Running
	bool ___m_Running_1;

public:
	inline static int32_t get_offset_of_m_Running_1() { return static_cast<int32_t>(offsetof(TrackingSubsystem_2_t3EC8D7E050800A819879CB4B105623452C631D7A, ___m_Running_1)); }
	inline bool get_m_Running_1() const { return ___m_Running_1; }
	inline bool* get_address_of_m_Running_1() { return &___m_Running_1; }
	inline void set_m_Running_1(bool value)
	{
		___m_Running_1 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>
struct  TrackingSubsystem_2_t13B09A7DD60BB228A81595F3289379D17A4D033E  : public Subsystem_1_tCB27FB16758FC2D855673CA14E86150F070453F6
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackingSubsystem`2::m_Running
	bool ___m_Running_1;

public:
	inline static int32_t get_offset_of_m_Running_1() { return static_cast<int32_t>(offsetof(TrackingSubsystem_2_t13B09A7DD60BB228A81595F3289379D17A4D033E, ___m_Running_1)); }
	inline bool get_m_Running_1() const { return ___m_Running_1; }
	inline bool* get_address_of_m_Running_1() { return &___m_Running_1; }
	inline void set_m_Running_1(bool value)
	{
		___m_Running_1 = value;
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


// UnityEngine.IntegratedSubsystemDescriptor`1<System.Object>
struct  IntegratedSubsystemDescriptor_1_t2426B50A97CC5BA8E2BFE696F2EA1DDFC2174909  : public IntegratedSubsystemDescriptor_tCC675C388E8A720B9467FCE039B00E7BE7693812
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystemDescriptor`1
#ifndef IntegratedSubsystemDescriptor_1_tC67E18878A7A77F8FDCD3286C4EDD50CD96FEF73_marshaled_pinvoke_define
#define IntegratedSubsystemDescriptor_1_tC67E18878A7A77F8FDCD3286C4EDD50CD96FEF73_marshaled_pinvoke_define
struct IntegratedSubsystemDescriptor_1_tC67E18878A7A77F8FDCD3286C4EDD50CD96FEF73_marshaled_pinvoke : public IntegratedSubsystemDescriptor_tCC675C388E8A720B9467FCE039B00E7BE7693812_marshaled_pinvoke
{
};
#endif
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystemDescriptor`1
#ifndef IntegratedSubsystemDescriptor_1_tC67E18878A7A77F8FDCD3286C4EDD50CD96FEF73_marshaled_com_define
#define IntegratedSubsystemDescriptor_1_tC67E18878A7A77F8FDCD3286C4EDD50CD96FEF73_marshaled_com_define
struct IntegratedSubsystemDescriptor_1_tC67E18878A7A77F8FDCD3286C4EDD50CD96FEF73_marshaled_com : public IntegratedSubsystemDescriptor_tCC675C388E8A720B9467FCE039B00E7BE7693812_marshaled_com
{
};
#endif

// UnityEngine.IntegratedSubsystem`1<System.Object>
struct  IntegratedSubsystem_1_t2DE7C58DE8F60DCFD451AAFB0B75E6B1BF94C134  : public IntegratedSubsystem_t3DA4A857E71E63A49B52353DBD88FA880196117E
{
public:

public:
};


// UnityEngine.Networking.UnityWebRequest
struct  UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 * ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0 * ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_DownloadHandler_1() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___m_DownloadHandler_1)); }
	inline DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * get_m_DownloadHandler_1() const { return ___m_DownloadHandler_1; }
	inline DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 ** get_address_of_m_DownloadHandler_1() { return &___m_DownloadHandler_1; }
	inline void set_m_DownloadHandler_1(DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * value)
	{
		___m_DownloadHandler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DownloadHandler_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_UploadHandler_2() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___m_UploadHandler_2)); }
	inline UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 * get_m_UploadHandler_2() const { return ___m_UploadHandler_2; }
	inline UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 ** get_address_of_m_UploadHandler_2() { return &___m_UploadHandler_2; }
	inline void set_m_UploadHandler_2(UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 * value)
	{
		___m_UploadHandler_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UploadHandler_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CertificateHandler_3() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___m_CertificateHandler_3)); }
	inline CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0 * get_m_CertificateHandler_3() const { return ___m_CertificateHandler_3; }
	inline CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0 ** get_address_of_m_CertificateHandler_3() { return &___m_CertificateHandler_3; }
	inline void set_m_CertificateHandler_3(CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0 * value)
	{
		___m_CertificateHandler_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CertificateHandler_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Uri_4() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___m_Uri_4)); }
	inline Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * get_m_Uri_4() const { return ___m_Uri_4; }
	inline Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E ** get_address_of_m_Uri_4() { return &___m_Uri_4; }
	inline void set_m_Uri_4(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * value)
	{
		___m_Uri_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Uri_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5)); }
	inline bool get_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() const { return ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return &___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline void set_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5(bool value)
	{
		___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6)); }
	inline bool get_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() const { return ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return &___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline void set_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6(bool value)
	{
		___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7)); }
	inline bool get_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() const { return ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return &___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline void set_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7(bool value)
	{
		___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_com* ___m_CertificateHandler_3;
	Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct  UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353  : public AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D
{
public:
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * ___U3CwebRequestU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CwebRequestU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353, ___U3CwebRequestU3Ek__BackingField_2)); }
	inline UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * get_U3CwebRequestU3Ek__BackingField_2() const { return ___U3CwebRequestU3Ek__BackingField_2; }
	inline UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 ** get_address_of_U3CwebRequestU3Ek__BackingField_2() { return &___U3CwebRequestU3Ek__BackingField_2; }
	inline void set_U3CwebRequestU3Ek__BackingField_2(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * value)
	{
		___U3CwebRequestU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwebRequestU3Ek__BackingField_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353_marshaled_pinvoke : public AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshaled_pinvoke
{
	UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353_marshaled_com : public AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshaled_com
{
	UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
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


// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
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


// System.Predicate`1<System.Object>
struct  Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Boolean>
struct  UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<System.Int32>>
struct  UnityAction_1_tCFF1D446AB859368D0E404A2D6738C98E10FCC6A  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<System.Object>>
struct  UnityAction_1_t37A77CD76DBB81733157A401AB7F0E8B10692A0C  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Color32>>
struct  UnityAction_1_tBFC448984D861333BFB83317707C2F208D61E3D1  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct  UnityAction_1_t6CAED93F6613F01731695AAC7F8201ABB209CC0A  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Vector2>>
struct  UnityAction_1_tAF537B97BFBDAFB0D27DBBE2DC414D654B6C41EC  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>
struct  UnityAction_1_tFFEAFE33FC07D89E336EC0E8863403BAC10853CA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Vector4>>
struct  UnityAction_1_t4CA653A7B54DA3D30EC370F89843FDF53F602008  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Int32>
struct  UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F  : public MulticastDelegate_t
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


// UnityEngine.Events.UnityAction`1<System.Single>
struct  UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
struct  UnityAction_1_t8523D5D21ADA168AED3BD9CFFCED8FF87199DE9D  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
struct  UnityAction_1_tC29A4BDE80E6622E5794F177E3DAA65BB4342B44  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<UnityEngine.Vector3>
struct  UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`2<System.Char,System.Int32>
struct  UnityAction_2_t8470724C44D27428CCDE1F8FA9C517D58A99FF9C  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`2<System.Object,System.Object>
struct  UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`2<UnityEngine.Vector3,UnityEngine.Vector3>
struct  UnityAction_2_tF6C9DFC311E64D1A3FF55407E541034432E32DE2  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`3<System.Object,System.Int32,System.Int32>
struct  UnityAction_3_t1FF48E6A020CC297A52A774322E1ABAFB7F989F7  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Int32>
struct  UnityAction_3_t2103C0F42D01FF19D30CCB1C9BA2EB2BE7BC9DCC  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>
struct  UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>
struct  UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Networking.Match.NetworkMatch_DataResponseDelegate`1<System.Object>
struct  DataResponseDelegate_1_t26170CF2105600AC9B412E932EB4103D80D763C1  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Networking.Match.NetworkMatch_InternalResponseDelegate`2<System.Object,System.Object>
struct  InternalResponseDelegate_2_tA096DAC41C013FEB4017B65B26A3B13B2C9F51C7  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Networking.SyncList`1_SyncListChanged<System.Boolean>
struct  SyncListChanged_t5156E5B2411DE07D5AEA8F98B87E4FBD1E626D6E  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Networking.SyncList`1_SyncListChanged<System.Int32>
struct  SyncListChanged_t1A1EBC018732CBF3B1F86CE21BE59B5107844339  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Networking.SyncList`1_SyncListChanged<System.Object>
struct  SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Networking.SyncList`1_SyncListChanged<System.Single>
struct  SyncListChanged_t63BE6CD22C2B89F865722BF980F4351DF0EC68D6  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Networking.SyncList`1_SyncListChanged<System.UInt32>
struct  SyncListChanged_t1804C1A09093327076629C515EC006A30F38C1B8  : public MulticastDelegate_t
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


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.Networking.NetworkBehaviour
struct  NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.UInt32 UnityEngine.Networking.NetworkBehaviour::m_SyncVarDirtyBits
	uint32_t ___m_SyncVarDirtyBits_4;
	// System.Single UnityEngine.Networking.NetworkBehaviour::m_LastSendTime
	float ___m_LastSendTime_5;
	// System.Boolean UnityEngine.Networking.NetworkBehaviour::m_SyncVarGuard
	bool ___m_SyncVarGuard_6;
	// UnityEngine.Networking.NetworkIdentity UnityEngine.Networking.NetworkBehaviour::m_MyView
	NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * ___m_MyView_8;

public:
	inline static int32_t get_offset_of_m_SyncVarDirtyBits_4() { return static_cast<int32_t>(offsetof(NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C, ___m_SyncVarDirtyBits_4)); }
	inline uint32_t get_m_SyncVarDirtyBits_4() const { return ___m_SyncVarDirtyBits_4; }
	inline uint32_t* get_address_of_m_SyncVarDirtyBits_4() { return &___m_SyncVarDirtyBits_4; }
	inline void set_m_SyncVarDirtyBits_4(uint32_t value)
	{
		___m_SyncVarDirtyBits_4 = value;
	}

	inline static int32_t get_offset_of_m_LastSendTime_5() { return static_cast<int32_t>(offsetof(NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C, ___m_LastSendTime_5)); }
	inline float get_m_LastSendTime_5() const { return ___m_LastSendTime_5; }
	inline float* get_address_of_m_LastSendTime_5() { return &___m_LastSendTime_5; }
	inline void set_m_LastSendTime_5(float value)
	{
		___m_LastSendTime_5 = value;
	}

	inline static int32_t get_offset_of_m_SyncVarGuard_6() { return static_cast<int32_t>(offsetof(NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C, ___m_SyncVarGuard_6)); }
	inline bool get_m_SyncVarGuard_6() const { return ___m_SyncVarGuard_6; }
	inline bool* get_address_of_m_SyncVarGuard_6() { return &___m_SyncVarGuard_6; }
	inline void set_m_SyncVarGuard_6(bool value)
	{
		___m_SyncVarGuard_6 = value;
	}

	inline static int32_t get_offset_of_m_MyView_8() { return static_cast<int32_t>(offsetof(NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C, ___m_MyView_8)); }
	inline NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * get_m_MyView_8() const { return ___m_MyView_8; }
	inline NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B ** get_address_of_m_MyView_8() { return &___m_MyView_8; }
	inline void set_m_MyView_8(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * value)
	{
		___m_MyView_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MyView_8), (void*)value);
	}
};

struct NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Networking.NetworkBehaviour_Invoker> UnityEngine.Networking.NetworkBehaviour::s_CmdHandlerDelegates
	Dictionary_2_tCB6A26454DC24D4ED3A427AD6A6B9ADDA3A74D0D * ___s_CmdHandlerDelegates_9;

public:
	inline static int32_t get_offset_of_s_CmdHandlerDelegates_9() { return static_cast<int32_t>(offsetof(NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C_StaticFields, ___s_CmdHandlerDelegates_9)); }
	inline Dictionary_2_tCB6A26454DC24D4ED3A427AD6A6B9ADDA3A74D0D * get_s_CmdHandlerDelegates_9() const { return ___s_CmdHandlerDelegates_9; }
	inline Dictionary_2_tCB6A26454DC24D4ED3A427AD6A6B9ADDA3A74D0D ** get_address_of_s_CmdHandlerDelegates_9() { return &___s_CmdHandlerDelegates_9; }
	inline void set_s_CmdHandlerDelegates_9(Dictionary_2_tCB6A26454DC24D4ED3A427AD6A6B9ADDA3A74D0D * value)
	{
		___s_CmdHandlerDelegates_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_CmdHandlerDelegates_9), (void*)value);
	}
};


// UnityEngine.Networking.NetworkIdentity
struct  NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Networking.NetworkSceneId UnityEngine.Networking.NetworkIdentity::m_SceneId
	NetworkSceneId_t462EC62A23A1B7AF60637C48CD916A09BC493340  ___m_SceneId_4;
	// UnityEngine.Networking.NetworkHash128 UnityEngine.Networking.NetworkIdentity::m_AssetId
	NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C  ___m_AssetId_5;
	// System.Boolean UnityEngine.Networking.NetworkIdentity::m_ServerOnly
	bool ___m_ServerOnly_6;
	// System.Boolean UnityEngine.Networking.NetworkIdentity::m_LocalPlayerAuthority
	bool ___m_LocalPlayerAuthority_7;
	// System.Boolean UnityEngine.Networking.NetworkIdentity::m_IsClient
	bool ___m_IsClient_8;
	// System.Boolean UnityEngine.Networking.NetworkIdentity::m_IsServer
	bool ___m_IsServer_9;
	// System.Boolean UnityEngine.Networking.NetworkIdentity::m_HasAuthority
	bool ___m_HasAuthority_10;
	// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkIdentity::m_NetId
	NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615  ___m_NetId_11;
	// System.Boolean UnityEngine.Networking.NetworkIdentity::m_IsLocalPlayer
	bool ___m_IsLocalPlayer_12;
	// UnityEngine.Networking.NetworkConnection UnityEngine.Networking.NetworkIdentity::m_ConnectionToServer
	NetworkConnection_t56E90DAE06B07A4A3233611CC9C0CBCD0A1CAFBA * ___m_ConnectionToServer_13;
	// UnityEngine.Networking.NetworkConnection UnityEngine.Networking.NetworkIdentity::m_ConnectionToClient
	NetworkConnection_t56E90DAE06B07A4A3233611CC9C0CBCD0A1CAFBA * ___m_ConnectionToClient_14;
	// System.Int16 UnityEngine.Networking.NetworkIdentity::m_PlayerId
	int16_t ___m_PlayerId_15;
	// UnityEngine.Networking.NetworkBehaviour[] UnityEngine.Networking.NetworkIdentity::m_NetworkBehaviours
	NetworkBehaviourU5BU5D_tA321D64478B9213228935C52651EBFA3E352C7CB* ___m_NetworkBehaviours_16;
	// System.Collections.Generic.HashSet`1<System.Int32> UnityEngine.Networking.NetworkIdentity::m_ObserverConnections
	HashSet_1_t2BC1A062E48809D18CE313B19D603CA8BA5A0671 * ___m_ObserverConnections_17;
	// System.Collections.Generic.List`1<UnityEngine.Networking.NetworkConnection> UnityEngine.Networking.NetworkIdentity::m_Observers
	List_1_t8B02DD1F0211D3E19F6A6E0204AF7D7537912362 * ___m_Observers_18;
	// UnityEngine.Networking.NetworkConnection UnityEngine.Networking.NetworkIdentity::m_ClientAuthorityOwner
	NetworkConnection_t56E90DAE06B07A4A3233611CC9C0CBCD0A1CAFBA * ___m_ClientAuthorityOwner_19;
	// System.Boolean UnityEngine.Networking.NetworkIdentity::m_Reset
	bool ___m_Reset_20;

public:
	inline static int32_t get_offset_of_m_SceneId_4() { return static_cast<int32_t>(offsetof(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B, ___m_SceneId_4)); }
	inline NetworkSceneId_t462EC62A23A1B7AF60637C48CD916A09BC493340  get_m_SceneId_4() const { return ___m_SceneId_4; }
	inline NetworkSceneId_t462EC62A23A1B7AF60637C48CD916A09BC493340 * get_address_of_m_SceneId_4() { return &___m_SceneId_4; }
	inline void set_m_SceneId_4(NetworkSceneId_t462EC62A23A1B7AF60637C48CD916A09BC493340  value)
	{
		___m_SceneId_4 = value;
	}

	inline static int32_t get_offset_of_m_AssetId_5() { return static_cast<int32_t>(offsetof(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B, ___m_AssetId_5)); }
	inline NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C  get_m_AssetId_5() const { return ___m_AssetId_5; }
	inline NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C * get_address_of_m_AssetId_5() { return &___m_AssetId_5; }
	inline void set_m_AssetId_5(NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C  value)
	{
		___m_AssetId_5 = value;
	}

	inline static int32_t get_offset_of_m_ServerOnly_6() { return static_cast<int32_t>(offsetof(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B, ___m_ServerOnly_6)); }
	inline bool get_m_ServerOnly_6() const { return ___m_ServerOnly_6; }
	inline bool* get_address_of_m_ServerOnly_6() { return &___m_ServerOnly_6; }
	inline void set_m_ServerOnly_6(bool value)
	{
		___m_ServerOnly_6 = value;
	}

	inline static int32_t get_offset_of_m_LocalPlayerAuthority_7() { return static_cast<int32_t>(offsetof(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B, ___m_LocalPlayerAuthority_7)); }
	inline bool get_m_LocalPlayerAuthority_7() const { return ___m_LocalPlayerAuthority_7; }
	inline bool* get_address_of_m_LocalPlayerAuthority_7() { return &___m_LocalPlayerAuthority_7; }
	inline void set_m_LocalPlayerAuthority_7(bool value)
	{
		___m_LocalPlayerAuthority_7 = value;
	}

	inline static int32_t get_offset_of_m_IsClient_8() { return static_cast<int32_t>(offsetof(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B, ___m_IsClient_8)); }
	inline bool get_m_IsClient_8() const { return ___m_IsClient_8; }
	inline bool* get_address_of_m_IsClient_8() { return &___m_IsClient_8; }
	inline void set_m_IsClient_8(bool value)
	{
		___m_IsClient_8 = value;
	}

	inline static int32_t get_offset_of_m_IsServer_9() { return static_cast<int32_t>(offsetof(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B, ___m_IsServer_9)); }
	inline bool get_m_IsServer_9() const { return ___m_IsServer_9; }
	inline bool* get_address_of_m_IsServer_9() { return &___m_IsServer_9; }
	inline void set_m_IsServer_9(bool value)
	{
		___m_IsServer_9 = value;
	}

	inline static int32_t get_offset_of_m_HasAuthority_10() { return static_cast<int32_t>(offsetof(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B, ___m_HasAuthority_10)); }
	inline bool get_m_HasAuthority_10() const { return ___m_HasAuthority_10; }
	inline bool* get_address_of_m_HasAuthority_10() { return &___m_HasAuthority_10; }
	inline void set_m_HasAuthority_10(bool value)
	{
		___m_HasAuthority_10 = value;
	}

	inline static int32_t get_offset_of_m_NetId_11() { return static_cast<int32_t>(offsetof(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B, ___m_NetId_11)); }
	inline NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615  get_m_NetId_11() const { return ___m_NetId_11; }
	inline NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615 * get_address_of_m_NetId_11() { return &___m_NetId_11; }
	inline void set_m_NetId_11(NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615  value)
	{
		___m_NetId_11 = value;
	}

	inline static int32_t get_offset_of_m_IsLocalPlayer_12() { return static_cast<int32_t>(offsetof(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B, ___m_IsLocalPlayer_12)); }
	inline bool get_m_IsLocalPlayer_12() const { return ___m_IsLocalPlayer_12; }
	inline bool* get_address_of_m_IsLocalPlayer_12() { return &___m_IsLocalPlayer_12; }
	inline void set_m_IsLocalPlayer_12(bool value)
	{
		___m_IsLocalPlayer_12 = value;
	}

	inline static int32_t get_offset_of_m_ConnectionToServer_13() { return static_cast<int32_t>(offsetof(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B, ___m_ConnectionToServer_13)); }
	inline NetworkConnection_t56E90DAE06B07A4A3233611CC9C0CBCD0A1CAFBA * get_m_ConnectionToServer_13() const { return ___m_ConnectionToServer_13; }
	inline NetworkConnection_t56E90DAE06B07A4A3233611CC9C0CBCD0A1CAFBA ** get_address_of_m_ConnectionToServer_13() { return &___m_ConnectionToServer_13; }
	inline void set_m_ConnectionToServer_13(NetworkConnection_t56E90DAE06B07A4A3233611CC9C0CBCD0A1CAFBA * value)
	{
		___m_ConnectionToServer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ConnectionToServer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_ConnectionToClient_14() { return static_cast<int32_t>(offsetof(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B, ___m_ConnectionToClient_14)); }
	inline NetworkConnection_t56E90DAE06B07A4A3233611CC9C0CBCD0A1CAFBA * get_m_ConnectionToClient_14() const { return ___m_ConnectionToClient_14; }
	inline NetworkConnection_t56E90DAE06B07A4A3233611CC9C0CBCD0A1CAFBA ** get_address_of_m_ConnectionToClient_14() { return &___m_ConnectionToClient_14; }
	inline void set_m_ConnectionToClient_14(NetworkConnection_t56E90DAE06B07A4A3233611CC9C0CBCD0A1CAFBA * value)
	{
		___m_ConnectionToClient_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ConnectionToClient_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_PlayerId_15() { return static_cast<int32_t>(offsetof(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B, ___m_PlayerId_15)); }
	inline int16_t get_m_PlayerId_15() const { return ___m_PlayerId_15; }
	inline int16_t* get_address_of_m_PlayerId_15() { return &___m_PlayerId_15; }
	inline void set_m_PlayerId_15(int16_t value)
	{
		___m_PlayerId_15 = value;
	}

	inline static int32_t get_offset_of_m_NetworkBehaviours_16() { return static_cast<int32_t>(offsetof(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B, ___m_NetworkBehaviours_16)); }
	inline NetworkBehaviourU5BU5D_tA321D64478B9213228935C52651EBFA3E352C7CB* get_m_NetworkBehaviours_16() const { return ___m_NetworkBehaviours_16; }
	inline NetworkBehaviourU5BU5D_tA321D64478B9213228935C52651EBFA3E352C7CB** get_address_of_m_NetworkBehaviours_16() { return &___m_NetworkBehaviours_16; }
	inline void set_m_NetworkBehaviours_16(NetworkBehaviourU5BU5D_tA321D64478B9213228935C52651EBFA3E352C7CB* value)
	{
		___m_NetworkBehaviours_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_NetworkBehaviours_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_ObserverConnections_17() { return static_cast<int32_t>(offsetof(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B, ___m_ObserverConnections_17)); }
	inline HashSet_1_t2BC1A062E48809D18CE313B19D603CA8BA5A0671 * get_m_ObserverConnections_17() const { return ___m_ObserverConnections_17; }
	inline HashSet_1_t2BC1A062E48809D18CE313B19D603CA8BA5A0671 ** get_address_of_m_ObserverConnections_17() { return &___m_ObserverConnections_17; }
	inline void set_m_ObserverConnections_17(HashSet_1_t2BC1A062E48809D18CE313B19D603CA8BA5A0671 * value)
	{
		___m_ObserverConnections_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ObserverConnections_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_Observers_18() { return static_cast<int32_t>(offsetof(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B, ___m_Observers_18)); }
	inline List_1_t8B02DD1F0211D3E19F6A6E0204AF7D7537912362 * get_m_Observers_18() const { return ___m_Observers_18; }
	inline List_1_t8B02DD1F0211D3E19F6A6E0204AF7D7537912362 ** get_address_of_m_Observers_18() { return &___m_Observers_18; }
	inline void set_m_Observers_18(List_1_t8B02DD1F0211D3E19F6A6E0204AF7D7537912362 * value)
	{
		___m_Observers_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Observers_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_ClientAuthorityOwner_19() { return static_cast<int32_t>(offsetof(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B, ___m_ClientAuthorityOwner_19)); }
	inline NetworkConnection_t56E90DAE06B07A4A3233611CC9C0CBCD0A1CAFBA * get_m_ClientAuthorityOwner_19() const { return ___m_ClientAuthorityOwner_19; }
	inline NetworkConnection_t56E90DAE06B07A4A3233611CC9C0CBCD0A1CAFBA ** get_address_of_m_ClientAuthorityOwner_19() { return &___m_ClientAuthorityOwner_19; }
	inline void set_m_ClientAuthorityOwner_19(NetworkConnection_t56E90DAE06B07A4A3233611CC9C0CBCD0A1CAFBA * value)
	{
		___m_ClientAuthorityOwner_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ClientAuthorityOwner_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_Reset_20() { return static_cast<int32_t>(offsetof(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B, ___m_Reset_20)); }
	inline bool get_m_Reset_20() const { return ___m_Reset_20; }
	inline bool* get_address_of_m_Reset_20() { return &___m_Reset_20; }
	inline void set_m_Reset_20(bool value)
	{
		___m_Reset_20 = value;
	}
};

struct NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B_StaticFields
{
public:
	// System.UInt32 UnityEngine.Networking.NetworkIdentity::s_NextNetworkId
	uint32_t ___s_NextNetworkId_21;
	// UnityEngine.Networking.NetworkWriter UnityEngine.Networking.NetworkIdentity::s_UpdateWriter
	NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * ___s_UpdateWriter_22;
	// UnityEngine.Networking.NetworkIdentity_ClientAuthorityCallback UnityEngine.Networking.NetworkIdentity::clientAuthorityCallback
	ClientAuthorityCallback_tB6533BDCE069DE0B5628A9BEE08EDCC76F373644 * ___clientAuthorityCallback_23;

public:
	inline static int32_t get_offset_of_s_NextNetworkId_21() { return static_cast<int32_t>(offsetof(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B_StaticFields, ___s_NextNetworkId_21)); }
	inline uint32_t get_s_NextNetworkId_21() const { return ___s_NextNetworkId_21; }
	inline uint32_t* get_address_of_s_NextNetworkId_21() { return &___s_NextNetworkId_21; }
	inline void set_s_NextNetworkId_21(uint32_t value)
	{
		___s_NextNetworkId_21 = value;
	}

	inline static int32_t get_offset_of_s_UpdateWriter_22() { return static_cast<int32_t>(offsetof(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B_StaticFields, ___s_UpdateWriter_22)); }
	inline NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * get_s_UpdateWriter_22() const { return ___s_UpdateWriter_22; }
	inline NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 ** get_address_of_s_UpdateWriter_22() { return &___s_UpdateWriter_22; }
	inline void set_s_UpdateWriter_22(NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * value)
	{
		___s_UpdateWriter_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UpdateWriter_22), (void*)value);
	}

	inline static int32_t get_offset_of_clientAuthorityCallback_23() { return static_cast<int32_t>(offsetof(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B_StaticFields, ___clientAuthorityCallback_23)); }
	inline ClientAuthorityCallback_tB6533BDCE069DE0B5628A9BEE08EDCC76F373644 * get_clientAuthorityCallback_23() const { return ___clientAuthorityCallback_23; }
	inline ClientAuthorityCallback_tB6533BDCE069DE0B5628A9BEE08EDCC76F373644 ** get_address_of_clientAuthorityCallback_23() { return &___clientAuthorityCallback_23; }
	inline void set_clientAuthorityCallback_23(ClientAuthorityCallback_tB6533BDCE069DE0B5628A9BEE08EDCC76F373644 * value)
	{
		___clientAuthorityCallback_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clientAuthorityCallback_23), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<System.Object,System.Object>
struct  SubsystemLifecycleManager_2_tFCA70F51985A33F831E1B98350EF7CB79B9F0261  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2::<subsystem>k__BackingField
	RuntimeObject * ___U3CsubsystemU3Ek__BackingField_4;
	// System.Boolean UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2::m_CleanupSubsystemOnDestroy
	bool ___m_CleanupSubsystemOnDestroy_5;

public:
	inline static int32_t get_offset_of_U3CsubsystemU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_2_tFCA70F51985A33F831E1B98350EF7CB79B9F0261, ___U3CsubsystemU3Ek__BackingField_4)); }
	inline RuntimeObject * get_U3CsubsystemU3Ek__BackingField_4() const { return ___U3CsubsystemU3Ek__BackingField_4; }
	inline RuntimeObject ** get_address_of_U3CsubsystemU3Ek__BackingField_4() { return &___U3CsubsystemU3Ek__BackingField_4; }
	inline void set_U3CsubsystemU3Ek__BackingField_4(RuntimeObject * value)
	{
		___U3CsubsystemU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_CleanupSubsystemOnDestroy_5() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_2_tFCA70F51985A33F831E1B98350EF7CB79B9F0261, ___m_CleanupSubsystemOnDestroy_5)); }
	inline bool get_m_CleanupSubsystemOnDestroy_5() const { return ___m_CleanupSubsystemOnDestroy_5; }
	inline bool* get_address_of_m_CleanupSubsystemOnDestroy_5() { return &___m_CleanupSubsystemOnDestroy_5; }
	inline void set_m_CleanupSubsystemOnDestroy_5(bool value)
	{
		___m_CleanupSubsystemOnDestroy_5 = value;
	}
};

struct SubsystemLifecycleManager_2_tFCA70F51985A33F831E1B98350EF7CB79B9F0261_StaticFields
{
public:
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2::s_SubsystemDescriptors
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___s_SubsystemDescriptors_6;

public:
	inline static int32_t get_offset_of_s_SubsystemDescriptors_6() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_2_tFCA70F51985A33F831E1B98350EF7CB79B9F0261_StaticFields, ___s_SubsystemDescriptors_6)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_s_SubsystemDescriptors_6() const { return ___s_SubsystemDescriptors_6; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_s_SubsystemDescriptors_6() { return &___s_SubsystemDescriptors_6; }
	inline void set_s_SubsystemDescriptors_6(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___s_SubsystemDescriptors_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemDescriptors_6), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
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
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F  : public RuntimeArray
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
// System.Boolean[]
struct BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) bool m_Items[1];

public:
	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.UInt32[]
struct UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint32_t m_Items[1];

public:
	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};


// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m15E3130603CE5400743CCCDEE7600FB9EEFAE5C0_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);

// System.Void UnityEngine.Events.UnityEventBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase__ctor_m57AF08DAFA9C1B4F4C8DA855116900BAE8DF9595 (UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEventBase::AddCall(UnityEngine.Events.BaseInvokableCall)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_AddCall_mD45F68C1A40E2BD9B0754490B7709846B84E8075 (UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 * __this, BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * ___call0, const RuntimeMethod* method);
// System.Object System.Delegate::get_Target()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject * Delegate_get_Target_m5371341CE435E001E9FD407AE78F728824CE20E2_inline (Delegate_t * __this, const RuntimeMethod* method);
// System.Reflection.MethodInfo System.Delegate::get_Method()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * Delegate_get_Method_m0AC85D2B0C4CA63C471BC37FFDC3A5EA1E8ED048 (Delegate_t * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEventBase::RemoveListener(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_RemoveListener_mE7EBC544115373D2357599AC07F41F13A8C5A49E (UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 * __this, RuntimeObject * ___targetObj0, MethodInfo_t * ___method1, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ___handle0, const RuntimeMethod* method);
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::GetValidMethodInfo(System.Object,System.String,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEventBase_GetValidMethodInfo_m4521621AB72C7265A2C0EC6911BE4DC42A99B6A5 (RuntimeObject * ___obj0, String_t* ___functionName1, TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___argumentTypes2, const RuntimeMethod* method);
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.UnityEventBase::PrepareInvoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * UnityEventBase_PrepareInvoke_mFA3E2C97DB776A1089DCC85C9F1DA75C295032AE (UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Item(System.Int32)
inline BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline (List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * (*) (List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline)(__this, ___index0, method);
}
// System.Void UnityEngine.Events.InvokableCall::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_Invoke_m0B9E7F14A2C67AB51F01745BD2C6C423114C9394 (InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Count()
inline int32_t List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9_inline (List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// System.Void UnityEngine.IntegratedSubsystemDescriptor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntegratedSubsystemDescriptor__ctor_mBA91F292CA7A9147075DC6D2B09D0843E282FC21 (IntegratedSubsystemDescriptor_tCC675C388E8A720B9467FCE039B00E7BE7693812 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.IntegratedSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntegratedSubsystem__ctor_mAA7E5AA42CAE2649706D44E0D990545F29B96310 (IntegratedSubsystem_t3DA4A857E71E63A49B52353DBD88FA880196117E * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353 * UnityWebRequest_SendWebRequest_mF536CB2A0A39354A54B555B66B017816C5833EBD (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isNetworkError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequest_get_isNetworkError_m082AFE1A58A330AC4CBD179606B61CB39DD44588 (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isHttpError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequest_get_isHttpError_m8F636B70C239EC848FACC83189DE0C22CADEC1C3 (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method);
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * UnityWebRequest_get_downloadHandler_m83044026479E6B4B2739DCE9EEA8A0FAE7D9AF41 (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Networking.DownloadHandler::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DownloadHandler_get_text_m1D707E375899B4F4F0434B79AB8D57ADFE5424FF (DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.JsonUtility::FromJsonOverwrite(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonUtility_FromJsonOverwrite_mBBBDCD9B8641C1CFC6DBF22778AD399D5325D90A (String_t* ___json0, RuntimeObject * ___objectToOverwrite1, const RuntimeMethod* method);
// System.String UnityEngine.UnityString::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityString_Format_m415056ECF8DA7B3EC6A8456E299D0C2002177387 (String_t* ___fmt0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.Match.Response::SetFailure(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Response_SetFailure_mBCE3605B454161D3F467F8BDA85B2BE7F02995B4 (Response_tE3D1110D7F08CC65754EE4BF0F780D24FEB37742 * __this, String_t* ___info0, const RuntimeMethod* method);
// System.String UnityEngine.Networking.UnityWebRequest::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_error_mC79FE2460B3F30B8F9E5385BD7D2B4C5B295D7CC (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_Dispose_m6AFA87DA329282058723E5ACE016B0B08CFE806D (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33 (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.LogFilter::get_logError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LogFilter_get_logError_mD404500EEB2968A3CF190DB1EB6CA9A26135A21F (const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * ___message0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Networking.NetworkIdentity>()
inline NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * Component_GetComponent_TisNetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B_m1B246F83788387F4E1BD668088D39CF221FD3F59 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m15E3130603CE5400743CCCDEE7600FB9EEFAE5C0_gshared)(__this, method);
}
// System.Boolean UnityEngine.Networking.NetworkIdentity::get_isServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkIdentity_get_isServer_mA9BAD5FD120A9506686DF79A6500649E7120BA25 (NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkWriter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter__ctor_m43E453A4A5244815EC8D906B22E5D85FB7535D33 (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkWriter::StartMessage(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_StartMessage_mD4F5BFA7ECA40EEA4AC721A1E357C3C8A09CE218 (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * __this, int16_t ___msgType0, const RuntimeMethod* method);
// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkIdentity::get_netId()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615  NetworkIdentity_get_netId_m22EB7CD04E2633FFAF99093749F79816B2BC9F28_inline (NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Networking.NetworkInstanceId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_Write_m327AAC971B7DA22E82661AD419E4D5EEC6CCAFBF (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * __this, NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkWriter::WritePackedUInt32(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_WritePackedUInt32_m99DCA40833B068CB958663A5B583BC8D2051B12F (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_Write_m99D6ACBCB1E5C94FD09AE9F50CFC993B18DEA183 (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * __this, uint8_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkWriter::FinishMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_FinishMessage_mDA9E66815E448F635B2394A35DDCA3EC040B0590 (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkServer::SendWriterToReady(UnityEngine.GameObject,UnityEngine.Networking.NetworkWriter,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkServer_SendWriterToReady_m3DAE75021BB2FA60809865E05C38C82D0F7DA807 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___contextObj0, NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * ___writer1, int32_t ___channelId2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.NetworkBehaviour::get_isServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkBehaviour_get_isServer_m3366F78A4D83ECE0798B276F2E9EF1FEEC8E2D79 (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.NetworkBehaviour::get_isClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkBehaviour_get_isClient_mB7B109ADAF27B23B3D58E2369CBD11B1471C9148 (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * __this, const RuntimeMethod* method);
// System.Byte UnityEngine.Networking.NetworkReader::ReadByte()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t NetworkReader_ReadByte_m1FADCAE4F3E2D0E009653F6AC58FD1F728D8ABFF (NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * __this, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Networking.NetworkReader::ReadPackedUInt32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NetworkReader_ReadPackedUInt32_mB0E5BF11AEAD652C88548BD93556D780A4E3F46B (NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * __this, const RuntimeMethod* method);
// System.Boolean System.Boolean::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Boolean_Equals_mB97E1CE732F7A08D8F45C86B8994FB67222C99E7 (bool* __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean System.Int32::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_Equals_mBE9097707986D98549AC11E94FB986DA1AB3E16C (int32_t* __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean System.Single::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_Equals_mF4C7AEA9D216B3C9CB735BF327D07BF50F101A16 (float* __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean System.UInt32::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UInt32_Equals_m44E796DB35F5DB4E5D4C98EC6AB5053242A320C3 (uint32_t* __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemDescriptor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemDescriptor__ctor_mC653FEFB51E47FCF78577ACC8C519955662C1998 (SubsystemDescriptor_t889FE96B75F157379A8337541A119F08DD9C75D4 * __this, const RuntimeMethod* method);
// System.Type UnityEngine.SubsystemDescriptor::get_subsystemImplementationType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * SubsystemDescriptor_get_subsystemImplementationType_m2AC6C2B2FF5FE0BEF555641CD90FA2EAD43F58A3 (SubsystemDescriptor_t889FE96B75F157379A8337541A119F08DD9C75D4 * __this, const RuntimeMethod* method);
// System.Object System.Activator::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Activator_CreateInstance_mD06EE47879F606317C6DA91FB63E678CABAC6A16 (Type_t * ___type0, const RuntimeMethod* method);
// System.Void UnityEngine.Internal_SubsystemInstances::Internal_AddStandaloneSubsystem(UnityEngine.Subsystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_SubsystemInstances_Internal_AddStandaloneSubsystem_mEA0969B0DC9B8F144804D8580EFF227EE2A76E8E (Subsystem_t6B987736D8E48098F860AC55D76905DE1F48CE8C * ___inst0, const RuntimeMethod* method);
// System.Void UnityEngine.Subsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Subsystem__ctor_m11F4B7579F657E277B883D882AF43401555B57D3 (Subsystem_t6B987736D8E48098F860AC55D76905DE1F48CE8C * __this, const RuntimeMethod* method);
// System.Void System.NotImplementedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4 (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mD023A89A5C1F740F43F0A9CD6C49DC21230B3CEE (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Boolean UnityEngine.UI.CoroutineTween.ColorTween::ValidTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColorTween_ValidTarget_mCFF8428CFF8D45A85E4EE612263E751ED0B5987C (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.UI.CoroutineTween.ColorTween::get_ignoreTimeScale()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool ColorTween_get_ignoreTimeScale_m6A06826E19314EFE9783E505C75CFC76E42E8F05_inline (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E (const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledDeltaTime_mA0AE7A144C88AE8AABB42DF17B0F3F0714BA06B2 (const RuntimeMethod* method);
// System.Single UnityEngine.UI.CoroutineTween.ColorTween::get_duration()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float ColorTween_get_duration_mC4A1E3C2EA46A5C657A2B9DA240C796F770ECC5F_inline (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m1E5F736941A7E6DC4DBCA88A1E38FE9FBFE0C42B (float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.CoroutineTween.ColorTween::TweenValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorTween_TweenValue_m20FCBA50CE9328956973861A9CB0A1FD97265A58 (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * __this, float ___floatPercentage0, const RuntimeMethod* method);
// System.Boolean UnityEngine.UI.CoroutineTween.FloatTween::ValidTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FloatTween_ValidTarget_m917EB0D30E72AC75D90D1D8F11B1D7EBBD00ECAE (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.UI.CoroutineTween.FloatTween::get_ignoreTimeScale()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool FloatTween_get_ignoreTimeScale_mA7B69D72E1D52EF1890C89D5690D345B852C7239_inline (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * __this, const RuntimeMethod* method);
// System.Single UnityEngine.UI.CoroutineTween.FloatTween::get_duration()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float FloatTween_get_duration_mBECFBEC57BDC30B54D0638873BA3313A8F7232F5_inline (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.CoroutineTween.FloatTween::TweenValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatTween_TweenValue_m4E4418FB7FBDC7CBF96D95518DFACF25BCBE8EB3 (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * __this, float ___floatPercentage0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_mDEE60F1B28281974BA9880EC448682F3DAABB1EF (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_m3CDD6C046CC660D4CD6583FCE97F88A9735FD5FA (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.String UnityEngine.SubsystemDescriptor::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SubsystemDescriptor_get_id_mD414791818F2583B9B07DBE6921387970B42471E (SubsystemDescriptor_t889FE96B75F157379A8337541A119F08DD9C75D4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarningFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarningFormat_m29C3DA389E1AA2C1C48C9100F1E83EAE72772FDB (String_t* ___format0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_4__ctor_mD03F869374C55A6F3391C0F2E80DF4DEE5EA1C8A_gshared (UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::Invoke(T0,T1,T2,T3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_4_Invoke_m91D7864FF201914C04AEC6B34DD6E7C62C367FF8_gshared (UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, RuntimeObject * ___arg33, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
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
			if (___parameterCount == 4)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
			}
		}
		else if (___parameterCount != 4)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11, ___arg22, ___arg33);
					else
						GenericVirtActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11, ___arg22, ___arg33);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg00, ___arg11, ___arg22, ___arg33);
					else
						VirtActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg00, ___arg11, ___arg22, ___arg33);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker4< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11, ___arg22, ___arg33);
					else
						GenericVirtActionInvoker4< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11, ___arg22, ___arg33);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11, ___arg22, ___arg33);
					else
						VirtActionInvoker4< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11, ___arg22, ___arg33);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T0,T1,T2,T3,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_4_BeginInvoke_mCED3B2E5714E6AB57D5B05030DBE0851E6970061_gshared (UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, RuntimeObject * ___arg33, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	void *__d_args[5] = {0};
	__d_args[0] = ___arg00;
	__d_args[1] = ___arg11;
	__d_args[2] = ___arg22;
	__d_args[3] = ___arg33;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);
}
// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_4_EndInvoke_mAA51C4DFA09F01F0AF79FD6A3419925FEE1015EB_gshared (UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m94EAF2F1E34E1784989DAA239E334661EC3BB351_gshared (UnityEvent_1_tE040CE348097B63925504E9E6AFCD89D46798FE3 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_4((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL);
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase__ctor_m57AF08DAFA9C1B4F4C8DA855116900BAE8DF9595((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_mD63C8616B316F25095F83F39E25D7E567AA72AB0_gshared (UnityEvent_1_tE040CE348097B63925504E9E6AFCD89D46798FE3 * __this, UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_0 = ___call0;
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_1 = ((  BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * (*) (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase_AddCall_mD45F68C1A40E2BD9B0754490B7709846B84E8075((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m67BDA7463242627D352129D86C8A2DD184D5469A_gshared (UnityEvent_1_tE040CE348097B63925504E9E6AFCD89D46798FE3 * __this, UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_0 = ___call0;
		NullCheck((Delegate_t *)L_0);
		RuntimeObject * L_1 = Delegate_get_Target_m5371341CE435E001E9FD407AE78F728824CE20E2_inline((Delegate_t *)L_0, /*hidden argument*/NULL);
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_2 = ___call0;
		NullCheck((Delegate_t *)L_2);
		MethodInfo_t * L_3 = Delegate_get_Method_m0AC85D2B0C4CA63C471BC37FFDC3A5EA1E8ED048((Delegate_t *)L_2, /*hidden argument*/NULL);
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase_RemoveListener_mE7EBC544115373D2357599AC07F41F13A8C5A49E((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, (RuntimeObject *)L_1, (MethodInfo_t *)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Boolean>::FindMethod_Impl(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_1_FindMethod_Impl_m5DC384FDD452EC00E3EE247D2AE8FF8B941DED23_gshared (UnityEvent_1_tE040CE348097B63925504E9E6AFCD89D46798FE3 * __this, String_t* ___name0, RuntimeObject * ___targetObj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_1_FindMethod_Impl_m5DC384FDD452EC00E3EE247D2AE8FF8B941DED23_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_2 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)SZArrayNew(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_3 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_2;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		MethodInfo_t * L_6 = UnityEventBase_GetValidMethodInfo_m4521621AB72C7265A2C0EC6911BE4DC42A99B6A5((RuntimeObject *)L_0, (String_t*)L_1, (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_3, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_6;
		goto IL_0021;
	}

IL_0021:
	{
		MethodInfo_t * L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Boolean>::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * UnityEvent_1_GetDelegate_m064D0243F2B19E418BE9C6A9284C3EB65C3DA2A7_gshared (UnityEvent_1_tE040CE348097B63925504E9E6AFCD89D46798FE3 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB * L_2 = (InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_2;
		goto IL_000e;
	}

IL_000e:
	{
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Boolean>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * UnityEvent_1_GetDelegate_mE3DFC752D815713663BCE98363AD16EB9A7ED1FD_gshared (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * ___action0, const RuntimeMethod* method)
{
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_0 = NULL;
	{
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_0 = ___action0;
		InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB * L_1 = (InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB *, UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(L_1, (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_1;
		goto IL_000d;
	}

IL_000d:
	{
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_mA7AC09C8B1D7365AA092C88716D2591DB283565F_gshared (UnityEvent_1_tE040CE348097B63925504E9E6AFCD89D46798FE3 * __this, bool ___arg00, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_1_Invoke_mA7AC09C8B1D7365AA092C88716D2591DB283565F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * V_0 = NULL;
	int32_t V_1 = 0;
	InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB * V_2 = NULL;
	InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * V_3 = NULL;
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_4 = NULL;
	{
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_0 = UnityEventBase_PrepareInvoke_mFA3E2C97DB776A1089DCC85C9F1DA75C295032AE((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		V_0 = (List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_0;
		V_1 = (int32_t)0;
		goto IL_0091;
	}

IL_000f:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_1);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_1, (int32_t)L_2, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_2 = (InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB *)((InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)));
		InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB * L_4 = V_2;
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB * L_5 = V_2;
		bool L_6 = ___arg00;
		NullCheck((InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB *)L_5);
		VirtActionInvoker1< bool >::Invoke(6 /* System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::Invoke(T1) */, (InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB *)L_5, (bool)L_6);
		goto IL_008c;
	}

IL_002f:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_7);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_9 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_7, (int32_t)L_8, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_3 = (InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)IsInst((RuntimeObject*)L_9, InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC_il2cpp_TypeInfo_var));
		InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * L_10 = V_3;
		if (!L_10)
		{
			goto IL_004e;
		}
	}
	{
		InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * L_11 = V_3;
		NullCheck((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)L_11);
		InvokableCall_Invoke_m0B9E7F14A2C67AB51F01745BD2C6C423114C9394((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)L_11, /*hidden argument*/NULL);
		goto IL_008b;
	}

IL_004e:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_12 = V_0;
		int32_t L_13 = V_1;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_12);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_14 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_12, (int32_t)L_13, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_4 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_14;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_15 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		if (L_15)
		{
			goto IL_006f;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_16 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->set_m_InvokeArray_4(L_16);
	}

IL_006f:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		bool L_18 = ___arg00;
		bool L_19 = L_18;
		RuntimeObject * L_20 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7), &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_20);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_21 = V_4;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_22 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		NullCheck((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_21);
		VirtActionInvoker1< ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_21, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_22);
	}

IL_008b:
	{
	}

IL_008c:
	{
		int32_t L_23 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_0091:
	{
		int32_t L_24 = V_1;
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_25 = V_0;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_25);
		int32_t L_26 = List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_25, /*hidden argument*/List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9_RuntimeMethod_var);
		if ((((int32_t)L_24) < ((int32_t)L_26)))
		{
			goto IL_000f;
		}
	}
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
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m1EF01690E1F8F81E7C190F8D9610573D5E59490C_gshared (UnityEvent_1_t6DD758393B13FC2A58BE44E647D9EBEA4F27D914 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_4((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL);
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase__ctor_m57AF08DAFA9C1B4F4C8DA855116900BAE8DF9595((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m61C019869D6764D437BD531635FDF61B68471967_gshared (UnityEvent_1_t6DD758393B13FC2A58BE44E647D9EBEA4F27D914 * __this, UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_0 = ___call0;
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_1 = ((  BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * (*) (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase_AddCall_mD45F68C1A40E2BD9B0754490B7709846B84E8075((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m16C5BBB88B05379272D04EB85D66E67C83E8BDBF_gshared (UnityEvent_1_t6DD758393B13FC2A58BE44E647D9EBEA4F27D914 * __this, UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_0 = ___call0;
		NullCheck((Delegate_t *)L_0);
		RuntimeObject * L_1 = Delegate_get_Target_m5371341CE435E001E9FD407AE78F728824CE20E2_inline((Delegate_t *)L_0, /*hidden argument*/NULL);
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_2 = ___call0;
		NullCheck((Delegate_t *)L_2);
		MethodInfo_t * L_3 = Delegate_get_Method_m0AC85D2B0C4CA63C471BC37FFDC3A5EA1E8ED048((Delegate_t *)L_2, /*hidden argument*/NULL);
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase_RemoveListener_mE7EBC544115373D2357599AC07F41F13A8C5A49E((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, (RuntimeObject *)L_1, (MethodInfo_t *)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Int32>::FindMethod_Impl(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_1_FindMethod_Impl_m2EB10E941A967C89B4297A9278FBA88053A2D828_gshared (UnityEvent_1_t6DD758393B13FC2A58BE44E647D9EBEA4F27D914 * __this, String_t* ___name0, RuntimeObject * ___targetObj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_1_FindMethod_Impl_m2EB10E941A967C89B4297A9278FBA88053A2D828_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_2 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)SZArrayNew(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_3 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_2;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		MethodInfo_t * L_6 = UnityEventBase_GetValidMethodInfo_m4521621AB72C7265A2C0EC6911BE4DC42A99B6A5((RuntimeObject *)L_0, (String_t*)L_1, (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_3, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_6;
		goto IL_0021;
	}

IL_0021:
	{
		MethodInfo_t * L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Int32>::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * UnityEvent_1_GetDelegate_m0E8B5D5884056FA9248EB6AF8D3243F903735B92_gshared (UnityEvent_1_t6DD758393B13FC2A58BE44E647D9EBEA4F27D914 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 * L_2 = (InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_2;
		goto IL_000e;
	}

IL_000e:
	{
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Int32>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * UnityEvent_1_GetDelegate_m8187D8D7A87F912D707BCB8913E01970F7D8F453_gshared (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * ___action0, const RuntimeMethod* method)
{
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_0 = NULL;
	{
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_0 = ___action0;
		InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 * L_1 = (InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *, UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(L_1, (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_1;
		goto IL_000d;
	}

IL_000d:
	{
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_mAC9BEEF287D58E79A447A57E28D3679F9B199D70_gshared (UnityEvent_1_t6DD758393B13FC2A58BE44E647D9EBEA4F27D914 * __this, int32_t ___arg00, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_1_Invoke_mAC9BEEF287D58E79A447A57E28D3679F9B199D70_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * V_0 = NULL;
	int32_t V_1 = 0;
	InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 * V_2 = NULL;
	InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * V_3 = NULL;
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_4 = NULL;
	{
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_0 = UnityEventBase_PrepareInvoke_mFA3E2C97DB776A1089DCC85C9F1DA75C295032AE((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		V_0 = (List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_0;
		V_1 = (int32_t)0;
		goto IL_0091;
	}

IL_000f:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_1);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_1, (int32_t)L_2, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_2 = (InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *)((InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)));
		InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 * L_4 = V_2;
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 * L_5 = V_2;
		int32_t L_6 = ___arg00;
		NullCheck((InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *)L_5);
		VirtActionInvoker1< int32_t >::Invoke(6 /* System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::Invoke(T1) */, (InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *)L_5, (int32_t)L_6);
		goto IL_008c;
	}

IL_002f:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_7);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_9 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_7, (int32_t)L_8, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_3 = (InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)IsInst((RuntimeObject*)L_9, InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC_il2cpp_TypeInfo_var));
		InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * L_10 = V_3;
		if (!L_10)
		{
			goto IL_004e;
		}
	}
	{
		InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * L_11 = V_3;
		NullCheck((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)L_11);
		InvokableCall_Invoke_m0B9E7F14A2C67AB51F01745BD2C6C423114C9394((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)L_11, /*hidden argument*/NULL);
		goto IL_008b;
	}

IL_004e:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_12 = V_0;
		int32_t L_13 = V_1;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_12);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_14 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_12, (int32_t)L_13, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_4 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_14;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_15 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		if (L_15)
		{
			goto IL_006f;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_16 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->set_m_InvokeArray_4(L_16);
	}

IL_006f:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		int32_t L_18 = ___arg00;
		int32_t L_19 = L_18;
		RuntimeObject * L_20 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7), &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_20);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_21 = V_4;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_22 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		NullCheck((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_21);
		VirtActionInvoker1< ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_21, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_22);
	}

IL_008b:
	{
	}

IL_008c:
	{
		int32_t L_23 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_0091:
	{
		int32_t L_24 = V_1;
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_25 = V_0;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_25);
		int32_t L_26 = List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_25, /*hidden argument*/List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9_RuntimeMethod_var);
		if ((((int32_t)L_24) < ((int32_t)L_26)))
		{
			goto IL_000f;
		}
	}
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
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m38CD236F782AA440F6DDB5D90B4C9DA24CDBA3A7_gshared (UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_4((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL);
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase__ctor_m57AF08DAFA9C1B4F4C8DA855116900BAE8DF9595((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m9E1606EB0E08E6B0ECACA780B7AD424D113C8334_gshared (UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D * __this, UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_0 = ___call0;
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_1 = ((  BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * (*) (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase_AddCall_mD45F68C1A40E2BD9B0754490B7709846B84E8075((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_mD5524309E29952671D52EA873E3A0C63EF9C4455_gshared (UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D * __this, UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_0 = ___call0;
		NullCheck((Delegate_t *)L_0);
		RuntimeObject * L_1 = Delegate_get_Target_m5371341CE435E001E9FD407AE78F728824CE20E2_inline((Delegate_t *)L_0, /*hidden argument*/NULL);
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_2 = ___call0;
		NullCheck((Delegate_t *)L_2);
		MethodInfo_t * L_3 = Delegate_get_Method_m0AC85D2B0C4CA63C471BC37FFDC3A5EA1E8ED048((Delegate_t *)L_2, /*hidden argument*/NULL);
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase_RemoveListener_mE7EBC544115373D2357599AC07F41F13A8C5A49E((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, (RuntimeObject *)L_1, (MethodInfo_t *)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Object>::FindMethod_Impl(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_1_FindMethod_Impl_mDD1047ED8F4A1CABD0ACBC76D73B344DCDAC3126_gshared (UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D * __this, String_t* ___name0, RuntimeObject * ___targetObj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_1_FindMethod_Impl_mDD1047ED8F4A1CABD0ACBC76D73B344DCDAC3126_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_2 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)SZArrayNew(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_3 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_2;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		MethodInfo_t * L_6 = UnityEventBase_GetValidMethodInfo_m4521621AB72C7265A2C0EC6911BE4DC42A99B6A5((RuntimeObject *)L_0, (String_t*)L_1, (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_3, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_6;
		goto IL_0021;
	}

IL_0021:
	{
		MethodInfo_t * L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * UnityEvent_1_GetDelegate_m959B9FFD3D5FEE00DC93EDA9BE5924BDA8217541_gshared (UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC * L_2 = (InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_2;
		goto IL_000e;
	}

IL_000e:
	{
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * UnityEvent_1_GetDelegate_m1EE511D98201F0DE08C472BFB04DAC8E846243BE_gshared (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___action0, const RuntimeMethod* method)
{
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_0 = NULL;
	{
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_0 = ___action0;
		InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC * L_1 = (InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *, UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(L_1, (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_1;
		goto IL_000d;
	}

IL_000d:
	{
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m027706B0C7150736F066D5C663304CB0B80ABBF0_gshared (UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D * __this, RuntimeObject * ___arg00, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_1_Invoke_m027706B0C7150736F066D5C663304CB0B80ABBF0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * V_0 = NULL;
	int32_t V_1 = 0;
	InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC * V_2 = NULL;
	InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * V_3 = NULL;
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_4 = NULL;
	{
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_0 = UnityEventBase_PrepareInvoke_mFA3E2C97DB776A1089DCC85C9F1DA75C295032AE((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		V_0 = (List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_0;
		V_1 = (int32_t)0;
		goto IL_0091;
	}

IL_000f:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_1);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_1, (int32_t)L_2, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_2 = (InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *)((InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)));
		InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC * L_4 = V_2;
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC * L_5 = V_2;
		RuntimeObject * L_6 = ___arg00;
		NullCheck((InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *)L_5);
		VirtActionInvoker1< RuntimeObject * >::Invoke(6 /* System.Void UnityEngine.Events.InvokableCall`1<System.Object>::Invoke(T1) */, (InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *)L_5, (RuntimeObject *)L_6);
		goto IL_008c;
	}

IL_002f:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_7);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_9 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_7, (int32_t)L_8, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_3 = (InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)IsInst((RuntimeObject*)L_9, InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC_il2cpp_TypeInfo_var));
		InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * L_10 = V_3;
		if (!L_10)
		{
			goto IL_004e;
		}
	}
	{
		InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * L_11 = V_3;
		NullCheck((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)L_11);
		InvokableCall_Invoke_m0B9E7F14A2C67AB51F01745BD2C6C423114C9394((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)L_11, /*hidden argument*/NULL);
		goto IL_008b;
	}

IL_004e:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_12 = V_0;
		int32_t L_13 = V_1;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_12);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_14 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_12, (int32_t)L_13, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_4 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_14;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_15 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		if (L_15)
		{
			goto IL_006f;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_16 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->set_m_InvokeArray_4(L_16);
	}

IL_006f:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		RuntimeObject * L_18 = ___arg00;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_18);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_19 = V_4;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_20 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		NullCheck((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_19);
		VirtActionInvoker1< ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_19, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_20);
	}

IL_008b:
	{
	}

IL_008c:
	{
		int32_t L_21 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_0091:
	{
		int32_t L_22 = V_1;
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_23 = V_0;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_23);
		int32_t L_24 = List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_23, /*hidden argument*/List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9_RuntimeMethod_var);
		if ((((int32_t)L_22) < ((int32_t)L_24)))
		{
			goto IL_000f;
		}
	}
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
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m029309819C0547BE76007CF58B8EB0BC5BB9765C_gshared (UnityEvent_1_tD2F68F6DD363B64D94CB72CA4170B8DC7A1117F6 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_4((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL);
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase__ctor_m57AF08DAFA9C1B4F4C8DA855116900BAE8DF9595((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m2B3C82F28F7B39809850DE6DBF22D9751C8D6394_gshared (UnityEvent_1_tD2F68F6DD363B64D94CB72CA4170B8DC7A1117F6 * __this, UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_0 = ___call0;
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_1 = ((  BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * (*) (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase_AddCall_mD45F68C1A40E2BD9B0754490B7709846B84E8075((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m8209649CECAC5F00FDEEF7A8377C1623E24F889D_gshared (UnityEvent_1_tD2F68F6DD363B64D94CB72CA4170B8DC7A1117F6 * __this, UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_0 = ___call0;
		NullCheck((Delegate_t *)L_0);
		RuntimeObject * L_1 = Delegate_get_Target_m5371341CE435E001E9FD407AE78F728824CE20E2_inline((Delegate_t *)L_0, /*hidden argument*/NULL);
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_2 = ___call0;
		NullCheck((Delegate_t *)L_2);
		MethodInfo_t * L_3 = Delegate_get_Method_m0AC85D2B0C4CA63C471BC37FFDC3A5EA1E8ED048((Delegate_t *)L_2, /*hidden argument*/NULL);
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase_RemoveListener_mE7EBC544115373D2357599AC07F41F13A8C5A49E((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, (RuntimeObject *)L_1, (MethodInfo_t *)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Single>::FindMethod_Impl(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_1_FindMethod_Impl_m2B6143F06E866A0E7E58F7CA948F0C6635220D24_gshared (UnityEvent_1_tD2F68F6DD363B64D94CB72CA4170B8DC7A1117F6 * __this, String_t* ___name0, RuntimeObject * ___targetObj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_1_FindMethod_Impl_m2B6143F06E866A0E7E58F7CA948F0C6635220D24_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_2 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)SZArrayNew(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_3 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_2;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		MethodInfo_t * L_6 = UnityEventBase_GetValidMethodInfo_m4521621AB72C7265A2C0EC6911BE4DC42A99B6A5((RuntimeObject *)L_0, (String_t*)L_1, (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_3, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_6;
		goto IL_0021;
	}

IL_0021:
	{
		MethodInfo_t * L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Single>::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * UnityEvent_1_GetDelegate_mFF7BFEA18BA68B1A88ED74144D0B18D3A4DB5D0C_gshared (UnityEvent_1_tD2F68F6DD363B64D94CB72CA4170B8DC7A1117F6 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 * L_2 = (InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_2;
		goto IL_000e;
	}

IL_000e:
	{
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Single>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * UnityEvent_1_GetDelegate_m25BE7886179E8C0745C51A9C75E9489299CE0FEC_gshared (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * ___action0, const RuntimeMethod* method)
{
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_0 = NULL;
	{
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_0 = ___action0;
		InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 * L_1 = (InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		((  void (*) (InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 *, UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(L_1, (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_1;
		goto IL_000d;
	}

IL_000d:
	{
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m79A370B4DEEE382453AA91E44FE0718B354DC759_gshared (UnityEvent_1_tD2F68F6DD363B64D94CB72CA4170B8DC7A1117F6 * __this, float ___arg00, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_1_Invoke_m79A370B4DEEE382453AA91E44FE0718B354DC759_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * V_0 = NULL;
	int32_t V_1 = 0;
	InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 * V_2 = NULL;
	InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * V_3 = NULL;
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_4 = NULL;
	{
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_0 = UnityEventBase_PrepareInvoke_mFA3E2C97DB776A1089DCC85C9F1DA75C295032AE((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		V_0 = (List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_0;
		V_1 = (int32_t)0;
		goto IL_0091;
	}

IL_000f:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_1);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_1, (int32_t)L_2, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_2 = (InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 *)((InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)));
		InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 * L_4 = V_2;
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 * L_5 = V_2;
		float L_6 = ___arg00;
		NullCheck((InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 *)L_5);
		VirtActionInvoker1< float >::Invoke(6 /* System.Void UnityEngine.Events.InvokableCall`1<System.Single>::Invoke(T1) */, (InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 *)L_5, (float)L_6);
		goto IL_008c;
	}

IL_002f:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_7);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_9 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_7, (int32_t)L_8, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_3 = (InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)IsInst((RuntimeObject*)L_9, InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC_il2cpp_TypeInfo_var));
		InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * L_10 = V_3;
		if (!L_10)
		{
			goto IL_004e;
		}
	}
	{
		InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * L_11 = V_3;
		NullCheck((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)L_11);
		InvokableCall_Invoke_m0B9E7F14A2C67AB51F01745BD2C6C423114C9394((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)L_11, /*hidden argument*/NULL);
		goto IL_008b;
	}

IL_004e:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_12 = V_0;
		int32_t L_13 = V_1;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_12);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_14 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_12, (int32_t)L_13, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_4 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_14;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_15 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		if (L_15)
		{
			goto IL_006f;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_16 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->set_m_InvokeArray_4(L_16);
	}

IL_006f:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		float L_18 = ___arg00;
		float L_19 = L_18;
		RuntimeObject * L_20 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7), &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_20);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_21 = V_4;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_22 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		NullCheck((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_21);
		VirtActionInvoker1< ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_21, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_22);
	}

IL_008b:
	{
	}

IL_008c:
	{
		int32_t L_23 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_0091:
	{
		int32_t L_24 = V_1;
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_25 = V_0;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_25);
		int32_t L_26 = List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_25, /*hidden argument*/List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9_RuntimeMethod_var);
		if ((((int32_t)L_24) < ((int32_t)L_26)))
		{
			goto IL_000f;
		}
	}
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
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m7D3D9F37407C6599DAD458464F115E98A48A6C6A_gshared (UnityEvent_1_tFB475F569CC8852B004B3F2DE7536E67324C2AF8 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_4((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL);
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase__ctor_m57AF08DAFA9C1B4F4C8DA855116900BAE8DF9595((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m2C8C24086598C0C84A9C4A06C17E30E42294E50A_gshared (UnityEvent_1_tFB475F569CC8852B004B3F2DE7536E67324C2AF8 * __this, UnityAction_1_t8523D5D21ADA168AED3BD9CFFCED8FF87199DE9D * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t8523D5D21ADA168AED3BD9CFFCED8FF87199DE9D * L_0 = ___call0;
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_1 = ((  BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * (*) (UnityAction_1_t8523D5D21ADA168AED3BD9CFFCED8FF87199DE9D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((UnityAction_1_t8523D5D21ADA168AED3BD9CFFCED8FF87199DE9D *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase_AddCall_mD45F68C1A40E2BD9B0754490B7709846B84E8075((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m9B7A5936976A468607D8FC28308D558A51EA0C12_gshared (UnityEvent_1_tFB475F569CC8852B004B3F2DE7536E67324C2AF8 * __this, UnityAction_1_t8523D5D21ADA168AED3BD9CFFCED8FF87199DE9D * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t8523D5D21ADA168AED3BD9CFFCED8FF87199DE9D * L_0 = ___call0;
		NullCheck((Delegate_t *)L_0);
		RuntimeObject * L_1 = Delegate_get_Target_m5371341CE435E001E9FD407AE78F728824CE20E2_inline((Delegate_t *)L_0, /*hidden argument*/NULL);
		UnityAction_1_t8523D5D21ADA168AED3BD9CFFCED8FF87199DE9D * L_2 = ___call0;
		NullCheck((Delegate_t *)L_2);
		MethodInfo_t * L_3 = Delegate_get_Method_m0AC85D2B0C4CA63C471BC37FFDC3A5EA1E8ED048((Delegate_t *)L_2, /*hidden argument*/NULL);
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase_RemoveListener_mE7EBC544115373D2357599AC07F41F13A8C5A49E((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, (RuntimeObject *)L_1, (MethodInfo_t *)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::FindMethod_Impl(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_1_FindMethod_Impl_m79E67DC6496C7600A01FFD9339CB8FF97C885FD1_gshared (UnityEvent_1_tFB475F569CC8852B004B3F2DE7536E67324C2AF8 * __this, String_t* ___name0, RuntimeObject * ___targetObj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_1_FindMethod_Impl_m79E67DC6496C7600A01FFD9339CB8FF97C885FD1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_2 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)SZArrayNew(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_3 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_2;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		MethodInfo_t * L_6 = UnityEventBase_GetValidMethodInfo_m4521621AB72C7265A2C0EC6911BE4DC42A99B6A5((RuntimeObject *)L_0, (String_t*)L_1, (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_3, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_6;
		goto IL_0021;
	}

IL_0021:
	{
		MethodInfo_t * L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * UnityEvent_1_GetDelegate_m026F73DB3B1CF78CF91D2DEB483F8A0E22D5565E_gshared (UnityEvent_1_tFB475F569CC8852B004B3F2DE7536E67324C2AF8 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_1_tC86BE910A8FD5C12EDAAF19D24E35C59C484CEAA * L_2 = (InvokableCall_1_tC86BE910A8FD5C12EDAAF19D24E35C59C484CEAA *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (InvokableCall_1_tC86BE910A8FD5C12EDAAF19D24E35C59C484CEAA *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_2;
		goto IL_000e;
	}

IL_000e:
	{
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * UnityEvent_1_GetDelegate_m45E1EBE0AFAE7AC638AB8C10D8046A6A7BE0CE38_gshared (UnityAction_1_t8523D5D21ADA168AED3BD9CFFCED8FF87199DE9D * ___action0, const RuntimeMethod* method)
{
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_0 = NULL;
	{
		UnityAction_1_t8523D5D21ADA168AED3BD9CFFCED8FF87199DE9D * L_0 = ___action0;
		InvokableCall_1_tC86BE910A8FD5C12EDAAF19D24E35C59C484CEAA * L_1 = (InvokableCall_1_tC86BE910A8FD5C12EDAAF19D24E35C59C484CEAA *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		((  void (*) (InvokableCall_1_tC86BE910A8FD5C12EDAAF19D24E35C59C484CEAA *, UnityAction_1_t8523D5D21ADA168AED3BD9CFFCED8FF87199DE9D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(L_1, (UnityAction_1_t8523D5D21ADA168AED3BD9CFFCED8FF87199DE9D *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_1;
		goto IL_000d;
	}

IL_000d:
	{
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m6D64470308FE35C0990F9878C1E3F6735643D39E_gshared (UnityEvent_1_tFB475F569CC8852B004B3F2DE7536E67324C2AF8 * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___arg00, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_1_Invoke_m6D64470308FE35C0990F9878C1E3F6735643D39E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * V_0 = NULL;
	int32_t V_1 = 0;
	InvokableCall_1_tC86BE910A8FD5C12EDAAF19D24E35C59C484CEAA * V_2 = NULL;
	InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * V_3 = NULL;
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_4 = NULL;
	{
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_0 = UnityEventBase_PrepareInvoke_mFA3E2C97DB776A1089DCC85C9F1DA75C295032AE((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		V_0 = (List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_0;
		V_1 = (int32_t)0;
		goto IL_0091;
	}

IL_000f:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_1);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_1, (int32_t)L_2, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_2 = (InvokableCall_1_tC86BE910A8FD5C12EDAAF19D24E35C59C484CEAA *)((InvokableCall_1_tC86BE910A8FD5C12EDAAF19D24E35C59C484CEAA *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)));
		InvokableCall_1_tC86BE910A8FD5C12EDAAF19D24E35C59C484CEAA * L_4 = V_2;
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		InvokableCall_1_tC86BE910A8FD5C12EDAAF19D24E35C59C484CEAA * L_5 = V_2;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_6 = ___arg00;
		NullCheck((InvokableCall_1_tC86BE910A8FD5C12EDAAF19D24E35C59C484CEAA *)L_5);
		VirtActionInvoker1< Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  >::Invoke(6 /* System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::Invoke(T1) */, (InvokableCall_1_tC86BE910A8FD5C12EDAAF19D24E35C59C484CEAA *)L_5, (Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 )L_6);
		goto IL_008c;
	}

IL_002f:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_7);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_9 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_7, (int32_t)L_8, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_3 = (InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)IsInst((RuntimeObject*)L_9, InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC_il2cpp_TypeInfo_var));
		InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * L_10 = V_3;
		if (!L_10)
		{
			goto IL_004e;
		}
	}
	{
		InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * L_11 = V_3;
		NullCheck((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)L_11);
		InvokableCall_Invoke_m0B9E7F14A2C67AB51F01745BD2C6C423114C9394((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)L_11, /*hidden argument*/NULL);
		goto IL_008b;
	}

IL_004e:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_12 = V_0;
		int32_t L_13 = V_1;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_12);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_14 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_12, (int32_t)L_13, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_4 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_14;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_15 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		if (L_15)
		{
			goto IL_006f;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_16 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->set_m_InvokeArray_4(L_16);
	}

IL_006f:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_18 = ___arg00;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_19 = L_18;
		RuntimeObject * L_20 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7), &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_20);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_21 = V_4;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_22 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		NullCheck((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_21);
		VirtActionInvoker1< ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_21, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_22);
	}

IL_008b:
	{
	}

IL_008c:
	{
		int32_t L_23 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_0091:
	{
		int32_t L_24 = V_1;
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_25 = V_0;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_25);
		int32_t L_26 = List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_25, /*hidden argument*/List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9_RuntimeMethod_var);
		if ((((int32_t)L_24) < ((int32_t)L_26)))
		{
			goto IL_000f;
		}
	}
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
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_mCAE401D07480788C4FC0753A77A9A6081CE2025C_gshared (UnityEvent_1_t60552D56FE9D9EC7B17849EE5D16EF96110E69A0 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_4((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL);
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase__ctor_m57AF08DAFA9C1B4F4C8DA855116900BAE8DF9595((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_mAD5E74EA93DE244D67186E19FDA2338CB1562247_gshared (UnityEvent_1_t60552D56FE9D9EC7B17849EE5D16EF96110E69A0 * __this, UnityAction_1_tC29A4BDE80E6622E5794F177E3DAA65BB4342B44 * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_tC29A4BDE80E6622E5794F177E3DAA65BB4342B44 * L_0 = ___call0;
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_1 = ((  BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * (*) (UnityAction_1_tC29A4BDE80E6622E5794F177E3DAA65BB4342B44 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((UnityAction_1_tC29A4BDE80E6622E5794F177E3DAA65BB4342B44 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase_AddCall_mD45F68C1A40E2BD9B0754490B7709846B84E8075((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m24B362875A9956F4B441B764DCB2F97865D2BFAE_gshared (UnityEvent_1_t60552D56FE9D9EC7B17849EE5D16EF96110E69A0 * __this, UnityAction_1_tC29A4BDE80E6622E5794F177E3DAA65BB4342B44 * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_tC29A4BDE80E6622E5794F177E3DAA65BB4342B44 * L_0 = ___call0;
		NullCheck((Delegate_t *)L_0);
		RuntimeObject * L_1 = Delegate_get_Target_m5371341CE435E001E9FD407AE78F728824CE20E2_inline((Delegate_t *)L_0, /*hidden argument*/NULL);
		UnityAction_1_tC29A4BDE80E6622E5794F177E3DAA65BB4342B44 * L_2 = ___call0;
		NullCheck((Delegate_t *)L_2);
		MethodInfo_t * L_3 = Delegate_get_Method_m0AC85D2B0C4CA63C471BC37FFDC3A5EA1E8ED048((Delegate_t *)L_2, /*hidden argument*/NULL);
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase_RemoveListener_mE7EBC544115373D2357599AC07F41F13A8C5A49E((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, (RuntimeObject *)L_1, (MethodInfo_t *)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::FindMethod_Impl(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_1_FindMethod_Impl_mE864CF4CD0578B8D425C65CB10D95458D88678C8_gshared (UnityEvent_1_t60552D56FE9D9EC7B17849EE5D16EF96110E69A0 * __this, String_t* ___name0, RuntimeObject * ___targetObj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_1_FindMethod_Impl_mE864CF4CD0578B8D425C65CB10D95458D88678C8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_2 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)SZArrayNew(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_3 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_2;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		MethodInfo_t * L_6 = UnityEventBase_GetValidMethodInfo_m4521621AB72C7265A2C0EC6911BE4DC42A99B6A5((RuntimeObject *)L_0, (String_t*)L_1, (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_3, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_6;
		goto IL_0021;
	}

IL_0021:
	{
		MethodInfo_t * L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * UnityEvent_1_GetDelegate_mA4866EC2CC70252F64EA7E500740D7631CF12B03_gshared (UnityEvent_1_t60552D56FE9D9EC7B17849EE5D16EF96110E69A0 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_1_t470687C56312E855046B6CC5CDC84075DFEB954E * L_2 = (InvokableCall_1_t470687C56312E855046B6CC5CDC84075DFEB954E *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t470687C56312E855046B6CC5CDC84075DFEB954E *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_2;
		goto IL_000e;
	}

IL_000e:
	{
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * UnityEvent_1_GetDelegate_m768151D84C9E59E25748F26E31A72DD89BFE8C62_gshared (UnityAction_1_tC29A4BDE80E6622E5794F177E3DAA65BB4342B44 * ___action0, const RuntimeMethod* method)
{
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_0 = NULL;
	{
		UnityAction_1_tC29A4BDE80E6622E5794F177E3DAA65BB4342B44 * L_0 = ___action0;
		InvokableCall_1_t470687C56312E855046B6CC5CDC84075DFEB954E * L_1 = (InvokableCall_1_t470687C56312E855046B6CC5CDC84075DFEB954E *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t470687C56312E855046B6CC5CDC84075DFEB954E *, UnityAction_1_tC29A4BDE80E6622E5794F177E3DAA65BB4342B44 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(L_1, (UnityAction_1_tC29A4BDE80E6622E5794F177E3DAA65BB4342B44 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_1;
		goto IL_000d;
	}

IL_000d:
	{
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_mEAC5EB16761F76B58EC0F5F6191D53577165B247_gshared (UnityEvent_1_t60552D56FE9D9EC7B17849EE5D16EF96110E69A0 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___arg00, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_1_Invoke_mEAC5EB16761F76B58EC0F5F6191D53577165B247_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * V_0 = NULL;
	int32_t V_1 = 0;
	InvokableCall_1_t470687C56312E855046B6CC5CDC84075DFEB954E * V_2 = NULL;
	InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * V_3 = NULL;
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_4 = NULL;
	{
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_0 = UnityEventBase_PrepareInvoke_mFA3E2C97DB776A1089DCC85C9F1DA75C295032AE((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		V_0 = (List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_0;
		V_1 = (int32_t)0;
		goto IL_0091;
	}

IL_000f:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_1);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_1, (int32_t)L_2, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_2 = (InvokableCall_1_t470687C56312E855046B6CC5CDC84075DFEB954E *)((InvokableCall_1_t470687C56312E855046B6CC5CDC84075DFEB954E *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)));
		InvokableCall_1_t470687C56312E855046B6CC5CDC84075DFEB954E * L_4 = V_2;
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		InvokableCall_1_t470687C56312E855046B6CC5CDC84075DFEB954E * L_5 = V_2;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_6 = ___arg00;
		NullCheck((InvokableCall_1_t470687C56312E855046B6CC5CDC84075DFEB954E *)L_5);
		VirtActionInvoker1< Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  >::Invoke(6 /* System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::Invoke(T1) */, (InvokableCall_1_t470687C56312E855046B6CC5CDC84075DFEB954E *)L_5, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_6);
		goto IL_008c;
	}

IL_002f:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_7);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_9 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_7, (int32_t)L_8, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_3 = (InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)IsInst((RuntimeObject*)L_9, InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC_il2cpp_TypeInfo_var));
		InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * L_10 = V_3;
		if (!L_10)
		{
			goto IL_004e;
		}
	}
	{
		InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * L_11 = V_3;
		NullCheck((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)L_11);
		InvokableCall_Invoke_m0B9E7F14A2C67AB51F01745BD2C6C423114C9394((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)L_11, /*hidden argument*/NULL);
		goto IL_008b;
	}

IL_004e:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_12 = V_0;
		int32_t L_13 = V_1;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_12);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_14 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_12, (int32_t)L_13, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_4 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_14;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_15 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		if (L_15)
		{
			goto IL_006f;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_16 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->set_m_InvokeArray_4(L_16);
	}

IL_006f:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_18 = ___arg00;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_19 = L_18;
		RuntimeObject * L_20 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7), &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_20);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_21 = V_4;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_22 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		NullCheck((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_21);
		VirtActionInvoker1< ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_21, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_22);
	}

IL_008b:
	{
	}

IL_008c:
	{
		int32_t L_23 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_0091:
	{
		int32_t L_24 = V_1;
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_25 = V_0;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_25);
		int32_t L_26 = List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_25, /*hidden argument*/List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9_RuntimeMethod_var);
		if ((((int32_t)L_24) < ((int32_t)L_26)))
		{
			goto IL_000f;
		}
	}
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
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_mE6D41AC2B7B3E7F4E19663F8E22226A6E3F0999A_gshared (UnityEvent_1_t5D12B60679DCDB91E0DF66ABA5F8D3C7AD66C766 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_4((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL);
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase__ctor_m57AF08DAFA9C1B4F4C8DA855116900BAE8DF9595((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector3>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_mDA8C10F7A857D989D227555EA1B7D1F43A20204D_gshared (UnityEvent_1_t5D12B60679DCDB91E0DF66ABA5F8D3C7AD66C766 * __this, UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C * L_0 = ___call0;
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_1 = ((  BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * (*) (UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase_AddCall_mD45F68C1A40E2BD9B0754490B7709846B84E8075((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector3>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m7DE1B851CAFD0F356EB888D3766F4EF1703D915F_gshared (UnityEvent_1_t5D12B60679DCDB91E0DF66ABA5F8D3C7AD66C766 * __this, UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C * L_0 = ___call0;
		NullCheck((Delegate_t *)L_0);
		RuntimeObject * L_1 = Delegate_get_Target_m5371341CE435E001E9FD407AE78F728824CE20E2_inline((Delegate_t *)L_0, /*hidden argument*/NULL);
		UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C * L_2 = ___call0;
		NullCheck((Delegate_t *)L_2);
		MethodInfo_t * L_3 = Delegate_get_Method_m0AC85D2B0C4CA63C471BC37FFDC3A5EA1E8ED048((Delegate_t *)L_2, /*hidden argument*/NULL);
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase_RemoveListener_mE7EBC544115373D2357599AC07F41F13A8C5A49E((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, (RuntimeObject *)L_1, (MethodInfo_t *)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.Vector3>::FindMethod_Impl(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_1_FindMethod_Impl_mC30379BAD6B7B83B04ACD4466AE94B6F2A26FC72_gshared (UnityEvent_1_t5D12B60679DCDB91E0DF66ABA5F8D3C7AD66C766 * __this, String_t* ___name0, RuntimeObject * ___targetObj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_1_FindMethod_Impl_mC30379BAD6B7B83B04ACD4466AE94B6F2A26FC72_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_2 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)SZArrayNew(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_3 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_2;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		MethodInfo_t * L_6 = UnityEventBase_GetValidMethodInfo_m4521621AB72C7265A2C0EC6911BE4DC42A99B6A5((RuntimeObject *)L_0, (String_t*)L_1, (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_3, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_6;
		goto IL_0021;
	}

IL_0021:
	{
		MethodInfo_t * L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Vector3>::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * UnityEvent_1_GetDelegate_m96BE46D537F084ED0FE99FEFF3961CBC9AD02E2E_gshared (UnityEvent_1_t5D12B60679DCDB91E0DF66ABA5F8D3C7AD66C766 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_1_tA8B5CCF52E73FE7E85A4483F5DF2471E88A4194B * L_2 = (InvokableCall_1_tA8B5CCF52E73FE7E85A4483F5DF2471E88A4194B *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (InvokableCall_1_tA8B5CCF52E73FE7E85A4483F5DF2471E88A4194B *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_2;
		goto IL_000e;
	}

IL_000e:
	{
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Vector3>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * UnityEvent_1_GetDelegate_m7A574441DA4113B837015185FAD6DE6FF05D37C0_gshared (UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C * ___action0, const RuntimeMethod* method)
{
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_0 = NULL;
	{
		UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C * L_0 = ___action0;
		InvokableCall_1_tA8B5CCF52E73FE7E85A4483F5DF2471E88A4194B * L_1 = (InvokableCall_1_tA8B5CCF52E73FE7E85A4483F5DF2471E88A4194B *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		((  void (*) (InvokableCall_1_tA8B5CCF52E73FE7E85A4483F5DF2471E88A4194B *, UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(L_1, (UnityAction_1_t705297CB6895F0EFB94C92B42E5E0841C10F603C *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_1;
		goto IL_000d;
	}

IL_000d:
	{
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector3>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_mCE560143B04F1E258D4804391B491C096D99D788_gshared (UnityEvent_1_t5D12B60679DCDB91E0DF66ABA5F8D3C7AD66C766 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___arg00, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_1_Invoke_mCE560143B04F1E258D4804391B491C096D99D788_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * V_0 = NULL;
	int32_t V_1 = 0;
	InvokableCall_1_tA8B5CCF52E73FE7E85A4483F5DF2471E88A4194B * V_2 = NULL;
	InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * V_3 = NULL;
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_4 = NULL;
	{
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_0 = UnityEventBase_PrepareInvoke_mFA3E2C97DB776A1089DCC85C9F1DA75C295032AE((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		V_0 = (List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_0;
		V_1 = (int32_t)0;
		goto IL_0091;
	}

IL_000f:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_1);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_1, (int32_t)L_2, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_2 = (InvokableCall_1_tA8B5CCF52E73FE7E85A4483F5DF2471E88A4194B *)((InvokableCall_1_tA8B5CCF52E73FE7E85A4483F5DF2471E88A4194B *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)));
		InvokableCall_1_tA8B5CCF52E73FE7E85A4483F5DF2471E88A4194B * L_4 = V_2;
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		InvokableCall_1_tA8B5CCF52E73FE7E85A4483F5DF2471E88A4194B * L_5 = V_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = ___arg00;
		NullCheck((InvokableCall_1_tA8B5CCF52E73FE7E85A4483F5DF2471E88A4194B *)L_5);
		VirtActionInvoker1< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  >::Invoke(6 /* System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Vector3>::Invoke(T1) */, (InvokableCall_1_tA8B5CCF52E73FE7E85A4483F5DF2471E88A4194B *)L_5, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_6);
		goto IL_008c;
	}

IL_002f:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_7);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_9 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_7, (int32_t)L_8, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_3 = (InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)IsInst((RuntimeObject*)L_9, InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC_il2cpp_TypeInfo_var));
		InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * L_10 = V_3;
		if (!L_10)
		{
			goto IL_004e;
		}
	}
	{
		InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * L_11 = V_3;
		NullCheck((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)L_11);
		InvokableCall_Invoke_m0B9E7F14A2C67AB51F01745BD2C6C423114C9394((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)L_11, /*hidden argument*/NULL);
		goto IL_008b;
	}

IL_004e:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_12 = V_0;
		int32_t L_13 = V_1;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_12);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_14 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_12, (int32_t)L_13, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_4 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_14;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_15 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		if (L_15)
		{
			goto IL_006f;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_16 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->set_m_InvokeArray_4(L_16);
	}

IL_006f:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = ___arg00;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = L_18;
		RuntimeObject * L_20 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7), &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_20);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_21 = V_4;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_22 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		NullCheck((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_21);
		VirtActionInvoker1< ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_21, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_22);
	}

IL_008b:
	{
	}

IL_008c:
	{
		int32_t L_23 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_0091:
	{
		int32_t L_24 = V_1;
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_25 = V_0;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_25);
		int32_t L_26 = List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_25, /*hidden argument*/List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9_RuntimeMethod_var);
		if ((((int32_t)L_24) < ((int32_t)L_26)))
		{
			goto IL_000f;
		}
	}
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
// System.Void UnityEngine.Events.UnityEvent`2<System.Char,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2__ctor_m8527791E9D668B0CE1D6A8F6DFD134DBEE8D0445_gshared (UnityEvent_2_t652BB56D3A70C4F3DB42D6CCD83473A98EE1860A * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_4((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL);
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase__ctor_m57AF08DAFA9C1B4F4C8DA855116900BAE8DF9595((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`2<System.Char,System.Int32>::AddListener(UnityEngine.Events.UnityAction`2<T0,T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2_AddListener_mE4F61D7EC189D2B4400DF86A57C3597B9181E681_gshared (UnityEvent_2_t652BB56D3A70C4F3DB42D6CCD83473A98EE1860A * __this, UnityAction_2_t8470724C44D27428CCDE1F8FA9C517D58A99FF9C * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_2_t8470724C44D27428CCDE1F8FA9C517D58A99FF9C * L_0 = ___call0;
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_1 = ((  BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * (*) (UnityAction_2_t8470724C44D27428CCDE1F8FA9C517D58A99FF9C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((UnityAction_2_t8470724C44D27428CCDE1F8FA9C517D58A99FF9C *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase_AddCall_mD45F68C1A40E2BD9B0754490B7709846B84E8075((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`2<System.Char,System.Int32>::RemoveListener(UnityEngine.Events.UnityAction`2<T0,T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2_RemoveListener_m9176406DA2382C2679FC97BA27632A9375F1821E_gshared (UnityEvent_2_t652BB56D3A70C4F3DB42D6CCD83473A98EE1860A * __this, UnityAction_2_t8470724C44D27428CCDE1F8FA9C517D58A99FF9C * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_2_t8470724C44D27428CCDE1F8FA9C517D58A99FF9C * L_0 = ___call0;
		NullCheck((Delegate_t *)L_0);
		RuntimeObject * L_1 = Delegate_get_Target_m5371341CE435E001E9FD407AE78F728824CE20E2_inline((Delegate_t *)L_0, /*hidden argument*/NULL);
		UnityAction_2_t8470724C44D27428CCDE1F8FA9C517D58A99FF9C * L_2 = ___call0;
		NullCheck((Delegate_t *)L_2);
		MethodInfo_t * L_3 = Delegate_get_Method_m0AC85D2B0C4CA63C471BC37FFDC3A5EA1E8ED048((Delegate_t *)L_2, /*hidden argument*/NULL);
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase_RemoveListener_mE7EBC544115373D2357599AC07F41F13A8C5A49E((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, (RuntimeObject *)L_1, (MethodInfo_t *)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`2<System.Char,System.Int32>::FindMethod_Impl(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_2_FindMethod_Impl_m0B12FC43A157F1A49B79F92B1757CA21631FF8CF_gshared (UnityEvent_2_t652BB56D3A70C4F3DB42D6CCD83473A98EE1860A * __this, String_t* ___name0, RuntimeObject * ___targetObj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_2_FindMethod_Impl_m0B12FC43A157F1A49B79F92B1757CA21631FF8CF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_2 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)SZArrayNew(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var, (uint32_t)2);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_3 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_2;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_6 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_3;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_7 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 3)) };
		Type_t * L_8 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t *)L_8);
		MethodInfo_t * L_9 = UnityEventBase_GetValidMethodInfo_m4521621AB72C7265A2C0EC6911BE4DC42A99B6A5((RuntimeObject *)L_0, (String_t*)L_1, (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_6, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_9;
		goto IL_002e;
	}

IL_002e:
	{
		MethodInfo_t * L_10 = V_0;
		return L_10;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`2<System.Char,System.Int32>::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * UnityEvent_2_GetDelegate_mD5F2EC82AEF86038F519BCC3E7B9685F6D899538_gshared (UnityEvent_2_t652BB56D3A70C4F3DB42D6CCD83473A98EE1860A * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_2_t221281D14257F005E5D0DF50E3819E579316088E * L_2 = (InvokableCall_2_t221281D14257F005E5D0DF50E3819E579316088E *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4));
		((  void (*) (InvokableCall_2_t221281D14257F005E5D0DF50E3819E579316088E *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_0 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_2;
		goto IL_000e;
	}

IL_000e:
	{
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`2<System.Char,System.Int32>::GetDelegate(UnityEngine.Events.UnityAction`2<T0,T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * UnityEvent_2_GetDelegate_m57DD48D6AB2A7145F5EF94EE06E1C04A71CF9BB7_gshared (UnityAction_2_t8470724C44D27428CCDE1F8FA9C517D58A99FF9C * ___action0, const RuntimeMethod* method)
{
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_0 = NULL;
	{
		UnityAction_2_t8470724C44D27428CCDE1F8FA9C517D58A99FF9C * L_0 = ___action0;
		InvokableCall_2_t221281D14257F005E5D0DF50E3819E579316088E * L_1 = (InvokableCall_2_t221281D14257F005E5D0DF50E3819E579316088E *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		((  void (*) (InvokableCall_2_t221281D14257F005E5D0DF50E3819E579316088E *, UnityAction_2_t8470724C44D27428CCDE1F8FA9C517D58A99FF9C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(L_1, (UnityAction_2_t8470724C44D27428CCDE1F8FA9C517D58A99FF9C *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		V_0 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_1;
		goto IL_000d;
	}

IL_000d:
	{
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Events.UnityEvent`2<System.Char,System.Int32>::Invoke(T0,T1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2_Invoke_m0AD2FBFAB78497BA355C8631731B5E002580F725_gshared (UnityEvent_2_t652BB56D3A70C4F3DB42D6CCD83473A98EE1860A * __this, Il2CppChar ___arg00, int32_t ___arg11, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_2_Invoke_m0AD2FBFAB78497BA355C8631731B5E002580F725_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * V_0 = NULL;
	int32_t V_1 = 0;
	InvokableCall_2_t221281D14257F005E5D0DF50E3819E579316088E * V_2 = NULL;
	InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * V_3 = NULL;
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_4 = NULL;
	{
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_0 = UnityEventBase_PrepareInvoke_mFA3E2C97DB776A1089DCC85C9F1DA75C295032AE((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		V_0 = (List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_0;
		V_1 = (int32_t)0;
		goto IL_00a0;
	}

IL_000f:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_1);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_1, (int32_t)L_2, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_2 = (InvokableCall_2_t221281D14257F005E5D0DF50E3819E579316088E *)((InvokableCall_2_t221281D14257F005E5D0DF50E3819E579316088E *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4)));
		InvokableCall_2_t221281D14257F005E5D0DF50E3819E579316088E * L_4 = V_2;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		InvokableCall_2_t221281D14257F005E5D0DF50E3819E579316088E * L_5 = V_2;
		Il2CppChar L_6 = ___arg00;
		int32_t L_7 = ___arg11;
		NullCheck((InvokableCall_2_t221281D14257F005E5D0DF50E3819E579316088E *)L_5);
		((  void (*) (InvokableCall_2_t221281D14257F005E5D0DF50E3819E579316088E *, Il2CppChar, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((InvokableCall_2_t221281D14257F005E5D0DF50E3819E579316088E *)L_5, (Il2CppChar)L_6, (int32_t)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		goto IL_009b;
	}

IL_0030:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_8 = V_0;
		int32_t L_9 = V_1;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_8);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_10 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_8, (int32_t)L_9, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_3 = (InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)IsInst((RuntimeObject*)L_10, InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC_il2cpp_TypeInfo_var));
		InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * L_11 = V_3;
		if (!L_11)
		{
			goto IL_004f;
		}
	}
	{
		InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * L_12 = V_3;
		NullCheck((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)L_12);
		InvokableCall_Invoke_m0B9E7F14A2C67AB51F01745BD2C6C423114C9394((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)L_12, /*hidden argument*/NULL);
		goto IL_009a;
	}

IL_004f:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_13 = V_0;
		int32_t L_14 = V_1;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_13);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_15 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_13, (int32_t)L_14, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_4 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_15;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_16 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		if (L_16)
		{
			goto IL_0070;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->set_m_InvokeArray_4(L_17);
	}

IL_0070:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_18 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		Il2CppChar L_19 = ___arg00;
		Il2CppChar L_20 = L_19;
		RuntimeObject * L_21 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8), &L_20);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_21);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_21);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_22 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		int32_t L_23 = ___arg11;
		int32_t L_24 = L_23;
		RuntimeObject * L_25 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9), &L_24);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_25);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_25);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_26 = V_4;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_27 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		NullCheck((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_26);
		VirtActionInvoker1< ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_26, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_27);
	}

IL_009a:
	{
	}

IL_009b:
	{
		int32_t L_28 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_00a0:
	{
		int32_t L_29 = V_1;
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_30 = V_0;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_30);
		int32_t L_31 = List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_30, /*hidden argument*/List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9_RuntimeMethod_var);
		if ((((int32_t)L_29) < ((int32_t)L_31)))
		{
			goto IL_000f;
		}
	}
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
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2__ctor_m146206128006F3071AEC91A73E3DDFDC34A53F2D_gshared (UnityEvent_2_tCABE16DD12281C927273F04C2F6D54BE6ED094EC * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_4((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL);
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase__ctor_m57AF08DAFA9C1B4F4C8DA855116900BAE8DF9595((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::AddListener(UnityEngine.Events.UnityAction`2<T0,T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2_AddListener_m3FF695B89094EF647CDD59EFB1AA8C2A65D250CF_gshared (UnityEvent_2_tCABE16DD12281C927273F04C2F6D54BE6ED094EC * __this, UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * L_0 = ___call0;
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_1 = ((  BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * (*) (UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase_AddCall_mD45F68C1A40E2BD9B0754490B7709846B84E8075((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::RemoveListener(UnityEngine.Events.UnityAction`2<T0,T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2_RemoveListener_mE9C8336FE5627A3C11F55C19C84AF72533F3EF7A_gshared (UnityEvent_2_tCABE16DD12281C927273F04C2F6D54BE6ED094EC * __this, UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * L_0 = ___call0;
		NullCheck((Delegate_t *)L_0);
		RuntimeObject * L_1 = Delegate_get_Target_m5371341CE435E001E9FD407AE78F728824CE20E2_inline((Delegate_t *)L_0, /*hidden argument*/NULL);
		UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * L_2 = ___call0;
		NullCheck((Delegate_t *)L_2);
		MethodInfo_t * L_3 = Delegate_get_Method_m0AC85D2B0C4CA63C471BC37FFDC3A5EA1E8ED048((Delegate_t *)L_2, /*hidden argument*/NULL);
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase_RemoveListener_mE7EBC544115373D2357599AC07F41F13A8C5A49E((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, (RuntimeObject *)L_1, (MethodInfo_t *)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_2_FindMethod_Impl_m03311CACE68316DC88479DFD2AF9AA0A88A615A3_gshared (UnityEvent_2_tCABE16DD12281C927273F04C2F6D54BE6ED094EC * __this, String_t* ___name0, RuntimeObject * ___targetObj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_2_FindMethod_Impl_m03311CACE68316DC88479DFD2AF9AA0A88A615A3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_2 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)SZArrayNew(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var, (uint32_t)2);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_3 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_2;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_6 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_3;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_7 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 3)) };
		Type_t * L_8 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t *)L_8);
		MethodInfo_t * L_9 = UnityEventBase_GetValidMethodInfo_m4521621AB72C7265A2C0EC6911BE4DC42A99B6A5((RuntimeObject *)L_0, (String_t*)L_1, (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_6, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_9;
		goto IL_002e;
	}

IL_002e:
	{
		MethodInfo_t * L_10 = V_0;
		return L_10;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * UnityEvent_2_GetDelegate_m4005C11561312B45709572CA1BB4D0EA630D0534_gshared (UnityEvent_2_tCABE16DD12281C927273F04C2F6D54BE6ED094EC * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E * L_2 = (InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4));
		((  void (*) (InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_0 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_2;
		goto IL_000e;
	}

IL_000e:
	{
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::GetDelegate(UnityEngine.Events.UnityAction`2<T0,T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * UnityEvent_2_GetDelegate_mC1624B4EB899CC40F1DB2EC4244D8D05D86E52A7_gshared (UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * ___action0, const RuntimeMethod* method)
{
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_0 = NULL;
	{
		UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * L_0 = ___action0;
		InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E * L_1 = (InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		((  void (*) (InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E *, UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(L_1, (UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		V_0 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_1;
		goto IL_000d;
	}

IL_000d:
	{
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::Invoke(T0,T1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2_Invoke_mF9D7D85FFC5A521534279B8F501B93FFB9A01458_gshared (UnityEvent_2_tCABE16DD12281C927273F04C2F6D54BE6ED094EC * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_2_Invoke_mF9D7D85FFC5A521534279B8F501B93FFB9A01458_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * V_0 = NULL;
	int32_t V_1 = 0;
	InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E * V_2 = NULL;
	InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * V_3 = NULL;
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_4 = NULL;
	{
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_0 = UnityEventBase_PrepareInvoke_mFA3E2C97DB776A1089DCC85C9F1DA75C295032AE((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		V_0 = (List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_0;
		V_1 = (int32_t)0;
		goto IL_00a0;
	}

IL_000f:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_1);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_1, (int32_t)L_2, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_2 = (InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E *)((InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4)));
		InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E * L_4 = V_2;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E * L_5 = V_2;
		RuntimeObject * L_6 = ___arg00;
		RuntimeObject * L_7 = ___arg11;
		NullCheck((InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E *)L_5);
		((  void (*) (InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E *)L_5, (RuntimeObject *)L_6, (RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		goto IL_009b;
	}

IL_0030:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_8 = V_0;
		int32_t L_9 = V_1;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_8);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_10 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_8, (int32_t)L_9, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_3 = (InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)IsInst((RuntimeObject*)L_10, InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC_il2cpp_TypeInfo_var));
		InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * L_11 = V_3;
		if (!L_11)
		{
			goto IL_004f;
		}
	}
	{
		InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * L_12 = V_3;
		NullCheck((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)L_12);
		InvokableCall_Invoke_m0B9E7F14A2C67AB51F01745BD2C6C423114C9394((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)L_12, /*hidden argument*/NULL);
		goto IL_009a;
	}

IL_004f:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_13 = V_0;
		int32_t L_14 = V_1;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_13);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_15 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_13, (int32_t)L_14, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_4 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_15;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_16 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		if (L_16)
		{
			goto IL_0070;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->set_m_InvokeArray_4(L_17);
	}

IL_0070:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_18 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		RuntimeObject * L_19 = ___arg00;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_19);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_20 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		RuntimeObject * L_21 = ___arg11;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_21);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_21);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_22 = V_4;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_23 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		NullCheck((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_22);
		VirtActionInvoker1< ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_22, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_23);
	}

IL_009a:
	{
	}

IL_009b:
	{
		int32_t L_24 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_00a0:
	{
		int32_t L_25 = V_1;
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_26 = V_0;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_26);
		int32_t L_27 = List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_26, /*hidden argument*/List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9_RuntimeMethod_var);
		if ((((int32_t)L_25) < ((int32_t)L_27)))
		{
			goto IL_000f;
		}
	}
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
// System.Void UnityEngine.Events.UnityEvent`2<UnityEngine.Vector3,UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2__ctor_m67302CCB5A9FAEC3330D12FBAEB8AFC15B199E48_gshared (UnityEvent_2_t2278D9A02F1B106209E4C560EE1B371E13EAABC2 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_4((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL);
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase__ctor_m57AF08DAFA9C1B4F4C8DA855116900BAE8DF9595((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`2<UnityEngine.Vector3,UnityEngine.Vector3>::AddListener(UnityEngine.Events.UnityAction`2<T0,T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2_AddListener_m93A23F9FCD436FE871D7AA0E54F1D22D49885E42_gshared (UnityEvent_2_t2278D9A02F1B106209E4C560EE1B371E13EAABC2 * __this, UnityAction_2_tF6C9DFC311E64D1A3FF55407E541034432E32DE2 * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_2_tF6C9DFC311E64D1A3FF55407E541034432E32DE2 * L_0 = ___call0;
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_1 = ((  BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * (*) (UnityAction_2_tF6C9DFC311E64D1A3FF55407E541034432E32DE2 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((UnityAction_2_tF6C9DFC311E64D1A3FF55407E541034432E32DE2 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase_AddCall_mD45F68C1A40E2BD9B0754490B7709846B84E8075((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`2<UnityEngine.Vector3,UnityEngine.Vector3>::RemoveListener(UnityEngine.Events.UnityAction`2<T0,T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2_RemoveListener_m363740C90E0D222370FE3257C90590E8F6269137_gshared (UnityEvent_2_t2278D9A02F1B106209E4C560EE1B371E13EAABC2 * __this, UnityAction_2_tF6C9DFC311E64D1A3FF55407E541034432E32DE2 * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_2_tF6C9DFC311E64D1A3FF55407E541034432E32DE2 * L_0 = ___call0;
		NullCheck((Delegate_t *)L_0);
		RuntimeObject * L_1 = Delegate_get_Target_m5371341CE435E001E9FD407AE78F728824CE20E2_inline((Delegate_t *)L_0, /*hidden argument*/NULL);
		UnityAction_2_tF6C9DFC311E64D1A3FF55407E541034432E32DE2 * L_2 = ___call0;
		NullCheck((Delegate_t *)L_2);
		MethodInfo_t * L_3 = Delegate_get_Method_m0AC85D2B0C4CA63C471BC37FFDC3A5EA1E8ED048((Delegate_t *)L_2, /*hidden argument*/NULL);
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase_RemoveListener_mE7EBC544115373D2357599AC07F41F13A8C5A49E((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, (RuntimeObject *)L_1, (MethodInfo_t *)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`2<UnityEngine.Vector3,UnityEngine.Vector3>::FindMethod_Impl(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_2_FindMethod_Impl_m77399949DDF32B977379A0113301316608705847_gshared (UnityEvent_2_t2278D9A02F1B106209E4C560EE1B371E13EAABC2 * __this, String_t* ___name0, RuntimeObject * ___targetObj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_2_FindMethod_Impl_m77399949DDF32B977379A0113301316608705847_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_2 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)SZArrayNew(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var, (uint32_t)2);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_3 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_2;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_6 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_3;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_7 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 3)) };
		Type_t * L_8 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t *)L_8);
		MethodInfo_t * L_9 = UnityEventBase_GetValidMethodInfo_m4521621AB72C7265A2C0EC6911BE4DC42A99B6A5((RuntimeObject *)L_0, (String_t*)L_1, (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_6, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_9;
		goto IL_002e;
	}

IL_002e:
	{
		MethodInfo_t * L_10 = V_0;
		return L_10;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`2<UnityEngine.Vector3,UnityEngine.Vector3>::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * UnityEvent_2_GetDelegate_m36B9C7B3F7E44F6BEEF310CA69782B8A29F719A8_gshared (UnityEvent_2_t2278D9A02F1B106209E4C560EE1B371E13EAABC2 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_2_t3EAAD221313F6BD06E1AB8DA06796EE9236B3840 * L_2 = (InvokableCall_2_t3EAAD221313F6BD06E1AB8DA06796EE9236B3840 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4));
		((  void (*) (InvokableCall_2_t3EAAD221313F6BD06E1AB8DA06796EE9236B3840 *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_0 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_2;
		goto IL_000e;
	}

IL_000e:
	{
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`2<UnityEngine.Vector3,UnityEngine.Vector3>::GetDelegate(UnityEngine.Events.UnityAction`2<T0,T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * UnityEvent_2_GetDelegate_mAB8537733FEE9CB70D9FCC499E22CE1E6B72C803_gshared (UnityAction_2_tF6C9DFC311E64D1A3FF55407E541034432E32DE2 * ___action0, const RuntimeMethod* method)
{
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_0 = NULL;
	{
		UnityAction_2_tF6C9DFC311E64D1A3FF55407E541034432E32DE2 * L_0 = ___action0;
		InvokableCall_2_t3EAAD221313F6BD06E1AB8DA06796EE9236B3840 * L_1 = (InvokableCall_2_t3EAAD221313F6BD06E1AB8DA06796EE9236B3840 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		((  void (*) (InvokableCall_2_t3EAAD221313F6BD06E1AB8DA06796EE9236B3840 *, UnityAction_2_tF6C9DFC311E64D1A3FF55407E541034432E32DE2 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(L_1, (UnityAction_2_tF6C9DFC311E64D1A3FF55407E541034432E32DE2 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		V_0 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_1;
		goto IL_000d;
	}

IL_000d:
	{
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Events.UnityEvent`2<UnityEngine.Vector3,UnityEngine.Vector3>::Invoke(T0,T1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2_Invoke_m104BA364B9C5FEF97DFD23D90A6F0A4E5F09A8AF_gshared (UnityEvent_2_t2278D9A02F1B106209E4C560EE1B371E13EAABC2 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___arg00, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___arg11, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_2_Invoke_m104BA364B9C5FEF97DFD23D90A6F0A4E5F09A8AF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * V_0 = NULL;
	int32_t V_1 = 0;
	InvokableCall_2_t3EAAD221313F6BD06E1AB8DA06796EE9236B3840 * V_2 = NULL;
	InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * V_3 = NULL;
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_4 = NULL;
	{
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_0 = UnityEventBase_PrepareInvoke_mFA3E2C97DB776A1089DCC85C9F1DA75C295032AE((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		V_0 = (List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_0;
		V_1 = (int32_t)0;
		goto IL_00a0;
	}

IL_000f:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_1);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_1, (int32_t)L_2, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_2 = (InvokableCall_2_t3EAAD221313F6BD06E1AB8DA06796EE9236B3840 *)((InvokableCall_2_t3EAAD221313F6BD06E1AB8DA06796EE9236B3840 *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4)));
		InvokableCall_2_t3EAAD221313F6BD06E1AB8DA06796EE9236B3840 * L_4 = V_2;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		InvokableCall_2_t3EAAD221313F6BD06E1AB8DA06796EE9236B3840 * L_5 = V_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = ___arg00;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = ___arg11;
		NullCheck((InvokableCall_2_t3EAAD221313F6BD06E1AB8DA06796EE9236B3840 *)L_5);
		((  void (*) (InvokableCall_2_t3EAAD221313F6BD06E1AB8DA06796EE9236B3840 *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((InvokableCall_2_t3EAAD221313F6BD06E1AB8DA06796EE9236B3840 *)L_5, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_6, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		goto IL_009b;
	}

IL_0030:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_8 = V_0;
		int32_t L_9 = V_1;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_8);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_10 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_8, (int32_t)L_9, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_3 = (InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)IsInst((RuntimeObject*)L_10, InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC_il2cpp_TypeInfo_var));
		InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * L_11 = V_3;
		if (!L_11)
		{
			goto IL_004f;
		}
	}
	{
		InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * L_12 = V_3;
		NullCheck((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)L_12);
		InvokableCall_Invoke_m0B9E7F14A2C67AB51F01745BD2C6C423114C9394((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)L_12, /*hidden argument*/NULL);
		goto IL_009a;
	}

IL_004f:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_13 = V_0;
		int32_t L_14 = V_1;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_13);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_15 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_13, (int32_t)L_14, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_4 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_15;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_16 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		if (L_16)
		{
			goto IL_0070;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->set_m_InvokeArray_4(L_17);
	}

IL_0070:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_18 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = ___arg00;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = L_19;
		RuntimeObject * L_21 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8), &L_20);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_21);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_21);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_22 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = ___arg11;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = L_23;
		RuntimeObject * L_25 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9), &L_24);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_25);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_25);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_26 = V_4;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_27 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		NullCheck((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_26);
		VirtActionInvoker1< ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_26, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_27);
	}

IL_009a:
	{
	}

IL_009b:
	{
		int32_t L_28 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_00a0:
	{
		int32_t L_29 = V_1;
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_30 = V_0;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_30);
		int32_t L_31 = List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_30, /*hidden argument*/List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9_RuntimeMethod_var);
		if ((((int32_t)L_29) < ((int32_t)L_31)))
		{
			goto IL_000f;
		}
	}
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
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Int32,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_3__ctor_m410EC6890B7CF5E17AA0950268F677BF4532B3F4_gshared (UnityEvent_3_t2B0296963C7C76F6A5D478C34AFAA9759C1CA3F2 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_4((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL);
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase__ctor_m57AF08DAFA9C1B4F4C8DA855116900BAE8DF9595((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Int32,System.Int32>::AddListener(UnityEngine.Events.UnityAction`3<T0,T1,T2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_3_AddListener_mB14B68D663D21A67DEEB7BDAE72FB8F321C3D531_gshared (UnityEvent_3_t2B0296963C7C76F6A5D478C34AFAA9759C1CA3F2 * __this, UnityAction_3_t1FF48E6A020CC297A52A774322E1ABAFB7F989F7 * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_3_t1FF48E6A020CC297A52A774322E1ABAFB7F989F7 * L_0 = ___call0;
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_1 = ((  BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * (*) (UnityAction_3_t1FF48E6A020CC297A52A774322E1ABAFB7F989F7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((UnityAction_3_t1FF48E6A020CC297A52A774322E1ABAFB7F989F7 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase_AddCall_mD45F68C1A40E2BD9B0754490B7709846B84E8075((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Int32,System.Int32>::RemoveListener(UnityEngine.Events.UnityAction`3<T0,T1,T2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_3_RemoveListener_mACECA7FE14490CA5F649C644AEF58CBD322D8FFE_gshared (UnityEvent_3_t2B0296963C7C76F6A5D478C34AFAA9759C1CA3F2 * __this, UnityAction_3_t1FF48E6A020CC297A52A774322E1ABAFB7F989F7 * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_3_t1FF48E6A020CC297A52A774322E1ABAFB7F989F7 * L_0 = ___call0;
		NullCheck((Delegate_t *)L_0);
		RuntimeObject * L_1 = Delegate_get_Target_m5371341CE435E001E9FD407AE78F728824CE20E2_inline((Delegate_t *)L_0, /*hidden argument*/NULL);
		UnityAction_3_t1FF48E6A020CC297A52A774322E1ABAFB7F989F7 * L_2 = ___call0;
		NullCheck((Delegate_t *)L_2);
		MethodInfo_t * L_3 = Delegate_get_Method_m0AC85D2B0C4CA63C471BC37FFDC3A5EA1E8ED048((Delegate_t *)L_2, /*hidden argument*/NULL);
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase_RemoveListener_mE7EBC544115373D2357599AC07F41F13A8C5A49E((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, (RuntimeObject *)L_1, (MethodInfo_t *)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`3<System.Object,System.Int32,System.Int32>::FindMethod_Impl(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_3_FindMethod_Impl_mDEE1409662BC040478ADF5E0ABF95B8E381D32C4_gshared (UnityEvent_3_t2B0296963C7C76F6A5D478C34AFAA9759C1CA3F2 * __this, String_t* ___name0, RuntimeObject * ___targetObj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_3_FindMethod_Impl_mDEE1409662BC040478ADF5E0ABF95B8E381D32C4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_2 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)SZArrayNew(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var, (uint32_t)3);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_3 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_2;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_6 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_3;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_7 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 3)) };
		Type_t * L_8 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t *)L_8);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_9 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_6;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_10 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 4)) };
		Type_t * L_11 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (Type_t *)L_11);
		MethodInfo_t * L_12 = UnityEventBase_GetValidMethodInfo_m4521621AB72C7265A2C0EC6911BE4DC42A99B6A5((RuntimeObject *)L_0, (String_t*)L_1, (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_9, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_12;
		goto IL_003b;
	}

IL_003b:
	{
		MethodInfo_t * L_13 = V_0;
		return L_13;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`3<System.Object,System.Int32,System.Int32>::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * UnityEvent_3_GetDelegate_m86F79543DFE31A25A4BBA5B165DF42922D30619B_gshared (UnityEvent_3_t2B0296963C7C76F6A5D478C34AFAA9759C1CA3F2 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_3_t6A8BFB842DE22C189B46EBAB57685EB9778BE9ED * L_2 = (InvokableCall_3_t6A8BFB842DE22C189B46EBAB57685EB9778BE9ED *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5));
		((  void (*) (InvokableCall_3_t6A8BFB842DE22C189B46EBAB57685EB9778BE9ED *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		V_0 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_2;
		goto IL_000e;
	}

IL_000e:
	{
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`3<System.Object,System.Int32,System.Int32>::GetDelegate(UnityEngine.Events.UnityAction`3<T0,T1,T2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * UnityEvent_3_GetDelegate_mDD2C8B857C24F0BD91F0114B5937FF71F1AEB316_gshared (UnityAction_3_t1FF48E6A020CC297A52A774322E1ABAFB7F989F7 * ___action0, const RuntimeMethod* method)
{
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_0 = NULL;
	{
		UnityAction_3_t1FF48E6A020CC297A52A774322E1ABAFB7F989F7 * L_0 = ___action0;
		InvokableCall_3_t6A8BFB842DE22C189B46EBAB57685EB9778BE9ED * L_1 = (InvokableCall_3_t6A8BFB842DE22C189B46EBAB57685EB9778BE9ED *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((  void (*) (InvokableCall_3_t6A8BFB842DE22C189B46EBAB57685EB9778BE9ED *, UnityAction_3_t1FF48E6A020CC297A52A774322E1ABAFB7F989F7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 7)->methodPointer)(L_1, (UnityAction_3_t1FF48E6A020CC297A52A774322E1ABAFB7F989F7 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		V_0 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_1;
		goto IL_000d;
	}

IL_000d:
	{
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Int32,System.Int32>::Invoke(T0,T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_3_Invoke_m73493A0DE0D3DB59CC6BE8B59C057765ABCAB77D_gshared (UnityEvent_3_t2B0296963C7C76F6A5D478C34AFAA9759C1CA3F2 * __this, RuntimeObject * ___arg00, int32_t ___arg11, int32_t ___arg22, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_3_Invoke_m73493A0DE0D3DB59CC6BE8B59C057765ABCAB77D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * V_0 = NULL;
	int32_t V_1 = 0;
	InvokableCall_3_t6A8BFB842DE22C189B46EBAB57685EB9778BE9ED * V_2 = NULL;
	InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * V_3 = NULL;
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_4 = NULL;
	{
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_0 = UnityEventBase_PrepareInvoke_mFA3E2C97DB776A1089DCC85C9F1DA75C295032AE((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		V_0 = (List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_0;
		V_1 = (int32_t)0;
		goto IL_00af;
	}

IL_000f:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_1);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_1, (int32_t)L_2, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_2 = (InvokableCall_3_t6A8BFB842DE22C189B46EBAB57685EB9778BE9ED *)((InvokableCall_3_t6A8BFB842DE22C189B46EBAB57685EB9778BE9ED *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5)));
		InvokableCall_3_t6A8BFB842DE22C189B46EBAB57685EB9778BE9ED * L_4 = V_2;
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		InvokableCall_3_t6A8BFB842DE22C189B46EBAB57685EB9778BE9ED * L_5 = V_2;
		RuntimeObject * L_6 = ___arg00;
		int32_t L_7 = ___arg11;
		int32_t L_8 = ___arg22;
		NullCheck((InvokableCall_3_t6A8BFB842DE22C189B46EBAB57685EB9778BE9ED *)L_5);
		((  void (*) (InvokableCall_3_t6A8BFB842DE22C189B46EBAB57685EB9778BE9ED *, RuntimeObject *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((InvokableCall_3_t6A8BFB842DE22C189B46EBAB57685EB9778BE9ED *)L_5, (RuntimeObject *)L_6, (int32_t)L_7, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		goto IL_00aa;
	}

IL_0031:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_9 = V_0;
		int32_t L_10 = V_1;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_9);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_11 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_9, (int32_t)L_10, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_3 = (InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)IsInst((RuntimeObject*)L_11, InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC_il2cpp_TypeInfo_var));
		InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * L_12 = V_3;
		if (!L_12)
		{
			goto IL_0050;
		}
	}
	{
		InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * L_13 = V_3;
		NullCheck((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)L_13);
		InvokableCall_Invoke_m0B9E7F14A2C67AB51F01745BD2C6C423114C9394((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)L_13, /*hidden argument*/NULL);
		goto IL_00a9;
	}

IL_0050:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_14 = V_0;
		int32_t L_15 = V_1;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_14);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_16 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_14, (int32_t)L_15, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_4 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_16;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		if (L_17)
		{
			goto IL_0071;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_18 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->set_m_InvokeArray_4(L_18);
	}

IL_0071:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_19 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		RuntimeObject * L_20 = ___arg00;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_20);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_21 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		int32_t L_22 = ___arg11;
		int32_t L_23 = L_22;
		RuntimeObject * L_24 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10), &L_23);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_24);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_24);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_25 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		int32_t L_26 = ___arg22;
		int32_t L_27 = L_26;
		RuntimeObject * L_28 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 11), &L_27);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_28);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_28);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_29 = V_4;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_30 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		NullCheck((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_29);
		VirtActionInvoker1< ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_29, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_30);
	}

IL_00a9:
	{
	}

IL_00aa:
	{
		int32_t L_31 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
	}

IL_00af:
	{
		int32_t L_32 = V_1;
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_33 = V_0;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_33);
		int32_t L_34 = List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_33, /*hidden argument*/List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9_RuntimeMethod_var);
		if ((((int32_t)L_32) < ((int32_t)L_34)))
		{
			goto IL_000f;
		}
	}
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
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_3__ctor_mF6A34E6243359342CE52C9E31132478CA9BA73AD_gshared (UnityEvent_3_tBDBEEB66A13CAD2A4067CE23F6BE52B4CEE94E15 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_4((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL);
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase__ctor_m57AF08DAFA9C1B4F4C8DA855116900BAE8DF9595((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Int32>::AddListener(UnityEngine.Events.UnityAction`3<T0,T1,T2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_3_AddListener_m71B43FC5FC82C1300FA3110AFBC720A9C0901DCC_gshared (UnityEvent_3_tBDBEEB66A13CAD2A4067CE23F6BE52B4CEE94E15 * __this, UnityAction_3_t2103C0F42D01FF19D30CCB1C9BA2EB2BE7BC9DCC * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_3_t2103C0F42D01FF19D30CCB1C9BA2EB2BE7BC9DCC * L_0 = ___call0;
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_1 = ((  BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * (*) (UnityAction_3_t2103C0F42D01FF19D30CCB1C9BA2EB2BE7BC9DCC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((UnityAction_3_t2103C0F42D01FF19D30CCB1C9BA2EB2BE7BC9DCC *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase_AddCall_mD45F68C1A40E2BD9B0754490B7709846B84E8075((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Int32>::RemoveListener(UnityEngine.Events.UnityAction`3<T0,T1,T2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_3_RemoveListener_mEC2E77BEAF6104B96215305FF6884083FF9662B3_gshared (UnityEvent_3_tBDBEEB66A13CAD2A4067CE23F6BE52B4CEE94E15 * __this, UnityAction_3_t2103C0F42D01FF19D30CCB1C9BA2EB2BE7BC9DCC * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_3_t2103C0F42D01FF19D30CCB1C9BA2EB2BE7BC9DCC * L_0 = ___call0;
		NullCheck((Delegate_t *)L_0);
		RuntimeObject * L_1 = Delegate_get_Target_m5371341CE435E001E9FD407AE78F728824CE20E2_inline((Delegate_t *)L_0, /*hidden argument*/NULL);
		UnityAction_3_t2103C0F42D01FF19D30CCB1C9BA2EB2BE7BC9DCC * L_2 = ___call0;
		NullCheck((Delegate_t *)L_2);
		MethodInfo_t * L_3 = Delegate_get_Method_m0AC85D2B0C4CA63C471BC37FFDC3A5EA1E8ED048((Delegate_t *)L_2, /*hidden argument*/NULL);
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase_RemoveListener_mE7EBC544115373D2357599AC07F41F13A8C5A49E((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, (RuntimeObject *)L_1, (MethodInfo_t *)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Int32>::FindMethod_Impl(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_3_FindMethod_Impl_mC93B777A0D291968576441D555D787D0930754B1_gshared (UnityEvent_3_tBDBEEB66A13CAD2A4067CE23F6BE52B4CEE94E15 * __this, String_t* ___name0, RuntimeObject * ___targetObj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_3_FindMethod_Impl_mC93B777A0D291968576441D555D787D0930754B1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_2 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)SZArrayNew(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var, (uint32_t)3);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_3 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_2;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_6 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_3;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_7 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 3)) };
		Type_t * L_8 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t *)L_8);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_9 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_6;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_10 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 4)) };
		Type_t * L_11 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (Type_t *)L_11);
		MethodInfo_t * L_12 = UnityEventBase_GetValidMethodInfo_m4521621AB72C7265A2C0EC6911BE4DC42A99B6A5((RuntimeObject *)L_0, (String_t*)L_1, (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_9, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_12;
		goto IL_003b;
	}

IL_003b:
	{
		MethodInfo_t * L_13 = V_0;
		return L_13;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Int32>::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * UnityEvent_3_GetDelegate_m6A209A0167444C2DF83B5F61B05CA968A6A41A9A_gshared (UnityEvent_3_tBDBEEB66A13CAD2A4067CE23F6BE52B4CEE94E15 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_3_t38BF33D846430AB39B24753B39023D6FA42734B5 * L_2 = (InvokableCall_3_t38BF33D846430AB39B24753B39023D6FA42734B5 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5));
		((  void (*) (InvokableCall_3_t38BF33D846430AB39B24753B39023D6FA42734B5 *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		V_0 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_2;
		goto IL_000e;
	}

IL_000e:
	{
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Int32>::GetDelegate(UnityEngine.Events.UnityAction`3<T0,T1,T2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * UnityEvent_3_GetDelegate_m3358956C1FD37AC0ACEC4ACE4C43DEE67081E5B9_gshared (UnityAction_3_t2103C0F42D01FF19D30CCB1C9BA2EB2BE7BC9DCC * ___action0, const RuntimeMethod* method)
{
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_0 = NULL;
	{
		UnityAction_3_t2103C0F42D01FF19D30CCB1C9BA2EB2BE7BC9DCC * L_0 = ___action0;
		InvokableCall_3_t38BF33D846430AB39B24753B39023D6FA42734B5 * L_1 = (InvokableCall_3_t38BF33D846430AB39B24753B39023D6FA42734B5 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((  void (*) (InvokableCall_3_t38BF33D846430AB39B24753B39023D6FA42734B5 *, UnityAction_3_t2103C0F42D01FF19D30CCB1C9BA2EB2BE7BC9DCC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 7)->methodPointer)(L_1, (UnityAction_3_t2103C0F42D01FF19D30CCB1C9BA2EB2BE7BC9DCC *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		V_0 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_1;
		goto IL_000d;
	}

IL_000d:
	{
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Int32>::Invoke(T0,T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_3_Invoke_m491E2207B7E6F885A7C0B12846108363E8D9BCC4_gshared (UnityEvent_3_tBDBEEB66A13CAD2A4067CE23F6BE52B4CEE94E15 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, int32_t ___arg22, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_3_Invoke_m491E2207B7E6F885A7C0B12846108363E8D9BCC4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * V_0 = NULL;
	int32_t V_1 = 0;
	InvokableCall_3_t38BF33D846430AB39B24753B39023D6FA42734B5 * V_2 = NULL;
	InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * V_3 = NULL;
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_4 = NULL;
	{
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_0 = UnityEventBase_PrepareInvoke_mFA3E2C97DB776A1089DCC85C9F1DA75C295032AE((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		V_0 = (List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_0;
		V_1 = (int32_t)0;
		goto IL_00af;
	}

IL_000f:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_1);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_1, (int32_t)L_2, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_2 = (InvokableCall_3_t38BF33D846430AB39B24753B39023D6FA42734B5 *)((InvokableCall_3_t38BF33D846430AB39B24753B39023D6FA42734B5 *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5)));
		InvokableCall_3_t38BF33D846430AB39B24753B39023D6FA42734B5 * L_4 = V_2;
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		InvokableCall_3_t38BF33D846430AB39B24753B39023D6FA42734B5 * L_5 = V_2;
		RuntimeObject * L_6 = ___arg00;
		RuntimeObject * L_7 = ___arg11;
		int32_t L_8 = ___arg22;
		NullCheck((InvokableCall_3_t38BF33D846430AB39B24753B39023D6FA42734B5 *)L_5);
		((  void (*) (InvokableCall_3_t38BF33D846430AB39B24753B39023D6FA42734B5 *, RuntimeObject *, RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((InvokableCall_3_t38BF33D846430AB39B24753B39023D6FA42734B5 *)L_5, (RuntimeObject *)L_6, (RuntimeObject *)L_7, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		goto IL_00aa;
	}

IL_0031:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_9 = V_0;
		int32_t L_10 = V_1;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_9);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_11 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_9, (int32_t)L_10, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_3 = (InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)IsInst((RuntimeObject*)L_11, InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC_il2cpp_TypeInfo_var));
		InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * L_12 = V_3;
		if (!L_12)
		{
			goto IL_0050;
		}
	}
	{
		InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * L_13 = V_3;
		NullCheck((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)L_13);
		InvokableCall_Invoke_m0B9E7F14A2C67AB51F01745BD2C6C423114C9394((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)L_13, /*hidden argument*/NULL);
		goto IL_00a9;
	}

IL_0050:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_14 = V_0;
		int32_t L_15 = V_1;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_14);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_16 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_14, (int32_t)L_15, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_4 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_16;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		if (L_17)
		{
			goto IL_0071;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_18 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->set_m_InvokeArray_4(L_18);
	}

IL_0071:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_19 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		RuntimeObject * L_20 = ___arg00;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_20);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_21 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		RuntimeObject * L_22 = ___arg11;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_22);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_23 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		int32_t L_24 = ___arg22;
		int32_t L_25 = L_24;
		RuntimeObject * L_26 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 11), &L_25);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_26);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_26);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_27 = V_4;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_28 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		NullCheck((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_27);
		VirtActionInvoker1< ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_27, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_28);
	}

IL_00a9:
	{
	}

IL_00aa:
	{
		int32_t L_29 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
	}

IL_00af:
	{
		int32_t L_30 = V_1;
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_31 = V_0;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_31);
		int32_t L_32 = List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_31, /*hidden argument*/List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9_RuntimeMethod_var);
		if ((((int32_t)L_30) < ((int32_t)L_32)))
		{
			goto IL_000f;
		}
	}
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
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_3__ctor_mF7A53B951222BC66BE6F471036270FC66C36FAA2_gshared (UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_4((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL);
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase__ctor_m57AF08DAFA9C1B4F4C8DA855116900BAE8DF9595((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::AddListener(UnityEngine.Events.UnityAction`3<T0,T1,T2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_3_AddListener_m053771428E61099B74A9B9C4C550001E7E84B9E9_gshared (UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9 * __this, UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * L_0 = ___call0;
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_1 = ((  BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * (*) (UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase_AddCall_mD45F68C1A40E2BD9B0754490B7709846B84E8075((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::RemoveListener(UnityEngine.Events.UnityAction`3<T0,T1,T2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_3_RemoveListener_m22F740B3A10F7F3F88A972A6249E59E08ADFE27C_gshared (UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9 * __this, UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * L_0 = ___call0;
		NullCheck((Delegate_t *)L_0);
		RuntimeObject * L_1 = Delegate_get_Target_m5371341CE435E001E9FD407AE78F728824CE20E2_inline((Delegate_t *)L_0, /*hidden argument*/NULL);
		UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * L_2 = ___call0;
		NullCheck((Delegate_t *)L_2);
		MethodInfo_t * L_3 = Delegate_get_Method_m0AC85D2B0C4CA63C471BC37FFDC3A5EA1E8ED048((Delegate_t *)L_2, /*hidden argument*/NULL);
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase_RemoveListener_mE7EBC544115373D2357599AC07F41F13A8C5A49E((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, (RuntimeObject *)L_1, (MethodInfo_t *)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_3_FindMethod_Impl_mF15A2B2F6BFE33613B6675FD2500E144CEF40FFA_gshared (UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9 * __this, String_t* ___name0, RuntimeObject * ___targetObj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_3_FindMethod_Impl_mF15A2B2F6BFE33613B6675FD2500E144CEF40FFA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_2 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)SZArrayNew(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var, (uint32_t)3);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_3 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_2;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_6 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_3;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_7 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 3)) };
		Type_t * L_8 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t *)L_8);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_9 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_6;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_10 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 4)) };
		Type_t * L_11 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (Type_t *)L_11);
		MethodInfo_t * L_12 = UnityEventBase_GetValidMethodInfo_m4521621AB72C7265A2C0EC6911BE4DC42A99B6A5((RuntimeObject *)L_0, (String_t*)L_1, (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_9, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_12;
		goto IL_003b;
	}

IL_003b:
	{
		MethodInfo_t * L_13 = V_0;
		return L_13;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * UnityEvent_3_GetDelegate_mDD941B02CC78310DE703586880CD8C926CF5EC2C_gshared (UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D * L_2 = (InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5));
		((  void (*) (InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		V_0 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_2;
		goto IL_000e;
	}

IL_000e:
	{
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::GetDelegate(UnityEngine.Events.UnityAction`3<T0,T1,T2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * UnityEvent_3_GetDelegate_m6A95ABED256536B28C208389611933B3378D71C5_gshared (UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * ___action0, const RuntimeMethod* method)
{
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_0 = NULL;
	{
		UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * L_0 = ___action0;
		InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D * L_1 = (InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((  void (*) (InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D *, UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 7)->methodPointer)(L_1, (UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		V_0 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_1;
		goto IL_000d;
	}

IL_000d:
	{
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::Invoke(T0,T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_3_Invoke_m012D72FFB78BAC1A48A2B8C027CC180D96E963DA_gshared (UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_3_Invoke_m012D72FFB78BAC1A48A2B8C027CC180D96E963DA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * V_0 = NULL;
	int32_t V_1 = 0;
	InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D * V_2 = NULL;
	InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * V_3 = NULL;
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_4 = NULL;
	{
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_0 = UnityEventBase_PrepareInvoke_mFA3E2C97DB776A1089DCC85C9F1DA75C295032AE((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		V_0 = (List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_0;
		V_1 = (int32_t)0;
		goto IL_00af;
	}

IL_000f:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_1);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_1, (int32_t)L_2, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_2 = (InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D *)((InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5)));
		InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D * L_4 = V_2;
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D * L_5 = V_2;
		RuntimeObject * L_6 = ___arg00;
		RuntimeObject * L_7 = ___arg11;
		RuntimeObject * L_8 = ___arg22;
		NullCheck((InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D *)L_5);
		((  void (*) (InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D *)L_5, (RuntimeObject *)L_6, (RuntimeObject *)L_7, (RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		goto IL_00aa;
	}

IL_0031:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_9 = V_0;
		int32_t L_10 = V_1;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_9);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_11 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_9, (int32_t)L_10, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_3 = (InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)IsInst((RuntimeObject*)L_11, InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC_il2cpp_TypeInfo_var));
		InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * L_12 = V_3;
		if (!L_12)
		{
			goto IL_0050;
		}
	}
	{
		InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * L_13 = V_3;
		NullCheck((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)L_13);
		InvokableCall_Invoke_m0B9E7F14A2C67AB51F01745BD2C6C423114C9394((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)L_13, /*hidden argument*/NULL);
		goto IL_00a9;
	}

IL_0050:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_14 = V_0;
		int32_t L_15 = V_1;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_14);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_16 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_14, (int32_t)L_15, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_4 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_16;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		if (L_17)
		{
			goto IL_0071;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_18 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->set_m_InvokeArray_4(L_18);
	}

IL_0071:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_19 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		RuntimeObject * L_20 = ___arg00;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_20);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_21 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		RuntimeObject * L_22 = ___arg11;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_22);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_23 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		RuntimeObject * L_24 = ___arg22;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_24);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_24);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_25 = V_4;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_26 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		NullCheck((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_25);
		VirtActionInvoker1< ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_25, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_26);
	}

IL_00a9:
	{
	}

IL_00aa:
	{
		int32_t L_27 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_00af:
	{
		int32_t L_28 = V_1;
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_29 = V_0;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_29);
		int32_t L_30 = List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_29, /*hidden argument*/List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9_RuntimeMethod_var);
		if ((((int32_t)L_28) < ((int32_t)L_30)))
		{
			goto IL_000f;
		}
	}
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
// System.Void UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_4__ctor_m04FBFD537FBAF349F05C24B6EB9360FF08685819_gshared (UnityEvent_4_t2145BBDEE01F7E33D8060C904609F2FFD8845A0A * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_4((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL);
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase__ctor_m57AF08DAFA9C1B4F4C8DA855116900BAE8DF9595((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_4_FindMethod_Impl_m74BBF94AAC7B6B09A4BC3E4A923CBFE4781D08A1_gshared (UnityEvent_4_t2145BBDEE01F7E33D8060C904609F2FFD8845A0A * __this, String_t* ___name0, RuntimeObject * ___targetObj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_4_FindMethod_Impl_m74BBF94AAC7B6B09A4BC3E4A923CBFE4781D08A1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_2 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)SZArrayNew(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var, (uint32_t)4);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_3 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_2;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_6 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_3;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_7 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 1)) };
		Type_t * L_8 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t *)L_8);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_9 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_6;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_10 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		Type_t * L_11 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (Type_t *)L_11);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_12 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_9;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_13 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 3)) };
		Type_t * L_14 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (Type_t *)L_14);
		MethodInfo_t * L_15 = UnityEventBase_GetValidMethodInfo_m4521621AB72C7265A2C0EC6911BE4DC42A99B6A5((RuntimeObject *)L_0, (String_t*)L_1, (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_12, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_15;
		goto IL_0048;
	}

IL_0048:
	{
		MethodInfo_t * L_16 = V_0;
		return L_16;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * UnityEvent_4_GetDelegate_mAD2A7239ECF210269A5974AE66F1CFDB13977F54_gshared (UnityEvent_4_t2145BBDEE01F7E33D8060C904609F2FFD8845A0A * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_4_t72FB1137599CE871685340E96EFDD317DB4831E6 * L_2 = (InvokableCall_4_t72FB1137599CE871685340E96EFDD317DB4831E6 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4));
		((  void (*) (InvokableCall_4_t72FB1137599CE871685340E96EFDD317DB4831E6 *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_0 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_2;
		goto IL_000e;
	}

IL_000e:
	{
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = V_0;
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
// System.Void UnityEngine.IntegratedSubsystemDescriptor`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntegratedSubsystemDescriptor_1__ctor_m75D74928A8F28189212EBEF7C8C2142D5D4B66B8_gshared (IntegratedSubsystemDescriptor_1_t2426B50A97CC5BA8E2BFE696F2EA1DDFC2174909 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((IntegratedSubsystemDescriptor_tCC675C388E8A720B9467FCE039B00E7BE7693812 *)__this);
		IntegratedSubsystemDescriptor__ctor_mBA91F292CA7A9147075DC6D2B09D0843E282FC21((IntegratedSubsystemDescriptor_tCC675C388E8A720B9467FCE039B00E7BE7693812 *)__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.IntegratedSubsystem`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntegratedSubsystem_1__ctor_mC4C6EE53C266D629703900C2FBA31C7BC93732F5_gshared (IntegratedSubsystem_1_t2DE7C58DE8F60DCFD451AAFB0B75E6B1BF94C134 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((IntegratedSubsystem_t3DA4A857E71E63A49B52353DBD88FA880196117E *)__this);
		IntegratedSubsystem__ctor_mAA7E5AA42CAE2649706D44E0D990545F29B96310((IntegratedSubsystem_t3DA4A857E71E63A49B52353DBD88FA880196117E *)__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Networking.Match.NetworkMatch_<ProcessMatchResponse>c__Iterator0`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CProcessMatchResponseU3Ec__Iterator0_2__ctor_mE1B2568F37EB121539134A63D77106FB960923DC_gshared (U3CProcessMatchResponseU3Ec__Iterator0_2_t72427F307E745E32CC54F0508FBB2CE01CFE0B50 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Networking.Match.NetworkMatch_<ProcessMatchResponse>c__Iterator0`2<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CProcessMatchResponseU3Ec__Iterator0_2_MoveNext_mE92921DD448A33BA2BF787B5D5C9213886FDFE5B_gshared (U3CProcessMatchResponseU3Ec__Iterator0_2_t72427F307E745E32CC54F0508FBB2CE01CFE0B50 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CProcessMatchResponseU3Ec__Iterator0_2_MoveNext_mE92921DD448A33BA2BF787B5D5C9213886FDFE5B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = (int32_t)__this->get_U24PC_6();
		V_0 = (uint32_t)L_0;
		__this->set_U24PC_6((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0047;
			}
		}
	}
	{
		goto IL_013f;
	}

IL_0021:
	{
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_2 = (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 *)__this->get_client_0();
		NullCheck((UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 *)L_2);
		UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353 * L_3 = UnityWebRequest_SendWebRequest_mF536CB2A0A39354A54B555B66B017816C5833EBD((UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 *)L_2, /*hidden argument*/NULL);
		__this->set_U24current_4(L_3);
		bool L_4 = (bool)__this->get_U24disposing_5();
		if (L_4)
		{
			goto IL_0042;
		}
	}
	{
		__this->set_U24PC_6(1);
	}

IL_0042:
	{
		goto IL_0141;
	}

IL_0047:
	{
		RuntimeObject * L_5 = ((  RuntimeObject * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		__this->set_U3CjsonInterfaceU3E__0_1(L_5);
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_6 = (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 *)__this->get_client_0();
		NullCheck((UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 *)L_6);
		bool L_7 = UnityWebRequest_get_isNetworkError_m082AFE1A58A330AC4CBD179606B61CB39DD44588((UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 *)L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_00d2;
		}
	}
	{
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_8 = (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 *)__this->get_client_0();
		NullCheck((UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 *)L_8);
		bool L_9 = UnityWebRequest_get_isHttpError_m8F636B70C239EC848FACC83189DE0C22CADEC1C3((UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 *)L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_00d2;
		}
	}
	{
	}

IL_0073:
	try
	{ // begin try (depth: 1)
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_10 = (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 *)__this->get_client_0();
		NullCheck((UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 *)L_10);
		DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * L_11 = UnityWebRequest_get_downloadHandler_m83044026479E6B4B2739DCE9EEA8A0FAE7D9AF41((UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 *)L_10, /*hidden argument*/NULL);
		NullCheck((DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 *)L_11);
		String_t* L_12 = DownloadHandler_get_text_m1D707E375899B4F4F0434B79AB8D57ADFE5424FF((DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 *)L_11, /*hidden argument*/NULL);
		RuntimeObject * L_13 = (RuntimeObject *)__this->get_U3CjsonInterfaceU3E__0_1();
		JsonUtility_FromJsonOverwrite_mBBBDCD9B8641C1CFC6DBF22778AD399D5325D90A((String_t*)L_12, (RuntimeObject *)L_13, /*hidden argument*/NULL);
		goto IL_00cc;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_009a;
		throw e;
	}

CATCH_009a:
	{ // begin catch(System.ArgumentException)
		V_1 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)((ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)__exception_local);
		RuntimeObject ** L_14 = (RuntimeObject **)__this->get_address_of_U3CjsonInterfaceU3E__0_1();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_15 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_16 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_15;
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_17 = V_1;
		NullCheck((RuntimeObject *)L_17);
		String_t* L_18 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_17);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_18);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_18);
		String_t* L_19 = UnityString_Format_m415056ECF8DA7B3EC6A8456E299D0C2002177387((String_t*)_stringLiteralBF59C8E6CEE45F36DB6254667EE895B2731A0750, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_16, /*hidden argument*/NULL);
		NullCheck((Response_tE3D1110D7F08CC65754EE4BF0F780D24FEB37742 *)(*L_14));
		Response_SetFailure_mBCE3605B454161D3F467F8BDA85B2BE7F02995B4((Response_tE3D1110D7F08CC65754EE4BF0F780D24FEB37742 *)(*L_14), (String_t*)L_19, /*hidden argument*/NULL);
		goto IL_00cc;
	} // end catch (depth: 1)

IL_00cc:
	{
		goto IL_0116;
	}

IL_00d2:
	{
		RuntimeObject ** L_20 = (RuntimeObject **)__this->get_address_of_U3CjsonInterfaceU3E__0_1();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_21 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_22 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_21;
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_23 = (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 *)__this->get_client_0();
		NullCheck((UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 *)L_23);
		String_t* L_24 = UnityWebRequest_get_error_mC79FE2460B3F30B8F9E5385BD7D2B4C5B295D7CC((UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 *)L_23, /*hidden argument*/NULL);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_24);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_24);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_25 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_22;
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_26 = (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 *)__this->get_client_0();
		NullCheck((UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 *)L_26);
		DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * L_27 = UnityWebRequest_get_downloadHandler_m83044026479E6B4B2739DCE9EEA8A0FAE7D9AF41((UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 *)L_26, /*hidden argument*/NULL);
		NullCheck((DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 *)L_27);
		String_t* L_28 = DownloadHandler_get_text_m1D707E375899B4F4F0434B79AB8D57ADFE5424FF((DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 *)L_27, /*hidden argument*/NULL);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_28);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_28);
		String_t* L_29 = UnityString_Format_m415056ECF8DA7B3EC6A8456E299D0C2002177387((String_t*)_stringLiteral22AC1B9DAB1A5A272FEBD04091C310E3D95A6989, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_25, /*hidden argument*/NULL);
		NullCheck((Response_tE3D1110D7F08CC65754EE4BF0F780D24FEB37742 *)(*L_20));
		Response_SetFailure_mBCE3605B454161D3F467F8BDA85B2BE7F02995B4((Response_tE3D1110D7F08CC65754EE4BF0F780D24FEB37742 *)(*L_20), (String_t*)L_29, /*hidden argument*/NULL);
	}

IL_0116:
	{
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_30 = (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 *)__this->get_client_0();
		NullCheck((UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 *)L_30);
		UnityWebRequest_Dispose_m6AFA87DA329282058723E5ACE016B0B08CFE806D((UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 *)L_30, /*hidden argument*/NULL);
		InternalResponseDelegate_2_tA096DAC41C013FEB4017B65B26A3B13B2C9F51C7 * L_31 = (InternalResponseDelegate_2_tA096DAC41C013FEB4017B65B26A3B13B2C9F51C7 *)__this->get_internalCallback_2();
		RuntimeObject * L_32 = (RuntimeObject *)__this->get_U3CjsonInterfaceU3E__0_1();
		RuntimeObject * L_33 = (RuntimeObject *)__this->get_userCallback_3();
		NullCheck((InternalResponseDelegate_2_tA096DAC41C013FEB4017B65B26A3B13B2C9F51C7 *)L_31);
		((  void (*) (InternalResponseDelegate_2_tA096DAC41C013FEB4017B65B26A3B13B2C9F51C7 *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((InternalResponseDelegate_2_tA096DAC41C013FEB4017B65B26A3B13B2C9F51C7 *)L_31, (RuntimeObject *)L_32, (RuntimeObject *)L_33, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		__this->set_U24PC_6((-1));
	}

IL_013f:
	{
		return (bool)0;
	}

IL_0141:
	{
		return (bool)1;
	}
}
// System.Object UnityEngine.Networking.Match.NetworkMatch_<ProcessMatchResponse>c__Iterator0`2<System.Object,System.Object>::System.Collections.Generic.IEnumerator<object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CProcessMatchResponseU3Ec__Iterator0_2_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_mF115C4B80914D8614E5407E7FC46945FA53B7DF7_gshared (U3CProcessMatchResponseU3Ec__Iterator0_2_t72427F307E745E32CC54F0508FBB2CE01CFE0B50 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U24current_4();
		V_0 = (RuntimeObject *)L_0;
		goto IL_000c;
	}

IL_000c:
	{
		RuntimeObject * L_1 = V_0;
		return L_1;
	}
}
// System.Object UnityEngine.Networking.Match.NetworkMatch_<ProcessMatchResponse>c__Iterator0`2<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CProcessMatchResponseU3Ec__Iterator0_2_System_Collections_IEnumerator_get_Current_m9D26D61B7B6A8A178CB373080582E97D42C9143B_gshared (U3CProcessMatchResponseU3Ec__Iterator0_2_t72427F307E745E32CC54F0508FBB2CE01CFE0B50 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U24current_4();
		V_0 = (RuntimeObject *)L_0;
		goto IL_000c;
	}

IL_000c:
	{
		RuntimeObject * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.NetworkMatch_<ProcessMatchResponse>c__Iterator0`2<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CProcessMatchResponseU3Ec__Iterator0_2_Dispose_m95F4938ECA552F658F8B8D0461036807695F9CD8_gshared (U3CProcessMatchResponseU3Ec__Iterator0_2_t72427F307E745E32CC54F0508FBB2CE01CFE0B50 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_5((bool)1);
		__this->set_U24PC_6((-1));
		return;
	}
}
// System.Void UnityEngine.Networking.Match.NetworkMatch_<ProcessMatchResponse>c__Iterator0`2<System.Object,System.Object>::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CProcessMatchResponseU3Ec__Iterator0_2_Reset_m895D33F47E0E7BB10A4DF619804900F98F0AD537_gshared (U3CProcessMatchResponseU3Ec__Iterator0_2_t72427F307E745E32CC54F0508FBB2CE01CFE0B50 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CProcessMatchResponseU3Ec__Iterator0_2_Reset_m895D33F47E0E7BB10A4DF619804900F98F0AD537_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CProcessMatchResponseU3Ec__Iterator0_2_Reset_m895D33F47E0E7BB10A4DF619804900F98F0AD537_RuntimeMethod_var);
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
// System.Void UnityEngine.Networking.Match.NetworkMatch_DataResponseDelegate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataResponseDelegate_1__ctor_m8686B56E20068DBEA38365999F2FD12DCD3DD5F5_gshared (DataResponseDelegate_1_t26170CF2105600AC9B412E932EB4103D80D763C1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Networking.Match.NetworkMatch_DataResponseDelegate`1<System.Object>::Invoke(System.Boolean,System.String,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataResponseDelegate_1_Invoke_mD39A9B6892C634627056033A4539978573E0E14A_gshared (DataResponseDelegate_1_t26170CF2105600AC9B412E932EB4103D80D763C1 * __this, bool ___success0, String_t* ___extendedInfo1, RuntimeObject * ___responseData2, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
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
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (bool, String_t*, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___success0, ___extendedInfo1, ___responseData2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, bool, String_t*, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___success0, ___extendedInfo1, ___responseData2, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (bool, String_t*, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___success0, ___extendedInfo1, ___responseData2, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< bool, String_t*, RuntimeObject * >::Invoke(targetMethod, targetThis, ___success0, ___extendedInfo1, ___responseData2);
					else
						GenericVirtActionInvoker3< bool, String_t*, RuntimeObject * >::Invoke(targetMethod, targetThis, ___success0, ___extendedInfo1, ___responseData2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< bool, String_t*, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___success0, ___extendedInfo1, ___responseData2);
					else
						VirtActionInvoker3< bool, String_t*, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___success0, ___extendedInfo1, ___responseData2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, bool, String_t*, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___success0, ___extendedInfo1, ___responseData2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Networking.Match.NetworkMatch_DataResponseDelegate`1<System.Object>::BeginInvoke(System.Boolean,System.String,T,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataResponseDelegate_1_BeginInvoke_mDF10224CF1CB08DFD4E2398664E3C7ED5EEAE168_gshared (DataResponseDelegate_1_t26170CF2105600AC9B412E932EB4103D80D763C1 * __this, bool ___success0, String_t* ___extendedInfo1, RuntimeObject * ___responseData2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DataResponseDelegate_1_BeginInvoke_mDF10224CF1CB08DFD4E2398664E3C7ED5EEAE168_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &___success0);
	__d_args[1] = ___extendedInfo1;
	__d_args[2] = ___responseData2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void UnityEngine.Networking.Match.NetworkMatch_DataResponseDelegate`1<System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataResponseDelegate_1_EndInvoke_m9C066D95E3BF16CE510944FA4764A3F05BFC5033_gshared (DataResponseDelegate_1_t26170CF2105600AC9B412E932EB4103D80D763C1 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.Match.NetworkMatch_InternalResponseDelegate`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalResponseDelegate_2__ctor_mB5F4D02C91141D2EEDEB55BCC5144759806D70AE_gshared (InternalResponseDelegate_2_tA096DAC41C013FEB4017B65B26A3B13B2C9F51C7 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Networking.Match.NetworkMatch_InternalResponseDelegate`2<System.Object,System.Object>::Invoke(T,U)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalResponseDelegate_2_Invoke_m10B2EFB27CFBB2AC4BE12F55CF451B863D3BE395_gshared (InternalResponseDelegate_2_tA096DAC41C013FEB4017B65B26A3B13B2C9F51C7 * __this, RuntimeObject * ___response0, RuntimeObject * ___userCallback1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
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
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___response0, ___userCallback1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___response0, ___userCallback1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___response0, ___userCallback1);
					else
						GenericVirtActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___response0, ___userCallback1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___response0, ___userCallback1);
					else
						VirtActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___response0, ___userCallback1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___response0, ___userCallback1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___response0, ___userCallback1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___response0, ___userCallback1);
					else
						GenericVirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___response0, ___userCallback1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___response0, ___userCallback1);
					else
						VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___response0, ___userCallback1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___response0, ___userCallback1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Networking.Match.NetworkMatch_InternalResponseDelegate`2<System.Object,System.Object>::BeginInvoke(T,U,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InternalResponseDelegate_2_BeginInvoke_mBB25A661A61A16461BCB1B3413FE9C6D0828385F_gshared (InternalResponseDelegate_2_tA096DAC41C013FEB4017B65B26A3B13B2C9F51C7 * __this, RuntimeObject * ___response0, RuntimeObject * ___userCallback1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___response0;
	__d_args[1] = ___userCallback1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.Networking.Match.NetworkMatch_InternalResponseDelegate`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalResponseDelegate_2_EndInvoke_m586B417F9D58E2BD8A1B83F26476F2CA28D8869B_gshared (InternalResponseDelegate_2_tA096DAC41C013FEB4017B65B26A3B13B2C9F51C7 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
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
// System.Void UnityEngine.Networking.SyncList`1_SyncListChanged<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListChanged__ctor_m4400B068ADE564D4B9E66B8F44157B67269F33A8_gshared (SyncListChanged_t5156E5B2411DE07D5AEA8F98B87E4FBD1E626D6E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Networking.SyncList`1_SyncListChanged<System.Boolean>::Invoke(UnityEngine.Networking.SyncList`1_Operation<T>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListChanged_Invoke_m748BCDB792525E7F8D2EFB8DF990D96021351F73_gshared (SyncListChanged_t5156E5B2411DE07D5AEA8F98B87E4FBD1E626D6E * __this, int32_t ___op0, int32_t ___itemIndex1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
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
				typedef void (*FunctionPointerType) (int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___op0, ___itemIndex1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___op0, ___itemIndex1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___op0, ___itemIndex1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< int32_t, int32_t >::Invoke(targetMethod, targetThis, ___op0, ___itemIndex1);
					else
						GenericVirtActionInvoker2< int32_t, int32_t >::Invoke(targetMethod, targetThis, ___op0, ___itemIndex1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___op0, ___itemIndex1);
					else
						VirtActionInvoker2< int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___op0, ___itemIndex1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___op0, ___itemIndex1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Networking.SyncList`1_SyncListChanged<System.Boolean>::BeginInvoke(UnityEngine.Networking.SyncList`1_Operation<T>,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SyncListChanged_BeginInvoke_mFDBA43D705352562352A10697B2CE3565373D8E7_gshared (SyncListChanged_t5156E5B2411DE07D5AEA8F98B87E4FBD1E626D6E * __this, int32_t ___op0, int32_t ___itemIndex1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SyncListChanged_BeginInvoke_mFDBA43D705352562352A10697B2CE3565373D8E7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Operation_tAF7E4E7F5B99C35049BD5BA1224C52CF15F1D2D5_il2cpp_TypeInfo_var, &___op0);
	__d_args[1] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___itemIndex1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.Networking.SyncList`1_SyncListChanged<System.Boolean>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListChanged_EndInvoke_mF4F3D73463B12E63B0297E8FDC2DFEF19B22C063_gshared (SyncListChanged_t5156E5B2411DE07D5AEA8F98B87E4FBD1E626D6E * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.SyncList`1_SyncListChanged<System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListChanged__ctor_mAB4F43CDAAF1EE6238CDC9EE45D11419C267EF74_gshared (SyncListChanged_t1A1EBC018732CBF3B1F86CE21BE59B5107844339 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Networking.SyncList`1_SyncListChanged<System.Int32>::Invoke(UnityEngine.Networking.SyncList`1_Operation<T>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListChanged_Invoke_m824352F779CDD3F38F961FD8FCFB81CEF281E8BC_gshared (SyncListChanged_t1A1EBC018732CBF3B1F86CE21BE59B5107844339 * __this, int32_t ___op0, int32_t ___itemIndex1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
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
				typedef void (*FunctionPointerType) (int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___op0, ___itemIndex1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___op0, ___itemIndex1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___op0, ___itemIndex1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< int32_t, int32_t >::Invoke(targetMethod, targetThis, ___op0, ___itemIndex1);
					else
						GenericVirtActionInvoker2< int32_t, int32_t >::Invoke(targetMethod, targetThis, ___op0, ___itemIndex1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___op0, ___itemIndex1);
					else
						VirtActionInvoker2< int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___op0, ___itemIndex1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___op0, ___itemIndex1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Networking.SyncList`1_SyncListChanged<System.Int32>::BeginInvoke(UnityEngine.Networking.SyncList`1_Operation<T>,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SyncListChanged_BeginInvoke_m80020B83FE3AC6E14E1D7A96E3D3BC44DEA8ABFF_gshared (SyncListChanged_t1A1EBC018732CBF3B1F86CE21BE59B5107844339 * __this, int32_t ___op0, int32_t ___itemIndex1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SyncListChanged_BeginInvoke_m80020B83FE3AC6E14E1D7A96E3D3BC44DEA8ABFF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Operation_tD52C254604455280BBCD2C3F23F8AFA5BA756F84_il2cpp_TypeInfo_var, &___op0);
	__d_args[1] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___itemIndex1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.Networking.SyncList`1_SyncListChanged<System.Int32>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListChanged_EndInvoke_mF1049E3133D23642A00B2FADA4A61AF3347A27D6_gshared (SyncListChanged_t1A1EBC018732CBF3B1F86CE21BE59B5107844339 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.SyncList`1_SyncListChanged<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListChanged__ctor_m6527FDE0CCF3A5E2560784D9F44E49436CC6EC30_gshared (SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Networking.SyncList`1_SyncListChanged<System.Object>::Invoke(UnityEngine.Networking.SyncList`1_Operation<T>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListChanged_Invoke_m3889C922EAAEB4AAA08ADC6E471A1C6D2418D77B_gshared (SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 * __this, int32_t ___op0, int32_t ___itemIndex1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
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
				typedef void (*FunctionPointerType) (int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___op0, ___itemIndex1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___op0, ___itemIndex1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___op0, ___itemIndex1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< int32_t, int32_t >::Invoke(targetMethod, targetThis, ___op0, ___itemIndex1);
					else
						GenericVirtActionInvoker2< int32_t, int32_t >::Invoke(targetMethod, targetThis, ___op0, ___itemIndex1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___op0, ___itemIndex1);
					else
						VirtActionInvoker2< int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___op0, ___itemIndex1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___op0, ___itemIndex1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Networking.SyncList`1_SyncListChanged<System.Object>::BeginInvoke(UnityEngine.Networking.SyncList`1_Operation<T>,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SyncListChanged_BeginInvoke_mABAF976159048FE4F156A75B787587251A0C42C1_gshared (SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 * __this, int32_t ___op0, int32_t ___itemIndex1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SyncListChanged_BeginInvoke_mABAF976159048FE4F156A75B787587251A0C42C1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Operation_t1B75654F0759475B2C029E92A9B3C443D5D644C9_il2cpp_TypeInfo_var, &___op0);
	__d_args[1] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___itemIndex1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.Networking.SyncList`1_SyncListChanged<System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListChanged_EndInvoke_mBD24EE5B71DE635FFBC219EFB6246BE7115D9522_gshared (SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.SyncList`1_SyncListChanged<System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListChanged__ctor_m14D14388BBE074DB5C380EACF9523837C9F1B683_gshared (SyncListChanged_t63BE6CD22C2B89F865722BF980F4351DF0EC68D6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Networking.SyncList`1_SyncListChanged<System.Single>::Invoke(UnityEngine.Networking.SyncList`1_Operation<T>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListChanged_Invoke_m80FFA680D6C089A490F9AB71E69D89312DC9E197_gshared (SyncListChanged_t63BE6CD22C2B89F865722BF980F4351DF0EC68D6 * __this, int32_t ___op0, int32_t ___itemIndex1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
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
				typedef void (*FunctionPointerType) (int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___op0, ___itemIndex1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___op0, ___itemIndex1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___op0, ___itemIndex1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< int32_t, int32_t >::Invoke(targetMethod, targetThis, ___op0, ___itemIndex1);
					else
						GenericVirtActionInvoker2< int32_t, int32_t >::Invoke(targetMethod, targetThis, ___op0, ___itemIndex1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___op0, ___itemIndex1);
					else
						VirtActionInvoker2< int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___op0, ___itemIndex1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___op0, ___itemIndex1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Networking.SyncList`1_SyncListChanged<System.Single>::BeginInvoke(UnityEngine.Networking.SyncList`1_Operation<T>,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SyncListChanged_BeginInvoke_mD543F64DDAC1F56B03AD5B280443A1021A76FADB_gshared (SyncListChanged_t63BE6CD22C2B89F865722BF980F4351DF0EC68D6 * __this, int32_t ___op0, int32_t ___itemIndex1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SyncListChanged_BeginInvoke_mD543F64DDAC1F56B03AD5B280443A1021A76FADB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Operation_t8297DBEBB31DE17FBA6F294DA35BE1F5F37AC315_il2cpp_TypeInfo_var, &___op0);
	__d_args[1] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___itemIndex1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.Networking.SyncList`1_SyncListChanged<System.Single>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListChanged_EndInvoke_m375CC73F91C0D0B2370E315B78C2686886D1F05B_gshared (SyncListChanged_t63BE6CD22C2B89F865722BF980F4351DF0EC68D6 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.SyncList`1_SyncListChanged<System.UInt32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListChanged__ctor_mAE87A26D296EAD267FC2BEF0F13E6828100E751A_gshared (SyncListChanged_t1804C1A09093327076629C515EC006A30F38C1B8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Networking.SyncList`1_SyncListChanged<System.UInt32>::Invoke(UnityEngine.Networking.SyncList`1_Operation<T>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListChanged_Invoke_m852F695B6D94EB2748A4E698E768AE8B06C138D0_gshared (SyncListChanged_t1804C1A09093327076629C515EC006A30F38C1B8 * __this, int32_t ___op0, int32_t ___itemIndex1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
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
				typedef void (*FunctionPointerType) (int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___op0, ___itemIndex1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___op0, ___itemIndex1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___op0, ___itemIndex1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< int32_t, int32_t >::Invoke(targetMethod, targetThis, ___op0, ___itemIndex1);
					else
						GenericVirtActionInvoker2< int32_t, int32_t >::Invoke(targetMethod, targetThis, ___op0, ___itemIndex1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___op0, ___itemIndex1);
					else
						VirtActionInvoker2< int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___op0, ___itemIndex1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___op0, ___itemIndex1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Networking.SyncList`1_SyncListChanged<System.UInt32>::BeginInvoke(UnityEngine.Networking.SyncList`1_Operation<T>,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SyncListChanged_BeginInvoke_m4A6F16D5F925A0182F32C3BB8935E522A8498469_gshared (SyncListChanged_t1804C1A09093327076629C515EC006A30F38C1B8 * __this, int32_t ___op0, int32_t ___itemIndex1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SyncListChanged_BeginInvoke_m4A6F16D5F925A0182F32C3BB8935E522A8498469_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Operation_t7839B7BA805803FF180DD035BA3BDC66E36C8367_il2cpp_TypeInfo_var, &___op0);
	__d_args[1] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___itemIndex1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.Networking.SyncList`1_SyncListChanged<System.UInt32>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListChanged_EndInvoke_mA477C7C597E677607D4E90569B625D95BC337E9D_gshared (SyncListChanged_t1804C1A09093327076629C515EC006A30F38C1B8 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 UnityEngine.Networking.SyncList`1<System.Boolean>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SyncList_1_get_Count_m9EBDDB18AA65B4522E066D29FE2ECD9980BDEAD9_gshared (SyncList_1_tDDF00E08E649A86264E50205CB99495D1AD2E8D0 * __this, const RuntimeMethod* method)
{
	{
		List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 * L_0 = (List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *)__this->get_m_Objects_0();
		NullCheck((List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *)L_0);
		int32_t L_1 = ((  int32_t (*) (List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return L_1;
	}
}
// System.Boolean UnityEngine.Networking.SyncList`1<System.Boolean>::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SyncList_1_get_IsReadOnly_mEA5A83EDC3E1A48BD6334B563658B2F726D4AE73_gshared (SyncList_1_tDDF00E08E649A86264E50205CB99495D1AD2E8D0 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// UnityEngine.Networking.SyncList`1_SyncListChanged<T> UnityEngine.Networking.SyncList`1<System.Boolean>::get_Callback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SyncListChanged_t5156E5B2411DE07D5AEA8F98B87E4FBD1E626D6E * SyncList_1_get_Callback_m5A67E66EA2E3449FE9AB9B1DEF6B473B8247A6E5_gshared (SyncList_1_tDDF00E08E649A86264E50205CB99495D1AD2E8D0 * __this, const RuntimeMethod* method)
{
	{
		SyncListChanged_t5156E5B2411DE07D5AEA8F98B87E4FBD1E626D6E * L_0 = (SyncListChanged_t5156E5B2411DE07D5AEA8F98B87E4FBD1E626D6E *)__this->get_m_Callback_3();
		return L_0;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::set_Callback(UnityEngine.Networking.SyncList`1_SyncListChanged<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_set_Callback_m070532F010155A3ADC132CB601C60153C749E8FA_gshared (SyncList_1_tDDF00E08E649A86264E50205CB99495D1AD2E8D0 * __this, SyncListChanged_t5156E5B2411DE07D5AEA8F98B87E4FBD1E626D6E * ___value0, const RuntimeMethod* method)
{
	{
		SyncListChanged_t5156E5B2411DE07D5AEA8F98B87E4FBD1E626D6E * L_0 = ___value0;
		__this->set_m_Callback_3(L_0);
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::InitializeBehaviour(UnityEngine.Networking.NetworkBehaviour,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_InitializeBehaviour_mC7C0E71C6BFDA2C4925E360FB4C1A094E81AD5F2_gshared (SyncList_1_tDDF00E08E649A86264E50205CB99495D1AD2E8D0 * __this, NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * ___beh0, int32_t ___cmdHash1, const RuntimeMethod* method)
{
	{
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_0 = ___beh0;
		__this->set_m_Behaviour_1(L_0);
		int32_t L_1 = ___cmdHash1;
		__this->set_m_CmdHash_2(L_1);
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::SendMsg(UnityEngine.Networking.SyncList`1_Operation<T>,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_SendMsg_m35BB9204DA6B6F41BDACA993F982DCA8084FFE77_gshared (SyncList_1_tDDF00E08E649A86264E50205CB99495D1AD2E8D0 * __this, int32_t ___op0, int32_t ___itemIndex1, bool ___item2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SyncList_1_SendMsg_m35BB9204DA6B6F41BDACA993F982DCA8084FFE77_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * V_0 = NULL;
	NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * V_1 = NULL;
	{
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_0 = (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)__this->get_m_Behaviour_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(LogFilter_t5202A297E770086F7954B8D6703BAC03C22654ED_il2cpp_TypeInfo_var);
		bool L_2 = LogFilter_get_logError_mD404500EEB2968A3CF190DB1EB6CA9A26135A21F(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29((RuntimeObject *)_stringLiteral02A1CE557DC872E91BC93ED77E8B60DF3DFB4A00, /*hidden argument*/NULL);
	}

IL_001f:
	{
		return;
	}

IL_0020:
	{
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_3 = (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)__this->get_m_Behaviour_1();
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_3);
		NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * L_4 = Component_GetComponent_TisNetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B_m1B246F83788387F4E1BD668088D39CF221FD3F59((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_3, /*hidden argument*/Component_GetComponent_TisNetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B_m1B246F83788387F4E1BD668088D39CF221FD3F59_RuntimeMethod_var);
		V_0 = (NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B *)L_4;
		NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_5, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0047;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(LogFilter_t5202A297E770086F7954B8D6703BAC03C22654ED_il2cpp_TypeInfo_var);
		bool L_7 = LogFilter_get_logError_mD404500EEB2968A3CF190DB1EB6CA9A26135A21F(/*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29((RuntimeObject *)_stringLiteralE35C7729141357B5A11D8FBAAC5AFED079F1C9B8, /*hidden argument*/NULL);
	}

IL_0046:
	{
		return;
	}

IL_0047:
	{
		NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * L_8 = V_0;
		NullCheck((NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B *)L_8);
		bool L_9 = NetworkIdentity_get_isServer_mA9BAD5FD120A9506686DF79A6500649E7120BA25((NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B *)L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0050;
		}
	}
	{
		return;
	}

IL_0050:
	{
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_10 = (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)il2cpp_codegen_object_new(NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030_il2cpp_TypeInfo_var);
		NetworkWriter__ctor_m43E453A4A5244815EC8D906B22E5D85FB7535D33(L_10, /*hidden argument*/NULL);
		V_1 = (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_10;
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_11 = V_1;
		NullCheck((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_11);
		NetworkWriter_StartMessage_mD4F5BFA7ECA40EEA4AC721A1E357C3C8A09CE218((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_11, (int16_t)((int32_t)9), /*hidden argument*/NULL);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_12 = V_1;
		NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * L_13 = V_0;
		NullCheck((NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B *)L_13);
		NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615  L_14 = NetworkIdentity_get_netId_m22EB7CD04E2633FFAF99093749F79816B2BC9F28_inline((NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B *)L_13, /*hidden argument*/NULL);
		NullCheck((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_12);
		NetworkWriter_Write_m327AAC971B7DA22E82661AD419E4D5EEC6CCAFBF((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_12, (NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615 )L_14, /*hidden argument*/NULL);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_15 = V_1;
		int32_t L_16 = (int32_t)__this->get_m_CmdHash_2();
		NullCheck((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_15);
		NetworkWriter_WritePackedUInt32_m99DCA40833B068CB958663A5B583BC8D2051B12F((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_15, (uint32_t)L_16, /*hidden argument*/NULL);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_17 = V_1;
		int32_t L_18 = ___op0;
		NullCheck((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_17);
		NetworkWriter_Write_m99D6ACBCB1E5C94FD09AE9F50CFC993B18DEA183((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_17, (uint8_t)(((int32_t)((uint8_t)L_18))), /*hidden argument*/NULL);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_19 = V_1;
		int32_t L_20 = ___itemIndex1;
		NullCheck((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_19);
		NetworkWriter_WritePackedUInt32_m99DCA40833B068CB958663A5B583BC8D2051B12F((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_19, (uint32_t)L_20, /*hidden argument*/NULL);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_21 = V_1;
		bool L_22 = ___item2;
		NullCheck((SyncList_1_tDDF00E08E649A86264E50205CB99495D1AD2E8D0 *)__this);
		VirtActionInvoker2< NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *, bool >::Invoke(18 /* System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::SerializeItem(UnityEngine.Networking.NetworkWriter,T) */, (SyncList_1_tDDF00E08E649A86264E50205CB99495D1AD2E8D0 *)__this, (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_21, (bool)L_22);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_23 = V_1;
		NullCheck((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_23);
		NetworkWriter_FinishMessage_mDA9E66815E448F635B2394A35DDCA3EC040B0590((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_23, /*hidden argument*/NULL);
		NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * L_24 = V_0;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_24);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_25 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_24, /*hidden argument*/NULL);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_26 = V_1;
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_27 = (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)__this->get_m_Behaviour_1();
		NullCheck((NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)L_27);
		int32_t L_28 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 UnityEngine.Networking.NetworkBehaviour::GetNetworkChannel() */, (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)L_27);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkServer_tFD62C268FC6F01624A5989BFC1D0DD689A66B4A1_il2cpp_TypeInfo_var);
		NetworkServer_SendWriterToReady_m3DAE75021BB2FA60809865E05C38C82D0F7DA807((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_25, (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_26, (int32_t)L_28, /*hidden argument*/NULL);
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_29 = (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)__this->get_m_Behaviour_1();
		NullCheck((NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)L_29);
		bool L_30 = NetworkBehaviour_get_isServer_m3366F78A4D83ECE0798B276F2E9EF1FEEC8E2D79((NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)L_29, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_00d9;
		}
	}
	{
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_31 = (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)__this->get_m_Behaviour_1();
		NullCheck((NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)L_31);
		bool L_32 = NetworkBehaviour_get_isClient_mB7B109ADAF27B23B3D58E2369CBD11B1471C9148((NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)L_31, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_00d9;
		}
	}
	{
		SyncListChanged_t5156E5B2411DE07D5AEA8F98B87E4FBD1E626D6E * L_33 = (SyncListChanged_t5156E5B2411DE07D5AEA8F98B87E4FBD1E626D6E *)__this->get_m_Callback_3();
		if (!L_33)
		{
			goto IL_00d9;
		}
	}
	{
		SyncListChanged_t5156E5B2411DE07D5AEA8F98B87E4FBD1E626D6E * L_34 = (SyncListChanged_t5156E5B2411DE07D5AEA8F98B87E4FBD1E626D6E *)__this->get_m_Callback_3();
		int32_t L_35 = ___op0;
		int32_t L_36 = ___itemIndex1;
		NullCheck((SyncListChanged_t5156E5B2411DE07D5AEA8F98B87E4FBD1E626D6E *)L_34);
		((  void (*) (SyncListChanged_t5156E5B2411DE07D5AEA8F98B87E4FBD1E626D6E *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((SyncListChanged_t5156E5B2411DE07D5AEA8F98B87E4FBD1E626D6E *)L_34, (int32_t)L_35, (int32_t)L_36, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
	}

IL_00d9:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::SendMsg(UnityEngine.Networking.SyncList`1_Operation<T>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_SendMsg_m50AA20CFF3EA9BFBC6E777BB1AAB6F8A4F721952_gshared (SyncList_1_tDDF00E08E649A86264E50205CB99495D1AD2E8D0 * __this, int32_t ___op0, int32_t ___itemIndex1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = ___op0;
		int32_t L_1 = ___itemIndex1;
		il2cpp_codegen_initobj((&V_0), sizeof(bool));
		bool L_2 = V_0;
		NullCheck((SyncList_1_tDDF00E08E649A86264E50205CB99495D1AD2E8D0 *)__this);
		((  void (*) (SyncList_1_tDDF00E08E649A86264E50205CB99495D1AD2E8D0 *, int32_t, int32_t, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_tDDF00E08E649A86264E50205CB99495D1AD2E8D0 *)__this, (int32_t)L_0, (int32_t)L_1, (bool)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::HandleMsg(UnityEngine.Networking.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_HandleMsg_m85FB335243EA6327C0881C1E542B80692929AF7E_gshared (SyncList_1_tDDF00E08E649A86264E50205CB99495D1AD2E8D0 * __this, NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * ___reader0, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	{
		NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * L_0 = ___reader0;
		NullCheck((NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 *)L_0);
		uint8_t L_1 = NetworkReader_ReadByte_m1FADCAE4F3E2D0E009653F6AC58FD1F728D8ABFF((NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 *)L_0, /*hidden argument*/NULL);
		V_0 = (uint8_t)L_1;
		NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * L_2 = ___reader0;
		NullCheck((NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 *)L_2);
		uint32_t L_3 = NetworkReader_ReadPackedUInt32_mB0E5BF11AEAD652C88548BD93556D780A4E3F46B((NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 *)L_2, /*hidden argument*/NULL);
		V_1 = (int32_t)L_3;
		NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * L_4 = ___reader0;
		NullCheck((SyncList_1_tDDF00E08E649A86264E50205CB99495D1AD2E8D0 *)__this);
		bool L_5 = VirtFuncInvoker1< bool, NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * >::Invoke(19 /* T UnityEngine.Networking.SyncList`1<System.Boolean>::DeserializeItem(UnityEngine.Networking.NetworkReader) */, (SyncList_1_tDDF00E08E649A86264E50205CB99495D1AD2E8D0 *)__this, (NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 *)L_4);
		V_2 = (bool)L_5;
		uint8_t L_6 = V_0;
		V_3 = (int32_t)L_6;
		int32_t L_7 = V_3;
		switch (L_7)
		{
			case 0:
			{
				goto IL_003c;
			}
			case 1:
			{
				goto IL_004a;
			}
			case 2:
			{
				goto IL_0057;
			}
			case 3:
			{
				goto IL_0066;
			}
			case 4:
			{
				goto IL_0075;
			}
			case 5:
			{
				goto IL_0083;
			}
			case 6:
			{
				goto IL_0083;
			}
		}
	}
	{
		goto IL_0090;
	}

IL_003c:
	{
		List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 * L_8 = (List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *)__this->get_m_Objects_0();
		bool L_9 = V_2;
		NullCheck((List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *)L_8);
		((  void (*) (List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *)L_8, (bool)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		goto IL_0090;
	}

IL_004a:
	{
		List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 * L_10 = (List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *)__this->get_m_Objects_0();
		NullCheck((List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *)L_10);
		((  void (*) (List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		goto IL_0090;
	}

IL_0057:
	{
		List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 * L_11 = (List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *)__this->get_m_Objects_0();
		int32_t L_12 = V_1;
		bool L_13 = V_2;
		NullCheck((List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *)L_11);
		((  void (*) (List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *, int32_t, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *)L_11, (int32_t)L_12, (bool)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		goto IL_0090;
	}

IL_0066:
	{
		List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 * L_14 = (List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *)__this->get_m_Objects_0();
		bool L_15 = V_2;
		NullCheck((List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *)L_14);
		((  bool (*) (List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *)L_14, (bool)L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		goto IL_0090;
	}

IL_0075:
	{
		List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 * L_16 = (List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *)__this->get_m_Objects_0();
		int32_t L_17 = V_1;
		NullCheck((List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *)L_16);
		((  void (*) (List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *)L_16, (int32_t)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		goto IL_0090;
	}

IL_0083:
	{
		List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 * L_18 = (List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *)__this->get_m_Objects_0();
		int32_t L_19 = V_1;
		bool L_20 = V_2;
		NullCheck((List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *)L_18);
		((  void (*) (List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *, int32_t, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *)L_18, (int32_t)L_19, (bool)L_20, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
	}

IL_0090:
	{
		SyncListChanged_t5156E5B2411DE07D5AEA8F98B87E4FBD1E626D6E * L_21 = (SyncListChanged_t5156E5B2411DE07D5AEA8F98B87E4FBD1E626D6E *)__this->get_m_Callback_3();
		if (!L_21)
		{
			goto IL_00a5;
		}
	}
	{
		SyncListChanged_t5156E5B2411DE07D5AEA8F98B87E4FBD1E626D6E * L_22 = (SyncListChanged_t5156E5B2411DE07D5AEA8F98B87E4FBD1E626D6E *)__this->get_m_Callback_3();
		uint8_t L_23 = V_0;
		int32_t L_24 = V_1;
		NullCheck((SyncListChanged_t5156E5B2411DE07D5AEA8F98B87E4FBD1E626D6E *)L_22);
		((  void (*) (SyncListChanged_t5156E5B2411DE07D5AEA8F98B87E4FBD1E626D6E *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((SyncListChanged_t5156E5B2411DE07D5AEA8F98B87E4FBD1E626D6E *)L_22, (int32_t)L_23, (int32_t)L_24, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
	}

IL_00a5:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::AddInternal(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_AddInternal_m977B3CE5458FB772939C4CDB6612918FFC0BD427_gshared (SyncList_1_tDDF00E08E649A86264E50205CB99495D1AD2E8D0 * __this, bool ___item0, const RuntimeMethod* method)
{
	{
		List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 * L_0 = (List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *)__this->get_m_Objects_0();
		bool L_1 = ___item0;
		NullCheck((List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *)L_0);
		((  void (*) (List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *)L_0, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_Add_m301DC148B3A75D97744CABDFC37204B14C000692_gshared (SyncList_1_tDDF00E08E649A86264E50205CB99495D1AD2E8D0 * __this, bool ___item0, const RuntimeMethod* method)
{
	{
		List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 * L_0 = (List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *)__this->get_m_Objects_0();
		bool L_1 = ___item0;
		NullCheck((List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *)L_0);
		((  void (*) (List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *)L_0, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 * L_2 = (List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *)__this->get_m_Objects_0();
		NullCheck((List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *)L_2);
		int32_t L_3 = ((  int32_t (*) (List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		bool L_4 = ___item0;
		NullCheck((SyncList_1_tDDF00E08E649A86264E50205CB99495D1AD2E8D0 *)__this);
		((  void (*) (SyncList_1_tDDF00E08E649A86264E50205CB99495D1AD2E8D0 *, int32_t, int32_t, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_tDDF00E08E649A86264E50205CB99495D1AD2E8D0 *)__this, (int32_t)0, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1)), (bool)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_Clear_mC367BED8954C65BFA956C2A66885A8FA241443E0_gshared (SyncList_1_tDDF00E08E649A86264E50205CB99495D1AD2E8D0 * __this, const RuntimeMethod* method)
{
	{
		List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 * L_0 = (List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *)__this->get_m_Objects_0();
		NullCheck((List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *)L_0);
		((  void (*) (List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		NullCheck((SyncList_1_tDDF00E08E649A86264E50205CB99495D1AD2E8D0 *)__this);
		((  void (*) (SyncList_1_tDDF00E08E649A86264E50205CB99495D1AD2E8D0 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((SyncList_1_tDDF00E08E649A86264E50205CB99495D1AD2E8D0 *)__this, (int32_t)1, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return;
	}
}
// System.Boolean UnityEngine.Networking.SyncList`1<System.Boolean>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SyncList_1_Contains_m602693FC9B92EFD0175B0B3F0EA20FB4EE1A51C4_gshared (SyncList_1_tDDF00E08E649A86264E50205CB99495D1AD2E8D0 * __this, bool ___item0, const RuntimeMethod* method)
{
	{
		List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 * L_0 = (List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *)__this->get_m_Objects_0();
		bool L_1 = ___item0;
		NullCheck((List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *)L_0);
		bool L_2 = ((  bool (*) (List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12)->methodPointer)((List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *)L_0, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12));
		return L_2;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::CopyTo(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_CopyTo_m2E2AB8D7DB385DF010EB0BEB00A08182AE6B1025_gshared (SyncList_1_tDDF00E08E649A86264E50205CB99495D1AD2E8D0 * __this, BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 * L_0 = (List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *)__this->get_m_Objects_0();
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_1 = ___array0;
		int32_t L_2 = ___index1;
		NullCheck((List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *)L_0);
		((  void (*) (List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *, BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13)->methodPointer)((List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *)L_0, (BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040*)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13));
		return;
	}
}
// System.Int32 UnityEngine.Networking.SyncList`1<System.Boolean>::IndexOf(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SyncList_1_IndexOf_mC52151D2AC2F85F4B301083E04A87F7FFB3B40BC_gshared (SyncList_1_tDDF00E08E649A86264E50205CB99495D1AD2E8D0 * __this, bool ___item0, const RuntimeMethod* method)
{
	{
		List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 * L_0 = (List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *)__this->get_m_Objects_0();
		bool L_1 = ___item0;
		NullCheck((List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *)L_0);
		int32_t L_2 = ((  int32_t (*) (List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)->methodPointer)((List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *)L_0, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
		return L_2;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::Insert(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_Insert_mBFB436A9EC6A73751876049D9493BF0C0713FF58_gshared (SyncList_1_tDDF00E08E649A86264E50205CB99495D1AD2E8D0 * __this, int32_t ___index0, bool ___item1, const RuntimeMethod* method)
{
	{
		List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 * L_0 = (List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *)__this->get_m_Objects_0();
		int32_t L_1 = ___index0;
		bool L_2 = ___item1;
		NullCheck((List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *)L_0);
		((  void (*) (List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *, int32_t, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *)L_0, (int32_t)L_1, (bool)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		int32_t L_3 = ___index0;
		bool L_4 = ___item1;
		NullCheck((SyncList_1_tDDF00E08E649A86264E50205CB99495D1AD2E8D0 *)__this);
		((  void (*) (SyncList_1_tDDF00E08E649A86264E50205CB99495D1AD2E8D0 *, int32_t, int32_t, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_tDDF00E08E649A86264E50205CB99495D1AD2E8D0 *)__this, (int32_t)2, (int32_t)L_3, (bool)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return;
	}
}
// System.Boolean UnityEngine.Networking.SyncList`1<System.Boolean>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SyncList_1_Remove_m4642D495B0F4DC053AD06AADE41F43B3F3ACFA5A_gshared (SyncList_1_tDDF00E08E649A86264E50205CB99495D1AD2E8D0 * __this, bool ___item0, const RuntimeMethod* method)
{
	bool G_B2_0 = false;
	bool G_B1_0 = false;
	{
		List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 * L_0 = (List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *)__this->get_m_Objects_0();
		bool L_1 = ___item0;
		NullCheck((List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *)L_0);
		bool L_2 = ((  bool (*) (List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *)L_0, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		bool L_3 = (bool)L_2;
		G_B1_0 = L_3;
		if (!L_3)
		{
			G_B2_0 = L_3;
			goto IL_0018;
		}
	}
	{
		bool L_4 = ___item0;
		NullCheck((SyncList_1_tDDF00E08E649A86264E50205CB99495D1AD2E8D0 *)__this);
		((  void (*) (SyncList_1_tDDF00E08E649A86264E50205CB99495D1AD2E8D0 *, int32_t, int32_t, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_tDDF00E08E649A86264E50205CB99495D1AD2E8D0 *)__this, (int32_t)3, (int32_t)0, (bool)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		G_B2_0 = G_B1_0;
	}

IL_0018:
	{
		return G_B2_0;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_RemoveAt_m6DE1AC37DAD4AF04F8377080224485DAB09DCF33_gshared (SyncList_1_tDDF00E08E649A86264E50205CB99495D1AD2E8D0 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 * L_0 = (List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *)__this->get_m_Objects_0();
		int32_t L_1 = ___index0;
		NullCheck((List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *)L_0);
		((  void (*) (List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		int32_t L_2 = ___index0;
		NullCheck((SyncList_1_tDDF00E08E649A86264E50205CB99495D1AD2E8D0 *)__this);
		((  void (*) (SyncList_1_tDDF00E08E649A86264E50205CB99495D1AD2E8D0 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((SyncList_1_tDDF00E08E649A86264E50205CB99495D1AD2E8D0 *)__this, (int32_t)4, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::Dirty(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_Dirty_m7EF47D9785D4CF8436F14223AFC4BD66B2BE05A8_gshared (SyncList_1_tDDF00E08E649A86264E50205CB99495D1AD2E8D0 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 * L_1 = (List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *)__this->get_m_Objects_0();
		int32_t L_2 = ___index0;
		NullCheck((List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *)L_1);
		bool L_3 = ((  bool (*) (List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		NullCheck((SyncList_1_tDDF00E08E649A86264E50205CB99495D1AD2E8D0 *)__this);
		((  void (*) (SyncList_1_tDDF00E08E649A86264E50205CB99495D1AD2E8D0 *, int32_t, int32_t, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_tDDF00E08E649A86264E50205CB99495D1AD2E8D0 *)__this, (int32_t)6, (int32_t)L_0, (bool)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return;
	}
}
// T UnityEngine.Networking.SyncList`1<System.Boolean>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SyncList_1_get_Item_m0EEA26E6C3ED4695254E4D9AC8243023AE227A48_gshared (SyncList_1_tDDF00E08E649A86264E50205CB99495D1AD2E8D0 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 * L_0 = (List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *)__this->get_m_Objects_0();
		int32_t L_1 = ___i0;
		NullCheck((List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *)L_0);
		bool L_2 = ((  bool (*) (List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		return L_2;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_set_Item_m65EDF88651148BCFC616B73FB3DD0CA19D88EAF2_gshared (SyncList_1_tDDF00E08E649A86264E50205CB99495D1AD2E8D0 * __this, int32_t ___i0, bool ___value1, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		V_0 = (bool)0;
		List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 * L_0 = (List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *)__this->get_m_Objects_0();
		int32_t L_1 = ___i0;
		NullCheck((List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *)L_0);
		bool L_2 = ((  bool (*) (List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		goto IL_0022;
	}
	{
		goto IL_001e;
	}
	{
		return;
	}

IL_001e:
	{
		V_0 = (bool)1;
		goto IL_0046;
	}

IL_0022:
	{
		List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 * L_4 = (List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *)__this->get_m_Objects_0();
		int32_t L_5 = ___i0;
		NullCheck((List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *)L_4);
		bool L_6 = ((  bool (*) (List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *)L_4, (int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		V_1 = (bool)L_6;
		bool L_7 = ___value1;
		bool L_8 = L_7;
		RuntimeObject * L_9 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 16), &L_8);
		bool L_10 = Boolean_Equals_mB97E1CE732F7A08D8F45C86B8994FB67222C99E7((bool*)(bool*)(&V_1), (RuntimeObject *)L_9, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
	}

IL_0046:
	{
		List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 * L_11 = (List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *)__this->get_m_Objects_0();
		int32_t L_12 = ___i0;
		bool L_13 = ___value1;
		NullCheck((List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *)L_11);
		((  void (*) (List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *, int32_t, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *)L_11, (int32_t)L_12, (bool)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		bool L_14 = V_0;
		if (!L_14)
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_15 = ___i0;
		bool L_16 = ___value1;
		NullCheck((SyncList_1_tDDF00E08E649A86264E50205CB99495D1AD2E8D0 *)__this);
		((  void (*) (SyncList_1_tDDF00E08E649A86264E50205CB99495D1AD2E8D0 *, int32_t, int32_t, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_tDDF00E08E649A86264E50205CB99495D1AD2E8D0 *)__this, (int32_t)5, (int32_t)L_15, (bool)L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
	}

IL_005f:
	{
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.Networking.SyncList`1<System.Boolean>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SyncList_1_GetEnumerator_m6E56687B7C482789C8857388A3DA9A8B223F8031_gshared (SyncList_1_tDDF00E08E649A86264E50205CB99495D1AD2E8D0 * __this, const RuntimeMethod* method)
{
	{
		List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 * L_0 = (List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *)__this->get_m_Objects_0();
		NullCheck((List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *)L_0);
		Enumerator_t70B763692CD8F7854E25DF83069FA76B7C4C7783  L_1 = ((  Enumerator_t70B763692CD8F7854E25DF83069FA76B7C4C7783  (*) (List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17)->methodPointer)((List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17));
		Enumerator_t70B763692CD8F7854E25DF83069FA76B7C4C7783  L_2 = L_1;
		RuntimeObject * L_3 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 18), &L_2);
		return (RuntimeObject*)L_3;
	}
}
// System.Collections.IEnumerator UnityEngine.Networking.SyncList`1<System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SyncList_1_System_Collections_IEnumerable_GetEnumerator_mE775CA23996DCB69AD3738CB107288C65A0E4783_gshared (SyncList_1_tDDF00E08E649A86264E50205CB99495D1AD2E8D0 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((SyncList_1_tDDF00E08E649A86264E50205CB99495D1AD2E8D0 *)__this);
		RuntimeObject* L_0 = ((  RuntimeObject* (*) (SyncList_1_tDDF00E08E649A86264E50205CB99495D1AD2E8D0 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 19)->methodPointer)((SyncList_1_tDDF00E08E649A86264E50205CB99495D1AD2E8D0 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 19));
		return L_0;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1__ctor_m1BB28896D4C843EEF83232CE6648F916429D54E3_gshared (SyncList_1_tDDF00E08E649A86264E50205CB99495D1AD2E8D0 * __this, const RuntimeMethod* method)
{
	{
		List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 * L_0 = (List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 20));
		((  void (*) (List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21));
		__this->set_m_Objects_0(L_0);
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
// System.Int32 UnityEngine.Networking.SyncList`1<System.Int32>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SyncList_1_get_Count_m7E687EFF75167B5EB639F273102ED345B8CB905B_gshared (SyncList_1_t8595ACD08C8686AC9547A225ACF209C171FF0665 * __this, const RuntimeMethod* method)
{
	{
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_0 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)__this->get_m_Objects_0();
		NullCheck((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_0);
		int32_t L_1 = ((  int32_t (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return L_1;
	}
}
// System.Boolean UnityEngine.Networking.SyncList`1<System.Int32>::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SyncList_1_get_IsReadOnly_m910D938B820D55767B30482C9533736A44D864B7_gshared (SyncList_1_t8595ACD08C8686AC9547A225ACF209C171FF0665 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// UnityEngine.Networking.SyncList`1_SyncListChanged<T> UnityEngine.Networking.SyncList`1<System.Int32>::get_Callback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SyncListChanged_t1A1EBC018732CBF3B1F86CE21BE59B5107844339 * SyncList_1_get_Callback_mB9CAF22FA3FBB572725F20E83BC69AAEF5E6CEC1_gshared (SyncList_1_t8595ACD08C8686AC9547A225ACF209C171FF0665 * __this, const RuntimeMethod* method)
{
	{
		SyncListChanged_t1A1EBC018732CBF3B1F86CE21BE59B5107844339 * L_0 = (SyncListChanged_t1A1EBC018732CBF3B1F86CE21BE59B5107844339 *)__this->get_m_Callback_3();
		return L_0;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::set_Callback(UnityEngine.Networking.SyncList`1_SyncListChanged<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_set_Callback_m0CBE605ECF9561F5CE939B2079275CC54DCA8EF2_gshared (SyncList_1_t8595ACD08C8686AC9547A225ACF209C171FF0665 * __this, SyncListChanged_t1A1EBC018732CBF3B1F86CE21BE59B5107844339 * ___value0, const RuntimeMethod* method)
{
	{
		SyncListChanged_t1A1EBC018732CBF3B1F86CE21BE59B5107844339 * L_0 = ___value0;
		__this->set_m_Callback_3(L_0);
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::InitializeBehaviour(UnityEngine.Networking.NetworkBehaviour,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_InitializeBehaviour_m825DC37877EB4DEE7F8147F823DCFD41FF944EF7_gshared (SyncList_1_t8595ACD08C8686AC9547A225ACF209C171FF0665 * __this, NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * ___beh0, int32_t ___cmdHash1, const RuntimeMethod* method)
{
	{
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_0 = ___beh0;
		__this->set_m_Behaviour_1(L_0);
		int32_t L_1 = ___cmdHash1;
		__this->set_m_CmdHash_2(L_1);
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::SendMsg(UnityEngine.Networking.SyncList`1_Operation<T>,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_SendMsg_m974D00A9CFC789ADA65D7D1A83E06BCEE7FE2B09_gshared (SyncList_1_t8595ACD08C8686AC9547A225ACF209C171FF0665 * __this, int32_t ___op0, int32_t ___itemIndex1, int32_t ___item2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SyncList_1_SendMsg_m974D00A9CFC789ADA65D7D1A83E06BCEE7FE2B09_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * V_0 = NULL;
	NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * V_1 = NULL;
	{
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_0 = (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)__this->get_m_Behaviour_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(LogFilter_t5202A297E770086F7954B8D6703BAC03C22654ED_il2cpp_TypeInfo_var);
		bool L_2 = LogFilter_get_logError_mD404500EEB2968A3CF190DB1EB6CA9A26135A21F(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29((RuntimeObject *)_stringLiteral02A1CE557DC872E91BC93ED77E8B60DF3DFB4A00, /*hidden argument*/NULL);
	}

IL_001f:
	{
		return;
	}

IL_0020:
	{
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_3 = (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)__this->get_m_Behaviour_1();
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_3);
		NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * L_4 = Component_GetComponent_TisNetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B_m1B246F83788387F4E1BD668088D39CF221FD3F59((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_3, /*hidden argument*/Component_GetComponent_TisNetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B_m1B246F83788387F4E1BD668088D39CF221FD3F59_RuntimeMethod_var);
		V_0 = (NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B *)L_4;
		NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_5, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0047;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(LogFilter_t5202A297E770086F7954B8D6703BAC03C22654ED_il2cpp_TypeInfo_var);
		bool L_7 = LogFilter_get_logError_mD404500EEB2968A3CF190DB1EB6CA9A26135A21F(/*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29((RuntimeObject *)_stringLiteralE35C7729141357B5A11D8FBAAC5AFED079F1C9B8, /*hidden argument*/NULL);
	}

IL_0046:
	{
		return;
	}

IL_0047:
	{
		NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * L_8 = V_0;
		NullCheck((NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B *)L_8);
		bool L_9 = NetworkIdentity_get_isServer_mA9BAD5FD120A9506686DF79A6500649E7120BA25((NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B *)L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0050;
		}
	}
	{
		return;
	}

IL_0050:
	{
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_10 = (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)il2cpp_codegen_object_new(NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030_il2cpp_TypeInfo_var);
		NetworkWriter__ctor_m43E453A4A5244815EC8D906B22E5D85FB7535D33(L_10, /*hidden argument*/NULL);
		V_1 = (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_10;
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_11 = V_1;
		NullCheck((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_11);
		NetworkWriter_StartMessage_mD4F5BFA7ECA40EEA4AC721A1E357C3C8A09CE218((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_11, (int16_t)((int32_t)9), /*hidden argument*/NULL);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_12 = V_1;
		NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * L_13 = V_0;
		NullCheck((NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B *)L_13);
		NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615  L_14 = NetworkIdentity_get_netId_m22EB7CD04E2633FFAF99093749F79816B2BC9F28_inline((NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B *)L_13, /*hidden argument*/NULL);
		NullCheck((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_12);
		NetworkWriter_Write_m327AAC971B7DA22E82661AD419E4D5EEC6CCAFBF((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_12, (NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615 )L_14, /*hidden argument*/NULL);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_15 = V_1;
		int32_t L_16 = (int32_t)__this->get_m_CmdHash_2();
		NullCheck((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_15);
		NetworkWriter_WritePackedUInt32_m99DCA40833B068CB958663A5B583BC8D2051B12F((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_15, (uint32_t)L_16, /*hidden argument*/NULL);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_17 = V_1;
		int32_t L_18 = ___op0;
		NullCheck((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_17);
		NetworkWriter_Write_m99D6ACBCB1E5C94FD09AE9F50CFC993B18DEA183((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_17, (uint8_t)(((int32_t)((uint8_t)L_18))), /*hidden argument*/NULL);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_19 = V_1;
		int32_t L_20 = ___itemIndex1;
		NullCheck((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_19);
		NetworkWriter_WritePackedUInt32_m99DCA40833B068CB958663A5B583BC8D2051B12F((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_19, (uint32_t)L_20, /*hidden argument*/NULL);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_21 = V_1;
		int32_t L_22 = ___item2;
		NullCheck((SyncList_1_t8595ACD08C8686AC9547A225ACF209C171FF0665 *)__this);
		VirtActionInvoker2< NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *, int32_t >::Invoke(18 /* System.Void UnityEngine.Networking.SyncList`1<System.Int32>::SerializeItem(UnityEngine.Networking.NetworkWriter,T) */, (SyncList_1_t8595ACD08C8686AC9547A225ACF209C171FF0665 *)__this, (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_21, (int32_t)L_22);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_23 = V_1;
		NullCheck((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_23);
		NetworkWriter_FinishMessage_mDA9E66815E448F635B2394A35DDCA3EC040B0590((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_23, /*hidden argument*/NULL);
		NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * L_24 = V_0;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_24);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_25 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_24, /*hidden argument*/NULL);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_26 = V_1;
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_27 = (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)__this->get_m_Behaviour_1();
		NullCheck((NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)L_27);
		int32_t L_28 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 UnityEngine.Networking.NetworkBehaviour::GetNetworkChannel() */, (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)L_27);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkServer_tFD62C268FC6F01624A5989BFC1D0DD689A66B4A1_il2cpp_TypeInfo_var);
		NetworkServer_SendWriterToReady_m3DAE75021BB2FA60809865E05C38C82D0F7DA807((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_25, (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_26, (int32_t)L_28, /*hidden argument*/NULL);
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_29 = (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)__this->get_m_Behaviour_1();
		NullCheck((NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)L_29);
		bool L_30 = NetworkBehaviour_get_isServer_m3366F78A4D83ECE0798B276F2E9EF1FEEC8E2D79((NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)L_29, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_00d9;
		}
	}
	{
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_31 = (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)__this->get_m_Behaviour_1();
		NullCheck((NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)L_31);
		bool L_32 = NetworkBehaviour_get_isClient_mB7B109ADAF27B23B3D58E2369CBD11B1471C9148((NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)L_31, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_00d9;
		}
	}
	{
		SyncListChanged_t1A1EBC018732CBF3B1F86CE21BE59B5107844339 * L_33 = (SyncListChanged_t1A1EBC018732CBF3B1F86CE21BE59B5107844339 *)__this->get_m_Callback_3();
		if (!L_33)
		{
			goto IL_00d9;
		}
	}
	{
		SyncListChanged_t1A1EBC018732CBF3B1F86CE21BE59B5107844339 * L_34 = (SyncListChanged_t1A1EBC018732CBF3B1F86CE21BE59B5107844339 *)__this->get_m_Callback_3();
		int32_t L_35 = ___op0;
		int32_t L_36 = ___itemIndex1;
		NullCheck((SyncListChanged_t1A1EBC018732CBF3B1F86CE21BE59B5107844339 *)L_34);
		((  void (*) (SyncListChanged_t1A1EBC018732CBF3B1F86CE21BE59B5107844339 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((SyncListChanged_t1A1EBC018732CBF3B1F86CE21BE59B5107844339 *)L_34, (int32_t)L_35, (int32_t)L_36, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
	}

IL_00d9:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::SendMsg(UnityEngine.Networking.SyncList`1_Operation<T>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_SendMsg_mF9D2E6659698AA2D166B72739BEECB51DF112F17_gshared (SyncList_1_t8595ACD08C8686AC9547A225ACF209C171FF0665 * __this, int32_t ___op0, int32_t ___itemIndex1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___op0;
		int32_t L_1 = ___itemIndex1;
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_2 = V_0;
		NullCheck((SyncList_1_t8595ACD08C8686AC9547A225ACF209C171FF0665 *)__this);
		((  void (*) (SyncList_1_t8595ACD08C8686AC9547A225ACF209C171FF0665 *, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_t8595ACD08C8686AC9547A225ACF209C171FF0665 *)__this, (int32_t)L_0, (int32_t)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::HandleMsg(UnityEngine.Networking.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_HandleMsg_m3E32F9389A312494776EC601586191D999A0D59E_gshared (SyncList_1_t8595ACD08C8686AC9547A225ACF209C171FF0665 * __this, NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * ___reader0, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * L_0 = ___reader0;
		NullCheck((NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 *)L_0);
		uint8_t L_1 = NetworkReader_ReadByte_m1FADCAE4F3E2D0E009653F6AC58FD1F728D8ABFF((NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 *)L_0, /*hidden argument*/NULL);
		V_0 = (uint8_t)L_1;
		NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * L_2 = ___reader0;
		NullCheck((NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 *)L_2);
		uint32_t L_3 = NetworkReader_ReadPackedUInt32_mB0E5BF11AEAD652C88548BD93556D780A4E3F46B((NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 *)L_2, /*hidden argument*/NULL);
		V_1 = (int32_t)L_3;
		NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * L_4 = ___reader0;
		NullCheck((SyncList_1_t8595ACD08C8686AC9547A225ACF209C171FF0665 *)__this);
		int32_t L_5 = VirtFuncInvoker1< int32_t, NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * >::Invoke(19 /* T UnityEngine.Networking.SyncList`1<System.Int32>::DeserializeItem(UnityEngine.Networking.NetworkReader) */, (SyncList_1_t8595ACD08C8686AC9547A225ACF209C171FF0665 *)__this, (NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 *)L_4);
		V_2 = (int32_t)L_5;
		uint8_t L_6 = V_0;
		V_3 = (int32_t)L_6;
		int32_t L_7 = V_3;
		switch (L_7)
		{
			case 0:
			{
				goto IL_003c;
			}
			case 1:
			{
				goto IL_004a;
			}
			case 2:
			{
				goto IL_0057;
			}
			case 3:
			{
				goto IL_0066;
			}
			case 4:
			{
				goto IL_0075;
			}
			case 5:
			{
				goto IL_0083;
			}
			case 6:
			{
				goto IL_0083;
			}
		}
	}
	{
		goto IL_0090;
	}

IL_003c:
	{
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_8 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)__this->get_m_Objects_0();
		int32_t L_9 = V_2;
		NullCheck((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_8);
		((  void (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_8, (int32_t)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		goto IL_0090;
	}

IL_004a:
	{
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_10 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)__this->get_m_Objects_0();
		NullCheck((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_10);
		((  void (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		goto IL_0090;
	}

IL_0057:
	{
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_11 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)__this->get_m_Objects_0();
		int32_t L_12 = V_1;
		int32_t L_13 = V_2;
		NullCheck((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_11);
		((  void (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_11, (int32_t)L_12, (int32_t)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		goto IL_0090;
	}

IL_0066:
	{
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_14 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)__this->get_m_Objects_0();
		int32_t L_15 = V_2;
		NullCheck((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_14);
		((  bool (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_14, (int32_t)L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		goto IL_0090;
	}

IL_0075:
	{
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_16 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)__this->get_m_Objects_0();
		int32_t L_17 = V_1;
		NullCheck((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_16);
		((  void (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_16, (int32_t)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		goto IL_0090;
	}

IL_0083:
	{
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_18 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)__this->get_m_Objects_0();
		int32_t L_19 = V_1;
		int32_t L_20 = V_2;
		NullCheck((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_18);
		((  void (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_18, (int32_t)L_19, (int32_t)L_20, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
	}

IL_0090:
	{
		SyncListChanged_t1A1EBC018732CBF3B1F86CE21BE59B5107844339 * L_21 = (SyncListChanged_t1A1EBC018732CBF3B1F86CE21BE59B5107844339 *)__this->get_m_Callback_3();
		if (!L_21)
		{
			goto IL_00a5;
		}
	}
	{
		SyncListChanged_t1A1EBC018732CBF3B1F86CE21BE59B5107844339 * L_22 = (SyncListChanged_t1A1EBC018732CBF3B1F86CE21BE59B5107844339 *)__this->get_m_Callback_3();
		uint8_t L_23 = V_0;
		int32_t L_24 = V_1;
		NullCheck((SyncListChanged_t1A1EBC018732CBF3B1F86CE21BE59B5107844339 *)L_22);
		((  void (*) (SyncListChanged_t1A1EBC018732CBF3B1F86CE21BE59B5107844339 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((SyncListChanged_t1A1EBC018732CBF3B1F86CE21BE59B5107844339 *)L_22, (int32_t)L_23, (int32_t)L_24, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
	}

IL_00a5:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::AddInternal(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_AddInternal_m93CDCB4D3061B2F4CF88B74DEABE1C06D4AED23C_gshared (SyncList_1_t8595ACD08C8686AC9547A225ACF209C171FF0665 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	{
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_0 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)__this->get_m_Objects_0();
		int32_t L_1 = ___item0;
		NullCheck((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_0);
		((  void (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_Add_m2F535C3CA0D3EB929083F1C1F1CA2A0344E421BB_gshared (SyncList_1_t8595ACD08C8686AC9547A225ACF209C171FF0665 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	{
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_0 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)__this->get_m_Objects_0();
		int32_t L_1 = ___item0;
		NullCheck((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_0);
		((  void (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_2 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)__this->get_m_Objects_0();
		NullCheck((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_2);
		int32_t L_3 = ((  int32_t (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		int32_t L_4 = ___item0;
		NullCheck((SyncList_1_t8595ACD08C8686AC9547A225ACF209C171FF0665 *)__this);
		((  void (*) (SyncList_1_t8595ACD08C8686AC9547A225ACF209C171FF0665 *, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_t8595ACD08C8686AC9547A225ACF209C171FF0665 *)__this, (int32_t)0, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1)), (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_Clear_mF8FAE0172014F355D0C66600D8607442BF9A03B3_gshared (SyncList_1_t8595ACD08C8686AC9547A225ACF209C171FF0665 * __this, const RuntimeMethod* method)
{
	{
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_0 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)__this->get_m_Objects_0();
		NullCheck((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_0);
		((  void (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		NullCheck((SyncList_1_t8595ACD08C8686AC9547A225ACF209C171FF0665 *)__this);
		((  void (*) (SyncList_1_t8595ACD08C8686AC9547A225ACF209C171FF0665 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((SyncList_1_t8595ACD08C8686AC9547A225ACF209C171FF0665 *)__this, (int32_t)1, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return;
	}
}
// System.Boolean UnityEngine.Networking.SyncList`1<System.Int32>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SyncList_1_Contains_mBF64633864D0355435448D97A30EBD35AD2D9683_gshared (SyncList_1_t8595ACD08C8686AC9547A225ACF209C171FF0665 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	{
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_0 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)__this->get_m_Objects_0();
		int32_t L_1 = ___item0;
		NullCheck((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_0);
		bool L_2 = ((  bool (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12)->methodPointer)((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12));
		return L_2;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::CopyTo(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_CopyTo_m20915FEFBAD1298916159F9F7B6E8A61D6554058_gshared (SyncList_1_t8595ACD08C8686AC9547A225ACF209C171FF0665 * __this, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_0 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)__this->get_m_Objects_0();
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_1 = ___array0;
		int32_t L_2 = ___index1;
		NullCheck((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_0);
		((  void (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13)->methodPointer)((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_0, (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13));
		return;
	}
}
// System.Int32 UnityEngine.Networking.SyncList`1<System.Int32>::IndexOf(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SyncList_1_IndexOf_m8FDB45CCF2D946066962648342BA36CD689389B2_gshared (SyncList_1_t8595ACD08C8686AC9547A225ACF209C171FF0665 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	{
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_0 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)__this->get_m_Objects_0();
		int32_t L_1 = ___item0;
		NullCheck((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_0);
		int32_t L_2 = ((  int32_t (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)->methodPointer)((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
		return L_2;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::Insert(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_Insert_mA0FF3510519B5B0D81DD55B01F439DD373A06CE9_gshared (SyncList_1_t8595ACD08C8686AC9547A225ACF209C171FF0665 * __this, int32_t ___index0, int32_t ___item1, const RuntimeMethod* method)
{
	{
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_0 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)__this->get_m_Objects_0();
		int32_t L_1 = ___index0;
		int32_t L_2 = ___item1;
		NullCheck((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_0);
		((  void (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_0, (int32_t)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		int32_t L_3 = ___index0;
		int32_t L_4 = ___item1;
		NullCheck((SyncList_1_t8595ACD08C8686AC9547A225ACF209C171FF0665 *)__this);
		((  void (*) (SyncList_1_t8595ACD08C8686AC9547A225ACF209C171FF0665 *, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_t8595ACD08C8686AC9547A225ACF209C171FF0665 *)__this, (int32_t)2, (int32_t)L_3, (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return;
	}
}
// System.Boolean UnityEngine.Networking.SyncList`1<System.Int32>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SyncList_1_Remove_m56C3011196E86EE8AD3904B32AEBC3CCDE7BAEE7_gshared (SyncList_1_t8595ACD08C8686AC9547A225ACF209C171FF0665 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	bool G_B2_0 = false;
	bool G_B1_0 = false;
	{
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_0 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)__this->get_m_Objects_0();
		int32_t L_1 = ___item0;
		NullCheck((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_0);
		bool L_2 = ((  bool (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		bool L_3 = (bool)L_2;
		G_B1_0 = L_3;
		if (!L_3)
		{
			G_B2_0 = L_3;
			goto IL_0018;
		}
	}
	{
		int32_t L_4 = ___item0;
		NullCheck((SyncList_1_t8595ACD08C8686AC9547A225ACF209C171FF0665 *)__this);
		((  void (*) (SyncList_1_t8595ACD08C8686AC9547A225ACF209C171FF0665 *, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_t8595ACD08C8686AC9547A225ACF209C171FF0665 *)__this, (int32_t)3, (int32_t)0, (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		G_B2_0 = G_B1_0;
	}

IL_0018:
	{
		return G_B2_0;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_RemoveAt_mCF03E863BEF03643C2689B47D4FA61D99D50071D_gshared (SyncList_1_t8595ACD08C8686AC9547A225ACF209C171FF0665 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_0 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)__this->get_m_Objects_0();
		int32_t L_1 = ___index0;
		NullCheck((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_0);
		((  void (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		int32_t L_2 = ___index0;
		NullCheck((SyncList_1_t8595ACD08C8686AC9547A225ACF209C171FF0665 *)__this);
		((  void (*) (SyncList_1_t8595ACD08C8686AC9547A225ACF209C171FF0665 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((SyncList_1_t8595ACD08C8686AC9547A225ACF209C171FF0665 *)__this, (int32_t)4, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::Dirty(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_Dirty_m2DBF1EF47D6CA4CC999D431FCEC77C6C7201E798_gshared (SyncList_1_t8595ACD08C8686AC9547A225ACF209C171FF0665 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_1 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)__this->get_m_Objects_0();
		int32_t L_2 = ___index0;
		NullCheck((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_1);
		int32_t L_3 = ((  int32_t (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		NullCheck((SyncList_1_t8595ACD08C8686AC9547A225ACF209C171FF0665 *)__this);
		((  void (*) (SyncList_1_t8595ACD08C8686AC9547A225ACF209C171FF0665 *, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_t8595ACD08C8686AC9547A225ACF209C171FF0665 *)__this, (int32_t)6, (int32_t)L_0, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return;
	}
}
// T UnityEngine.Networking.SyncList`1<System.Int32>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SyncList_1_get_Item_mA89484861CD0098C5FC7466F93F18C4EE231C55F_gshared (SyncList_1_t8595ACD08C8686AC9547A225ACF209C171FF0665 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_0 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)__this->get_m_Objects_0();
		int32_t L_1 = ___i0;
		NullCheck((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_0);
		int32_t L_2 = ((  int32_t (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		return L_2;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_set_Item_mC878F9A81820CECBDE8F421DEA692425A48E6936_gshared (SyncList_1_t8595ACD08C8686AC9547A225ACF209C171FF0665 * __this, int32_t ___i0, int32_t ___value1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		V_0 = (bool)0;
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_0 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)__this->get_m_Objects_0();
		int32_t L_1 = ___i0;
		NullCheck((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_0);
		int32_t L_2 = ((  int32_t (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		goto IL_0022;
	}
	{
		goto IL_001e;
	}
	{
		return;
	}

IL_001e:
	{
		V_0 = (bool)1;
		goto IL_0046;
	}

IL_0022:
	{
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_4 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)__this->get_m_Objects_0();
		int32_t L_5 = ___i0;
		NullCheck((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_4);
		int32_t L_6 = ((  int32_t (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_4, (int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		V_1 = (int32_t)L_6;
		int32_t L_7 = ___value1;
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 16), &L_8);
		bool L_10 = Int32_Equals_mBE9097707986D98549AC11E94FB986DA1AB3E16C((int32_t*)(int32_t*)(&V_1), (RuntimeObject *)L_9, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
	}

IL_0046:
	{
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_11 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)__this->get_m_Objects_0();
		int32_t L_12 = ___i0;
		int32_t L_13 = ___value1;
		NullCheck((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_11);
		((  void (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_11, (int32_t)L_12, (int32_t)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		bool L_14 = V_0;
		if (!L_14)
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_15 = ___i0;
		int32_t L_16 = ___value1;
		NullCheck((SyncList_1_t8595ACD08C8686AC9547A225ACF209C171FF0665 *)__this);
		((  void (*) (SyncList_1_t8595ACD08C8686AC9547A225ACF209C171FF0665 *, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_t8595ACD08C8686AC9547A225ACF209C171FF0665 *)__this, (int32_t)5, (int32_t)L_15, (int32_t)L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
	}

IL_005f:
	{
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.Networking.SyncList`1<System.Int32>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SyncList_1_GetEnumerator_m6E5A5FC442AAAEACA2B077ADB62959516CC5559C_gshared (SyncList_1_t8595ACD08C8686AC9547A225ACF209C171FF0665 * __this, const RuntimeMethod* method)
{
	{
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_0 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)__this->get_m_Objects_0();
		NullCheck((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_0);
		Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C  L_1 = ((  Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C  (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17)->methodPointer)((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17));
		Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C  L_2 = L_1;
		RuntimeObject * L_3 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 18), &L_2);
		return (RuntimeObject*)L_3;
	}
}
// System.Collections.IEnumerator UnityEngine.Networking.SyncList`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SyncList_1_System_Collections_IEnumerable_GetEnumerator_m33FFBC335D6459DFFE04463CF22641305EC8F6B7_gshared (SyncList_1_t8595ACD08C8686AC9547A225ACF209C171FF0665 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((SyncList_1_t8595ACD08C8686AC9547A225ACF209C171FF0665 *)__this);
		RuntimeObject* L_0 = ((  RuntimeObject* (*) (SyncList_1_t8595ACD08C8686AC9547A225ACF209C171FF0665 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 19)->methodPointer)((SyncList_1_t8595ACD08C8686AC9547A225ACF209C171FF0665 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 19));
		return L_0;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1__ctor_m6E3A6F39EE2A332965D0B912FD1662297B44B901_gshared (SyncList_1_t8595ACD08C8686AC9547A225ACF209C171FF0665 * __this, const RuntimeMethod* method)
{
	{
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_0 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 20));
		((  void (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21));
		__this->set_m_Objects_0(L_0);
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
// System.Int32 UnityEngine.Networking.SyncList`1<System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SyncList_1_get_Count_mACAE966F2F87AF836A946945D131D0EB48FB9F2B_gshared (SyncList_1_tDC9BD47B0C55962FA07DEC77A578A1F5231B0238 * __this, const RuntimeMethod* method)
{
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		int32_t L_1 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return L_1;
	}
}
// System.Boolean UnityEngine.Networking.SyncList`1<System.Object>::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SyncList_1_get_IsReadOnly_m8196A84708D2531A56DD4AA77831FE25DF12F3F6_gshared (SyncList_1_tDC9BD47B0C55962FA07DEC77A578A1F5231B0238 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// UnityEngine.Networking.SyncList`1_SyncListChanged<T> UnityEngine.Networking.SyncList`1<System.Object>::get_Callback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 * SyncList_1_get_Callback_m20E24906A31F41D9F1937C600CBBE86301850994_gshared (SyncList_1_tDC9BD47B0C55962FA07DEC77A578A1F5231B0238 * __this, const RuntimeMethod* method)
{
	{
		SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 * L_0 = (SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 *)__this->get_m_Callback_3();
		return L_0;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::set_Callback(UnityEngine.Networking.SyncList`1_SyncListChanged<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_set_Callback_m462432BD44EDD78849168DE1CEC309AF18D8118B_gshared (SyncList_1_tDC9BD47B0C55962FA07DEC77A578A1F5231B0238 * __this, SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 * ___value0, const RuntimeMethod* method)
{
	{
		SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 * L_0 = ___value0;
		__this->set_m_Callback_3(L_0);
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::InitializeBehaviour(UnityEngine.Networking.NetworkBehaviour,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_InitializeBehaviour_mDA7F99415B7F1A3445BB89F4362CB27319557711_gshared (SyncList_1_tDC9BD47B0C55962FA07DEC77A578A1F5231B0238 * __this, NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * ___beh0, int32_t ___cmdHash1, const RuntimeMethod* method)
{
	{
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_0 = ___beh0;
		__this->set_m_Behaviour_1(L_0);
		int32_t L_1 = ___cmdHash1;
		__this->set_m_CmdHash_2(L_1);
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::SendMsg(UnityEngine.Networking.SyncList`1_Operation<T>,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_SendMsg_m14E7C1C06943096A4D0171D8DDBCC192D615EF3D_gshared (SyncList_1_tDC9BD47B0C55962FA07DEC77A578A1F5231B0238 * __this, int32_t ___op0, int32_t ___itemIndex1, RuntimeObject * ___item2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SyncList_1_SendMsg_m14E7C1C06943096A4D0171D8DDBCC192D615EF3D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * V_0 = NULL;
	NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * V_1 = NULL;
	{
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_0 = (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)__this->get_m_Behaviour_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(LogFilter_t5202A297E770086F7954B8D6703BAC03C22654ED_il2cpp_TypeInfo_var);
		bool L_2 = LogFilter_get_logError_mD404500EEB2968A3CF190DB1EB6CA9A26135A21F(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29((RuntimeObject *)_stringLiteral02A1CE557DC872E91BC93ED77E8B60DF3DFB4A00, /*hidden argument*/NULL);
	}

IL_001f:
	{
		return;
	}

IL_0020:
	{
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_3 = (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)__this->get_m_Behaviour_1();
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_3);
		NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * L_4 = Component_GetComponent_TisNetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B_m1B246F83788387F4E1BD668088D39CF221FD3F59((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_3, /*hidden argument*/Component_GetComponent_TisNetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B_m1B246F83788387F4E1BD668088D39CF221FD3F59_RuntimeMethod_var);
		V_0 = (NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B *)L_4;
		NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_5, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0047;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(LogFilter_t5202A297E770086F7954B8D6703BAC03C22654ED_il2cpp_TypeInfo_var);
		bool L_7 = LogFilter_get_logError_mD404500EEB2968A3CF190DB1EB6CA9A26135A21F(/*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29((RuntimeObject *)_stringLiteralE35C7729141357B5A11D8FBAAC5AFED079F1C9B8, /*hidden argument*/NULL);
	}

IL_0046:
	{
		return;
	}

IL_0047:
	{
		NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * L_8 = V_0;
		NullCheck((NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B *)L_8);
		bool L_9 = NetworkIdentity_get_isServer_mA9BAD5FD120A9506686DF79A6500649E7120BA25((NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B *)L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0050;
		}
	}
	{
		return;
	}

IL_0050:
	{
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_10 = (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)il2cpp_codegen_object_new(NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030_il2cpp_TypeInfo_var);
		NetworkWriter__ctor_m43E453A4A5244815EC8D906B22E5D85FB7535D33(L_10, /*hidden argument*/NULL);
		V_1 = (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_10;
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_11 = V_1;
		NullCheck((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_11);
		NetworkWriter_StartMessage_mD4F5BFA7ECA40EEA4AC721A1E357C3C8A09CE218((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_11, (int16_t)((int32_t)9), /*hidden argument*/NULL);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_12 = V_1;
		NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * L_13 = V_0;
		NullCheck((NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B *)L_13);
		NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615  L_14 = NetworkIdentity_get_netId_m22EB7CD04E2633FFAF99093749F79816B2BC9F28_inline((NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B *)L_13, /*hidden argument*/NULL);
		NullCheck((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_12);
		NetworkWriter_Write_m327AAC971B7DA22E82661AD419E4D5EEC6CCAFBF((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_12, (NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615 )L_14, /*hidden argument*/NULL);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_15 = V_1;
		int32_t L_16 = (int32_t)__this->get_m_CmdHash_2();
		NullCheck((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_15);
		NetworkWriter_WritePackedUInt32_m99DCA40833B068CB958663A5B583BC8D2051B12F((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_15, (uint32_t)L_16, /*hidden argument*/NULL);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_17 = V_1;
		int32_t L_18 = ___op0;
		NullCheck((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_17);
		NetworkWriter_Write_m99D6ACBCB1E5C94FD09AE9F50CFC993B18DEA183((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_17, (uint8_t)(((int32_t)((uint8_t)L_18))), /*hidden argument*/NULL);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_19 = V_1;
		int32_t L_20 = ___itemIndex1;
		NullCheck((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_19);
		NetworkWriter_WritePackedUInt32_m99DCA40833B068CB958663A5B583BC8D2051B12F((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_19, (uint32_t)L_20, /*hidden argument*/NULL);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_21 = V_1;
		RuntimeObject * L_22 = ___item2;
		NullCheck((SyncList_1_tDC9BD47B0C55962FA07DEC77A578A1F5231B0238 *)__this);
		VirtActionInvoker2< NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *, RuntimeObject * >::Invoke(18 /* System.Void UnityEngine.Networking.SyncList`1<System.Object>::SerializeItem(UnityEngine.Networking.NetworkWriter,T) */, (SyncList_1_tDC9BD47B0C55962FA07DEC77A578A1F5231B0238 *)__this, (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_21, (RuntimeObject *)L_22);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_23 = V_1;
		NullCheck((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_23);
		NetworkWriter_FinishMessage_mDA9E66815E448F635B2394A35DDCA3EC040B0590((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_23, /*hidden argument*/NULL);
		NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * L_24 = V_0;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_24);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_25 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_24, /*hidden argument*/NULL);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_26 = V_1;
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_27 = (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)__this->get_m_Behaviour_1();
		NullCheck((NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)L_27);
		int32_t L_28 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 UnityEngine.Networking.NetworkBehaviour::GetNetworkChannel() */, (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)L_27);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkServer_tFD62C268FC6F01624A5989BFC1D0DD689A66B4A1_il2cpp_TypeInfo_var);
		NetworkServer_SendWriterToReady_m3DAE75021BB2FA60809865E05C38C82D0F7DA807((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_25, (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_26, (int32_t)L_28, /*hidden argument*/NULL);
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_29 = (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)__this->get_m_Behaviour_1();
		NullCheck((NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)L_29);
		bool L_30 = NetworkBehaviour_get_isServer_m3366F78A4D83ECE0798B276F2E9EF1FEEC8E2D79((NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)L_29, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_00d9;
		}
	}
	{
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_31 = (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)__this->get_m_Behaviour_1();
		NullCheck((NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)L_31);
		bool L_32 = NetworkBehaviour_get_isClient_mB7B109ADAF27B23B3D58E2369CBD11B1471C9148((NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)L_31, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_00d9;
		}
	}
	{
		SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 * L_33 = (SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 *)__this->get_m_Callback_3();
		if (!L_33)
		{
			goto IL_00d9;
		}
	}
	{
		SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 * L_34 = (SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 *)__this->get_m_Callback_3();
		int32_t L_35 = ___op0;
		int32_t L_36 = ___itemIndex1;
		NullCheck((SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 *)L_34);
		((  void (*) (SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 *)L_34, (int32_t)L_35, (int32_t)L_36, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
	}

IL_00d9:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::SendMsg(UnityEngine.Networking.SyncList`1_Operation<T>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_SendMsg_m37A963C2362480C886FA02FB177413D4ED43DC7B_gshared (SyncList_1_tDC9BD47B0C55962FA07DEC77A578A1F5231B0238 * __this, int32_t ___op0, int32_t ___itemIndex1, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		int32_t L_0 = ___op0;
		int32_t L_1 = ___itemIndex1;
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		RuntimeObject * L_2 = V_0;
		NullCheck((SyncList_1_tDC9BD47B0C55962FA07DEC77A578A1F5231B0238 *)__this);
		((  void (*) (SyncList_1_tDC9BD47B0C55962FA07DEC77A578A1F5231B0238 *, int32_t, int32_t, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_tDC9BD47B0C55962FA07DEC77A578A1F5231B0238 *)__this, (int32_t)L_0, (int32_t)L_1, (RuntimeObject *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::HandleMsg(UnityEngine.Networking.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_HandleMsg_m2CE7A8F934F9971696BDFE57637ED2D6E08D290A_gshared (SyncList_1_tDC9BD47B0C55962FA07DEC77A578A1F5231B0238 * __this, NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * ___reader0, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	int32_t V_1 = 0;
	RuntimeObject * V_2 = NULL;
	int32_t V_3 = 0;
	{
		NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * L_0 = ___reader0;
		NullCheck((NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 *)L_0);
		uint8_t L_1 = NetworkReader_ReadByte_m1FADCAE4F3E2D0E009653F6AC58FD1F728D8ABFF((NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 *)L_0, /*hidden argument*/NULL);
		V_0 = (uint8_t)L_1;
		NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * L_2 = ___reader0;
		NullCheck((NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 *)L_2);
		uint32_t L_3 = NetworkReader_ReadPackedUInt32_mB0E5BF11AEAD652C88548BD93556D780A4E3F46B((NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 *)L_2, /*hidden argument*/NULL);
		V_1 = (int32_t)L_3;
		NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * L_4 = ___reader0;
		NullCheck((SyncList_1_tDC9BD47B0C55962FA07DEC77A578A1F5231B0238 *)__this);
		RuntimeObject * L_5 = VirtFuncInvoker1< RuntimeObject *, NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * >::Invoke(19 /* T UnityEngine.Networking.SyncList`1<System.Object>::DeserializeItem(UnityEngine.Networking.NetworkReader) */, (SyncList_1_tDC9BD47B0C55962FA07DEC77A578A1F5231B0238 *)__this, (NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 *)L_4);
		V_2 = (RuntimeObject *)L_5;
		uint8_t L_6 = V_0;
		V_3 = (int32_t)L_6;
		int32_t L_7 = V_3;
		switch (L_7)
		{
			case 0:
			{
				goto IL_003c;
			}
			case 1:
			{
				goto IL_004a;
			}
			case 2:
			{
				goto IL_0057;
			}
			case 3:
			{
				goto IL_0066;
			}
			case 4:
			{
				goto IL_0075;
			}
			case 5:
			{
				goto IL_0083;
			}
			case 6:
			{
				goto IL_0083;
			}
		}
	}
	{
		goto IL_0090;
	}

IL_003c:
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_8 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		RuntimeObject * L_9 = V_2;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_8);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		goto IL_0090;
	}

IL_004a:
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_10 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_10);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		goto IL_0090;
	}

IL_0057:
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_11 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		int32_t L_12 = V_1;
		RuntimeObject * L_13 = V_2;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_11);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_11, (int32_t)L_12, (RuntimeObject *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		goto IL_0090;
	}

IL_0066:
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_14 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		RuntimeObject * L_15 = V_2;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_14);
		((  bool (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_14, (RuntimeObject *)L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		goto IL_0090;
	}

IL_0075:
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_16 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		int32_t L_17 = V_1;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_16);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_16, (int32_t)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		goto IL_0090;
	}

IL_0083:
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_18 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		int32_t L_19 = V_1;
		RuntimeObject * L_20 = V_2;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_18);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_18, (int32_t)L_19, (RuntimeObject *)L_20, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
	}

IL_0090:
	{
		SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 * L_21 = (SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 *)__this->get_m_Callback_3();
		if (!L_21)
		{
			goto IL_00a5;
		}
	}
	{
		SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 * L_22 = (SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 *)__this->get_m_Callback_3();
		uint8_t L_23 = V_0;
		int32_t L_24 = V_1;
		NullCheck((SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 *)L_22);
		((  void (*) (SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 *)L_22, (int32_t)L_23, (int32_t)L_24, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
	}

IL_00a5:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::AddInternal(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_AddInternal_m366BD82F1FADDBAA377373315B6905923C1EA438_gshared (SyncList_1_tDC9BD47B0C55962FA07DEC77A578A1F5231B0238 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		RuntimeObject * L_1 = ___item0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_Add_mF62353CBE0C6795D3EC5C4A9CEB541471987BD04_gshared (SyncList_1_tDC9BD47B0C55962FA07DEC77A578A1F5231B0238 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		RuntimeObject * L_1 = ___item0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_2 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_2);
		int32_t L_3 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject * L_4 = ___item0;
		NullCheck((SyncList_1_tDC9BD47B0C55962FA07DEC77A578A1F5231B0238 *)__this);
		((  void (*) (SyncList_1_tDC9BD47B0C55962FA07DEC77A578A1F5231B0238 *, int32_t, int32_t, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_tDC9BD47B0C55962FA07DEC77A578A1F5231B0238 *)__this, (int32_t)0, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1)), (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_Clear_m6FF0B87F4C015BF2212C65CA18C0DA9A4A5A24D3_gshared (SyncList_1_tDC9BD47B0C55962FA07DEC77A578A1F5231B0238 * __this, const RuntimeMethod* method)
{
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		NullCheck((SyncList_1_tDC9BD47B0C55962FA07DEC77A578A1F5231B0238 *)__this);
		((  void (*) (SyncList_1_tDC9BD47B0C55962FA07DEC77A578A1F5231B0238 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((SyncList_1_tDC9BD47B0C55962FA07DEC77A578A1F5231B0238 *)__this, (int32_t)1, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return;
	}
}
// System.Boolean UnityEngine.Networking.SyncList`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SyncList_1_Contains_m2E713EFA4302E41D8EF13CE609BAA00F4116DF84_gshared (SyncList_1_tDC9BD47B0C55962FA07DEC77A578A1F5231B0238 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		RuntimeObject * L_1 = ___item0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		bool L_2 = ((  bool (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12));
		return L_2;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::CopyTo(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_CopyTo_m21EC5ED1BFDE9B82A6464E91548E71A115F11109_gshared (SyncList_1_tDC9BD47B0C55962FA07DEC77A578A1F5231B0238 * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = ___array0;
		int32_t L_2 = ___index1;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13));
		return;
	}
}
// System.Int32 UnityEngine.Networking.SyncList`1<System.Object>::IndexOf(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SyncList_1_IndexOf_m79875AFF1BA0567713959447C605B89848D45913_gshared (SyncList_1_tDC9BD47B0C55962FA07DEC77A578A1F5231B0238 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		RuntimeObject * L_1 = ___item0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		int32_t L_2 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
		return L_2;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::Insert(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_Insert_mAF8CC1C5A31FB9B35B62059CBA3D2AFECB1FF85C_gshared (SyncList_1_tDC9BD47B0C55962FA07DEC77A578A1F5231B0238 * __this, int32_t ___index0, RuntimeObject * ___item1, const RuntimeMethod* method)
{
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		int32_t L_1 = ___index0;
		RuntimeObject * L_2 = ___item1;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (int32_t)L_1, (RuntimeObject *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		int32_t L_3 = ___index0;
		RuntimeObject * L_4 = ___item1;
		NullCheck((SyncList_1_tDC9BD47B0C55962FA07DEC77A578A1F5231B0238 *)__this);
		((  void (*) (SyncList_1_tDC9BD47B0C55962FA07DEC77A578A1F5231B0238 *, int32_t, int32_t, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_tDC9BD47B0C55962FA07DEC77A578A1F5231B0238 *)__this, (int32_t)2, (int32_t)L_3, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return;
	}
}
// System.Boolean UnityEngine.Networking.SyncList`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SyncList_1_Remove_mBF64A10ABCBA1437224C31DF53986259C023A247_gshared (SyncList_1_tDC9BD47B0C55962FA07DEC77A578A1F5231B0238 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	bool G_B2_0 = false;
	bool G_B1_0 = false;
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		RuntimeObject * L_1 = ___item0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		bool L_2 = ((  bool (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		bool L_3 = (bool)L_2;
		G_B1_0 = L_3;
		if (!L_3)
		{
			G_B2_0 = L_3;
			goto IL_0018;
		}
	}
	{
		RuntimeObject * L_4 = ___item0;
		NullCheck((SyncList_1_tDC9BD47B0C55962FA07DEC77A578A1F5231B0238 *)__this);
		((  void (*) (SyncList_1_tDC9BD47B0C55962FA07DEC77A578A1F5231B0238 *, int32_t, int32_t, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_tDC9BD47B0C55962FA07DEC77A578A1F5231B0238 *)__this, (int32_t)3, (int32_t)0, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		G_B2_0 = G_B1_0;
	}

IL_0018:
	{
		return G_B2_0;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_RemoveAt_m4CB236F0BD117C63542C8399FF53FE08617A17D6_gshared (SyncList_1_tDC9BD47B0C55962FA07DEC77A578A1F5231B0238 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		int32_t L_1 = ___index0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		int32_t L_2 = ___index0;
		NullCheck((SyncList_1_tDC9BD47B0C55962FA07DEC77A578A1F5231B0238 *)__this);
		((  void (*) (SyncList_1_tDC9BD47B0C55962FA07DEC77A578A1F5231B0238 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((SyncList_1_tDC9BD47B0C55962FA07DEC77A578A1F5231B0238 *)__this, (int32_t)4, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::Dirty(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_Dirty_m1C52F174EAFA9CEE99E8AAA28736A3F921B2969F_gshared (SyncList_1_tDC9BD47B0C55962FA07DEC77A578A1F5231B0238 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_1 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		int32_t L_2 = ___index0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_1);
		RuntimeObject * L_3 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		NullCheck((SyncList_1_tDC9BD47B0C55962FA07DEC77A578A1F5231B0238 *)__this);
		((  void (*) (SyncList_1_tDC9BD47B0C55962FA07DEC77A578A1F5231B0238 *, int32_t, int32_t, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_tDC9BD47B0C55962FA07DEC77A578A1F5231B0238 *)__this, (int32_t)6, (int32_t)L_0, (RuntimeObject *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return;
	}
}
// T UnityEngine.Networking.SyncList`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SyncList_1_get_Item_m31396929FCFEC092BC74AD65E682CBFDCA7A6AA2_gshared (SyncList_1_tDC9BD47B0C55962FA07DEC77A578A1F5231B0238 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		int32_t L_1 = ___i0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		return L_2;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_set_Item_mFB5DA926ACD327D4E99A9984C1ECCBA80486A7C7_gshared (SyncList_1_tDC9BD47B0C55962FA07DEC77A578A1F5231B0238 * __this, int32_t ___i0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	bool V_0 = false;
	RuntimeObject * V_1 = NULL;
	{
		V_0 = (bool)0;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		int32_t L_1 = ___i0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject * L_3 = ___value1;
		if (L_3)
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		V_0 = (bool)1;
		goto IL_0046;
	}

IL_0022:
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_4 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		int32_t L_5 = ___i0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_4);
		RuntimeObject * L_6 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_4, (int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		V_1 = (RuntimeObject *)L_6;
		RuntimeObject * L_7 = ___value1;
		NullCheck((RuntimeObject *)(V_1));
		bool L_8 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (RuntimeObject *)(V_1), (RuntimeObject *)L_7);
		V_0 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
	}

IL_0046:
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_9 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		int32_t L_10 = ___i0;
		RuntimeObject * L_11 = ___value1;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_9);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_9, (int32_t)L_10, (RuntimeObject *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		bool L_12 = V_0;
		if (!L_12)
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_13 = ___i0;
		RuntimeObject * L_14 = ___value1;
		NullCheck((SyncList_1_tDC9BD47B0C55962FA07DEC77A578A1F5231B0238 *)__this);
		((  void (*) (SyncList_1_tDC9BD47B0C55962FA07DEC77A578A1F5231B0238 *, int32_t, int32_t, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_tDC9BD47B0C55962FA07DEC77A578A1F5231B0238 *)__this, (int32_t)5, (int32_t)L_13, (RuntimeObject *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
	}

IL_005f:
	{
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.Networking.SyncList`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SyncList_1_GetEnumerator_m037328BF2A87C13E166641288DDE160329836C09_gshared (SyncList_1_tDC9BD47B0C55962FA07DEC77A578A1F5231B0238 * __this, const RuntimeMethod* method)
{
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  L_1 = ((  Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17));
		Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  L_2 = L_1;
		RuntimeObject * L_3 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 18), &L_2);
		return (RuntimeObject*)L_3;
	}
}
// System.Collections.IEnumerator UnityEngine.Networking.SyncList`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SyncList_1_System_Collections_IEnumerable_GetEnumerator_m0D6CAC5D4A0D8FF72803F013D0D4B5A6AB433251_gshared (SyncList_1_tDC9BD47B0C55962FA07DEC77A578A1F5231B0238 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((SyncList_1_tDC9BD47B0C55962FA07DEC77A578A1F5231B0238 *)__this);
		RuntimeObject* L_0 = ((  RuntimeObject* (*) (SyncList_1_tDC9BD47B0C55962FA07DEC77A578A1F5231B0238 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 19)->methodPointer)((SyncList_1_tDC9BD47B0C55962FA07DEC77A578A1F5231B0238 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 19));
		return L_0;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1__ctor_mEFD8368B5D9178E9DA189A23F22FD902E193C791_gshared (SyncList_1_tDC9BD47B0C55962FA07DEC77A578A1F5231B0238 * __this, const RuntimeMethod* method)
{
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 20));
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21));
		__this->set_m_Objects_0(L_0);
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
// System.Int32 UnityEngine.Networking.SyncList`1<System.Single>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SyncList_1_get_Count_mCC0838D9ED25E463384E4852839E47B100C99577_gshared (SyncList_1_tDEB03E3C5252571915662095C7060998910FD0A2 * __this, const RuntimeMethod* method)
{
	{
		List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 * L_0 = (List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *)__this->get_m_Objects_0();
		NullCheck((List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *)L_0);
		int32_t L_1 = ((  int32_t (*) (List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return L_1;
	}
}
// System.Boolean UnityEngine.Networking.SyncList`1<System.Single>::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SyncList_1_get_IsReadOnly_m176178C5FC7CC54264976BFDD15CF1F3FB4E7B33_gshared (SyncList_1_tDEB03E3C5252571915662095C7060998910FD0A2 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// UnityEngine.Networking.SyncList`1_SyncListChanged<T> UnityEngine.Networking.SyncList`1<System.Single>::get_Callback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SyncListChanged_t63BE6CD22C2B89F865722BF980F4351DF0EC68D6 * SyncList_1_get_Callback_m6AFC36CC469E5D3CC16C969C9FD8CEB7971625B7_gshared (SyncList_1_tDEB03E3C5252571915662095C7060998910FD0A2 * __this, const RuntimeMethod* method)
{
	{
		SyncListChanged_t63BE6CD22C2B89F865722BF980F4351DF0EC68D6 * L_0 = (SyncListChanged_t63BE6CD22C2B89F865722BF980F4351DF0EC68D6 *)__this->get_m_Callback_3();
		return L_0;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::set_Callback(UnityEngine.Networking.SyncList`1_SyncListChanged<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_set_Callback_mB6783B1D68A6E3AD0A723D89E2CC0A6E9D3D4194_gshared (SyncList_1_tDEB03E3C5252571915662095C7060998910FD0A2 * __this, SyncListChanged_t63BE6CD22C2B89F865722BF980F4351DF0EC68D6 * ___value0, const RuntimeMethod* method)
{
	{
		SyncListChanged_t63BE6CD22C2B89F865722BF980F4351DF0EC68D6 * L_0 = ___value0;
		__this->set_m_Callback_3(L_0);
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::InitializeBehaviour(UnityEngine.Networking.NetworkBehaviour,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_InitializeBehaviour_mBAE4D7E0A5292F18FDCC382E1B4D1BFA7B92C817_gshared (SyncList_1_tDEB03E3C5252571915662095C7060998910FD0A2 * __this, NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * ___beh0, int32_t ___cmdHash1, const RuntimeMethod* method)
{
	{
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_0 = ___beh0;
		__this->set_m_Behaviour_1(L_0);
		int32_t L_1 = ___cmdHash1;
		__this->set_m_CmdHash_2(L_1);
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::SendMsg(UnityEngine.Networking.SyncList`1_Operation<T>,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_SendMsg_m7A891D9BFEB0B1CE90D7193797D0FF9204FEE417_gshared (SyncList_1_tDEB03E3C5252571915662095C7060998910FD0A2 * __this, int32_t ___op0, int32_t ___itemIndex1, float ___item2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SyncList_1_SendMsg_m7A891D9BFEB0B1CE90D7193797D0FF9204FEE417_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * V_0 = NULL;
	NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * V_1 = NULL;
	{
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_0 = (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)__this->get_m_Behaviour_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(LogFilter_t5202A297E770086F7954B8D6703BAC03C22654ED_il2cpp_TypeInfo_var);
		bool L_2 = LogFilter_get_logError_mD404500EEB2968A3CF190DB1EB6CA9A26135A21F(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29((RuntimeObject *)_stringLiteral02A1CE557DC872E91BC93ED77E8B60DF3DFB4A00, /*hidden argument*/NULL);
	}

IL_001f:
	{
		return;
	}

IL_0020:
	{
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_3 = (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)__this->get_m_Behaviour_1();
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_3);
		NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * L_4 = Component_GetComponent_TisNetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B_m1B246F83788387F4E1BD668088D39CF221FD3F59((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_3, /*hidden argument*/Component_GetComponent_TisNetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B_m1B246F83788387F4E1BD668088D39CF221FD3F59_RuntimeMethod_var);
		V_0 = (NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B *)L_4;
		NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_5, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0047;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(LogFilter_t5202A297E770086F7954B8D6703BAC03C22654ED_il2cpp_TypeInfo_var);
		bool L_7 = LogFilter_get_logError_mD404500EEB2968A3CF190DB1EB6CA9A26135A21F(/*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29((RuntimeObject *)_stringLiteralE35C7729141357B5A11D8FBAAC5AFED079F1C9B8, /*hidden argument*/NULL);
	}

IL_0046:
	{
		return;
	}

IL_0047:
	{
		NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * L_8 = V_0;
		NullCheck((NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B *)L_8);
		bool L_9 = NetworkIdentity_get_isServer_mA9BAD5FD120A9506686DF79A6500649E7120BA25((NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B *)L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0050;
		}
	}
	{
		return;
	}

IL_0050:
	{
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_10 = (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)il2cpp_codegen_object_new(NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030_il2cpp_TypeInfo_var);
		NetworkWriter__ctor_m43E453A4A5244815EC8D906B22E5D85FB7535D33(L_10, /*hidden argument*/NULL);
		V_1 = (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_10;
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_11 = V_1;
		NullCheck((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_11);
		NetworkWriter_StartMessage_mD4F5BFA7ECA40EEA4AC721A1E357C3C8A09CE218((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_11, (int16_t)((int32_t)9), /*hidden argument*/NULL);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_12 = V_1;
		NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * L_13 = V_0;
		NullCheck((NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B *)L_13);
		NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615  L_14 = NetworkIdentity_get_netId_m22EB7CD04E2633FFAF99093749F79816B2BC9F28_inline((NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B *)L_13, /*hidden argument*/NULL);
		NullCheck((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_12);
		NetworkWriter_Write_m327AAC971B7DA22E82661AD419E4D5EEC6CCAFBF((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_12, (NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615 )L_14, /*hidden argument*/NULL);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_15 = V_1;
		int32_t L_16 = (int32_t)__this->get_m_CmdHash_2();
		NullCheck((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_15);
		NetworkWriter_WritePackedUInt32_m99DCA40833B068CB958663A5B583BC8D2051B12F((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_15, (uint32_t)L_16, /*hidden argument*/NULL);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_17 = V_1;
		int32_t L_18 = ___op0;
		NullCheck((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_17);
		NetworkWriter_Write_m99D6ACBCB1E5C94FD09AE9F50CFC993B18DEA183((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_17, (uint8_t)(((int32_t)((uint8_t)L_18))), /*hidden argument*/NULL);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_19 = V_1;
		int32_t L_20 = ___itemIndex1;
		NullCheck((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_19);
		NetworkWriter_WritePackedUInt32_m99DCA40833B068CB958663A5B583BC8D2051B12F((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_19, (uint32_t)L_20, /*hidden argument*/NULL);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_21 = V_1;
		float L_22 = ___item2;
		NullCheck((SyncList_1_tDEB03E3C5252571915662095C7060998910FD0A2 *)__this);
		VirtActionInvoker2< NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *, float >::Invoke(18 /* System.Void UnityEngine.Networking.SyncList`1<System.Single>::SerializeItem(UnityEngine.Networking.NetworkWriter,T) */, (SyncList_1_tDEB03E3C5252571915662095C7060998910FD0A2 *)__this, (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_21, (float)L_22);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_23 = V_1;
		NullCheck((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_23);
		NetworkWriter_FinishMessage_mDA9E66815E448F635B2394A35DDCA3EC040B0590((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_23, /*hidden argument*/NULL);
		NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * L_24 = V_0;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_24);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_25 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_24, /*hidden argument*/NULL);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_26 = V_1;
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_27 = (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)__this->get_m_Behaviour_1();
		NullCheck((NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)L_27);
		int32_t L_28 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 UnityEngine.Networking.NetworkBehaviour::GetNetworkChannel() */, (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)L_27);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkServer_tFD62C268FC6F01624A5989BFC1D0DD689A66B4A1_il2cpp_TypeInfo_var);
		NetworkServer_SendWriterToReady_m3DAE75021BB2FA60809865E05C38C82D0F7DA807((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_25, (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_26, (int32_t)L_28, /*hidden argument*/NULL);
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_29 = (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)__this->get_m_Behaviour_1();
		NullCheck((NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)L_29);
		bool L_30 = NetworkBehaviour_get_isServer_m3366F78A4D83ECE0798B276F2E9EF1FEEC8E2D79((NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)L_29, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_00d9;
		}
	}
	{
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_31 = (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)__this->get_m_Behaviour_1();
		NullCheck((NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)L_31);
		bool L_32 = NetworkBehaviour_get_isClient_mB7B109ADAF27B23B3D58E2369CBD11B1471C9148((NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)L_31, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_00d9;
		}
	}
	{
		SyncListChanged_t63BE6CD22C2B89F865722BF980F4351DF0EC68D6 * L_33 = (SyncListChanged_t63BE6CD22C2B89F865722BF980F4351DF0EC68D6 *)__this->get_m_Callback_3();
		if (!L_33)
		{
			goto IL_00d9;
		}
	}
	{
		SyncListChanged_t63BE6CD22C2B89F865722BF980F4351DF0EC68D6 * L_34 = (SyncListChanged_t63BE6CD22C2B89F865722BF980F4351DF0EC68D6 *)__this->get_m_Callback_3();
		int32_t L_35 = ___op0;
		int32_t L_36 = ___itemIndex1;
		NullCheck((SyncListChanged_t63BE6CD22C2B89F865722BF980F4351DF0EC68D6 *)L_34);
		((  void (*) (SyncListChanged_t63BE6CD22C2B89F865722BF980F4351DF0EC68D6 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((SyncListChanged_t63BE6CD22C2B89F865722BF980F4351DF0EC68D6 *)L_34, (int32_t)L_35, (int32_t)L_36, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
	}

IL_00d9:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::SendMsg(UnityEngine.Networking.SyncList`1_Operation<T>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_SendMsg_m0EED90A096F50EC2155E5BFB4B9E5A443D1E8731_gshared (SyncList_1_tDEB03E3C5252571915662095C7060998910FD0A2 * __this, int32_t ___op0, int32_t ___itemIndex1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		int32_t L_0 = ___op0;
		int32_t L_1 = ___itemIndex1;
		il2cpp_codegen_initobj((&V_0), sizeof(float));
		float L_2 = V_0;
		NullCheck((SyncList_1_tDEB03E3C5252571915662095C7060998910FD0A2 *)__this);
		((  void (*) (SyncList_1_tDEB03E3C5252571915662095C7060998910FD0A2 *, int32_t, int32_t, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_tDEB03E3C5252571915662095C7060998910FD0A2 *)__this, (int32_t)L_0, (int32_t)L_1, (float)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::HandleMsg(UnityEngine.Networking.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_HandleMsg_m80805D7ECF20FFC37B3C2F67B77C8BC4081C08A4_gshared (SyncList_1_tDEB03E3C5252571915662095C7060998910FD0A2 * __this, NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * ___reader0, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	{
		NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * L_0 = ___reader0;
		NullCheck((NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 *)L_0);
		uint8_t L_1 = NetworkReader_ReadByte_m1FADCAE4F3E2D0E009653F6AC58FD1F728D8ABFF((NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 *)L_0, /*hidden argument*/NULL);
		V_0 = (uint8_t)L_1;
		NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * L_2 = ___reader0;
		NullCheck((NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 *)L_2);
		uint32_t L_3 = NetworkReader_ReadPackedUInt32_mB0E5BF11AEAD652C88548BD93556D780A4E3F46B((NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 *)L_2, /*hidden argument*/NULL);
		V_1 = (int32_t)L_3;
		NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * L_4 = ___reader0;
		NullCheck((SyncList_1_tDEB03E3C5252571915662095C7060998910FD0A2 *)__this);
		float L_5 = VirtFuncInvoker1< float, NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * >::Invoke(19 /* T UnityEngine.Networking.SyncList`1<System.Single>::DeserializeItem(UnityEngine.Networking.NetworkReader) */, (SyncList_1_tDEB03E3C5252571915662095C7060998910FD0A2 *)__this, (NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 *)L_4);
		V_2 = (float)L_5;
		uint8_t L_6 = V_0;
		V_3 = (int32_t)L_6;
		int32_t L_7 = V_3;
		switch (L_7)
		{
			case 0:
			{
				goto IL_003c;
			}
			case 1:
			{
				goto IL_004a;
			}
			case 2:
			{
				goto IL_0057;
			}
			case 3:
			{
				goto IL_0066;
			}
			case 4:
			{
				goto IL_0075;
			}
			case 5:
			{
				goto IL_0083;
			}
			case 6:
			{
				goto IL_0083;
			}
		}
	}
	{
		goto IL_0090;
	}

IL_003c:
	{
		List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 * L_8 = (List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *)__this->get_m_Objects_0();
		float L_9 = V_2;
		NullCheck((List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *)L_8);
		((  void (*) (List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *)L_8, (float)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		goto IL_0090;
	}

IL_004a:
	{
		List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 * L_10 = (List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *)__this->get_m_Objects_0();
		NullCheck((List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *)L_10);
		((  void (*) (List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		goto IL_0090;
	}

IL_0057:
	{
		List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 * L_11 = (List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *)__this->get_m_Objects_0();
		int32_t L_12 = V_1;
		float L_13 = V_2;
		NullCheck((List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *)L_11);
		((  void (*) (List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *, int32_t, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *)L_11, (int32_t)L_12, (float)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		goto IL_0090;
	}

IL_0066:
	{
		List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 * L_14 = (List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *)__this->get_m_Objects_0();
		float L_15 = V_2;
		NullCheck((List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *)L_14);
		((  bool (*) (List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *)L_14, (float)L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		goto IL_0090;
	}

IL_0075:
	{
		List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 * L_16 = (List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *)__this->get_m_Objects_0();
		int32_t L_17 = V_1;
		NullCheck((List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *)L_16);
		((  void (*) (List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *)L_16, (int32_t)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		goto IL_0090;
	}

IL_0083:
	{
		List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 * L_18 = (List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *)__this->get_m_Objects_0();
		int32_t L_19 = V_1;
		float L_20 = V_2;
		NullCheck((List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *)L_18);
		((  void (*) (List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *, int32_t, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *)L_18, (int32_t)L_19, (float)L_20, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
	}

IL_0090:
	{
		SyncListChanged_t63BE6CD22C2B89F865722BF980F4351DF0EC68D6 * L_21 = (SyncListChanged_t63BE6CD22C2B89F865722BF980F4351DF0EC68D6 *)__this->get_m_Callback_3();
		if (!L_21)
		{
			goto IL_00a5;
		}
	}
	{
		SyncListChanged_t63BE6CD22C2B89F865722BF980F4351DF0EC68D6 * L_22 = (SyncListChanged_t63BE6CD22C2B89F865722BF980F4351DF0EC68D6 *)__this->get_m_Callback_3();
		uint8_t L_23 = V_0;
		int32_t L_24 = V_1;
		NullCheck((SyncListChanged_t63BE6CD22C2B89F865722BF980F4351DF0EC68D6 *)L_22);
		((  void (*) (SyncListChanged_t63BE6CD22C2B89F865722BF980F4351DF0EC68D6 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((SyncListChanged_t63BE6CD22C2B89F865722BF980F4351DF0EC68D6 *)L_22, (int32_t)L_23, (int32_t)L_24, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
	}

IL_00a5:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::AddInternal(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_AddInternal_mC17F547D0099E43ACAA4C5FD21D63DDE456602A6_gshared (SyncList_1_tDEB03E3C5252571915662095C7060998910FD0A2 * __this, float ___item0, const RuntimeMethod* method)
{
	{
		List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 * L_0 = (List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *)__this->get_m_Objects_0();
		float L_1 = ___item0;
		NullCheck((List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *)L_0);
		((  void (*) (List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *)L_0, (float)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_Add_m9CE1ED94CD62FED23999BC06D5B4F8423FDBE20A_gshared (SyncList_1_tDEB03E3C5252571915662095C7060998910FD0A2 * __this, float ___item0, const RuntimeMethod* method)
{
	{
		List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 * L_0 = (List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *)__this->get_m_Objects_0();
		float L_1 = ___item0;
		NullCheck((List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *)L_0);
		((  void (*) (List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *)L_0, (float)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 * L_2 = (List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *)__this->get_m_Objects_0();
		NullCheck((List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *)L_2);
		int32_t L_3 = ((  int32_t (*) (List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		float L_4 = ___item0;
		NullCheck((SyncList_1_tDEB03E3C5252571915662095C7060998910FD0A2 *)__this);
		((  void (*) (SyncList_1_tDEB03E3C5252571915662095C7060998910FD0A2 *, int32_t, int32_t, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_tDEB03E3C5252571915662095C7060998910FD0A2 *)__this, (int32_t)0, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1)), (float)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_Clear_m13160DF80DA71AAF005006E14C5C8985DBF15EB5_gshared (SyncList_1_tDEB03E3C5252571915662095C7060998910FD0A2 * __this, const RuntimeMethod* method)
{
	{
		List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 * L_0 = (List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *)__this->get_m_Objects_0();
		NullCheck((List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *)L_0);
		((  void (*) (List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		NullCheck((SyncList_1_tDEB03E3C5252571915662095C7060998910FD0A2 *)__this);
		((  void (*) (SyncList_1_tDEB03E3C5252571915662095C7060998910FD0A2 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((SyncList_1_tDEB03E3C5252571915662095C7060998910FD0A2 *)__this, (int32_t)1, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return;
	}
}
// System.Boolean UnityEngine.Networking.SyncList`1<System.Single>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SyncList_1_Contains_m1FFCE9CE84853585265C642A6BED44FC250F78F5_gshared (SyncList_1_tDEB03E3C5252571915662095C7060998910FD0A2 * __this, float ___item0, const RuntimeMethod* method)
{
	{
		List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 * L_0 = (List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *)__this->get_m_Objects_0();
		float L_1 = ___item0;
		NullCheck((List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *)L_0);
		bool L_2 = ((  bool (*) (List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12)->methodPointer)((List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *)L_0, (float)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12));
		return L_2;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::CopyTo(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_CopyTo_m741ACD2D807F680FEABB6CACF0B2D61958AB10E2_gshared (SyncList_1_tDEB03E3C5252571915662095C7060998910FD0A2 * __this, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 * L_0 = (List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *)__this->get_m_Objects_0();
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_1 = ___array0;
		int32_t L_2 = ___index1;
		NullCheck((List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *)L_0);
		((  void (*) (List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13)->methodPointer)((List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *)L_0, (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13));
		return;
	}
}
// System.Int32 UnityEngine.Networking.SyncList`1<System.Single>::IndexOf(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SyncList_1_IndexOf_mE622AA0717C3BE86ECBA87735094C094C7C98C1B_gshared (SyncList_1_tDEB03E3C5252571915662095C7060998910FD0A2 * __this, float ___item0, const RuntimeMethod* method)
{
	{
		List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 * L_0 = (List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *)__this->get_m_Objects_0();
		float L_1 = ___item0;
		NullCheck((List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *)L_0);
		int32_t L_2 = ((  int32_t (*) (List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)->methodPointer)((List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *)L_0, (float)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
		return L_2;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::Insert(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_Insert_mC87827491B0E324FEEB90186EC1CC5C7CB2F7C12_gshared (SyncList_1_tDEB03E3C5252571915662095C7060998910FD0A2 * __this, int32_t ___index0, float ___item1, const RuntimeMethod* method)
{
	{
		List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 * L_0 = (List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *)__this->get_m_Objects_0();
		int32_t L_1 = ___index0;
		float L_2 = ___item1;
		NullCheck((List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *)L_0);
		((  void (*) (List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *, int32_t, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *)L_0, (int32_t)L_1, (float)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		int32_t L_3 = ___index0;
		float L_4 = ___item1;
		NullCheck((SyncList_1_tDEB03E3C5252571915662095C7060998910FD0A2 *)__this);
		((  void (*) (SyncList_1_tDEB03E3C5252571915662095C7060998910FD0A2 *, int32_t, int32_t, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_tDEB03E3C5252571915662095C7060998910FD0A2 *)__this, (int32_t)2, (int32_t)L_3, (float)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return;
	}
}
// System.Boolean UnityEngine.Networking.SyncList`1<System.Single>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SyncList_1_Remove_mCDFDE49A2CE4434026DE235045D5E8171659DF88_gshared (SyncList_1_tDEB03E3C5252571915662095C7060998910FD0A2 * __this, float ___item0, const RuntimeMethod* method)
{
	bool G_B2_0 = false;
	bool G_B1_0 = false;
	{
		List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 * L_0 = (List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *)__this->get_m_Objects_0();
		float L_1 = ___item0;
		NullCheck((List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *)L_0);
		bool L_2 = ((  bool (*) (List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *)L_0, (float)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		bool L_3 = (bool)L_2;
		G_B1_0 = L_3;
		if (!L_3)
		{
			G_B2_0 = L_3;
			goto IL_0018;
		}
	}
	{
		float L_4 = ___item0;
		NullCheck((SyncList_1_tDEB03E3C5252571915662095C7060998910FD0A2 *)__this);
		((  void (*) (SyncList_1_tDEB03E3C5252571915662095C7060998910FD0A2 *, int32_t, int32_t, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_tDEB03E3C5252571915662095C7060998910FD0A2 *)__this, (int32_t)3, (int32_t)0, (float)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		G_B2_0 = G_B1_0;
	}

IL_0018:
	{
		return G_B2_0;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_RemoveAt_mC5B82BB22A5A217A032D743823A6A4071C516806_gshared (SyncList_1_tDEB03E3C5252571915662095C7060998910FD0A2 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 * L_0 = (List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *)__this->get_m_Objects_0();
		int32_t L_1 = ___index0;
		NullCheck((List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *)L_0);
		((  void (*) (List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		int32_t L_2 = ___index0;
		NullCheck((SyncList_1_tDEB03E3C5252571915662095C7060998910FD0A2 *)__this);
		((  void (*) (SyncList_1_tDEB03E3C5252571915662095C7060998910FD0A2 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((SyncList_1_tDEB03E3C5252571915662095C7060998910FD0A2 *)__this, (int32_t)4, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::Dirty(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_Dirty_mA8A2EC81DD7EAFD244824293BDF9ED46F242EBF3_gshared (SyncList_1_tDEB03E3C5252571915662095C7060998910FD0A2 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 * L_1 = (List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *)__this->get_m_Objects_0();
		int32_t L_2 = ___index0;
		NullCheck((List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *)L_1);
		float L_3 = ((  float (*) (List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		NullCheck((SyncList_1_tDEB03E3C5252571915662095C7060998910FD0A2 *)__this);
		((  void (*) (SyncList_1_tDEB03E3C5252571915662095C7060998910FD0A2 *, int32_t, int32_t, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_tDEB03E3C5252571915662095C7060998910FD0A2 *)__this, (int32_t)6, (int32_t)L_0, (float)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return;
	}
}
// T UnityEngine.Networking.SyncList`1<System.Single>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SyncList_1_get_Item_m70C832E1FED3E2D52297C7B6EF187700309BF7D4_gshared (SyncList_1_tDEB03E3C5252571915662095C7060998910FD0A2 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 * L_0 = (List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *)__this->get_m_Objects_0();
		int32_t L_1 = ___i0;
		NullCheck((List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *)L_0);
		float L_2 = ((  float (*) (List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		return L_2;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_set_Item_m86746D39C532D35219048AA8A9D3444B55D7D886_gshared (SyncList_1_tDEB03E3C5252571915662095C7060998910FD0A2 * __this, int32_t ___i0, float ___value1, const RuntimeMethod* method)
{
	bool V_0 = false;
	float V_1 = 0.0f;
	{
		V_0 = (bool)0;
		List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 * L_0 = (List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *)__this->get_m_Objects_0();
		int32_t L_1 = ___i0;
		NullCheck((List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *)L_0);
		float L_2 = ((  float (*) (List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		goto IL_0022;
	}
	{
		goto IL_001e;
	}
	{
		return;
	}

IL_001e:
	{
		V_0 = (bool)1;
		goto IL_0046;
	}

IL_0022:
	{
		List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 * L_4 = (List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *)__this->get_m_Objects_0();
		int32_t L_5 = ___i0;
		NullCheck((List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *)L_4);
		float L_6 = ((  float (*) (List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *)L_4, (int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		V_1 = (float)L_6;
		float L_7 = ___value1;
		float L_8 = L_7;
		RuntimeObject * L_9 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 16), &L_8);
		bool L_10 = Single_Equals_mF4C7AEA9D216B3C9CB735BF327D07BF50F101A16((float*)(float*)(&V_1), (RuntimeObject *)L_9, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
	}

IL_0046:
	{
		List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 * L_11 = (List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *)__this->get_m_Objects_0();
		int32_t L_12 = ___i0;
		float L_13 = ___value1;
		NullCheck((List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *)L_11);
		((  void (*) (List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *, int32_t, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *)L_11, (int32_t)L_12, (float)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		bool L_14 = V_0;
		if (!L_14)
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_15 = ___i0;
		float L_16 = ___value1;
		NullCheck((SyncList_1_tDEB03E3C5252571915662095C7060998910FD0A2 *)__this);
		((  void (*) (SyncList_1_tDEB03E3C5252571915662095C7060998910FD0A2 *, int32_t, int32_t, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_tDEB03E3C5252571915662095C7060998910FD0A2 *)__this, (int32_t)5, (int32_t)L_15, (float)L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
	}

IL_005f:
	{
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.Networking.SyncList`1<System.Single>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SyncList_1_GetEnumerator_m54E1E24BC988F42DDF5654D5ADF232A22AE66987_gshared (SyncList_1_tDEB03E3C5252571915662095C7060998910FD0A2 * __this, const RuntimeMethod* method)
{
	{
		List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 * L_0 = (List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *)__this->get_m_Objects_0();
		NullCheck((List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *)L_0);
		Enumerator_tFAFBEAFCC7B8C7F0A58F04A243A8773B576C4EFD  L_1 = ((  Enumerator_tFAFBEAFCC7B8C7F0A58F04A243A8773B576C4EFD  (*) (List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17)->methodPointer)((List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17));
		Enumerator_tFAFBEAFCC7B8C7F0A58F04A243A8773B576C4EFD  L_2 = L_1;
		RuntimeObject * L_3 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 18), &L_2);
		return (RuntimeObject*)L_3;
	}
}
// System.Collections.IEnumerator UnityEngine.Networking.SyncList`1<System.Single>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SyncList_1_System_Collections_IEnumerable_GetEnumerator_mAFE4DBEAF3C50DC407247585BCAAD024B7C67103_gshared (SyncList_1_tDEB03E3C5252571915662095C7060998910FD0A2 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((SyncList_1_tDEB03E3C5252571915662095C7060998910FD0A2 *)__this);
		RuntimeObject* L_0 = ((  RuntimeObject* (*) (SyncList_1_tDEB03E3C5252571915662095C7060998910FD0A2 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 19)->methodPointer)((SyncList_1_tDEB03E3C5252571915662095C7060998910FD0A2 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 19));
		return L_0;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1__ctor_mACF8E6F1689E85F8D9D88F6B2366C1A08D6F853E_gshared (SyncList_1_tDEB03E3C5252571915662095C7060998910FD0A2 * __this, const RuntimeMethod* method)
{
	{
		List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 * L_0 = (List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 20));
		((  void (*) (List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21));
		__this->set_m_Objects_0(L_0);
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
// System.Int32 UnityEngine.Networking.SyncList`1<System.UInt32>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SyncList_1_get_Count_m29E32BA907E6C50793D6A2D30D22A8D052A978B8_gshared (SyncList_1_t6931FBA5633802C1CAE04093D0C6D9C88EE66627 * __this, const RuntimeMethod* method)
{
	{
		List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 * L_0 = (List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)__this->get_m_Objects_0();
		NullCheck((List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)L_0);
		int32_t L_1 = ((  int32_t (*) (List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return L_1;
	}
}
// System.Boolean UnityEngine.Networking.SyncList`1<System.UInt32>::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SyncList_1_get_IsReadOnly_mD9BA44A32624799117FD5C5145636F62BF07B041_gshared (SyncList_1_t6931FBA5633802C1CAE04093D0C6D9C88EE66627 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// UnityEngine.Networking.SyncList`1_SyncListChanged<T> UnityEngine.Networking.SyncList`1<System.UInt32>::get_Callback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SyncListChanged_t1804C1A09093327076629C515EC006A30F38C1B8 * SyncList_1_get_Callback_mB94ADF0A296618486FB9EFE883B5CDDB9478E324_gshared (SyncList_1_t6931FBA5633802C1CAE04093D0C6D9C88EE66627 * __this, const RuntimeMethod* method)
{
	{
		SyncListChanged_t1804C1A09093327076629C515EC006A30F38C1B8 * L_0 = (SyncListChanged_t1804C1A09093327076629C515EC006A30F38C1B8 *)__this->get_m_Callback_3();
		return L_0;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::set_Callback(UnityEngine.Networking.SyncList`1_SyncListChanged<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_set_Callback_m0E4FB905D48B688D5C9E36A532E507EB8B1AB78C_gshared (SyncList_1_t6931FBA5633802C1CAE04093D0C6D9C88EE66627 * __this, SyncListChanged_t1804C1A09093327076629C515EC006A30F38C1B8 * ___value0, const RuntimeMethod* method)
{
	{
		SyncListChanged_t1804C1A09093327076629C515EC006A30F38C1B8 * L_0 = ___value0;
		__this->set_m_Callback_3(L_0);
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::InitializeBehaviour(UnityEngine.Networking.NetworkBehaviour,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_InitializeBehaviour_mFEBF850CE3DB933AE9D9286B77F0FC98DDAECBA4_gshared (SyncList_1_t6931FBA5633802C1CAE04093D0C6D9C88EE66627 * __this, NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * ___beh0, int32_t ___cmdHash1, const RuntimeMethod* method)
{
	{
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_0 = ___beh0;
		__this->set_m_Behaviour_1(L_0);
		int32_t L_1 = ___cmdHash1;
		__this->set_m_CmdHash_2(L_1);
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::SendMsg(UnityEngine.Networking.SyncList`1_Operation<T>,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_SendMsg_m7A9B6D2648AA0292EA0F70E282BC6BD5321AD14F_gshared (SyncList_1_t6931FBA5633802C1CAE04093D0C6D9C88EE66627 * __this, int32_t ___op0, int32_t ___itemIndex1, uint32_t ___item2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SyncList_1_SendMsg_m7A9B6D2648AA0292EA0F70E282BC6BD5321AD14F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * V_0 = NULL;
	NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * V_1 = NULL;
	{
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_0 = (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)__this->get_m_Behaviour_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(LogFilter_t5202A297E770086F7954B8D6703BAC03C22654ED_il2cpp_TypeInfo_var);
		bool L_2 = LogFilter_get_logError_mD404500EEB2968A3CF190DB1EB6CA9A26135A21F(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29((RuntimeObject *)_stringLiteral02A1CE557DC872E91BC93ED77E8B60DF3DFB4A00, /*hidden argument*/NULL);
	}

IL_001f:
	{
		return;
	}

IL_0020:
	{
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_3 = (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)__this->get_m_Behaviour_1();
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_3);
		NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * L_4 = Component_GetComponent_TisNetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B_m1B246F83788387F4E1BD668088D39CF221FD3F59((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_3, /*hidden argument*/Component_GetComponent_TisNetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B_m1B246F83788387F4E1BD668088D39CF221FD3F59_RuntimeMethod_var);
		V_0 = (NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B *)L_4;
		NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_5, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0047;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(LogFilter_t5202A297E770086F7954B8D6703BAC03C22654ED_il2cpp_TypeInfo_var);
		bool L_7 = LogFilter_get_logError_mD404500EEB2968A3CF190DB1EB6CA9A26135A21F(/*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29((RuntimeObject *)_stringLiteralE35C7729141357B5A11D8FBAAC5AFED079F1C9B8, /*hidden argument*/NULL);
	}

IL_0046:
	{
		return;
	}

IL_0047:
	{
		NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * L_8 = V_0;
		NullCheck((NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B *)L_8);
		bool L_9 = NetworkIdentity_get_isServer_mA9BAD5FD120A9506686DF79A6500649E7120BA25((NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B *)L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0050;
		}
	}
	{
		return;
	}

IL_0050:
	{
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_10 = (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)il2cpp_codegen_object_new(NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030_il2cpp_TypeInfo_var);
		NetworkWriter__ctor_m43E453A4A5244815EC8D906B22E5D85FB7535D33(L_10, /*hidden argument*/NULL);
		V_1 = (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_10;
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_11 = V_1;
		NullCheck((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_11);
		NetworkWriter_StartMessage_mD4F5BFA7ECA40EEA4AC721A1E357C3C8A09CE218((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_11, (int16_t)((int32_t)9), /*hidden argument*/NULL);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_12 = V_1;
		NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * L_13 = V_0;
		NullCheck((NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B *)L_13);
		NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615  L_14 = NetworkIdentity_get_netId_m22EB7CD04E2633FFAF99093749F79816B2BC9F28_inline((NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B *)L_13, /*hidden argument*/NULL);
		NullCheck((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_12);
		NetworkWriter_Write_m327AAC971B7DA22E82661AD419E4D5EEC6CCAFBF((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_12, (NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615 )L_14, /*hidden argument*/NULL);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_15 = V_1;
		int32_t L_16 = (int32_t)__this->get_m_CmdHash_2();
		NullCheck((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_15);
		NetworkWriter_WritePackedUInt32_m99DCA40833B068CB958663A5B583BC8D2051B12F((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_15, (uint32_t)L_16, /*hidden argument*/NULL);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_17 = V_1;
		int32_t L_18 = ___op0;
		NullCheck((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_17);
		NetworkWriter_Write_m99D6ACBCB1E5C94FD09AE9F50CFC993B18DEA183((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_17, (uint8_t)(((int32_t)((uint8_t)L_18))), /*hidden argument*/NULL);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_19 = V_1;
		int32_t L_20 = ___itemIndex1;
		NullCheck((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_19);
		NetworkWriter_WritePackedUInt32_m99DCA40833B068CB958663A5B583BC8D2051B12F((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_19, (uint32_t)L_20, /*hidden argument*/NULL);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_21 = V_1;
		uint32_t L_22 = ___item2;
		NullCheck((SyncList_1_t6931FBA5633802C1CAE04093D0C6D9C88EE66627 *)__this);
		VirtActionInvoker2< NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *, uint32_t >::Invoke(18 /* System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::SerializeItem(UnityEngine.Networking.NetworkWriter,T) */, (SyncList_1_t6931FBA5633802C1CAE04093D0C6D9C88EE66627 *)__this, (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_21, (uint32_t)L_22);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_23 = V_1;
		NullCheck((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_23);
		NetworkWriter_FinishMessage_mDA9E66815E448F635B2394A35DDCA3EC040B0590((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_23, /*hidden argument*/NULL);
		NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * L_24 = V_0;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_24);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_25 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_24, /*hidden argument*/NULL);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_26 = V_1;
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_27 = (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)__this->get_m_Behaviour_1();
		NullCheck((NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)L_27);
		int32_t L_28 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 UnityEngine.Networking.NetworkBehaviour::GetNetworkChannel() */, (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)L_27);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkServer_tFD62C268FC6F01624A5989BFC1D0DD689A66B4A1_il2cpp_TypeInfo_var);
		NetworkServer_SendWriterToReady_m3DAE75021BB2FA60809865E05C38C82D0F7DA807((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_25, (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_26, (int32_t)L_28, /*hidden argument*/NULL);
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_29 = (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)__this->get_m_Behaviour_1();
		NullCheck((NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)L_29);
		bool L_30 = NetworkBehaviour_get_isServer_m3366F78A4D83ECE0798B276F2E9EF1FEEC8E2D79((NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)L_29, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_00d9;
		}
	}
	{
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_31 = (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)__this->get_m_Behaviour_1();
		NullCheck((NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)L_31);
		bool L_32 = NetworkBehaviour_get_isClient_mB7B109ADAF27B23B3D58E2369CBD11B1471C9148((NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)L_31, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_00d9;
		}
	}
	{
		SyncListChanged_t1804C1A09093327076629C515EC006A30F38C1B8 * L_33 = (SyncListChanged_t1804C1A09093327076629C515EC006A30F38C1B8 *)__this->get_m_Callback_3();
		if (!L_33)
		{
			goto IL_00d9;
		}
	}
	{
		SyncListChanged_t1804C1A09093327076629C515EC006A30F38C1B8 * L_34 = (SyncListChanged_t1804C1A09093327076629C515EC006A30F38C1B8 *)__this->get_m_Callback_3();
		int32_t L_35 = ___op0;
		int32_t L_36 = ___itemIndex1;
		NullCheck((SyncListChanged_t1804C1A09093327076629C515EC006A30F38C1B8 *)L_34);
		((  void (*) (SyncListChanged_t1804C1A09093327076629C515EC006A30F38C1B8 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((SyncListChanged_t1804C1A09093327076629C515EC006A30F38C1B8 *)L_34, (int32_t)L_35, (int32_t)L_36, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
	}

IL_00d9:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::SendMsg(UnityEngine.Networking.SyncList`1_Operation<T>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_SendMsg_mDBC60478C30389CA66B5100B1B0FB3B9C0F1C8EE_gshared (SyncList_1_t6931FBA5633802C1CAE04093D0C6D9C88EE66627 * __this, int32_t ___op0, int32_t ___itemIndex1, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		int32_t L_0 = ___op0;
		int32_t L_1 = ___itemIndex1;
		il2cpp_codegen_initobj((&V_0), sizeof(uint32_t));
		uint32_t L_2 = V_0;
		NullCheck((SyncList_1_t6931FBA5633802C1CAE04093D0C6D9C88EE66627 *)__this);
		((  void (*) (SyncList_1_t6931FBA5633802C1CAE04093D0C6D9C88EE66627 *, int32_t, int32_t, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_t6931FBA5633802C1CAE04093D0C6D9C88EE66627 *)__this, (int32_t)L_0, (int32_t)L_1, (uint32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::HandleMsg(UnityEngine.Networking.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_HandleMsg_mDC2963A3E898898F31F80943E9B1CD945D0D5FEA_gshared (SyncList_1_t6931FBA5633802C1CAE04093D0C6D9C88EE66627 * __this, NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * ___reader0, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * L_0 = ___reader0;
		NullCheck((NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 *)L_0);
		uint8_t L_1 = NetworkReader_ReadByte_m1FADCAE4F3E2D0E009653F6AC58FD1F728D8ABFF((NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 *)L_0, /*hidden argument*/NULL);
		V_0 = (uint8_t)L_1;
		NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * L_2 = ___reader0;
		NullCheck((NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 *)L_2);
		uint32_t L_3 = NetworkReader_ReadPackedUInt32_mB0E5BF11AEAD652C88548BD93556D780A4E3F46B((NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 *)L_2, /*hidden argument*/NULL);
		V_1 = (int32_t)L_3;
		NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * L_4 = ___reader0;
		NullCheck((SyncList_1_t6931FBA5633802C1CAE04093D0C6D9C88EE66627 *)__this);
		uint32_t L_5 = VirtFuncInvoker1< uint32_t, NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * >::Invoke(19 /* T UnityEngine.Networking.SyncList`1<System.UInt32>::DeserializeItem(UnityEngine.Networking.NetworkReader) */, (SyncList_1_t6931FBA5633802C1CAE04093D0C6D9C88EE66627 *)__this, (NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 *)L_4);
		V_2 = (uint32_t)L_5;
		uint8_t L_6 = V_0;
		V_3 = (int32_t)L_6;
		int32_t L_7 = V_3;
		switch (L_7)
		{
			case 0:
			{
				goto IL_003c;
			}
			case 1:
			{
				goto IL_004a;
			}
			case 2:
			{
				goto IL_0057;
			}
			case 3:
			{
				goto IL_0066;
			}
			case 4:
			{
				goto IL_0075;
			}
			case 5:
			{
				goto IL_0083;
			}
			case 6:
			{
				goto IL_0083;
			}
		}
	}
	{
		goto IL_0090;
	}

IL_003c:
	{
		List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 * L_8 = (List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)__this->get_m_Objects_0();
		uint32_t L_9 = V_2;
		NullCheck((List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)L_8);
		((  void (*) (List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)L_8, (uint32_t)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		goto IL_0090;
	}

IL_004a:
	{
		List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 * L_10 = (List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)__this->get_m_Objects_0();
		NullCheck((List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)L_10);
		((  void (*) (List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		goto IL_0090;
	}

IL_0057:
	{
		List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 * L_11 = (List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)__this->get_m_Objects_0();
		int32_t L_12 = V_1;
		uint32_t L_13 = V_2;
		NullCheck((List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)L_11);
		((  void (*) (List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *, int32_t, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)L_11, (int32_t)L_12, (uint32_t)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		goto IL_0090;
	}

IL_0066:
	{
		List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 * L_14 = (List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)__this->get_m_Objects_0();
		uint32_t L_15 = V_2;
		NullCheck((List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)L_14);
		((  bool (*) (List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)L_14, (uint32_t)L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		goto IL_0090;
	}

IL_0075:
	{
		List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 * L_16 = (List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)__this->get_m_Objects_0();
		int32_t L_17 = V_1;
		NullCheck((List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)L_16);
		((  void (*) (List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)L_16, (int32_t)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		goto IL_0090;
	}

IL_0083:
	{
		List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 * L_18 = (List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)__this->get_m_Objects_0();
		int32_t L_19 = V_1;
		uint32_t L_20 = V_2;
		NullCheck((List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)L_18);
		((  void (*) (List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *, int32_t, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)L_18, (int32_t)L_19, (uint32_t)L_20, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
	}

IL_0090:
	{
		SyncListChanged_t1804C1A09093327076629C515EC006A30F38C1B8 * L_21 = (SyncListChanged_t1804C1A09093327076629C515EC006A30F38C1B8 *)__this->get_m_Callback_3();
		if (!L_21)
		{
			goto IL_00a5;
		}
	}
	{
		SyncListChanged_t1804C1A09093327076629C515EC006A30F38C1B8 * L_22 = (SyncListChanged_t1804C1A09093327076629C515EC006A30F38C1B8 *)__this->get_m_Callback_3();
		uint8_t L_23 = V_0;
		int32_t L_24 = V_1;
		NullCheck((SyncListChanged_t1804C1A09093327076629C515EC006A30F38C1B8 *)L_22);
		((  void (*) (SyncListChanged_t1804C1A09093327076629C515EC006A30F38C1B8 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((SyncListChanged_t1804C1A09093327076629C515EC006A30F38C1B8 *)L_22, (int32_t)L_23, (int32_t)L_24, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
	}

IL_00a5:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::AddInternal(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_AddInternal_m84938C896AA1F3EED3568ECB90FED244DF2617B2_gshared (SyncList_1_t6931FBA5633802C1CAE04093D0C6D9C88EE66627 * __this, uint32_t ___item0, const RuntimeMethod* method)
{
	{
		List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 * L_0 = (List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)__this->get_m_Objects_0();
		uint32_t L_1 = ___item0;
		NullCheck((List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)L_0);
		((  void (*) (List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)L_0, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_Add_mB56EC847484CAA06E44BE8096AF901884B3C5068_gshared (SyncList_1_t6931FBA5633802C1CAE04093D0C6D9C88EE66627 * __this, uint32_t ___item0, const RuntimeMethod* method)
{
	{
		List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 * L_0 = (List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)__this->get_m_Objects_0();
		uint32_t L_1 = ___item0;
		NullCheck((List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)L_0);
		((  void (*) (List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)L_0, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 * L_2 = (List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)__this->get_m_Objects_0();
		NullCheck((List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)L_2);
		int32_t L_3 = ((  int32_t (*) (List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		uint32_t L_4 = ___item0;
		NullCheck((SyncList_1_t6931FBA5633802C1CAE04093D0C6D9C88EE66627 *)__this);
		((  void (*) (SyncList_1_t6931FBA5633802C1CAE04093D0C6D9C88EE66627 *, int32_t, int32_t, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_t6931FBA5633802C1CAE04093D0C6D9C88EE66627 *)__this, (int32_t)0, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1)), (uint32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_Clear_m00C3496EAD8E618F4C20CA6F618373D4564CEB58_gshared (SyncList_1_t6931FBA5633802C1CAE04093D0C6D9C88EE66627 * __this, const RuntimeMethod* method)
{
	{
		List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 * L_0 = (List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)__this->get_m_Objects_0();
		NullCheck((List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)L_0);
		((  void (*) (List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		NullCheck((SyncList_1_t6931FBA5633802C1CAE04093D0C6D9C88EE66627 *)__this);
		((  void (*) (SyncList_1_t6931FBA5633802C1CAE04093D0C6D9C88EE66627 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((SyncList_1_t6931FBA5633802C1CAE04093D0C6D9C88EE66627 *)__this, (int32_t)1, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return;
	}
}
// System.Boolean UnityEngine.Networking.SyncList`1<System.UInt32>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SyncList_1_Contains_m973C14DCBF7220C891BAA225791C8CBF8E649EF5_gshared (SyncList_1_t6931FBA5633802C1CAE04093D0C6D9C88EE66627 * __this, uint32_t ___item0, const RuntimeMethod* method)
{
	{
		List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 * L_0 = (List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)__this->get_m_Objects_0();
		uint32_t L_1 = ___item0;
		NullCheck((List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)L_0);
		bool L_2 = ((  bool (*) (List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12)->methodPointer)((List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)L_0, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12));
		return L_2;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::CopyTo(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_CopyTo_m6A331D5FCB38265A17AAC3708EF97BACA6D651CC_gshared (SyncList_1_t6931FBA5633802C1CAE04093D0C6D9C88EE66627 * __this, UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 * L_0 = (List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)__this->get_m_Objects_0();
		UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* L_1 = ___array0;
		int32_t L_2 = ___index1;
		NullCheck((List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)L_0);
		((  void (*) (List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *, UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13)->methodPointer)((List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)L_0, (UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB*)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13));
		return;
	}
}
// System.Int32 UnityEngine.Networking.SyncList`1<System.UInt32>::IndexOf(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SyncList_1_IndexOf_mB09B63A69F1FACD77A2327D18063455B6C10A0A4_gshared (SyncList_1_t6931FBA5633802C1CAE04093D0C6D9C88EE66627 * __this, uint32_t ___item0, const RuntimeMethod* method)
{
	{
		List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 * L_0 = (List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)__this->get_m_Objects_0();
		uint32_t L_1 = ___item0;
		NullCheck((List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)L_0);
		int32_t L_2 = ((  int32_t (*) (List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)->methodPointer)((List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)L_0, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
		return L_2;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::Insert(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_Insert_m5FB4CADA1882A9031113326CC1566FD5296E54B6_gshared (SyncList_1_t6931FBA5633802C1CAE04093D0C6D9C88EE66627 * __this, int32_t ___index0, uint32_t ___item1, const RuntimeMethod* method)
{
	{
		List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 * L_0 = (List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)__this->get_m_Objects_0();
		int32_t L_1 = ___index0;
		uint32_t L_2 = ___item1;
		NullCheck((List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)L_0);
		((  void (*) (List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *, int32_t, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)L_0, (int32_t)L_1, (uint32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		int32_t L_3 = ___index0;
		uint32_t L_4 = ___item1;
		NullCheck((SyncList_1_t6931FBA5633802C1CAE04093D0C6D9C88EE66627 *)__this);
		((  void (*) (SyncList_1_t6931FBA5633802C1CAE04093D0C6D9C88EE66627 *, int32_t, int32_t, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_t6931FBA5633802C1CAE04093D0C6D9C88EE66627 *)__this, (int32_t)2, (int32_t)L_3, (uint32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return;
	}
}
// System.Boolean UnityEngine.Networking.SyncList`1<System.UInt32>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SyncList_1_Remove_mFFA6B0C454E110C4B4CB1CC0FC6B4D1AD1B03DA4_gshared (SyncList_1_t6931FBA5633802C1CAE04093D0C6D9C88EE66627 * __this, uint32_t ___item0, const RuntimeMethod* method)
{
	bool G_B2_0 = false;
	bool G_B1_0 = false;
	{
		List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 * L_0 = (List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)__this->get_m_Objects_0();
		uint32_t L_1 = ___item0;
		NullCheck((List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)L_0);
		bool L_2 = ((  bool (*) (List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)L_0, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		bool L_3 = (bool)L_2;
		G_B1_0 = L_3;
		if (!L_3)
		{
			G_B2_0 = L_3;
			goto IL_0018;
		}
	}
	{
		uint32_t L_4 = ___item0;
		NullCheck((SyncList_1_t6931FBA5633802C1CAE04093D0C6D9C88EE66627 *)__this);
		((  void (*) (SyncList_1_t6931FBA5633802C1CAE04093D0C6D9C88EE66627 *, int32_t, int32_t, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_t6931FBA5633802C1CAE04093D0C6D9C88EE66627 *)__this, (int32_t)3, (int32_t)0, (uint32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		G_B2_0 = G_B1_0;
	}

IL_0018:
	{
		return G_B2_0;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_RemoveAt_m1590183C82DC9C53633616ACF2E16C31742EE266_gshared (SyncList_1_t6931FBA5633802C1CAE04093D0C6D9C88EE66627 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 * L_0 = (List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)__this->get_m_Objects_0();
		int32_t L_1 = ___index0;
		NullCheck((List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)L_0);
		((  void (*) (List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		int32_t L_2 = ___index0;
		NullCheck((SyncList_1_t6931FBA5633802C1CAE04093D0C6D9C88EE66627 *)__this);
		((  void (*) (SyncList_1_t6931FBA5633802C1CAE04093D0C6D9C88EE66627 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((SyncList_1_t6931FBA5633802C1CAE04093D0C6D9C88EE66627 *)__this, (int32_t)4, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::Dirty(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_Dirty_m79C10A51A6AC3B22676AFB0DBAC2FC9DA2B9BBB3_gshared (SyncList_1_t6931FBA5633802C1CAE04093D0C6D9C88EE66627 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 * L_1 = (List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)__this->get_m_Objects_0();
		int32_t L_2 = ___index0;
		NullCheck((List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)L_1);
		uint32_t L_3 = ((  uint32_t (*) (List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		NullCheck((SyncList_1_t6931FBA5633802C1CAE04093D0C6D9C88EE66627 *)__this);
		((  void (*) (SyncList_1_t6931FBA5633802C1CAE04093D0C6D9C88EE66627 *, int32_t, int32_t, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_t6931FBA5633802C1CAE04093D0C6D9C88EE66627 *)__this, (int32_t)6, (int32_t)L_0, (uint32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return;
	}
}
// T UnityEngine.Networking.SyncList`1<System.UInt32>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SyncList_1_get_Item_mC1369C43D41DC4C7863526B187E820DD7DA3709D_gshared (SyncList_1_t6931FBA5633802C1CAE04093D0C6D9C88EE66627 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 * L_0 = (List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)__this->get_m_Objects_0();
		int32_t L_1 = ___i0;
		NullCheck((List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		return L_2;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_set_Item_m66E79132BD62E259F9D1EBAD83B1264E62A50A98_gshared (SyncList_1_t6931FBA5633802C1CAE04093D0C6D9C88EE66627 * __this, int32_t ___i0, uint32_t ___value1, const RuntimeMethod* method)
{
	bool V_0 = false;
	uint32_t V_1 = 0;
	{
		V_0 = (bool)0;
		List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 * L_0 = (List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)__this->get_m_Objects_0();
		int32_t L_1 = ___i0;
		NullCheck((List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		goto IL_0022;
	}
	{
		goto IL_001e;
	}
	{
		return;
	}

IL_001e:
	{
		V_0 = (bool)1;
		goto IL_0046;
	}

IL_0022:
	{
		List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 * L_4 = (List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)__this->get_m_Objects_0();
		int32_t L_5 = ___i0;
		NullCheck((List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)L_4);
		uint32_t L_6 = ((  uint32_t (*) (List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)L_4, (int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		V_1 = (uint32_t)L_6;
		uint32_t L_7 = ___value1;
		uint32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 16), &L_8);
		bool L_10 = UInt32_Equals_m44E796DB35F5DB4E5D4C98EC6AB5053242A320C3((uint32_t*)(uint32_t*)(&V_1), (RuntimeObject *)L_9, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
	}

IL_0046:
	{
		List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 * L_11 = (List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)__this->get_m_Objects_0();
		int32_t L_12 = ___i0;
		uint32_t L_13 = ___value1;
		NullCheck((List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)L_11);
		((  void (*) (List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *, int32_t, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)L_11, (int32_t)L_12, (uint32_t)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		bool L_14 = V_0;
		if (!L_14)
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_15 = ___i0;
		uint32_t L_16 = ___value1;
		NullCheck((SyncList_1_t6931FBA5633802C1CAE04093D0C6D9C88EE66627 *)__this);
		((  void (*) (SyncList_1_t6931FBA5633802C1CAE04093D0C6D9C88EE66627 *, int32_t, int32_t, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_t6931FBA5633802C1CAE04093D0C6D9C88EE66627 *)__this, (int32_t)5, (int32_t)L_15, (uint32_t)L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
	}

IL_005f:
	{
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.Networking.SyncList`1<System.UInt32>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SyncList_1_GetEnumerator_mA9E98FD84418BF1278B877B82A31F7A047B067CB_gshared (SyncList_1_t6931FBA5633802C1CAE04093D0C6D9C88EE66627 * __this, const RuntimeMethod* method)
{
	{
		List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 * L_0 = (List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)__this->get_m_Objects_0();
		NullCheck((List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)L_0);
		Enumerator_t6C6061565EA2787387759C1CA5549E561A4FABBC  L_1 = ((  Enumerator_t6C6061565EA2787387759C1CA5549E561A4FABBC  (*) (List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17)->methodPointer)((List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17));
		Enumerator_t6C6061565EA2787387759C1CA5549E561A4FABBC  L_2 = L_1;
		RuntimeObject * L_3 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 18), &L_2);
		return (RuntimeObject*)L_3;
	}
}
// System.Collections.IEnumerator UnityEngine.Networking.SyncList`1<System.UInt32>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SyncList_1_System_Collections_IEnumerable_GetEnumerator_m88BC0D3F2907D6D39DE38D51D27B02F423A65BAC_gshared (SyncList_1_t6931FBA5633802C1CAE04093D0C6D9C88EE66627 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((SyncList_1_t6931FBA5633802C1CAE04093D0C6D9C88EE66627 *)__this);
		RuntimeObject* L_0 = ((  RuntimeObject* (*) (SyncList_1_t6931FBA5633802C1CAE04093D0C6D9C88EE66627 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 19)->methodPointer)((SyncList_1_t6931FBA5633802C1CAE04093D0C6D9C88EE66627 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 19));
		return L_0;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1__ctor_mF18B74E2EF8296E263BCEBAB8C8DE0EA78F8BAFC_gshared (SyncList_1_t6931FBA5633802C1CAE04093D0C6D9C88EE66627 * __this, const RuntimeMethod* method)
{
	{
		List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 * L_0 = (List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 20));
		((  void (*) (List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21));
		__this->set_m_Objects_0(L_0);
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
// System.Void UnityEngine.SubsystemDescriptor`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemDescriptor_1__ctor_m9C2DD2CC4167AE86F482D8D4723B0D57428219C7_gshared (SubsystemDescriptor_1_t31BEFA7AE91777434F9B5622527F596E81E5C715 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((SubsystemDescriptor_t889FE96B75F157379A8337541A119F08DD9C75D4 *)__this);
		SubsystemDescriptor__ctor_mC653FEFB51E47FCF78577ACC8C519955662C1998((SubsystemDescriptor_t889FE96B75F157379A8337541A119F08DD9C75D4 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// TSubsystem UnityEngine.SubsystemDescriptor`1<System.Object>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SubsystemDescriptor_1_Create_m29255F0D2FA37F2A73BDB9785BBE9BFB29B9C14F_gshared (SubsystemDescriptor_1_t31BEFA7AE91777434F9B5622527F596E81E5C715 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SubsystemDescriptor_1_Create_m29255F0D2FA37F2A73BDB9785BBE9BFB29B9C14F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		NullCheck((SubsystemDescriptor_t889FE96B75F157379A8337541A119F08DD9C75D4 *)__this);
		Type_t * L_0 = SubsystemDescriptor_get_subsystemImplementationType_m2AC6C2B2FF5FE0BEF555641CD90FA2EAD43F58A3((SubsystemDescriptor_t889FE96B75F157379A8337541A119F08DD9C75D4 *)__this, /*hidden argument*/NULL);
		RuntimeObject * L_1 = Activator_CreateInstance_mD06EE47879F606317C6DA91FB63E678CABAC6A16((Type_t *)L_0, /*hidden argument*/NULL);
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)((RuntimeObject *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0))), IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)));
		RuntimeObject * L_2 = V_0;
		NullCheck(L_2);
		((Subsystem_t6B987736D8E48098F860AC55D76905DE1F48CE8C *)L_2)->set_m_subsystemDescriptor_0(__this);
		RuntimeObject * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Internal_SubsystemInstances_t9F2EF23554998590D7E6B0872790103F0A87F1C7_il2cpp_TypeInfo_var);
		Internal_SubsystemInstances_Internal_AddStandaloneSubsystem_mEA0969B0DC9B8F144804D8580EFF227EE2A76E8E((Subsystem_t6B987736D8E48098F860AC55D76905DE1F48CE8C *)L_3, /*hidden argument*/NULL);
		RuntimeObject * L_4 = V_0;
		V_1 = (RuntimeObject *)L_4;
		goto IL_0035;
	}

IL_0035:
	{
		RuntimeObject * L_5 = V_1;
		return L_5;
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
// System.Void UnityEngine.Subsystem`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Subsystem_1__ctor_m22C0D8BD76E6EC8D055565EC669833751E4D98D5_gshared (Subsystem_1_tCB27FB16758FC2D855673CA14E86150F070453F6 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((Subsystem_t6B987736D8E48098F860AC55D76905DE1F48CE8C *)__this);
		Subsystem__ctor_m11F4B7579F657E277B883D882AF43401555B57D3((Subsystem_t6B987736D8E48098F860AC55D76905DE1F48CE8C *)__this, /*hidden argument*/NULL);
		return;
	}
}
// TSubsystemDescriptor UnityEngine.Subsystem`1<System.Object>::get_SubsystemDescriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Subsystem_1_get_SubsystemDescriptor_mEA17872FAED60A7DF62C83A09FB10995DC0CAF67_gshared (Subsystem_1_tCB27FB16758FC2D855673CA14E86150F070453F6 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject* L_0 = (RuntimeObject*)((Subsystem_t6B987736D8E48098F860AC55D76905DE1F48CE8C *)__this)->get_m_subsystemDescriptor_0();
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)));
		goto IL_0012;
	}

IL_0012:
	{
		RuntimeObject * L_1 = V_0;
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
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedSet_1_Add_m4B9B1BB9F9CE9F3EA16E39E17D429BDE8F12781C_gshared (IndexedSet_1_t240606B62D2B3D9912AED248655C0479DD5BDE0C * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IndexedSet_1_AddUnique_m1ECFE9938B5A00144BDA633A8D25A58316124761_gshared (IndexedSet_1_t240606B62D2B3D9912AED248655C0479DD5BDE0C * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IndexedSet_1_Remove_m658717377F61EDE4C423765165C7C5FF30773E7B_gshared (IndexedSet_1_t240606B62D2B3D9912AED248655C0479DD5BDE0C * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
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
		NullCheck((IndexedSet_1_t240606B62D2B3D9912AED248655C0479DD5BDE0C *)__this);
		((  void (*) (IndexedSet_1_t240606B62D2B3D9912AED248655C0479DD5BDE0C *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((IndexedSet_1_t240606B62D2B3D9912AED248655C0479DD5BDE0C *)__this, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		return (bool)1;
	}
}
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IndexedSet_1_GetEnumerator_mC16C0BE13B73DB47882CA51DB581747C19C7128B_gshared (IndexedSet_1_t240606B62D2B3D9912AED248655C0479DD5BDE0C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IndexedSet_1_GetEnumerator_mC16C0BE13B73DB47882CA51DB581747C19C7128B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_0 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, IndexedSet_1_GetEnumerator_mC16C0BE13B73DB47882CA51DB581747C19C7128B_RuntimeMethod_var);
	}
}
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m81FDC80B01BFAD2E467F3F89BE79542567FC452C_gshared (IndexedSet_1_t240606B62D2B3D9912AED248655C0479DD5BDE0C * __this, const RuntimeMethod* method)
{
	{
		NullCheck((IndexedSet_1_t240606B62D2B3D9912AED248655C0479DD5BDE0C *)__this);
		RuntimeObject* L_0 = ((  RuntimeObject* (*) (IndexedSet_1_t240606B62D2B3D9912AED248655C0479DD5BDE0C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((IndexedSet_1_t240606B62D2B3D9912AED248655C0479DD5BDE0C *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		return L_0;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedSet_1_Clear_m0CE62BD950A168D1D01E16EE1DCBCDDC5C416F73_gshared (IndexedSet_1_t240606B62D2B3D9912AED248655C0479DD5BDE0C * __this, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IndexedSet_1_Contains_mB738528F8692F630112FD2539CE74D7B43AF4962_gshared (IndexedSet_1_t240606B62D2B3D9912AED248655C0479DD5BDE0C * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedSet_1_CopyTo_mD9F0ECDF20B494C1A493E939FE91D89AB3E91B84_gshared (IndexedSet_1_t240606B62D2B3D9912AED248655C0479DD5BDE0C * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IndexedSet_1_get_Count_mEEA1184D1474B3B4B357EFC2C064908980921A1B_gshared (IndexedSet_1_t240606B62D2B3D9912AED248655C0479DD5BDE0C * __this, const RuntimeMethod* method)
{
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		int32_t L_1 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		return L_1;
	}
}
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IndexedSet_1_get_IsReadOnly_m29F668C4BDD834E41FEA84BBF4D1A1D6950D8BE7_gshared (IndexedSet_1_t240606B62D2B3D9912AED248655C0479DD5BDE0C * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IndexedSet_1_IndexOf_m89959972344E25AA8A0059BEE3F9F79A1D549C4E_gshared (IndexedSet_1_t240606B62D2B3D9912AED248655C0479DD5BDE0C * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedSet_1_Insert_mB43CB3AA6D461E94217E51DE6DD4ED3F5E1607CD_gshared (IndexedSet_1_t240606B62D2B3D9912AED248655C0479DD5BDE0C * __this, int32_t ___index0, RuntimeObject * ___item1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IndexedSet_1_Insert_mB43CB3AA6D461E94217E51DE6DD4ED3F5E1607CD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mD023A89A5C1F740F43F0A9CD6C49DC21230B3CEE(L_0, (String_t*)_stringLiteralDFADDFA065E9D92CFE8B8F06444DD5652DFC1D58, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, IndexedSet_1_Insert_mB43CB3AA6D461E94217E51DE6DD4ED3F5E1607CD_RuntimeMethod_var);
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedSet_1_RemoveAt_m5EA6CD03F4AEE2C8CDFA09F397C8510E23372D85_gshared (IndexedSet_1_t240606B62D2B3D9912AED248655C0479DD5BDE0C * __this, int32_t ___index0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * IndexedSet_1_get_Item_m8038D1362CB76F6CE791721319823B86D9DD2797_gshared (IndexedSet_1_t240606B62D2B3D9912AED248655C0479DD5BDE0C * __this, int32_t ___index0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedSet_1_set_Item_m382EAB9C2EBB858128026BE1AF5BD60A06A836A6_gshared (IndexedSet_1_t240606B62D2B3D9912AED248655C0479DD5BDE0C * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method)
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
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedSet_1_RemoveAll_mE8AD13F9BC00551D303C9301BCA161E2E291D395_gshared (IndexedSet_1_t240606B62D2B3D9912AED248655C0479DD5BDE0C * __this, Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * ___match0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		V_0 = (int32_t)0;
		goto IL_0028;
	}

IL_0004:
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_1 = V_0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		V_1 = (RuntimeObject *)L_2;
		Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * L_3 = ___match0;
		RuntimeObject * L_4 = V_1;
		NullCheck((Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 *)L_3);
		bool L_5 = ((  bool (*) (Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 *)L_3, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		RuntimeObject * L_6 = V_1;
		NullCheck((IndexedSet_1_t240606B62D2B3D9912AED248655C0479DD5BDE0C *)__this);
		((  bool (*) (IndexedSet_1_t240606B62D2B3D9912AED248655C0479DD5BDE0C *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16)->methodPointer)((IndexedSet_1_t240606B62D2B3D9912AED248655C0479DD5BDE0C *)__this, (RuntimeObject *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16));
		goto IL_0028;
	}

IL_0024:
	{
		int32_t L_7 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0028:
	{
		int32_t L_8 = V_0;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_9 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_9);
		int32_t L_10 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedSet_1_Sort_mA748E0136CD04139BF95AF1EFE828776AA2FA9D4_gshared (IndexedSet_1_t240606B62D2B3D9912AED248655C0479DD5BDE0C * __this, Comparison_1_tD9DBDF7B2E4774B4D35E113A76D75828A24641F4 * ___sortLayoutFunction0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		Comparison_1_tD9DBDF7B2E4774B4D35E113A76D75828A24641F4 * L_1 = ___sortLayoutFunction0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, Comparison_1_tD9DBDF7B2E4774B4D35E113A76D75828A24641F4 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (Comparison_1_tD9DBDF7B2E4774B4D35E113A76D75828A24641F4 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedSet_1__ctor_m78A15E3E0B20E8E78B6D3502F8CA7EE753AD0818_gshared (IndexedSet_1_t240606B62D2B3D9912AED248655C0479DD5BDE0C * __this, const RuntimeMethod* method)
{
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 18));
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 19)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 19));
		__this->set_m_List_0(L_0);
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_1 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 20));
		((  void (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21)->methodPointer)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2__ctor_mF6B911DFD8723188732C99D4142571A0B6E851E3_gshared (U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2_System_IDisposable_Dispose_mA7325546FC25696F84C8ACD61A9D18859C95CEA6_gshared (U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2<UnityEngine.UI.CoroutineTween.ColorTween>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartU3Ed__2_MoveNext_m1F9733709DEC4B352BBFD9939F2B27D0A01137AF_gshared (U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ed__2_MoveNext_m1F9733709DEC4B352BBFD9939F2B27D0A01137AF_MetadataUsageId);
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
		bool L_4 = ColorTween_ValidTarget_mCFF8428CFF8D45A85E4EE612263E751ED0B5987C((ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)L_3, /*hidden argument*/NULL);
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
		bool L_7 = ColorTween_get_ignoreTimeScale_m6A06826E19314EFE9783E505C75CFC76E42E8F05_inline((ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)L_6, /*hidden argument*/NULL);
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
		float L_12 = ColorTween_get_duration_mC4A1E3C2EA46A5C657A2B9DA240C796F770ECC5F_inline((ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_13 = Mathf_Clamp01_m1E5F736941A7E6DC4DBCA88A1E38FE9FBFE0C42B((float)((float)((float)L_10/(float)L_12)), /*hidden argument*/NULL);
		V_1 = (float)L_13;
		ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * L_14 = (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)__this->get_address_of_tweenInfo_2();
		float L_15 = V_1;
		ColorTween_TweenValue_m20FCBA50CE9328956973861A9CB0A1FD97265A58((ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)L_14, (float)L_15, /*hidden argument*/NULL);
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
		float L_18 = ColorTween_get_duration_mC4A1E3C2EA46A5C657A2B9DA240C796F770ECC5F_inline((ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)L_17, /*hidden argument*/NULL);
		if ((((float)L_16) < ((float)L_18)))
		{
			goto IL_003c;
		}
	}
	{
		ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * L_19 = (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)__this->get_address_of_tweenInfo_2();
		ColorTween_TweenValue_m20FCBA50CE9328956973861A9CB0A1FD97265A58((ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)L_19, (float)(1.0f), /*hidden argument*/NULL);
		return (bool)0;
	}
}
// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2<UnityEngine.UI.CoroutineTween.ColorTween>::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m761E2EC945A4EEC1CB3738E59CC7C953317FE4DB_gshared (U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2<UnityEngine.UI.CoroutineTween.ColorTween>::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2_System_Collections_IEnumerator_Reset_m605D45F96449D5CF6DDFACF60880651C85F29195_gshared (U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ed__2_System_Collections_IEnumerator_Reset_m605D45F96449D5CF6DDFACF60880651C85F29195_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CStartU3Ed__2_System_Collections_IEnumerator_Reset_m605D45F96449D5CF6DDFACF60880651C85F29195_RuntimeMethod_var);
	}
}
// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2<UnityEngine.UI.CoroutineTween.ColorTween>::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ed__2_System_Collections_IEnumerator_get_Current_m436A52941A440E22575D1CDBA63A3C6BE1B9903E_gshared (U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB * __this, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2__ctor_m7F91B2018BD9A84A855E44C0F88566C748C6052C_gshared (U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2_System_IDisposable_Dispose_mF42D4A1DF8911EFB9E84343443F932F1FDA9F7D5_gshared (U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2<UnityEngine.UI.CoroutineTween.FloatTween>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartU3Ed__2_MoveNext_m072CCA02187FAAE6E23766279083847801807198_gshared (U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ed__2_MoveNext_m072CCA02187FAAE6E23766279083847801807198_MetadataUsageId);
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
		bool L_4 = FloatTween_ValidTarget_m917EB0D30E72AC75D90D1D8F11B1D7EBBD00ECAE((FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)L_3, /*hidden argument*/NULL);
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
		bool L_7 = FloatTween_get_ignoreTimeScale_mA7B69D72E1D52EF1890C89D5690D345B852C7239_inline((FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)L_6, /*hidden argument*/NULL);
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
		float L_12 = FloatTween_get_duration_mBECFBEC57BDC30B54D0638873BA3313A8F7232F5_inline((FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_13 = Mathf_Clamp01_m1E5F736941A7E6DC4DBCA88A1E38FE9FBFE0C42B((float)((float)((float)L_10/(float)L_12)), /*hidden argument*/NULL);
		V_1 = (float)L_13;
		FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * L_14 = (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)__this->get_address_of_tweenInfo_2();
		float L_15 = V_1;
		FloatTween_TweenValue_m4E4418FB7FBDC7CBF96D95518DFACF25BCBE8EB3((FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)L_14, (float)L_15, /*hidden argument*/NULL);
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
		float L_18 = FloatTween_get_duration_mBECFBEC57BDC30B54D0638873BA3313A8F7232F5_inline((FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)L_17, /*hidden argument*/NULL);
		if ((((float)L_16) < ((float)L_18)))
		{
			goto IL_003c;
		}
	}
	{
		FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * L_19 = (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)__this->get_address_of_tweenInfo_2();
		FloatTween_TweenValue_m4E4418FB7FBDC7CBF96D95518DFACF25BCBE8EB3((FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)L_19, (float)(1.0f), /*hidden argument*/NULL);
		return (bool)0;
	}
}
// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2<UnityEngine.UI.CoroutineTween.FloatTween>::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m1D242745AC7E056D542481D3A98C6FDCF5EA5ACB_gshared (U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2<UnityEngine.UI.CoroutineTween.FloatTween>::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2_System_Collections_IEnumerator_Reset_m4AE666FAF40BAF18CA8D1BCAFDB0D428DEA5DFF8_gshared (U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ed__2_System_Collections_IEnumerator_Reset_m4AE666FAF40BAF18CA8D1BCAFDB0D428DEA5DFF8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CStartU3Ed__2_System_Collections_IEnumerator_Reset_m4AE666FAF40BAF18CA8D1BCAFDB0D428DEA5DFF8_RuntimeMethod_var);
	}
}
// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2<UnityEngine.UI.CoroutineTween.FloatTween>::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ed__2_System_Collections_IEnumerator_get_Current_mB6E49CF1A10907385C7B0EDB922F3C7D1012CDC9_gshared (U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E * __this, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenRunner_1_Start_m8B003840E8B2AD193FFC9B659EF4CB1460F2CEA1_gshared (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228  ___tweenInfo0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1_Init_m8438EFCEA89C17CF6245208A3735D2B95BFB9647_gshared (TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * __this, MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * ___coroutineContainer0, const RuntimeMethod* method)
{
	{
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_0 = ___coroutineContainer0;
		__this->set_m_CoroutineContainer_0(L_0);
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>::StartTween(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1_StartTween_m96867F74662CBAED655A9C7B3AF0036E5282F945_gshared (TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * __this, ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228  ___info0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TweenRunner_1_StartTween_m96867F74662CBAED655A9C7B3AF0036E5282F945_MetadataUsageId);
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
		ColorTween_TweenValue_m20FCBA50CE9328956973861A9CB0A1FD97265A58((ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)(&___info0), (float)(1.0f), /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1_StopTween_m3E7518DEC0FF807C68619D211A352C7BF63D9572_gshared (TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * __this, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1__ctor_m354D2C09591A71CED72679E2056283296B7AC02B_gshared (TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * __this, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenRunner_1_Start_m0E35A54AAC11F13006A869FF0F3BA6FDDB2DF325_gshared (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A  ___tweenInfo0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1_Init_m17E5E1BE0EB8226EA16AA2C2AB572E1B225BECD2_gshared (TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF * __this, MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * ___coroutineContainer0, const RuntimeMethod* method)
{
	{
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_0 = ___coroutineContainer0;
		__this->set_m_CoroutineContainer_0(L_0);
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>::StartTween(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1_StartTween_m1C12D6475DFCA47D74844FD2395C1057AF1CA41D_gshared (TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF * __this, FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A  ___info0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TweenRunner_1_StartTween_m1C12D6475DFCA47D74844FD2395C1057AF1CA41D_MetadataUsageId);
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
		FloatTween_TweenValue_m4E4418FB7FBDC7CBF96D95518DFACF25BCBE8EB3((FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)(&___info0), (float)(1.0f), /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1_StopTween_mE648D0014C6DC19A996F304E657BA46278ABC420_gshared (TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF * __this, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1__ctor_m3BA236F3CC80F207C28B3A6B2D5C116C483AE872_gshared (TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF * __this, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Clear_mDB9FD3593823FE30F7CFAB286C1D3881990CECEE_gshared (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___l0, const RuntimeMethod* method)
{
	{
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_0 = ___l0;
		NullCheck((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_0);
		((  void (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<System.Int32>::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ListPool_1_Get_mE7663F36254E817D56A40A8CDE5BF801AAF92542_gshared (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_tE40D9BEC5B067540DB2F9331C8AD1F3B071F974B * L_0 = ((ListPool_1_tCDBE9EE6C0FC882FB66BA0B6D36CA8E17652B15A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		NullCheck((ObjectPool_1_tE40D9BEC5B067540DB2F9331C8AD1F3B071F974B *)L_0);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_1 = ((  List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * (*) (ObjectPool_1_tE40D9BEC5B067540DB2F9331C8AD1F3B071F974B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((ObjectPool_1_tE40D9BEC5B067540DB2F9331C8AD1F3B071F974B *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return L_1;
	}
}
// System.Void UnityEngine.UI.ListPool`1<System.Int32>::Release(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Release_m11EA81E78327EFE2672086B352A5A68F653ADD1F_gshared (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___toRelease0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_tE40D9BEC5B067540DB2F9331C8AD1F3B071F974B * L_0 = ((ListPool_1_tCDBE9EE6C0FC882FB66BA0B6D36CA8E17652B15A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_1 = ___toRelease0;
		NullCheck((ObjectPool_1_tE40D9BEC5B067540DB2F9331C8AD1F3B071F974B *)L_0);
		((  void (*) (ObjectPool_1_tE40D9BEC5B067540DB2F9331C8AD1F3B071F974B *, List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((ObjectPool_1_tE40D9BEC5B067540DB2F9331C8AD1F3B071F974B *)L_0, (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<System.Int32>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1__cctor_mF2A2E1354E84E58BE5B600862D62C4ACE2E5994F_gshared (const RuntimeMethod* method)
{
	{
		UnityAction_1_tCFF1D446AB859368D0E404A2D6738C98E10FCC6A * L_0 = (UnityAction_1_tCFF1D446AB859368D0E404A2D6738C98E10FCC6A *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((  void (*) (UnityAction_1_tCFF1D446AB859368D0E404A2D6738C98E10FCC6A *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(L_0, (RuntimeObject *)NULL, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		ObjectPool_1_tE40D9BEC5B067540DB2F9331C8AD1F3B071F974B * L_1 = (ObjectPool_1_tE40D9BEC5B067540DB2F9331C8AD1F3B071F974B *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (ObjectPool_1_tE40D9BEC5B067540DB2F9331C8AD1F3B071F974B *, UnityAction_1_tCFF1D446AB859368D0E404A2D6738C98E10FCC6A *, UnityAction_1_tCFF1D446AB859368D0E404A2D6738C98E10FCC6A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(L_1, (UnityAction_1_tCFF1D446AB859368D0E404A2D6738C98E10FCC6A *)NULL, (UnityAction_1_tCFF1D446AB859368D0E404A2D6738C98E10FCC6A *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		((ListPool_1_tCDBE9EE6C0FC882FB66BA0B6D36CA8E17652B15A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_s_ListPool_0(L_1);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Clear_m3765E01E233E7ADD214A7665B2988D16ABDDA472_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___l0, const RuntimeMethod* method)
{
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = ___l0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<System.Object>::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ListPool_1_Get_mD763F64B9987BBE7DC6092E7C6014A51106D1362_gshared (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t3A70BDB59315D0B41F26C2019575B584BE9816CE * L_0 = ((ListPool_1_t66B0CA6885E680896C9747F9C0E28458D59743BE_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		NullCheck((ObjectPool_1_t3A70BDB59315D0B41F26C2019575B584BE9816CE *)L_0);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_1 = ((  List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * (*) (ObjectPool_1_t3A70BDB59315D0B41F26C2019575B584BE9816CE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((ObjectPool_1_t3A70BDB59315D0B41F26C2019575B584BE9816CE *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return L_1;
	}
}
// System.Void UnityEngine.UI.ListPool`1<System.Object>::Release(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Release_m377C6B9E4F57B5F932E838F423B6204E45FF45A5_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___toRelease0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t3A70BDB59315D0B41F26C2019575B584BE9816CE * L_0 = ((ListPool_1_t66B0CA6885E680896C9747F9C0E28458D59743BE_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_1 = ___toRelease0;
		NullCheck((ObjectPool_1_t3A70BDB59315D0B41F26C2019575B584BE9816CE *)L_0);
		((  void (*) (ObjectPool_1_t3A70BDB59315D0B41F26C2019575B584BE9816CE *, List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((ObjectPool_1_t3A70BDB59315D0B41F26C2019575B584BE9816CE *)L_0, (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<System.Object>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1__cctor_m3496A882F0AD7E4968CE0CF81F33EB1FF21158F5_gshared (const RuntimeMethod* method)
{
	{
		UnityAction_1_t37A77CD76DBB81733157A401AB7F0E8B10692A0C * L_0 = (UnityAction_1_t37A77CD76DBB81733157A401AB7F0E8B10692A0C *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((  void (*) (UnityAction_1_t37A77CD76DBB81733157A401AB7F0E8B10692A0C *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(L_0, (RuntimeObject *)NULL, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		ObjectPool_1_t3A70BDB59315D0B41F26C2019575B584BE9816CE * L_1 = (ObjectPool_1_t3A70BDB59315D0B41F26C2019575B584BE9816CE *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (ObjectPool_1_t3A70BDB59315D0B41F26C2019575B584BE9816CE *, UnityAction_1_t37A77CD76DBB81733157A401AB7F0E8B10692A0C *, UnityAction_1_t37A77CD76DBB81733157A401AB7F0E8B10692A0C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(L_1, (UnityAction_1_t37A77CD76DBB81733157A401AB7F0E8B10692A0C *)NULL, (UnityAction_1_t37A77CD76DBB81733157A401AB7F0E8B10692A0C *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Clear_m8CA2445008A4E9AE47B9A12476C9137F7280548D_gshared (List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 * ___l0, const RuntimeMethod* method)
{
	{
		List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 * L_0 = ___l0;
		NullCheck((List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 *)L_0);
		((  void (*) (List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<UnityEngine.Color32>::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 * ListPool_1_Get_mC0EBE105137C878FC9B9EF547C6A49850D26FAED_gshared (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_tA42695C1C422850E35146976898DA19272914AC8 * L_0 = ((ListPool_1_tFB4F0894A1EF21042E633BD1514A9258601CB1F1_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		NullCheck((ObjectPool_1_tA42695C1C422850E35146976898DA19272914AC8 *)L_0);
		List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 * L_1 = ((  List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 * (*) (ObjectPool_1_tA42695C1C422850E35146976898DA19272914AC8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((ObjectPool_1_tA42695C1C422850E35146976898DA19272914AC8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return L_1;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Color32>::Release(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Release_m53CA5C7991B0F21FE9ADE77FF03A67882C7400E2_gshared (List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 * ___toRelease0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_tA42695C1C422850E35146976898DA19272914AC8 * L_0 = ((ListPool_1_tFB4F0894A1EF21042E633BD1514A9258601CB1F1_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 * L_1 = ___toRelease0;
		NullCheck((ObjectPool_1_tA42695C1C422850E35146976898DA19272914AC8 *)L_0);
		((  void (*) (ObjectPool_1_tA42695C1C422850E35146976898DA19272914AC8 *, List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((ObjectPool_1_tA42695C1C422850E35146976898DA19272914AC8 *)L_0, (List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Color32>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1__cctor_m8963863F58DA18195F28B03D3EB55AF3FCAD005D_gshared (const RuntimeMethod* method)
{
	{
		UnityAction_1_tBFC448984D861333BFB83317707C2F208D61E3D1 * L_0 = (UnityAction_1_tBFC448984D861333BFB83317707C2F208D61E3D1 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((  void (*) (UnityAction_1_tBFC448984D861333BFB83317707C2F208D61E3D1 *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(L_0, (RuntimeObject *)NULL, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		ObjectPool_1_tA42695C1C422850E35146976898DA19272914AC8 * L_1 = (ObjectPool_1_tA42695C1C422850E35146976898DA19272914AC8 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (ObjectPool_1_tA42695C1C422850E35146976898DA19272914AC8 *, UnityAction_1_tBFC448984D861333BFB83317707C2F208D61E3D1 *, UnityAction_1_tBFC448984D861333BFB83317707C2F208D61E3D1 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(L_1, (UnityAction_1_tBFC448984D861333BFB83317707C2F208D61E3D1 *)NULL, (UnityAction_1_tBFC448984D861333BFB83317707C2F208D61E3D1 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Clear_m111FC0DF82D2C8A9F0A93D535F022BAD0B61E809_gshared (List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 * ___l0, const RuntimeMethod* method)
{
	{
		List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 * L_0 = ___l0;
		NullCheck((List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 *)L_0);
		((  void (*) (List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<UnityEngine.UIVertex>::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 * ListPool_1_Get_mAC3BD476854BD242EF7B65950D86C4A12761F461_gshared (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t8C6F590942FFC5DFF0DF79569711056BE7883062 * L_0 = ((ListPool_1_tC140413ABBDAF87428D43AA5EFDD842394341CF6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		NullCheck((ObjectPool_1_t8C6F590942FFC5DFF0DF79569711056BE7883062 *)L_0);
		List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 * L_1 = ((  List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 * (*) (ObjectPool_1_t8C6F590942FFC5DFF0DF79569711056BE7883062 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((ObjectPool_1_t8C6F590942FFC5DFF0DF79569711056BE7883062 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return L_1;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.UIVertex>::Release(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Release_m8B379A7621039BF3ABE82280D6ABD4606F3459F9_gshared (List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 * ___toRelease0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t8C6F590942FFC5DFF0DF79569711056BE7883062 * L_0 = ((ListPool_1_tC140413ABBDAF87428D43AA5EFDD842394341CF6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 * L_1 = ___toRelease0;
		NullCheck((ObjectPool_1_t8C6F590942FFC5DFF0DF79569711056BE7883062 *)L_0);
		((  void (*) (ObjectPool_1_t8C6F590942FFC5DFF0DF79569711056BE7883062 *, List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((ObjectPool_1_t8C6F590942FFC5DFF0DF79569711056BE7883062 *)L_0, (List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.UIVertex>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1__cctor_m09F39A9E0242FE6E549173DE14DDC8C41AB542B2_gshared (const RuntimeMethod* method)
{
	{
		UnityAction_1_t6CAED93F6613F01731695AAC7F8201ABB209CC0A * L_0 = (UnityAction_1_t6CAED93F6613F01731695AAC7F8201ABB209CC0A *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((  void (*) (UnityAction_1_t6CAED93F6613F01731695AAC7F8201ABB209CC0A *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(L_0, (RuntimeObject *)NULL, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		ObjectPool_1_t8C6F590942FFC5DFF0DF79569711056BE7883062 * L_1 = (ObjectPool_1_t8C6F590942FFC5DFF0DF79569711056BE7883062 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (ObjectPool_1_t8C6F590942FFC5DFF0DF79569711056BE7883062 *, UnityAction_1_t6CAED93F6613F01731695AAC7F8201ABB209CC0A *, UnityAction_1_t6CAED93F6613F01731695AAC7F8201ABB209CC0A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(L_1, (UnityAction_1_t6CAED93F6613F01731695AAC7F8201ABB209CC0A *)NULL, (UnityAction_1_t6CAED93F6613F01731695AAC7F8201ABB209CC0A *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Clear_m48D5FAC919131FCD61A7B62577B6C4C5043FB6C7_gshared (List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * ___l0, const RuntimeMethod* method)
{
	{
		List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * L_0 = ___l0;
		NullCheck((List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB *)L_0);
		((  void (*) (List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<UnityEngine.Vector2>::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * ListPool_1_Get_m4095D588F45966ACF43C1C5D1390D7E3F6E388C7_gshared (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t592C52579DFFCDED9A816AE87CA33C2A992F7E26 * L_0 = ((ListPool_1_tEC2CD2FE52DC3A8B1F3E2BF498E60420B6ABDDF8_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		NullCheck((ObjectPool_1_t592C52579DFFCDED9A816AE87CA33C2A992F7E26 *)L_0);
		List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * L_1 = ((  List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * (*) (ObjectPool_1_t592C52579DFFCDED9A816AE87CA33C2A992F7E26 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((ObjectPool_1_t592C52579DFFCDED9A816AE87CA33C2A992F7E26 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return L_1;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector2>::Release(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Release_m696D12DB4E7D73886B746B87B7491B200ED0F8F0_gshared (List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * ___toRelease0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t592C52579DFFCDED9A816AE87CA33C2A992F7E26 * L_0 = ((ListPool_1_tEC2CD2FE52DC3A8B1F3E2BF498E60420B6ABDDF8_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * L_1 = ___toRelease0;
		NullCheck((ObjectPool_1_t592C52579DFFCDED9A816AE87CA33C2A992F7E26 *)L_0);
		((  void (*) (ObjectPool_1_t592C52579DFFCDED9A816AE87CA33C2A992F7E26 *, List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((ObjectPool_1_t592C52579DFFCDED9A816AE87CA33C2A992F7E26 *)L_0, (List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector2>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1__cctor_m5A0004898A4F7854EA5B0E9394EE822C3B2275DF_gshared (const RuntimeMethod* method)
{
	{
		UnityAction_1_tAF537B97BFBDAFB0D27DBBE2DC414D654B6C41EC * L_0 = (UnityAction_1_tAF537B97BFBDAFB0D27DBBE2DC414D654B6C41EC *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((  void (*) (UnityAction_1_tAF537B97BFBDAFB0D27DBBE2DC414D654B6C41EC *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(L_0, (RuntimeObject *)NULL, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		ObjectPool_1_t592C52579DFFCDED9A816AE87CA33C2A992F7E26 * L_1 = (ObjectPool_1_t592C52579DFFCDED9A816AE87CA33C2A992F7E26 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (ObjectPool_1_t592C52579DFFCDED9A816AE87CA33C2A992F7E26 *, UnityAction_1_tAF537B97BFBDAFB0D27DBBE2DC414D654B6C41EC *, UnityAction_1_tAF537B97BFBDAFB0D27DBBE2DC414D654B6C41EC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(L_1, (UnityAction_1_tAF537B97BFBDAFB0D27DBBE2DC414D654B6C41EC *)NULL, (UnityAction_1_tAF537B97BFBDAFB0D27DBBE2DC414D654B6C41EC *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Clear_m362B6B736C6D546692C23E8A44C47F56C3B236F9_gshared (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * ___l0, const RuntimeMethod* method)
{
	{
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_0 = ___l0;
		NullCheck((List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *)L_0);
		((  void (*) (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<UnityEngine.Vector3>::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * ListPool_1_Get_m8A0AAD805F41A1FD12A20327638FB81947677A4A_gshared (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t559B14380295E744507B0BF258F6EB60B6D3B902 * L_0 = ((ListPool_1_t5E8D36B177BEE61E319DF7927E463DFBAC58E09D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		NullCheck((ObjectPool_1_t559B14380295E744507B0BF258F6EB60B6D3B902 *)L_0);
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_1 = ((  List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * (*) (ObjectPool_1_t559B14380295E744507B0BF258F6EB60B6D3B902 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((ObjectPool_1_t559B14380295E744507B0BF258F6EB60B6D3B902 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return L_1;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector3>::Release(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Release_mE909A7A9F124C64BF0014554CF1679F93F7F9544_gshared (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * ___toRelease0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t559B14380295E744507B0BF258F6EB60B6D3B902 * L_0 = ((ListPool_1_t5E8D36B177BEE61E319DF7927E463DFBAC58E09D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_1 = ___toRelease0;
		NullCheck((ObjectPool_1_t559B14380295E744507B0BF258F6EB60B6D3B902 *)L_0);
		((  void (*) (ObjectPool_1_t559B14380295E744507B0BF258F6EB60B6D3B902 *, List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((ObjectPool_1_t559B14380295E744507B0BF258F6EB60B6D3B902 *)L_0, (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector3>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1__cctor_m27499BE3966E501959E8957FE81F00639E383216_gshared (const RuntimeMethod* method)
{
	{
		UnityAction_1_tFFEAFE33FC07D89E336EC0E8863403BAC10853CA * L_0 = (UnityAction_1_tFFEAFE33FC07D89E336EC0E8863403BAC10853CA *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((  void (*) (UnityAction_1_tFFEAFE33FC07D89E336EC0E8863403BAC10853CA *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(L_0, (RuntimeObject *)NULL, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		ObjectPool_1_t559B14380295E744507B0BF258F6EB60B6D3B902 * L_1 = (ObjectPool_1_t559B14380295E744507B0BF258F6EB60B6D3B902 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (ObjectPool_1_t559B14380295E744507B0BF258F6EB60B6D3B902 *, UnityAction_1_tFFEAFE33FC07D89E336EC0E8863403BAC10853CA *, UnityAction_1_tFFEAFE33FC07D89E336EC0E8863403BAC10853CA *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(L_1, (UnityAction_1_tFFEAFE33FC07D89E336EC0E8863403BAC10853CA *)NULL, (UnityAction_1_tFFEAFE33FC07D89E336EC0E8863403BAC10853CA *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Clear_m67D074308DE6FFFBA1B99BDE569FFDACE5CE4243_gshared (List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 * ___l0, const RuntimeMethod* method)
{
	{
		List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 * L_0 = ___l0;
		NullCheck((List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 *)L_0);
		((  void (*) (List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<UnityEngine.Vector4>::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 * ListPool_1_Get_mF32AE75B27464EE9535E8C1AE7D14B948B2A7281_gshared (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_tB6CF67DEBE320D035ADE0A7E0AB9B2C8F96E7338 * L_0 = ((ListPool_1_tD46C00F7C693AF94203B6B004906149A661AA540_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		NullCheck((ObjectPool_1_tB6CF67DEBE320D035ADE0A7E0AB9B2C8F96E7338 *)L_0);
		List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 * L_1 = ((  List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 * (*) (ObjectPool_1_tB6CF67DEBE320D035ADE0A7E0AB9B2C8F96E7338 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((ObjectPool_1_tB6CF67DEBE320D035ADE0A7E0AB9B2C8F96E7338 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return L_1;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector4>::Release(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Release_mF52D201E89E59068809EE4F76B2B69086F6EBC6E_gshared (List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 * ___toRelease0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_tB6CF67DEBE320D035ADE0A7E0AB9B2C8F96E7338 * L_0 = ((ListPool_1_tD46C00F7C693AF94203B6B004906149A661AA540_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 * L_1 = ___toRelease0;
		NullCheck((ObjectPool_1_tB6CF67DEBE320D035ADE0A7E0AB9B2C8F96E7338 *)L_0);
		((  void (*) (ObjectPool_1_tB6CF67DEBE320D035ADE0A7E0AB9B2C8F96E7338 *, List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((ObjectPool_1_tB6CF67DEBE320D035ADE0A7E0AB9B2C8F96E7338 *)L_0, (List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector4>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1__cctor_m322FE00775BB7CD39B3E2B828D85FB50BB75CFE5_gshared (const RuntimeMethod* method)
{
	{
		UnityAction_1_t4CA653A7B54DA3D30EC370F89843FDF53F602008 * L_0 = (UnityAction_1_t4CA653A7B54DA3D30EC370F89843FDF53F602008 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((  void (*) (UnityAction_1_t4CA653A7B54DA3D30EC370F89843FDF53F602008 *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(L_0, (RuntimeObject *)NULL, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		ObjectPool_1_tB6CF67DEBE320D035ADE0A7E0AB9B2C8F96E7338 * L_1 = (ObjectPool_1_tB6CF67DEBE320D035ADE0A7E0AB9B2C8F96E7338 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (ObjectPool_1_tB6CF67DEBE320D035ADE0A7E0AB9B2C8F96E7338 *, UnityAction_1_t4CA653A7B54DA3D30EC370F89843FDF53F602008 *, UnityAction_1_t4CA653A7B54DA3D30EC370F89843FDF53F602008 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(L_1, (UnityAction_1_t4CA653A7B54DA3D30EC370F89843FDF53F602008 *)NULL, (UnityAction_1_t4CA653A7B54DA3D30EC370F89843FDF53F602008 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ObjectPool_1_get_countAll_m63DF483CE87C8C8576E1B7AC0EF5F6A1F17725C6_gshared (ObjectPool_1_t3EF1AC01FF09BFF602D9F00F7E9C508ED5883E9B * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_U3CcountAllU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::set_countAll(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_1_set_countAll_m12C0E8F9D75242332DF8B262A1002E5C9D9BF750_gshared (ObjectPool_1_t3EF1AC01FF09BFF602D9F00F7E9C508ED5883E9B * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CcountAllU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ObjectPool_1_get_countActive_m1F40AA1D7F704C4AEEA93B35406C516FBF8D6D6B_gshared (ObjectPool_1_t3EF1AC01FF09BFF602D9F00F7E9C508ED5883E9B * __this, const RuntimeMethod* method)
{
	{
		NullCheck((ObjectPool_1_t3EF1AC01FF09BFF602D9F00F7E9C508ED5883E9B *)__this);
		int32_t L_0 = ((  int32_t (*) (ObjectPool_1_t3EF1AC01FF09BFF602D9F00F7E9C508ED5883E9B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ObjectPool_1_t3EF1AC01FF09BFF602D9F00F7E9C508ED5883E9B *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((ObjectPool_1_t3EF1AC01FF09BFF602D9F00F7E9C508ED5883E9B *)__this);
		int32_t L_1 = ((  int32_t (*) (ObjectPool_1_t3EF1AC01FF09BFF602D9F00F7E9C508ED5883E9B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ObjectPool_1_t3EF1AC01FF09BFF602D9F00F7E9C508ED5883E9B *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
	}
}
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countInactive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ObjectPool_1_get_countInactive_mF5825E870D989664981D381110E4430BAEC30B32_gshared (ObjectPool_1_t3EF1AC01FF09BFF602D9F00F7E9C508ED5883E9B * __this, const RuntimeMethod* method)
{
	{
		Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 * L_0 = (Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *)__this->get_m_Stack_0();
		NullCheck((Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *)L_0);
		int32_t L_1 = ((  int32_t (*) (Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return L_1;
	}
}
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_1__ctor_m2D9E8D06AAF43A706B02D87137D55B8B0F64E66A_gshared (ObjectPool_1_t3EF1AC01FF09BFF602D9F00F7E9C508ED5883E9B * __this, UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___actionOnGet0, UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___actionOnRelease1, const RuntimeMethod* method)
{
	{
		Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 * L_0 = (Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ObjectPool_1_Get_m8D5DE92D04BE91AE7DD9C1B767C183EC9DE98952_gshared (ObjectPool_1_t3EF1AC01FF09BFF602D9F00F7E9C508ED5883E9B * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	int32_t V_1 = 0;
	{
		Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 * L_0 = (Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *)__this->get_m_Stack_0();
		NullCheck((Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *)L_0);
		int32_t L_1 = ((  int32_t (*) (Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_0 = (RuntimeObject *)L_2;
		NullCheck((ObjectPool_1_t3EF1AC01FF09BFF602D9F00F7E9C508ED5883E9B *)__this);
		int32_t L_3 = ((  int32_t (*) (ObjectPool_1_t3EF1AC01FF09BFF602D9F00F7E9C508ED5883E9B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ObjectPool_1_t3EF1AC01FF09BFF602D9F00F7E9C508ED5883E9B *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		V_1 = (int32_t)L_3;
		int32_t L_4 = V_1;
		NullCheck((ObjectPool_1_t3EF1AC01FF09BFF602D9F00F7E9C508ED5883E9B *)__this);
		((  void (*) (ObjectPool_1_t3EF1AC01FF09BFF602D9F00F7E9C508ED5883E9B *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((ObjectPool_1_t3EF1AC01FF09BFF602D9F00F7E9C508ED5883E9B *)__this, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		goto IL_0031;
	}

IL_0025:
	{
		Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 * L_5 = (Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *)__this->get_m_Stack_0();
		NullCheck((Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *)L_5);
		RuntimeObject * L_6 = ((  RuntimeObject * (*) (Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
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
		((  void (*) (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
	}

IL_0045:
	{
		RuntimeObject * L_10 = V_0;
		return L_10;
	}
}
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::Release(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_1_Release_m11F10A7199F0544250785EAA41F819E03D65BC17_gshared (ObjectPool_1_t3EF1AC01FF09BFF602D9F00F7E9C508ED5883E9B * __this, RuntimeObject * ___element0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectPool_1_Release_m11F10A7199F0544250785EAA41F819E03D65BC17_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 * L_0 = (Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *)__this->get_m_Stack_0();
		NullCheck((Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *)L_0);
		int32_t L_1 = ((  int32_t (*) (Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 * L_2 = (Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *)__this->get_m_Stack_0();
		NullCheck((Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *)L_2);
		RuntimeObject * L_3 = ((  RuntimeObject * (*) (Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
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
		((  void (*) (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_6, (RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
	}

IL_0044:
	{
		Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 * L_8 = (Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *)__this->get_m_Stack_0();
		RuntimeObject * L_9 = ___element0;
		NullCheck((Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *)L_8);
		((  void (*) (Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *)L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SubsystemLifecycleManager_2_get_subsystem_m0A11F605C9712C76DF053C9336660DD33E2DC44B_gshared (SubsystemLifecycleManager_2_tFCA70F51985A33F831E1B98350EF7CB79B9F0261 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U3CsubsystemU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<System.Object,System.Object>::set_subsystem(TSubsystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemLifecycleManager_2_set_subsystem_m4DA842A880B3B53D51F00FFBB068BCC18653A6B6_gshared (SubsystemLifecycleManager_2_tFCA70F51985A33F831E1B98350EF7CB79B9F0261 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_U3CsubsystemU3Ek__BackingField_4(L_0);
		return;
	}
}
// TSubsystemDescriptor UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<System.Object,System.Object>::get_descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SubsystemLifecycleManager_2_get_descriptor_m328035F98E576C430E999F1D92763CE69418574E_gshared (SubsystemLifecycleManager_2_tFCA70F51985A33F831E1B98350EF7CB79B9F0261 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		NullCheck((SubsystemLifecycleManager_2_tFCA70F51985A33F831E1B98350EF7CB79B9F0261 *)__this);
		RuntimeObject * L_0 = ((  RuntimeObject * (*) (SubsystemLifecycleManager_2_tFCA70F51985A33F831E1B98350EF7CB79B9F0261 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((SubsystemLifecycleManager_2_tFCA70F51985A33F831E1B98350EF7CB79B9F0261 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		NullCheck((SubsystemLifecycleManager_2_tFCA70F51985A33F831E1B98350EF7CB79B9F0261 *)__this);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (SubsystemLifecycleManager_2_tFCA70F51985A33F831E1B98350EF7CB79B9F0261 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((SubsystemLifecycleManager_2_tFCA70F51985A33F831E1B98350EF7CB79B9F0261 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((Subsystem_1_tCB27FB16758FC2D855673CA14E86150F070453F6 *)L_1);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (Subsystem_1_tCB27FB16758FC2D855673CA14E86150F070453F6 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Subsystem_1_tCB27FB16758FC2D855673CA14E86150F070453F6 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return L_2;
	}

IL_001e:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		RuntimeObject * L_3 = V_0;
		return L_3;
	}
}
// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<System.Object,System.Object>::CreateSubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SubsystemLifecycleManager_2_CreateSubsystem_m842F61DD74EA40C75EAB9CF62627FAD5BB264B5C_gshared (SubsystemLifecycleManager_2_tFCA70F51985A33F831E1B98350EF7CB79B9F0261 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SubsystemLifecycleManager_2_CreateSubsystem_m842F61DD74EA40C75EAB9CF62627FAD5BB264B5C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = ((SubsystemLifecycleManager_2_tFCA70F51985A33F831E1B98350EF7CB79B9F0261_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)))->get_s_SubsystemDescriptors_6();
		IL2CPP_RUNTIME_CLASS_INIT(SubsystemManager_tA76309B3302C9AA31F3BCFFF64BFD98606F0231F_il2cpp_TypeInfo_var);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_1 = ((SubsystemLifecycleManager_2_tFCA70F51985A33F831E1B98350EF7CB79B9F0261_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)))->get_s_SubsystemDescriptors_6();
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_1);
		int32_t L_2 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_006c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_3 = ((SubsystemLifecycleManager_2_tFCA70F51985A33F831E1B98350EF7CB79B9F0261_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)))->get_s_SubsystemDescriptors_6();
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_3);
		RuntimeObject * L_4 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_3, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		V_0 = (RuntimeObject *)L_4;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_5 = ((SubsystemLifecycleManager_2_tFCA70F51985A33F831E1B98350EF7CB79B9F0261_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)))->get_s_SubsystemDescriptors_6();
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_5);
		int32_t L_6 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		if ((((int32_t)L_6) <= ((int32_t)1)))
		{
			goto IL_0060;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_7;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_9 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 7)) };
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
		NullCheck((SubsystemDescriptor_1_t31BEFA7AE91777434F9B5622527F596E81E5C715 *)L_15);
		RuntimeObject * L_16 = ((  RuntimeObject * (*) (SubsystemDescriptor_1_t31BEFA7AE91777434F9B5622527F596E81E5C715 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((SubsystemDescriptor_1_t31BEFA7AE91777434F9B5622527F596E81E5C715 *)L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemLifecycleManager_2_CreateSubsystemIfNecessary_m1F6E3DF04C81036DF20C38BA340A6B204AD0A0E9_gshared (SubsystemLifecycleManager_2_tFCA70F51985A33F831E1B98350EF7CB79B9F0261 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((SubsystemLifecycleManager_2_tFCA70F51985A33F831E1B98350EF7CB79B9F0261 *)__this);
		RuntimeObject * L_0 = ((  RuntimeObject * (*) (SubsystemLifecycleManager_2_tFCA70F51985A33F831E1B98350EF7CB79B9F0261 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((SubsystemLifecycleManager_2_tFCA70F51985A33F831E1B98350EF7CB79B9F0261 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		if (L_0)
		{
			goto IL_002d;
		}
	}
	{
		NullCheck((SubsystemLifecycleManager_2_tFCA70F51985A33F831E1B98350EF7CB79B9F0261 *)__this);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (SubsystemLifecycleManager_2_tFCA70F51985A33F831E1B98350EF7CB79B9F0261 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((SubsystemLifecycleManager_2_tFCA70F51985A33F831E1B98350EF7CB79B9F0261 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		NullCheck((SubsystemLifecycleManager_2_tFCA70F51985A33F831E1B98350EF7CB79B9F0261 *)__this);
		((  void (*) (SubsystemLifecycleManager_2_tFCA70F51985A33F831E1B98350EF7CB79B9F0261 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((SubsystemLifecycleManager_2_tFCA70F51985A33F831E1B98350EF7CB79B9F0261 *)__this, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		NullCheck((SubsystemLifecycleManager_2_tFCA70F51985A33F831E1B98350EF7CB79B9F0261 *)__this);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (SubsystemLifecycleManager_2_tFCA70F51985A33F831E1B98350EF7CB79B9F0261 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((SubsystemLifecycleManager_2_tFCA70F51985A33F831E1B98350EF7CB79B9F0261 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		__this->set_m_CleanupSubsystemOnDestroy_5((bool)0);
	}

IL_002d:
	{
		NullCheck((SubsystemLifecycleManager_2_tFCA70F51985A33F831E1B98350EF7CB79B9F0261 *)__this);
		RuntimeObject * L_3 = ((  RuntimeObject * (*) (SubsystemLifecycleManager_2_tFCA70F51985A33F831E1B98350EF7CB79B9F0261 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((SubsystemLifecycleManager_2_tFCA70F51985A33F831E1B98350EF7CB79B9F0261 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		if (L_3)
		{
			goto IL_0046;
		}
	}
	{
		NullCheck((SubsystemLifecycleManager_2_tFCA70F51985A33F831E1B98350EF7CB79B9F0261 *)__this);
		RuntimeObject * L_4 = VirtFuncInvoker0< RuntimeObject * >::Invoke(4 /* TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<System.Object,System.Object>::CreateSubsystem() */, (SubsystemLifecycleManager_2_tFCA70F51985A33F831E1B98350EF7CB79B9F0261 *)__this);
		NullCheck((SubsystemLifecycleManager_2_tFCA70F51985A33F831E1B98350EF7CB79B9F0261 *)__this);
		((  void (*) (SubsystemLifecycleManager_2_tFCA70F51985A33F831E1B98350EF7CB79B9F0261 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((SubsystemLifecycleManager_2_tFCA70F51985A33F831E1B98350EF7CB79B9F0261 *)__this, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
	}

IL_0046:
	{
		return;
	}
}
// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<System.Object,System.Object>::GetActiveSubsystemInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SubsystemLifecycleManager_2_GetActiveSubsystemInstance_m3762537813B7C28180C4CF9B99CCB8E176C50A25_gshared (SubsystemLifecycleManager_2_tFCA70F51985A33F831E1B98350EF7CB79B9F0261 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SubsystemLifecycleManager_2_GetActiveSubsystemInstance_m3762537813B7C28180C4CF9B99CCB8E176C50A25_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * V_1 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		RuntimeObject * L_0 = V_0;
		if (L_0)
		{
			goto IL_002d;
		}
	}
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_1 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 13));
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)->methodPointer)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
		V_1 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_1;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_2 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(SubsystemManager_tA76309B3302C9AA31F3BCFFF64BFD98606F0231F_il2cpp_TypeInfo_var);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_3 = V_1;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_3);
		int32_t L_4 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16));
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_002d;
		}
	}
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_5 = V_1;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_5);
		RuntimeObject * L_6 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_5, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17));
		V_0 = (RuntimeObject *)L_6;
	}

IL_002d:
	{
		RuntimeObject * L_7 = V_0;
		return L_7;
	}
}
// System.Void UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<System.Object,System.Object>::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemLifecycleManager_2_OnEnable_mB0949F448E58F31DEAF741099514CF9D3343D2BE_gshared (SubsystemLifecycleManager_2_tFCA70F51985A33F831E1B98350EF7CB79B9F0261 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((SubsystemLifecycleManager_2_tFCA70F51985A33F831E1B98350EF7CB79B9F0261 *)__this);
		((  void (*) (SubsystemLifecycleManager_2_tFCA70F51985A33F831E1B98350EF7CB79B9F0261 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18)->methodPointer)((SubsystemLifecycleManager_2_tFCA70F51985A33F831E1B98350EF7CB79B9F0261 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18));
		NullCheck((SubsystemLifecycleManager_2_tFCA70F51985A33F831E1B98350EF7CB79B9F0261 *)__this);
		RuntimeObject * L_0 = ((  RuntimeObject * (*) (SubsystemLifecycleManager_2_tFCA70F51985A33F831E1B98350EF7CB79B9F0261 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((SubsystemLifecycleManager_2_tFCA70F51985A33F831E1B98350EF7CB79B9F0261 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		if (!L_0)
		{
			goto IL_002f;
		}
	}
	{
		NullCheck((SubsystemLifecycleManager_2_tFCA70F51985A33F831E1B98350EF7CB79B9F0261 *)__this);
		VirtActionInvoker0::Invoke(8 /* System.Void UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<System.Object,System.Object>::OnBeforeStart() */, (SubsystemLifecycleManager_2_tFCA70F51985A33F831E1B98350EF7CB79B9F0261 *)__this);
		NullCheck((SubsystemLifecycleManager_2_tFCA70F51985A33F831E1B98350EF7CB79B9F0261 *)__this);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (SubsystemLifecycleManager_2_tFCA70F51985A33F831E1B98350EF7CB79B9F0261 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((SubsystemLifecycleManager_2_tFCA70F51985A33F831E1B98350EF7CB79B9F0261 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((Subsystem_t6B987736D8E48098F860AC55D76905DE1F48CE8C *)L_1);
		VirtActionInvoker0::Invoke(4 /* System.Void UnityEngine.Subsystem::Start() */, (Subsystem_t6B987736D8E48098F860AC55D76905DE1F48CE8C *)L_1);
		NullCheck((SubsystemLifecycleManager_2_tFCA70F51985A33F831E1B98350EF7CB79B9F0261 *)__this);
		VirtActionInvoker0::Invoke(9 /* System.Void UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<System.Object,System.Object>::OnAfterStart() */, (SubsystemLifecycleManager_2_tFCA70F51985A33F831E1B98350EF7CB79B9F0261 *)__this);
	}

IL_002f:
	{
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<System.Object,System.Object>::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemLifecycleManager_2_OnDisable_m7F8E0FF6E36FA2E0B767034E62D960999129AF0C_gshared (SubsystemLifecycleManager_2_tFCA70F51985A33F831E1B98350EF7CB79B9F0261 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((SubsystemLifecycleManager_2_tFCA70F51985A33F831E1B98350EF7CB79B9F0261 *)__this);
		RuntimeObject * L_0 = ((  RuntimeObject * (*) (SubsystemLifecycleManager_2_tFCA70F51985A33F831E1B98350EF7CB79B9F0261 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((SubsystemLifecycleManager_2_tFCA70F51985A33F831E1B98350EF7CB79B9F0261 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		NullCheck((SubsystemLifecycleManager_2_tFCA70F51985A33F831E1B98350EF7CB79B9F0261 *)__this);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (SubsystemLifecycleManager_2_tFCA70F51985A33F831E1B98350EF7CB79B9F0261 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((SubsystemLifecycleManager_2_tFCA70F51985A33F831E1B98350EF7CB79B9F0261 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((Subsystem_t6B987736D8E48098F860AC55D76905DE1F48CE8C *)L_1);
		VirtActionInvoker0::Invoke(5 /* System.Void UnityEngine.Subsystem::Stop() */, (Subsystem_t6B987736D8E48098F860AC55D76905DE1F48CE8C *)L_1);
	}

IL_001d:
	{
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<System.Object,System.Object>::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemLifecycleManager_2_OnDestroy_mDE8990CF81E33F4DFF6CAADABB442602CE1A93FA_gshared (SubsystemLifecycleManager_2_tFCA70F51985A33F831E1B98350EF7CB79B9F0261 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		bool L_0 = (bool)__this->get_m_CleanupSubsystemOnDestroy_5();
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		NullCheck((SubsystemLifecycleManager_2_tFCA70F51985A33F831E1B98350EF7CB79B9F0261 *)__this);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (SubsystemLifecycleManager_2_tFCA70F51985A33F831E1B98350EF7CB79B9F0261 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((SubsystemLifecycleManager_2_tFCA70F51985A33F831E1B98350EF7CB79B9F0261 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		NullCheck((SubsystemLifecycleManager_2_tFCA70F51985A33F831E1B98350EF7CB79B9F0261 *)__this);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (SubsystemLifecycleManager_2_tFCA70F51985A33F831E1B98350EF7CB79B9F0261 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((SubsystemLifecycleManager_2_tFCA70F51985A33F831E1B98350EF7CB79B9F0261 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((Subsystem_t6B987736D8E48098F860AC55D76905DE1F48CE8C *)L_2);
		VirtActionInvoker0::Invoke(6 /* System.Void UnityEngine.Subsystem::Destroy() */, (Subsystem_t6B987736D8E48098F860AC55D76905DE1F48CE8C *)L_2);
	}

IL_0025:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		RuntimeObject * L_3 = V_0;
		NullCheck((SubsystemLifecycleManager_2_tFCA70F51985A33F831E1B98350EF7CB79B9F0261 *)__this);
		((  void (*) (SubsystemLifecycleManager_2_tFCA70F51985A33F831E1B98350EF7CB79B9F0261 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((SubsystemLifecycleManager_2_tFCA70F51985A33F831E1B98350EF7CB79B9F0261 *)__this, (RuntimeObject *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<System.Object,System.Object>::OnBeforeStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemLifecycleManager_2_OnBeforeStart_m3096E78ADEA9565496AD0F11AC23AA398851F0E5_gshared (SubsystemLifecycleManager_2_tFCA70F51985A33F831E1B98350EF7CB79B9F0261 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<System.Object,System.Object>::OnAfterStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemLifecycleManager_2_OnAfterStart_mF7BADFCDD71E3627717AB4C050D6E122E394235B_gshared (SubsystemLifecycleManager_2_tFCA70F51985A33F831E1B98350EF7CB79B9F0261 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemLifecycleManager_2__ctor_mB5E1DD2019D8EA4AE7B1914D2DDF46C0F8054F3A_gshared (SubsystemLifecycleManager_2_tFCA70F51985A33F831E1B98350EF7CB79B9F0261 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_CleanupSubsystemOnDestroy_5((bool)1);
		NullCheck((MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)__this);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97((MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<System.Object,System.Object>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemLifecycleManager_2__cctor_m6A312E0D4591535E95FF11F31D00ABFB295D146E_gshared (const RuntimeMethod* method)
{
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 22)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		((SubsystemLifecycleManager_2_tFCA70F51985A33F831E1B98350EF7CB79B9F0261_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 3)))->set_s_SubsystemDescriptors_6(L_0);
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
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_2__ctor_m9814F0C90CD347A8B044F613EA3BEA89C0EDD0E6_gshared (TrackingSubsystem_2_t3EB27DAF7DE2C1954FFCC178A2D5B14B2560C403 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((Subsystem_1_tCB27FB16758FC2D855673CA14E86150F070453F6 *)__this);
		((  void (*) (Subsystem_1_tCB27FB16758FC2D855673CA14E86150F070453F6 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Subsystem_1_tCB27FB16758FC2D855673CA14E86150F070453F6 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
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
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_2__ctor_mC50C77CDABF6E044EC3D1220128F4F8CC4DAFA34_gshared (TrackingSubsystem_2_t3EC8D7E050800A819879CB4B105623452C631D7A * __this, const RuntimeMethod* method)
{
	{
		NullCheck((Subsystem_1_tCB27FB16758FC2D855673CA14E86150F070453F6 *)__this);
		((  void (*) (Subsystem_1_tCB27FB16758FC2D855673CA14E86150F070453F6 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Subsystem_1_tCB27FB16758FC2D855673CA14E86150F070453F6 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
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
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_2__ctor_m7AB136126F271CC1CF77B79DD04F23CE085B0FC4_gshared (TrackingSubsystem_2_t13B09A7DD60BB228A81595F3289379D17A4D033E * __this, const RuntimeMethod* method)
{
	{
		NullCheck((Subsystem_1_tCB27FB16758FC2D855673CA14E86150F070453F6 *)__this);
		((  void (*) (Subsystem_1_tCB27FB16758FC2D855673CA14E86150F070453F6 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Subsystem_1_tCB27FB16758FC2D855673CA14E86150F070453F6 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject * Delegate_get_Target_m5371341CE435E001E9FD407AE78F728824CE20E2_inline (Delegate_t * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_m_target_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615  NetworkIdentity_get_netId_m22EB7CD04E2633FFAF99093749F79816B2BC9F28_inline (NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * __this, const RuntimeMethod* method)
{
	{
		NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615  L_0 = __this->get_m_NetId_11();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool ColorTween_get_ignoreTimeScale_m6A06826E19314EFE9783E505C75CFC76E42E8F05_inline (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_m_IgnoreTimeScale_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float ColorTween_get_duration_mC4A1E3C2EA46A5C657A2B9DA240C796F770ECC5F_inline (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_m_Duration_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool FloatTween_get_ignoreTimeScale_mA7B69D72E1D52EF1890C89D5690D345B852C7239_inline (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_m_IgnoreTimeScale_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float FloatTween_get_duration_mBECFBEC57BDC30B54D0638873BA3313A8F7232F5_inline (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_m_Duration_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method)
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
		ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_2, (int32_t)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
