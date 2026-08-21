
/* v8::internal::Builtin_HandleApiCallAsFunction(int, unsigned long*, v8::internal::Isolate*) */

void v8::internal::Builtin_HandleApiCallAsFunction(int param_1,ulong *param_2,Isolate *param_3)

{
  if (TracingFlags::runtime_stats == 0) {
    FUN_014a7558(param_3,0,(long)param_1);
    return;
  }
  FUN_014a7160(param_1,param_2);
  return;
}

