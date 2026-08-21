
/* v8::internal::Isolate::SetHostInitializeImportMetaObjectCallback(void (*)(v8::Local<v8::Context>,
   v8::Local<v8::Module>, v8::Local<v8::Object>)) */

void __thiscall
v8::internal::Isolate::SetHostInitializeImportMetaObjectCallback
          (Isolate *this,_func_void_Local_Local_Local *param_1)

{
  *(_func_void_Local_Local_Local **)(this + 0xb680) = param_1;
  return;
}

