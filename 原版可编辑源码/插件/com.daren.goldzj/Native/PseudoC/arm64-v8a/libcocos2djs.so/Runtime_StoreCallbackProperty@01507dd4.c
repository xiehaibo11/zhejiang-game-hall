
/* v8::internal::Runtime_StoreCallbackProperty(int, unsigned long*, v8::internal::Isolate*) */

ulong v8::internal::Runtime_StoreCallbackProperty(int param_1,ulong *param_2,Isolate *param_3)

{
  undefined8 uVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  undefined **local_a0;
  long local_98;
  undefined8 uStack_90;
  undefined8 local_68;
  
  if (TracingFlags::runtime_stats == 0) {
    uVar1 = *(undefined8 *)(param_3 + 0x95a0);
    lVar2 = *(long *)(param_3 + 0x95a8);
    puVar3 = param_2 + -4;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
    if (TracingFlags::runtime_stats == 0) {
      PropertyCallbackArguments::PropertyCallbackArguments
                ((PropertyCallbackArguments *)&local_a0,param_3,
                 param_2[-2] & 0xffffffff00000000 | (ulong)*(uint *)(param_2[-2] + 0x1b),*param_2,
                 param_2[-1],0);
      PropertyCallbackArguments::CallAccessorSetter
                ((PropertyCallbackArguments *)&local_a0,param_2 + -2,param_2 + -3,puVar3);
      if (*(int *)(param_3 + 0x2c20) == *(int *)(param_3 + 0xa8)) {
        uVar4 = *puVar3;
      }
      else {
        uVar4 = Isolate::PromoteScheduledException(param_3);
      }
      local_a0 = &PTR__Relocatable_01cacc40;
      local_68 = 0x1baddead0baddeaf;
      *(undefined8 *)(local_98 + 0xb790) = uStack_90;
    }
    else {
      puVar3 = (ulong *)Runtime::SetObjectProperty(param_3,param_2,param_2 + -3,puVar3,0,0);
      if (puVar3 == (ulong *)0x0) {
        uVar4 = *(ulong *)(param_3 + 0x180);
      }
      else {
        uVar4 = *puVar3;
      }
    }
    *(undefined8 *)(param_3 + 0x95a0) = uVar1;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar2) {
      *(long *)(param_3 + 0x95a8) = lVar2;
      HandleScope::DeleteExtensions(param_3);
    }
    return uVar4;
  }
  uVar4 = FUN_01507f50(param_1,param_2,param_3);
  return uVar4;
}

