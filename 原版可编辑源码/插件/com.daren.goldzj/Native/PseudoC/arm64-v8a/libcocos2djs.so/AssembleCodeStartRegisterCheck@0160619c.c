
/* v8::internal::compiler::CodeGenerator::AssembleCodeStartRegisterCheck() */

void __thiscall
v8::internal::compiler::CodeGenerator::AssembleCodeStartRegisterCheck(CodeGenerator *this)

{
  TurboAssembler *this_00;
  long lVar1;
  uint uVar2;
  ulong local_b0;
  undefined4 local_a8;
  CodeGenerator *local_a0;
  CodeGenerator *pCStack_98;
  undefined8 local_90;
  undefined8 local_88;
  Operand local_80 [8];
  undefined1 local_78;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_a0 = this + 0x268;
  pCStack_98 = this + 0x278;
  this_00 = (TurboAssembler *)(this + 0xd0);
  local_90 = *(undefined8 *)(this + 0x268);
  local_88 = *(undefined8 *)(this + 0x278);
  uVar2 = UseScratchRegisterScope::AcquireNextAvailable(local_a0);
  local_b0 = 0x400000003f;
  if (uVar2 != 0x3f) {
    local_b0 = (ulong)uVar2 | 0x4000000000;
  }
  local_a8 = 0;
  TurboAssembler::ComputeCodeStartAddress(this_00,(Register *)&local_b0);
  local_80[0] = (Operand)0x0;
  local_78 = 0;
  local_60 = 0;
  local_58 = 0x13;
  local_50 = 0x4000000002;
  uStack_40 = 0xffffffff;
  local_48 = 0;
  Assembler::cmp((Assembler *)this_00,(Register *)&local_b0,local_80);
  TurboAssembler::Assert(this_00,0,0x34);
  UseScratchRegisterScope::~UseScratchRegisterScope((UseScratchRegisterScope *)&local_a0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

