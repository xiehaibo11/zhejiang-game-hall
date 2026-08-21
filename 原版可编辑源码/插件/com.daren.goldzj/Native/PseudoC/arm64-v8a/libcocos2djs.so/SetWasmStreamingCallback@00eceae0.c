
/* v8::Isolate::SetWasmStreamingCallback(void (*)(v8::FunctionCallbackInfo<v8::Value> const&)) */

void __thiscall
v8::Isolate::SetWasmStreamingCallback(Isolate *this,_func_void_FunctionCallbackInfo_ptr *param_1)

{
  *(_func_void_FunctionCallbackInfo_ptr **)(this + 0xb778) = param_1;
  return;
}

