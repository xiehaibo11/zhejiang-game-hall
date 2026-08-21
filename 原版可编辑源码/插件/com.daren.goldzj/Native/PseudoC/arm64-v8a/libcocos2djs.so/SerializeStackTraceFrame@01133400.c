
/* v8::internal::SerializeStackTraceFrame(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::StackTraceFrame>) */

void v8::internal::SerializeStackTraceFrame(Isolate *param_1,undefined8 param_2)

{
  IncrementalStringBuilder aIStack_48 [40];
  
  IncrementalStringBuilder::IncrementalStringBuilder(aIStack_48,param_1);
  SerializeStackTraceFrame(param_1,param_2,aIStack_48);
  IncrementalStringBuilder::Finish(aIStack_48);
  return;
}

