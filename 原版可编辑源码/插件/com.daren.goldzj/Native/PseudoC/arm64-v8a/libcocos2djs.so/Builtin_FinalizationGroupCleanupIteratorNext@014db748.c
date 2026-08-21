
/* v8::internal::Builtin_FinalizationGroupCleanupIteratorNext(int, unsigned long*,
   v8::internal::Isolate*) */

void v8::internal::Builtin_FinalizationGroupCleanupIteratorNext
               (int param_1,ulong *param_2,Isolate *param_3)

{
  if (TracingFlags::runtime_stats == 0) {
    FUN_014db914((long)param_1);
    return;
  }
  FUN_014db764();
  return;
}

