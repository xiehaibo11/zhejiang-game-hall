
/* v8::internal::Builtin_EmptyFunction(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Builtin_EmptyFunction(int param_1,ulong *param_2,Isolate *param_3)

{
  undefined8 uVar1;
  
  if (TracingFlags::runtime_stats == 0) {
    return *(undefined8 *)(param_3 + 0xa0);
  }
  uVar1 = FUN_014c9b04(param_1);
  return uVar1;
}

