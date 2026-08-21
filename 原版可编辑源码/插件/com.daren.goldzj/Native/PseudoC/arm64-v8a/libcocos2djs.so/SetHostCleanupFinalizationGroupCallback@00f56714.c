
/* v8::internal::Isolate::SetHostCleanupFinalizationGroupCallback(void (*)(v8::Local<v8::Context>,
   v8::Local<v8::FinalizationGroup>)) */

void __thiscall
v8::internal::Isolate::SetHostCleanupFinalizationGroupCallback
          (Isolate *this,_func_void_Local_Local *param_1)

{
  *(_func_void_Local_Local **)(this + 0xb670) = param_1;
  return;
}

