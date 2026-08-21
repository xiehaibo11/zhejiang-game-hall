
/* v8::internal::tracing::TraceEventHelper::GetTracingController() */

void v8::internal::tracing::TraceEventHelper::GetTracingController(void)

{
  long *plVar1;
  
  plVar1 = (long *)V8::GetCurrentPlatform();
                    /* WARNING: Could not recover jumptable at 0x011f912c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x90))();
  return;
}

