
/* v8::internal::Builtin_SharedArrayBufferPrototypeGetByteLength(int, unsigned long*,
   v8::internal::Isolate*) */

void v8::internal::Builtin_SharedArrayBufferPrototypeGetByteLength
               (int param_1,ulong *param_2,Isolate *param_3)

{
  if (TracingFlags::runtime_stats == 0) {
    FUN_014ad9e8((long)param_1);
    return;
  }
  FUN_014ad838();
  return;
}

