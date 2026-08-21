
/* v8::internal::wasm::WasmInterpreter::Thread::GetFrame(int) */

void v8::internal::wasm::WasmInterpreter::Thread::GetFrame(int param_1)

{
  ulong *puVar1;
  undefined4 in_w1;
  undefined8 *in_x8;
  
  puVar1 = operator_new(0x10);
  *puVar1 = (ulong)(uint)param_1;
  *(undefined4 *)(puVar1 + 1) = in_w1;
  *in_x8 = puVar1;
  return;
}

