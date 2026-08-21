
/* v8::internal::wasm::WasmInstructionBuffer::CreateView() */

void v8::internal::wasm::WasmInstructionBuffer::CreateView(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *in_x0;
  undefined8 *puVar3;
  undefined8 *in_x8;
  
  uVar1 = *in_x0;
  uVar2 = in_x0[1];
  puVar3 = operator_new(0x20);
  puVar3[2] = uVar2;
  puVar3[3] = in_x0;
  *puVar3 = &PTR_FUN_01cc9730;
  puVar3[1] = uVar1;
  *in_x8 = puVar3;
  return;
}

