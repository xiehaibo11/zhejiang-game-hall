
/* v8::internal::PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)1,
   true>::IsAllowed(v8::internal::Isolate*) */

byte v8::internal::PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)1,true>::IsAllowed
               (Isolate *param_1)

{
  return (byte)param_1[0xb7d8] >> 1 & 1;
}

