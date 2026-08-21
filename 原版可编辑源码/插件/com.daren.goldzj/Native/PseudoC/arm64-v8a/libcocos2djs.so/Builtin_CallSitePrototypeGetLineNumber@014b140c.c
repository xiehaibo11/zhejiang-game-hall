
/* v8::internal::Builtin_CallSitePrototypeGetLineNumber(int, unsigned long*, v8::internal::Isolate*)
    */

void v8::internal::Builtin_CallSitePrototypeGetLineNumber
               (int param_1,ulong *param_2,Isolate *param_3)

{
  if (TracingFlags::runtime_stats == 0) {
    FUN_014b15d8((long)param_1);
    return;
  }
  FUN_014b1428();
  return;
}

