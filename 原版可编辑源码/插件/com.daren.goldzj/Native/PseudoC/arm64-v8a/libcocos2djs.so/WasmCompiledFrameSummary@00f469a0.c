
/* v8::internal::FrameSummary::WasmCompiledFrameSummary::WasmCompiledFrameSummary(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::WasmInstanceObject>, v8::internal::wasm::WasmCode*, int, bool)
    */

void __thiscall
v8::internal::FrameSummary::WasmCompiledFrameSummary::WasmCompiledFrameSummary
          (WasmCompiledFrameSummary *this,undefined8 param_1,undefined8 param_3,undefined8 param_4,
          undefined4 param_5,byte param_6)

{
  *(undefined8 *)this = param_1;
  *(undefined8 *)(this + 0x10) = param_3;
  *(undefined8 *)(this + 0x20) = param_4;
  *(undefined4 *)(this + 8) = 1;
  this[0x18] = (WasmCompiledFrameSummary)(param_6 & 1);
  *(undefined4 *)(this + 0x28) = param_5;
  return;
}

