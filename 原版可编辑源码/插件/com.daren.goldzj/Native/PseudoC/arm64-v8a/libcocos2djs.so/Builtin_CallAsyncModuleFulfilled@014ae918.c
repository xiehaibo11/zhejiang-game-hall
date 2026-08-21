
/* v8::internal::Builtin_CallAsyncModuleFulfilled(int, unsigned long*, v8::internal::Isolate*) */

undefined8
v8::internal::Builtin_CallAsyncModuleFulfilled(int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (TracingFlags::runtime_stats == 0) {
    uVar3 = *(undefined8 *)(param_3 + 0x95a0);
    lVar1 = *(long *)(param_3 + 0x95a8);
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
    uVar2 = GlobalHandles::Create(*(GlobalHandles **)(param_3 + 0x95e0),*param_2);
    SourceTextModule::AsyncModuleExecutionFulfilled(param_3,uVar2);
    uVar2 = *(undefined8 *)(param_3 + 0xa0);
    if (param_3 != (Isolate *)0x0) {
      *(undefined8 *)(param_3 + 0x95a0) = uVar3;
      *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
      if (*(long *)(param_3 + 0x95a8) != lVar1) {
        *(long *)(param_3 + 0x95a8) = lVar1;
        HandleScope::DeleteExtensions(param_3);
      }
    }
    return uVar2;
  }
  uVar3 = FUN_014ae9d0(param_1,param_2,param_3);
  return uVar3;
}

