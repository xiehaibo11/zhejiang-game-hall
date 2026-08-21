
/* v8::internal::PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,
   false>::IsAllowed(v8::internal::Isolate*) */

uint v8::internal::PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false>::IsAllowed
               (Isolate *param_1)

{
  return *(uint *)(param_1 + 0xb7d8) & 1;
}

