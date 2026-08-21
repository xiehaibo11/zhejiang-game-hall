
/* v8::internal::V8::Initialize() */

undefined8 v8::internal::V8::Initialize(void)

{
  InitializeOncePerProcess();
  return 1;
}

