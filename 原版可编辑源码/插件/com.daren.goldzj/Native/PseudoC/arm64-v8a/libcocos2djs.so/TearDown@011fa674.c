
/* v8::tracing::TracingCategoryObserver::TearDown() */

void v8::tracing::TracingCategoryObserver::TearDown(void)

{
  long *plVar1;
  
  plVar1 = (long *)internal::V8::GetCurrentPlatform();
  plVar1 = (long *)(**(code **)(*plVar1 + 0x90))();
  (**(code **)(*plVar1 + 0x38))(plVar1,instance_);
  if (instance_ != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x011fa6c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*instance_ + 8))();
    return;
  }
  return;
}

