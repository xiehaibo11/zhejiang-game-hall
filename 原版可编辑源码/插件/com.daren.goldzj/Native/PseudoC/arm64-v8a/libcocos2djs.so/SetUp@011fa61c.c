
/* v8::tracing::TracingCategoryObserver::SetUp() */

void v8::tracing::TracingCategoryObserver::SetUp(void)

{
  long *plVar1;
  
  instance_ = operator_new(8);
  *instance_ = &PTR__TraceStateObserver_01cbbea8;
  plVar1 = (long *)internal::V8::GetCurrentPlatform();
  plVar1 = (long *)(**(code **)(*plVar1 + 0x90))();
                    /* WARNING: Could not recover jumptable at 0x011fa670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,instance_);
  return;
}

