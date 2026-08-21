
/* v8::internal::Runtime_ThrowStackOverflow(int, unsigned long*, v8::internal::Isolate*) */

void v8::internal::Runtime_ThrowStackOverflow(int param_1,ulong *param_2,Isolate *param_3)

{
  if (TracingFlags::runtime_stats == 0) {
    Isolate::StackOverflow(param_3);
    return;
  }
  FUN_01565248(param_1);
  return;
}

