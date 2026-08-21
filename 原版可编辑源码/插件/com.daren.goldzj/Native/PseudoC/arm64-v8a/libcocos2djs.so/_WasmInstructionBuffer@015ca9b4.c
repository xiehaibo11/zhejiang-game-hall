
/* v8::internal::wasm::WasmInstructionBuffer::~WasmInstructionBuffer() */

void __thiscall
v8::internal::wasm::WasmInstructionBuffer::~WasmInstructionBuffer(WasmInstructionBuffer *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 0x10);
  *(undefined8 *)(this + 0x10) = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  pvVar1 = *(void **)this;
  *(undefined8 *)this = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
    return;
  }
  return;
}

