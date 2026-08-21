
/* v8::internal::ProfilerCodeObserver::CodeEventHandler(v8::internal::CodeEventsContainer const&) */

void __thiscall
v8::internal::ProfilerCodeObserver::CodeEventHandler
          (ProfilerCodeObserver *this,CodeEventsContainer *param_1)

{
  if (*(long **)(this + 0x60) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01199b98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x60) + 0x18))();
    return;
  }
  CodeEventHandlerInternal(this,param_1);
  return;
}

