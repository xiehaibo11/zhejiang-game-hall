
/* v8::Isolate::SetAllowWasmCodeGenerationCallback(bool (*)(v8::Local<v8::Context>,
   v8::Local<v8::String>)) */

void __thiscall
v8::Isolate::SetAllowWasmCodeGenerationCallback(Isolate *this,_func_bool_Local_Local *param_1)

{
  *(_func_bool_Local_Local **)(this + 0xb760) = param_1;
  return;
}

