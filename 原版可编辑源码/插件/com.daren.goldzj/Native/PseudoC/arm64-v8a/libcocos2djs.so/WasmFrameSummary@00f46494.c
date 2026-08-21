
/* v8::internal::FrameSummary::WasmFrameSummary::WasmFrameSummary(v8::internal::Isolate*,
   v8::internal::FrameSummary::Kind, v8::internal::Handle<v8::internal::WasmInstanceObject>, bool)
    */

void __thiscall
v8::internal::FrameSummary::WasmFrameSummary::WasmFrameSummary
          (WasmFrameSummary *this,undefined8 param_1,undefined4 param_3,undefined8 param_4,
          byte param_5)

{
  *(undefined8 *)this = param_1;
  *(undefined4 *)(this + 8) = param_3;
  *(undefined8 *)(this + 0x10) = param_4;
  this[0x18] = (WasmFrameSummary)(param_5 & 1);
  return;
}

