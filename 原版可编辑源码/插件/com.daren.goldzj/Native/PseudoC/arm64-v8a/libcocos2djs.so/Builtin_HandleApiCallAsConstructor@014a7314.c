
/* v8::internal::Builtin_HandleApiCallAsConstructor(int, unsigned long*, v8::internal::Isolate*) */

void v8::internal::Builtin_HandleApiCallAsConstructor(int param_1,ulong *param_2,Isolate *param_3)

{
  if (TracingFlags::runtime_stats == 0) {
    FUN_014a7558(param_3,1,(long)param_1);
    return;
  }
  FUN_014a7344(param_1,param_2);
  return;
}

