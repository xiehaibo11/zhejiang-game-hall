
/* v8::internal::Runtime_ThrowWasmStackOverflow(int, unsigned long*, v8::internal::Isolate*) */

void v8::internal::Runtime_ThrowWasmStackOverflow(int param_1,ulong *param_2,Isolate *param_3)

{
  if (TracingFlags::runtime_stats == 0) {
    Isolate::StackOverflow(param_3);
    return;
  }
  FUN_015b6cf0(param_1);
  return;
}

