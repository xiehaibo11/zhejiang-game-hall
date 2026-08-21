
/* v8::internal::Builtin_ConsoleTime(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Builtin_ConsoleTime(int param_1,ulong *param_2,Isolate *param_3)

{
  undefined8 uVar1;
  long local_30;
  ulong *puStack_28;
  
  if (TracingFlags::runtime_stats == 0) {
    local_30 = (long)param_1;
    puStack_28 = param_2;
    FUN_014b8f00(param_3,local_30,param_2,0);
    FUN_014b8ac8(param_3,&local_30,0x90,1);
    if (*(int *)(param_3 + 0x2c20) == *(int *)(param_3 + 0xa8)) {
      uVar1 = *(undefined8 *)(param_3 + 0xa0);
    }
    else {
      uVar1 = Isolate::PromoteScheduledException(param_3);
    }
    return uVar1;
  }
  uVar1 = FUN_014b7d44(param_1,param_2,param_3);
  return uVar1;
}

