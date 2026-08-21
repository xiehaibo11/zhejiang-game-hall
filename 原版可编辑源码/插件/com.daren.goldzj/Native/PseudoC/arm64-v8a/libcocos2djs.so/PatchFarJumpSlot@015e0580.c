
/* v8::internal::wasm::JumpTableAssembler::PatchFarJumpSlot(unsigned long, unsigned long) */

void v8::internal::wasm::JumpTableAssembler::PatchFarJumpSlot(ulong param_1,ulong param_2)

{
  *(ulong *)(param_1 + 8) = param_2;
  return;
}

