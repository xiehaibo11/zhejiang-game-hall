
/* v8::internal::Runtime_IsBeingInterpreted(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_IsBeingInterpreted(int param_1,ulong *param_2,Isolate *param_3)

{
  undefined8 uVar1;
  
  if (TracingFlags::runtime_stats == 0) {
    return *(undefined8 *)(param_3 + 0xb8);
  }
  uVar1 = FUN_015aee10(param_1);
  return uVar1;
}

