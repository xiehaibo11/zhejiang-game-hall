
/* v8::internal::wasm::WasmInstructionBuffer::ReleaseBuffer() */

void v8::internal::wasm::WasmInstructionBuffer::ReleaseBuffer(void)

{
  undefined8 *in_x0;
  undefined8 *in_x8;
  undefined8 uVar1;
  
  uVar1 = *in_x0;
  *in_x0 = 0;
  in_x0[1] = 0;
  *in_x8 = uVar1;
  return;
}

