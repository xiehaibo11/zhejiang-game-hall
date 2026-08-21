
/* v8::internal::compiler::CodeGenerator::AssembleRegisterArgumentPoisoning() */

void __thiscall
v8::internal::compiler::CodeGenerator::AssembleRegisterArgumentPoisoning(CodeGenerator *this)

{
  TurboAssembler *pTVar1;
  long lVar2;
  uint uVar3;
  ulong local_b0;
  undefined4 local_a8;
  CodeGenerator *local_a0;
  CodeGenerator *pCStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 local_80 [8];
  undefined1 local_78;
  undefined8 local_60;
  undefined1 local_58;
  ulong local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_a0 = this + 0x268;
  pCStack_98 = this + 0x278;
  pTVar1 = (TurboAssembler *)(this + 0xd0);
  local_90 = *(undefined8 *)(this + 0x268);
  local_88 = *(undefined8 *)(this + 0x278);
  uVar3 = UseScratchRegisterScope::AcquireNextAvailable(local_a0);
  local_b0 = 0x400000003f;
  if (uVar3 != 0x3f) {
    local_b0 = (ulong)uVar3 | 0x4000000000;
  }
  local_a8 = 0;
  local_80[0] = 0;
  local_78 = 0;
  local_60 = 0;
  local_58 = 0x13;
  local_50 = 0x400000003f;
  uStack_40 = 0xffffffff;
  uStack_3c = 0;
  local_48 = 0;
  uStack_44 = 0;
  TurboAssembler::Mov(pTVar1,&local_b0,local_80,0);
  local_80[0] = 0;
  local_78 = 0;
  local_60 = 0;
  local_58 = 0x13;
  local_50 = 0x4000000017;
  uStack_40 = 0xffffffff;
  uStack_3c = 0;
  local_48 = 0;
  uStack_44 = 0;
  TurboAssembler::LogicalMacro(pTVar1,&DAT_01a563c4,&DAT_01a563c4,local_80,0);
  local_80[0] = 0;
  local_78 = 0;
  local_60 = 0;
  local_58 = 0x13;
  local_50 = 0x4000000017;
  uStack_40 = 0xffffffff;
  uStack_3c = 0;
  local_48 = 0;
  uStack_44 = 0;
  TurboAssembler::LogicalMacro(pTVar1,&DAT_01a563d0,&DAT_01a563d0,local_80,0);
  local_80[0] = 0;
  local_78 = 0;
  local_60 = 0;
  local_58 = 0x13;
  local_50 = 0x4000000017;
  uStack_40 = 0xffffffff;
  uStack_3c = 0;
  local_48 = 0;
  uStack_44 = 0;
  TurboAssembler::LogicalMacro(pTVar1,&local_b0,&local_b0,local_80,0);
  local_80[0] = 0;
  local_78 = 0;
  local_60 = 0;
  local_58 = 0x13;
  uStack_44 = 0;
  uStack_40 = 0xffffffff;
  local_50 = local_b0;
  local_48 = local_a8;
  uStack_3c = 0;
  TurboAssembler::Mov(pTVar1,&DAT_01a56370,local_80,0);
  UseScratchRegisterScope::~UseScratchRegisterScope((UseScratchRegisterScope *)&local_a0);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

