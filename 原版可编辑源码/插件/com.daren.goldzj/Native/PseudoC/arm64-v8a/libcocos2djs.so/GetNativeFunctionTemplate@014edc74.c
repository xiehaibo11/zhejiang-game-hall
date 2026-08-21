
/* v8::internal::GCExtension::GetNativeFunctionTemplate(v8::Isolate*, v8::Local<v8::String>) */

void v8::internal::GCExtension::GetNativeFunctionTemplate(undefined8 param_1,undefined8 param_2)

{
  FunctionTemplate::New(param_2,GC,0,0,0,1,0);
  return;
}

