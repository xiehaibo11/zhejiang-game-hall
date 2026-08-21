
/* v8::Isolate::SetWasmInstanceCallback(bool (*)(v8::FunctionCallbackInfo<v8::Value> const&)) */

void __thiscall
v8::Isolate::SetWasmInstanceCallback(Isolate *this,_func_bool_FunctionCallbackInfo_ptr *param_1)

{
  *(_func_bool_FunctionCallbackInfo_ptr **)(this + 0xb770) = param_1;
  return;
}

