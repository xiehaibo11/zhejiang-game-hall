
/* v8::Isolate::SetWasmModuleCallback(bool (*)(v8::FunctionCallbackInfo<v8::Value> const&)) */

void __thiscall
v8::Isolate::SetWasmModuleCallback(Isolate *this,_func_bool_FunctionCallbackInfo_ptr *param_1)

{
  *(_func_bool_FunctionCallbackInfo_ptr **)(this + 0xb768) = param_1;
  return;
}

