
/* v8::internal::V8::InitializePlatform(v8::Platform*) */

void v8::internal::V8::InitializePlatform(Platform *param_1)

{
  _func_void *p_Var1;
  
  if (platform_ != (Platform *)0x0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","!platform_");
  }
  if (param_1 != (Platform *)0x0) {
    platform_ = param_1;
    p_Var1 = (_func_void *)(**(code **)(*(long *)param_1 + 0x88))();
    base::SetPrintStackTrace(p_Var1);
    v8::tracing::TracingCategoryObserver::SetUp();
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","platform");
}

