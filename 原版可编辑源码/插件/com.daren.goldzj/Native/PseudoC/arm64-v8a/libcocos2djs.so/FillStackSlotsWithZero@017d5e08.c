
/* v8::internal::wasm::LiftoffAssembler::FillStackSlotsWithZero(unsigned int, unsigned int) */

void __thiscall
v8::internal::wasm::LiftoffAssembler::FillStackSlotsWithZero
          (LiftoffAssembler *this,uint param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  undefined8 local_148;
  ulong local_140;
  uint local_138;
  LiftoffAssembler *local_130;
  LiftoffAssembler *pLStack_128;
  undefined8 local_120;
  undefined8 local_118;
  ulong local_110;
  uint local_108;
  long local_f0;
  undefined1 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  ulong local_c8;
  uint local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  long local_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  long local_80;
  
  lVar1 = tpidr_el0;
  local_80 = *(long *)(lVar1 + 0x28);
  uVar3 = (param_2 + param_1) * 8;
  uVar7 = (ulong)param_2;
  if (*(uint *)(this + 0x340) <= uVar3) {
    *(uint *)(this + 0x340) = uVar3;
  }
  if ((param_2 < 0xd) &&
     (uVar4 = Assembler::IsImmLSPair((long)(int)((param_2 + param_1) * -8 + -0x10),3),
     (uVar4 & 1) != 0)) {
    if (1 < param_2) {
      iVar9 = (param_2 + param_1) * -8 + -0x10;
      do {
        local_b0 = (long)iVar9;
        local_c8 = 0x400000001d;
        local_c0 = 0;
        local_b4 = 2;
        local_bc = 0xffffffff;
        local_a8 = -0x100000000;
        local_a0 = 0xffffffff;
        Assembler::stp((Assembler *)this,(CPURegister *)&DAT_01a63d28,(CPURegister *)&DAT_01a63d28,
                       (MemOperand *)&local_c8);
        param_2 = (int)uVar7 - 2;
        uVar7 = (ulong)param_2;
        iVar9 = iVar9 + 0x10;
      } while (1 < param_2);
    }
    if (param_2 != 0) {
      local_b0 = (long)(int)(param_1 * -8 + -0x18);
      local_b4 = 2;
      local_c8 = 0x400000001d;
      local_c0 = 0;
      local_bc = 0xffffffff;
      local_a8 = -0x100000000;
      local_a0 = 0xffffffff;
      Assembler::str((CPURegister *)this,(MemOperand *)&DAT_01a63d28);
    }
    goto LAB_017d6120;
  }
  local_130 = this + 0x198;
  pLStack_128 = this + 0x1a8;
  local_120 = *(undefined8 *)(this + 0x198);
  local_118 = *(undefined8 *)(this + 0x1a8);
  uVar2 = UseScratchRegisterScope::AcquireNextAvailable(local_130);
  local_e8 = 0x13;
  local_140 = 0x400000003f;
  if (uVar2 != 0x3f) {
    local_140 = (ulong)uVar2 | 0x4000000000;
  }
  local_f0 = (long)(int)(uVar3 + 0x10);
  local_138 = 0;
  local_110 = local_110 & 0xffffffffffffff00;
  local_108 = local_108 & 0xffffff00;
  local_e0 = 0xffffffff;
  local_d8 = 2;
  if ((int)(uVar3 + 0x10) < 0) {
    lVar8 = -local_f0;
    uVar4 = Assembler::IsImmAddSub(lVar8);
    if ((uVar4 & 1) == 0) goto LAB_017d602c;
    local_c8 = local_c8 & 0xffffffffffffff00;
    local_c0 = local_c0 & 0xffffff00;
    local_98 = 0xffffffff;
    local_a0 = CONCAT71(local_a0._1_7_,0x13);
    local_90 = 2;
    puVar5 = &local_c8;
    uVar6 = 0;
    local_a8 = lVar8;
  }
  else {
LAB_017d602c:
    puVar5 = &local_110;
    uVar6 = 0x40000000;
  }
  TurboAssembler::AddSubMacro((TurboAssembler *)this,&local_140,&DAT_01a63d1c,puVar5,0,uVar6);
  uVar3 = UseScratchRegisterScope::AcquireNextAvailable(local_130);
  local_110 = 0x400000003f;
  if (uVar3 != 0x3f) {
    local_110 = (ulong)uVar3 | 0x4000000000;
  }
  local_108 = 0;
  TurboAssembler::Mov((TurboAssembler *)this,(Register *)&local_110,uVar7);
  local_148 = 0;
  Assembler::bind((Label *)this);
  local_c8 = local_c8 & 0xffffffffffffff00;
  local_c0 = local_c0 & 0xffffff00;
  local_98 = 0xffffffff;
  local_a8 = 1;
  local_a0 = CONCAT71(local_a0._1_7_,0x13);
  local_90 = 2;
  Assembler::sub((Register *)this,(Register *)&local_110,(Operand *)&local_110);
  local_c8 = local_140;
  local_b4 = 2;
  local_c0 = local_138;
  local_bc = 0xffffffff;
  local_b0 = 8;
  local_a8 = -0xfffffffe;
  local_a0 = 0xffffffff;
  Assembler::str((CPURegister *)this,(MemOperand *)&DAT_01a63d28);
  Assembler::cbnz((Assembler *)this,(Register *)&local_110,(Label *)&local_148);
  UseScratchRegisterScope::~UseScratchRegisterScope((UseScratchRegisterScope *)&local_130);
LAB_017d6120:
  if (*(long *)(lVar1 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

