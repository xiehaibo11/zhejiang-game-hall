
/* v8::internal::Builtin_AtomicsWake(int, unsigned long*, v8::internal::Isolate*) */

void v8::internal::Builtin_AtomicsWake(int param_1,ulong *param_2,Isolate *param_3)

{
  if (TracingFlags::runtime_stats == 0) {
    FUN_014d3124((long)param_1);
    return;
  }
  FUN_014d2f74();
  return;
}

