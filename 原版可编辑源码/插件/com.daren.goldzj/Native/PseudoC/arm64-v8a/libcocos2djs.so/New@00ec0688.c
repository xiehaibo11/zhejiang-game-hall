
/* v8::Context::New(v8::Isolate*, v8::ExtensionConfiguration*, v8::MaybeLocal<v8::ObjectTemplate>,
   v8::MaybeLocal<v8::Value>, v8::DeserializeInternalFieldsCallback, v8::MicrotaskQueue*) */

void v8::Context::New(void)

{
  NewContext();
  return;
}

