
/* v8::internal::TimerEventScope<v8::internal::TimerEventCompileIgnition>::LogTimerEvent(v8::internal::Logger::StartEnd)
    */

void __thiscall
v8::internal::TimerEventScope<v8::internal::TimerEventCompileIgnition>::LogTimerEvent
          (TimerEventScope<v8::internal::TimerEventCompileIgnition> *this,undefined8 param_2)

{
  Logger *pLVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)this + 0xb748);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    if (UNRECOVERED_JUMPTABLE != Logger::DefaultEventLoggerSentinel) {
                    /* WARNING: Could not recover jumptable at 0x01058c14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)("V8.CompileIgnition");
      return;
    }
    pLVar1 = *(Logger **)(*(long *)this + 0x9558);
    if ((*(char *)(*(long *)(pLVar1 + 8) + 0xb7fc) == '\0') && (pLVar1[0x20] != (Logger)0x0)) {
      Logger::TimerEvent(pLVar1,param_2,"V8.CompileIgnition");
      return;
    }
  }
  return;
}

