
/* v8::internal::Builtin_CallSitePrototypeGetColumnNumber(int, unsigned long*,
   v8::internal::Isolate*) */

void v8::internal::Builtin_CallSitePrototypeGetColumnNumber
               (int param_1,ulong *param_2,Isolate *param_3)

{
  if (TracingFlags::runtime_stats == 0) {
    FUN_014b034c((long)param_1);
    return;
  }
  FUN_014b019c();
  return;
}

