
/* v8::Isolate::SetPromiseHook(void (*)(v8::PromiseHookType, v8::Local<v8::Promise>,
   v8::Local<v8::Value>)) */

void v8::Isolate::SetPromiseHook(_func_void_PromiseHookType_Local_Local *param_1)

{
  _func_void_PromiseHookType_Local_Local *in_x1;
  
  internal::Isolate::SetPromiseHook((Isolate *)param_1,in_x1);
  return;
}

