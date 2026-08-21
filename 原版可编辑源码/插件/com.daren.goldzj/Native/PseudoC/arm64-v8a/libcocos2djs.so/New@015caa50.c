
/* v8::internal::wasm::WasmInstructionBuffer::New(unsigned long) */

void __thiscall
v8::internal::wasm::WasmInstructionBuffer::New(WasmInstructionBuffer *this,ulong param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 *in_x8;
  
  puVar1 = operator_new(0x20);
  if (this < (WasmInstructionBuffer *)0x81) {
    this = (WasmInstructionBuffer *)0x80;
  }
  pvVar2 = operator_new__((ulong)this);
  *puVar1 = pvVar2;
  puVar1[1] = this;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *in_x8 = puVar1;
  return;
}

