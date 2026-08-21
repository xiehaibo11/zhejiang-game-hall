
/* v8::internal::FutexEmulation::Wait64(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::JSArrayBuffer>, unsigned long, long, double) */

void v8::internal::FutexEmulation::Wait64(void)

{
  Wait<long>();
  return;
}

