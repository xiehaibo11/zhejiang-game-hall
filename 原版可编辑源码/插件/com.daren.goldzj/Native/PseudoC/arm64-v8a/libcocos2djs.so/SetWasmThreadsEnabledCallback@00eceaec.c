
/* v8::Isolate::SetWasmThreadsEnabledCallback(bool (*)(v8::Local<v8::Context>)) */

void __thiscall v8::Isolate::SetWasmThreadsEnabledCallback(Isolate *this,_func_bool_Local *param_1)

{
  *(_func_bool_Local **)(this + 0xb780) = param_1;
  return;
}

