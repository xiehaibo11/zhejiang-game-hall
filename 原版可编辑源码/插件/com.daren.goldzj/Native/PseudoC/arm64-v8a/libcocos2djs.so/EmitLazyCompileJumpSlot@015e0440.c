
/* v8::internal::wasm::JumpTableAssembler::EmitLazyCompileJumpSlot(unsigned int, unsigned long) */

void __thiscall
v8::internal::wasm::JumpTableAssembler::EmitLazyCompileJumpSlot
          (JumpTableAssembler *this,uint param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  
  iVar1 = *(int *)(this + 0x20);
  iVar2 = *(int *)(this + 0x10);
  local_38 = 0;
  local_40 = 0x2000000008;
  TurboAssembler::Mov((TurboAssembler *)this,(Register *)&local_40,(ulong)param_1);
  TurboAssembler::Jump(this,param_2,0x13,0xe);
  if ((iVar1 - iVar2) + 0xc != *(int *)(this + 0x20) - *(int *)(this + 0x10)) {
    Assembler::hint((Assembler *)this,0);
  }
  return;
}

