
/* v8::internal::V8::ShutdownPlatform() */

void v8::internal::V8::ShutdownPlatform(void)

{
  if (platform_ != 0) {
    v8::tracing::TracingCategoryObserver::TearDown();
    base::SetPrintStackTrace((_func_void *)0x0);
    platform_ = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","platform_");
}

