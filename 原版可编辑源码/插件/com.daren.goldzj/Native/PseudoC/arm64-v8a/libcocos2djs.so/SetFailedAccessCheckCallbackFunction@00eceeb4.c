
/* v8::Isolate::SetFailedAccessCheckCallbackFunction(void (*)(v8::Local<v8::Object>, v8::AccessType,
   v8::Local<v8::Value>)) */

void v8::Isolate::SetFailedAccessCheckCallbackFunction(_func_void_Local_AccessType_Local *param_1)

{
  _func_void_Local_AccessType_Local *in_x1;
  
  internal::Isolate::SetFailedAccessCheckCallback((Isolate *)param_1,in_x1);
  return;
}

