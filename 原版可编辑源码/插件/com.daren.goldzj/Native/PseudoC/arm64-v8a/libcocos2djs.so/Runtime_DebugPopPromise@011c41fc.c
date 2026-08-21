
/* v8::internal::Runtime_DebugPopPromise(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_DebugPopPromise(int param_1,ulong *param_2,Isolate *param_3)

{
  undefined8 uVar1;
  
  if (TracingFlags::runtime_stats == 0) {
    Isolate::PopPromise(param_3);
    return *(undefined8 *)(param_3 + 0xa0);
  }
  uVar1 = FUN_011c4244(param_1,param_2,param_3);
  return uVar1;
}

