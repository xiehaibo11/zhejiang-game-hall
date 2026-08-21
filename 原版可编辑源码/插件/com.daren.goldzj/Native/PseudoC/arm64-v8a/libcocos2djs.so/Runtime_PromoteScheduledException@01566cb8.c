
/* v8::internal::Runtime_PromoteScheduledException(int, unsigned long*, v8::internal::Isolate*) */

void v8::internal::Runtime_PromoteScheduledException(int param_1,ulong *param_2,Isolate *param_3)

{
  if (TracingFlags::runtime_stats == 0) {
    Isolate::PromoteScheduledException(param_3);
    return;
  }
  FUN_01566cd4(param_1);
  return;
}

