
void FUN_0127e600(TurboAssembler *param_1,int param_2,ulong *param_3,int param_4)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong local_150;
  undefined4 local_148;
  ulong local_140;
  ulong uStack_138;
  TurboAssembler *local_130;
  TurboAssembler *pTStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined1 local_110 [8];
  undefined1 local_108;
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
  local_130 = param_1 + 0x198;
  pTStack_128 = param_1 + 0x1a8;
  local_120 = *(undefined8 *)(param_1 + 0x198);
  local_118 = *(undefined8 *)(param_1 + 0x1a8);
  uStack_138 = param_3[1];
  local_140 = *param_3;
  iVar3 = (int)param_3[1];
  iVar4 = iVar3 + 7;
  if (-1 < iVar3) {
    iVar4 = iVar3;
  }
  uVar2 = v8::internal::UseScratchRegisterScope::AcquireNextAvailable(local_130);
  local_e8 = 0x13;
  local_150 = 0x400000003f;
  if (uVar2 != 0x3f) {
    local_150 = (ulong)uVar2 | 0x4000000000;
  }
  local_f0 = (long)param_4;
  local_148 = 0;
  local_110[0] = 0;
  local_108 = 0;
  local_e0 = 0xffffffff;
  local_d8 = 2;
  if (param_4 < 0) {
    lVar9 = -local_f0;
    uVar5 = v8::internal::Assembler::IsImmAddSub(lVar9);
    if ((uVar5 & 1) != 0) {
      local_c8 = local_c8 & 0xffffffffffffff00;
      local_c0 = local_c0 & 0xffffff00;
      local_98 = 0xffffffff;
      local_a0 = CONCAT71(local_a0._1_7_,0x13);
      local_90 = 2;
      puVar6 = &local_c8;
      uVar7 = 0x40000000;
      local_a8 = lVar9;
      goto LAB_0127e73c;
    }
  }
  puVar6 = (ulong *)local_110;
  uVar7 = 0;
LAB_0127e73c:
  v8::internal::TurboAssembler::AddSubMacro(param_1,&local_150,&DAT_019f42b4,puVar6,0,uVar7);
  lVar9 = (long)param_2;
  local_110[0] = 0;
  local_108 = 0;
  local_e0 = 0xffffffff;
  local_e8 = 0x13;
  local_d8 = 2;
  local_f0 = lVar9;
  if ((param_2 < 0) && (uVar5 = v8::internal::Assembler::IsImmAddSub(-lVar9), (uVar5 & 1) != 0)) {
    local_a8 = -local_f0;
    local_c8 = local_c8 & 0xffffffffffffff00;
    local_c0 = local_c0 & 0xffffff00;
    local_98 = 0xffffffff;
    local_a0 = CONCAT71(local_a0._1_7_,0x13);
    local_90 = 2;
    puVar6 = &local_c8;
    uVar7 = 0x40000000;
  }
  else {
    puVar6 = (ulong *)local_110;
    uVar7 = 0;
  }
  v8::internal::TurboAssembler::AddSubMacro(param_1,&DAT_019f42c0,&DAT_019f42c0,puVar6,0,uVar7);
  iVar3 = v8::internal::CountSetBits(*param_3,0x40);
  if (0 < iVar3) {
    uVar2 = iVar4 >> 3;
    lVar8 = 0;
    lVar10 = 0;
    do {
      local_c8 = local_150;
      local_c0 = local_148;
      local_b4 = 2;
      local_bc = 0xffffffff;
      local_a8 = 0xffffffff00000000;
      local_a0 = 0xffffffff;
      local_b0 = lVar8;
      v8::internal::TurboAssembler::LoadStorePairMacro
                (param_1,&DAT_019f4290,&DAT_019f4284,&local_c8,0x80400000);
      iVar4 = v8::internal::CPURegList::PopLowestIndex((CPURegList *)&local_140);
      iVar3 = v8::internal::CPURegList::PopLowestIndex((CPURegList *)&local_140);
      local_b0 = (long)(int)(uVar2 * iVar4);
      if (uVar2 * iVar3 == uVar2 * iVar4 + uVar2) {
        local_c8 = 0x4000000001;
        local_c0 = 0;
        local_b4 = 2;
        local_bc = 0xffffffff;
        local_a8 = -0x100000000;
        local_a0 = 0xffffffff;
        v8::internal::TurboAssembler::LoadStorePairMacro
                  (param_1,&DAT_019f4290,&DAT_019f4284,&local_c8,0x80000000);
      }
      else {
        local_c8 = 0x4000000001;
        local_c0 = 0;
        local_b4 = 2;
        local_bc = 0xffffffff;
        local_a8 = 0xffffffff00000000;
        local_a0 = 0xffffffff;
        v8::internal::TurboAssembler::LoadStoreMacro(param_1,&DAT_019f4290,&local_c8,0xc0000000);
        local_b0 = (long)(int)(uVar2 * iVar3);
        local_c8 = 0x4000000001;
        local_c0 = 0;
        local_bc = 0xffffffff;
        local_b4 = 2;
        local_a8 = -0x100000000;
        local_a0 = 0xffffffff;
        v8::internal::TurboAssembler::LoadStoreMacro(param_1,&DAT_019f4284,&local_c8,0xc0000000);
      }
      lVar10 = lVar10 + 2;
      iVar4 = v8::internal::CountSetBits(*param_3,0x40);
      lVar8 = lVar8 + (-(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1);
    } while (lVar10 < iVar4);
  }
  local_e8 = 0x13;
  local_110[0] = 0;
  local_108 = 0;
  local_e0 = 0xffffffff;
  local_d8 = 2;
  local_f0 = lVar9;
  if ((param_2 < 0) && (uVar5 = v8::internal::Assembler::IsImmAddSub(-lVar9), (uVar5 & 1) != 0)) {
    local_a8 = -local_f0;
    local_c8 = local_c8 & 0xffffffffffffff00;
    local_c0 = local_c0 & 0xffffff00;
    local_98 = 0xffffffff;
    local_a0 = CONCAT71(local_a0._1_7_,0x13);
    local_90 = 2;
    puVar6 = &local_c8;
    uVar7 = 0;
  }
  else {
    puVar6 = (ulong *)local_110;
    uVar7 = 0x40000000;
  }
  v8::internal::TurboAssembler::AddSubMacro(param_1,&DAT_019f42c0,&DAT_019f42c0,puVar6,0,uVar7);
  v8::internal::UseScratchRegisterScope::~UseScratchRegisterScope
            ((UseScratchRegisterScope *)&local_130);
  if (*(long *)(lVar1 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

