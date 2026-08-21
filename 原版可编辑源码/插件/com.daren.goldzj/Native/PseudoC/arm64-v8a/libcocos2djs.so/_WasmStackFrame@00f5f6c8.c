
/* v8::internal::WasmStackFrame::~WasmStackFrame() */

void __thiscall v8::internal::WasmStackFrame::~WasmStackFrame(WasmStackFrame *this)

{
  operator_delete(this);
  return;
}

