
/* v8::internal::FrameSummary::WasmInterpretedFrameSummary::WasmInterpretedFrameSummary(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::WasmInstanceObject>, unsigned int, int) */

void __thiscall
v8::internal::FrameSummary::WasmInterpretedFrameSummary::WasmInterpretedFrameSummary
          (WasmInterpretedFrameSummary *this,undefined8 param_1,undefined8 param_3,
          undefined4 param_4,undefined4 param_5)

{
  *(undefined8 *)this = param_1;
  *(undefined8 *)(this + 0x10) = param_3;
  this[0x18] = (WasmInterpretedFrameSummary)0x0;
  *(undefined4 *)(this + 8) = 2;
  *(undefined4 *)(this + 0x1c) = param_4;
  *(undefined4 *)(this + 0x20) = param_5;
  return;
}

