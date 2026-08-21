
/* v8::platform::tracing::TracingController::CurrentTimestampMicroseconds() */

void v8::platform::tracing::TracingController::CurrentTimestampMicroseconds(void)

{
  base::TimeTicks::HighResolutionNow();
  return;
}

