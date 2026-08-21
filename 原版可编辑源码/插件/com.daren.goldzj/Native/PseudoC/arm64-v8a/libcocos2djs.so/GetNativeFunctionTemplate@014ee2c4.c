
/* v8::internal::IgnitionStatisticsExtension::GetNativeFunctionTemplate(v8::Isolate*,
   v8::Local<v8::String>) */

void v8::internal::IgnitionStatisticsExtension::GetNativeFunctionTemplate
               (undefined8 param_1,undefined8 param_2)

{
  FunctionTemplate::New(param_2,GetIgnitionDispatchCounters,0,0,0,1,0);
  return;
}

