
/* v8::internal::Builtin_MakeURIError(int, unsigned long*, v8::internal::Isolate*) */

void v8::internal::Builtin_MakeURIError(int param_1,ulong *param_2,Isolate *param_3)

{
  if (TracingFlags::runtime_stats == 0) {
    FUN_014c6530(param_3);
    return;
  }
  FUN_014c639c(param_1);
  return;
}

