
/* v8::internal::JSDate::CurrentTimeValue(v8::internal::Isolate*) */

undefined1  [16] v8::internal::JSDate::CurrentTimeValue(Isolate *param_1)

{
  ulong uVar1;
  long *plVar2;
  Logger *this;
  double dVar3;
  undefined1 auVar4 [16];
  
  if (FLAG_log_internal_timer_events != '\0') {
    this = *(Logger **)(param_1 + 0x9558);
    uVar1 = Logger::is_logging(this);
    if ((uVar1 & 1) != 0) {
      Logger::CurrentTimeEvent(this);
    }
  }
  plVar2 = (long *)V8::GetCurrentPlatform();
  dVar3 = (double)(**(code **)(*plVar2 + 0x80))();
  auVar4._0_8_ = (ulong)dVar3;
  auVar4._8_8_ = 0;
  return auVar4;
}

