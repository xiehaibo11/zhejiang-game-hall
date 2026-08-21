
/* v8::internal::CpuTraceMarkExtension::GetNativeFunctionTemplate(v8::Isolate*,
   v8::Local<v8::String>) */

void v8::internal::CpuTraceMarkExtension::GetNativeFunctionTemplate
               (undefined8 param_1,undefined8 param_2)

{
  FunctionTemplate::New(param_2,Mark,0,0,0,1,0);
  return;
}

