
/* v8::internal::Runtime_MaxSmi(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_MaxSmi(int param_1,ulong *param_2,Isolate *param_3)

{
  undefined8 uVar1;
  
  if (TracingFlags::runtime_stats == 0) {
    return 0x7ffffffe;
  }
  uVar1 = FUN_01575010(param_1);
  return uVar1;
}

