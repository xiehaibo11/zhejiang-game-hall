
/* v8::internal::Builtin_ObjectGetOwnPropertyDescriptors(int, unsigned long*,
   v8::internal::Isolate*) */

void v8::internal::Builtin_ObjectGetOwnPropertyDescriptors
               (int param_1,ulong *param_2,Isolate *param_3)

{
  if (TracingFlags::runtime_stats == 0) {
    FUN_014ce334((long)param_1);
    return;
  }
  FUN_014ce184();
  return;
}

