
/* v8::V8::Dispose() */

undefined8 v8::V8::Dispose(void)

{
  internal::V8::TearDown();
  return 1;
}

