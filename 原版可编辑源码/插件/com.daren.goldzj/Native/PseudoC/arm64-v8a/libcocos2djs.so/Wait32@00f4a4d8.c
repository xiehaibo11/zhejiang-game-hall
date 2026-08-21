
/* v8::internal::FutexEmulation::Wait32(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::JSArrayBuffer>, unsigned long, int, double) */

void v8::internal::FutexEmulation::Wait32(void)

{
  Wait<int>();
  return;
}

