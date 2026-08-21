
/* v8::internal::TimedHistogram::Start(v8::base::ElapsedTimer*, v8::internal::Isolate*) */

void __thiscall
v8::internal::TimedHistogram::Start(TimedHistogram *this,ElapsedTimer *param_1,Isolate *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  code *UNRECOVERED_JUMPTABLE;
  Logger *this_00;
  
  if (*(long *)(this + 0x18) != 0) {
    uVar1 = base::TimeTicks::HighResolutionNow();
    *(undefined8 *)param_1 = uVar1;
  }
  if (param_2 != (Isolate *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_2 + 0xb748);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
      uVar1 = *(undefined8 *)this;
      if (UNRECOVERED_JUMPTABLE != Logger::DefaultEventLoggerSentinel) {
                    /* WARNING: Could not recover jumptable at 0x01053fac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(uVar1,0);
        return;
      }
      this_00 = *(Logger **)(param_2 + 0x9558);
      uVar2 = Logger::is_logging(this_00);
      if ((uVar2 & 1) != 0) {
        Logger::TimerEvent(this_00,0,uVar1);
        return;
      }
    }
  }
  return;
}

