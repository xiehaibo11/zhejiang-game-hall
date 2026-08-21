
/* v8::internal::TimedHistogram::Stop(v8::base::ElapsedTimer*, v8::internal::Isolate*) */

void __thiscall
v8::internal::TimedHistogram::Stop(TimedHistogram *this,ElapsedTimer *param_1,Isolate *param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  code *pcVar4;
  Logger *this_00;
  long local_38;
  
  if (*(long *)(this + 0x18) != 0) {
    iVar1 = *(int *)(this + 0x28);
    local_38 = base::TimeTicks::HighResolutionNow();
    local_38 = local_38 - *(long *)param_1;
    if (iVar1 == 1) {
      uVar2 = base::TimeDelta::InMicroseconds((TimeDelta *)&local_38);
    }
    else {
      uVar2 = base::TimeDelta::InMilliseconds((TimeDelta *)&local_38);
    }
    *(undefined8 *)param_1 = 0;
    if ((*(long *)(this + 0x18) != 0) && (*(code **)(*(long *)(this + 0x20) + 0x28) != (code *)0x0))
    {
      (**(code **)(*(long *)(this + 0x20) + 0x28))(*(long *)(this + 0x18),uVar2);
    }
  }
  if (param_2 != (Isolate *)0x0) {
    pcVar4 = *(code **)(param_2 + 0xb748);
    if (pcVar4 != (code *)0x0) {
      uVar2 = *(undefined8 *)this;
      if (pcVar4 == Logger::DefaultEventLoggerSentinel) {
        this_00 = *(Logger **)(param_2 + 0x9558);
        uVar3 = Logger::is_logging(this_00);
        if ((uVar3 & 1) != 0) {
          Logger::TimerEvent(this_00,1,uVar2);
        }
      }
      else {
        (*pcVar4)(uVar2,1);
      }
    }
  }
  return;
}

