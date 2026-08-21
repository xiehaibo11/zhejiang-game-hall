
/* v8::internal::wasm::JumpTableAssembler::EmitFarJumpSlot(unsigned long) */

void __thiscall
v8::internal::wasm::JumpTableAssembler::EmitFarJumpSlot(JumpTableAssembler *this,ulong param_1)

{
  Assembler::ldr_pcrel((Assembler *)this,(CPURegister *)&DAT_01a54280,2);
  Assembler::br((Assembler *)this,(Register *)&DAT_01a54280);
  Assembler::dc64((Assembler *)this,param_1);
  return;
}

