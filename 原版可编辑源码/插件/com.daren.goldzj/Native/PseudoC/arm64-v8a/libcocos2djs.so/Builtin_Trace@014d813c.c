
/* v8::internal::Builtin_Trace(int, unsigned long*, v8::internal::Isolate*) */

void v8::internal::Builtin_Trace(int param_1,ulong *param_2,Isolate *param_3)

{
  if (TracingFlags::runtime_stats == 0) {
    FUN_014d8308((long)param_1);
    return;
  }
  FUN_014d8158();
  return;
}

