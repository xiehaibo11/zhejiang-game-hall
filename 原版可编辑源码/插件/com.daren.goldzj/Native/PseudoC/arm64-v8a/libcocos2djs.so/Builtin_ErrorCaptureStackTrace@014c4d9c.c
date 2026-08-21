
/* v8::internal::Builtin_ErrorCaptureStackTrace(int, unsigned long*, v8::internal::Isolate*) */

void v8::internal::Builtin_ErrorCaptureStackTrace(int param_1,ulong *param_2,Isolate *param_3)

{
  if (TracingFlags::runtime_stats == 0) {
    FUN_014c4f68((long)param_1);
    return;
  }
  FUN_014c4db8();
  return;
}

