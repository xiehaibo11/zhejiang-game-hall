
/* v8::internal::compiler::InstructionOperand::InterferesWith(v8::internal::compiler::InstructionOperand
   const&) const */

bool __thiscall
v8::internal::compiler::InstructionOperand::InterferesWith
          (InstructionOperand *this,InstructionOperand *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(ulong *)this;
  if (((uint)uVar2 >> 2 & 1) != 0) {
    uVar3 = 0x180;
    if (((uint)uVar2 >> 5 & 0xff) < 0xb || (uVar2 & 0x1c) != 4) {
      uVar3 = 0;
    }
    uVar2 = uVar2 & 0xffffffffffffe018 | uVar3 | 4;
  }
  uVar3 = *(ulong *)param_1;
  if (((uint)uVar3 >> 2 & 1) != 0) {
    uVar1 = 0x180;
    if (((uint)uVar3 >> 5 & 0xff) < 0xb || (uVar3 & 0x1c) != 4) {
      uVar1 = 0;
    }
    uVar3 = uVar3 & 0xffffffffffffe018 | uVar1 | 4;
  }
  return uVar2 == uVar3;
}

