
/* v8::internal::Runtime_UnwindAndFindExceptionHandler(int, unsigned long*, v8::internal::Isolate*)
    */

void v8::internal::Runtime_UnwindAndFindExceptionHandler
               (int param_1,ulong *param_2,Isolate *param_3)

{
  if (TracingFlags::runtime_stats == 0) {
    Isolate::UnwindAndFindHandler(param_3);
    return;
  }
  FUN_01566b24(param_1);
  return;
}

