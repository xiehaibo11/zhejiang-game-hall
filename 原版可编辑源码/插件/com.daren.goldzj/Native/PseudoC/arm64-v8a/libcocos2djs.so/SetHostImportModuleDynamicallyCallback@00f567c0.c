
/* v8::internal::Isolate::SetHostImportModuleDynamicallyCallback(v8::MaybeLocal<v8::Promise>
   (*)(v8::Local<v8::Context>, v8::Local<v8::ScriptOrModule>, v8::Local<v8::String>)) */

void __thiscall
v8::internal::Isolate::SetHostImportModuleDynamicallyCallback
          (Isolate *this,_func_MaybeLocal_Local_Local_Local *param_1)

{
  *(_func_MaybeLocal_Local_Local_Local **)(this + 0xb678) = param_1;
  return;
}

