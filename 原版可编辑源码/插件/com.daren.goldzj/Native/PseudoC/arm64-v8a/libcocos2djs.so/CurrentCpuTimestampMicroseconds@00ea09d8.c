
/* v8::platform::tracing::TracingController::CurrentCpuTimestampMicroseconds() */

void v8::platform::tracing::TracingController::CurrentCpuTimestampMicroseconds(void)

{
  base::ThreadTicks::Now();
  return;
}

