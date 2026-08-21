
/* v8::internal::Runtime_ScheduleBreak(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_ScheduleBreak(int param_1,ulong *param_2,Isolate *param_3)

{
  undefined8 uVar1;
  
  if (TracingFlags::runtime_stats == 0) {
    Isolate::RequestInterrupt(param_3,debug::BreakRightNow,(void *)0x0);
    return *(undefined8 *)(param_3 + 0xa0);
  }
  uVar1 = FUN_011be7b0(param_1,param_2,param_3);
  return uVar1;
}

