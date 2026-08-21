
/* v8::internal::TimedHistogram::RecordAbandon(v8::base::ElapsedTimer*, v8::internal::Isolate*) */

void __thiscall
v8::internal::TimedHistogram::RecordAbandon
          (TimedHistogram *this,ElapsedTimer *param_1,Isolate *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  code *pcVar3;
  Logger *this_00;
  undefined8 local_28;
  
  if (*(long *)(this + 0x18) != 0) {
    *(undefined8 *)param_1 = 0;
    if (*(int *)(this + 0x28) == 1) {
      local_28 = 0x7fffffffffffffff;
      uVar1 = base::TimeDelta::InMicroseconds((TimeDelta *)&local_28);
    }
    else {
      local_28 = 0x7fffffffffffffff;
      uVar1 = base::TimeDelta::InMilliseconds((TimeDelta *)&local_28);
    }
    if ((*(long *)(this + 0x18) != 0) && (*(code **)(*(long *)(this + 0x20) + 0x28) != (code *)0x0))
    {
      (**(code **)(*(long *)(this + 0x20) + 0x28))(*(long *)(this + 0x18),uVar1);
    }
  }
  if (param_2 != (Isolate *)0x0) {
    pcVar3 = *(code **)(param_2 + 0xb748);
    if (pcVar3 != (code *)0x0) {
      uVar1 = *(undefined8 *)this;
      if (pcVar3 == Logger::DefaultEventLoggerSentinel) {
        this_00 = *(Logger **)(param_2 + 0x9558);
        uVar2 = Logger::is_logging(this_00);
        if ((uVar2 & 1) != 0) {
          Logger::TimerEvent(this_00,1,uVar1);
        }
      }
      else {
        (*pcVar3)(uVar1,1);
      }
    }
  }
  return;
}

