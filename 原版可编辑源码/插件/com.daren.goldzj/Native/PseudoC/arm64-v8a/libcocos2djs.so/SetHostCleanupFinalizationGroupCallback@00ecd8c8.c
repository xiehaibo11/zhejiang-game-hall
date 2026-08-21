
/* v8::Isolate::SetHostCleanupFinalizationGroupCallback(void (*)(v8::Local<v8::Context>,
   v8::Local<v8::FinalizationGroup>)) */

void __thiscall
v8::Isolate::SetHostCleanupFinalizationGroupCallback(Isolate *this,_func_void_Local_Local *param_1)

{
  internal::Isolate::SetHostCleanupFinalizationGroupCallback((Isolate *)this,param_1);
  return;
}

