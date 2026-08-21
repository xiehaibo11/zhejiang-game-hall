
/* v8::internal::compiler::CodeGenerator::GenerateSpeculationPoisonFromCodeStartRegister() */

void __thiscall
v8::internal::compiler::CodeGenerator::GenerateSpeculationPoisonFromCodeStartRegister
          (CodeGenerator *this)

{
  TurboAssembler *this_00;
  long lVar1;
  uint uVar2;
  ulong local_a0;
  undefined4 local_98;
  CodeGenerator *local_90;
  CodeGenerator *pCStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70 [8];
  undefined1 local_68;
  undefined8 local_50;
  undefined1 local_48;
  ulong local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_90 = this + 0x268;
  pCStack_88 = this + 0x278;
  this_00 = (TurboAssembler *)(this + 0xd0);
  local_80 = *(undefined8 *)(this + 0x268);
  local_78 = *(undefined8 *)(this + 0x278);
  uVar2 = UseScratchRegisterScope::AcquireNextAvailable(local_90);
  local_a0 = 0x400000003f;
  if (uVar2 != 0x3f) {
    local_a0 = (ulong)uVar2 | 0x4000000000;
  }
  local_98 = 0;
  TurboAssembler::ComputeCodeStartAddress(this_00,(Register *)&local_a0);
  local_70[0] = 0;
  local_68 = 0;
  local_50 = 0;
  local_48 = 0x13;
  local_34 = 0xffffffff00000000;
  local_40 = local_a0;
  local_38 = local_98;
  local_2c = 0;
  TurboAssembler::AddSubMacro(this_00,&DAT_01a5640c,&DAT_01a563ac,local_70,1,0x40000000);
  Assembler::csetm((Assembler *)this_00,&DAT_01a563b8,0);
  Assembler::csdb((Assembler *)this_00);
  UseScratchRegisterScope::~UseScratchRegisterScope((UseScratchRegisterScope *)&local_90);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

