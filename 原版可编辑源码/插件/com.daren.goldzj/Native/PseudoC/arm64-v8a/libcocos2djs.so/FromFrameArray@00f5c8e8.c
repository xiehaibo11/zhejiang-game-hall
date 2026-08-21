
/* v8::internal::AsmJsWasmStackFrame::FromFrameArray(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::FrameArray>, int) */

void __thiscall
v8::internal::AsmJsWasmStackFrame::FromFrameArray
          (AsmJsWasmStackFrame *this,undefined8 param_2,long *param_3,int param_4)

{
  WasmStackFrame::FromFrameArray();
  this[0x2c] = (AsmJsWasmStackFrame)
               ((byte)(*(uint *)(*param_3 + (long)(int)((param_4 * 0x18 | 4U) + 0x10) + 7) >> 6) & 1
               );
  return;
}

