
/* WARNING: Type propagation algorithm not settling */
/* v8::internal::TurboAssembler::Printf(char const*, v8::internal::CPURegister,
   v8::internal::CPURegister, v8::internal::CPURegister, v8::internal::CPURegister) */

void v8::internal::TurboAssembler::Printf
               (Assembler *param_1,char *param_2,ulong param_3,int param_4,ulong param_5,int param_6
               ,ulong param_7,int param_8,ulong param_9,int param_10)

{
  CPURegList *this;
  int iVar1;
  ulong uVar2;
  long lVar3;
  bool bVar4;
  undefined4 uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  int extraout_var;
  Assembler **ppAVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  int iVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [12];
  undefined8 local_160;
  undefined4 local_158;
  undefined1 local_150 [16];
  ulong local_140;
  int local_138;
  ulong local_130;
  int local_128;
  undefined8 local_120;
  int local_118;
  undefined8 local_110;
  int local_108;
  Assembler *local_100;
  BlockScope local_f8 [24];
  long local_e0;
  undefined1 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  Assembler *local_b8;
  uint local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  long local_a0;
  long local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  local_140 = param_9;
  local_138 = param_10;
  uVar16 = *(undefined8 *)(param_1 + 0x198);
  *(undefined8 *)(param_1 + 0x198) = 0;
  uVar17 = *(undefined8 *)(param_1 + 0x1a8);
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  local_130 = param_7;
  local_128 = param_8;
  local_120 = param_5;
  local_118 = param_6;
  local_110 = param_3;
  local_108 = param_4;
  local_150 = CPURegList::GetCallerSaved(0x40);
  CPURegList::Align((CPURegList *)local_150);
  PushCPURegList(param_1,local_150._0_8_,local_150._8_8_);
  auVar24 = CPURegList::GetCallerSavedV(0x40);
  PushCPURegList(param_1,auVar24._0_8_,auVar24._8_8_);
  uVar15 = local_150._0_8_;
  uVar5 = local_150._12_4_;
  uVar12 = CPURegList::GetCallerSavedV(0x40);
  uVar20 = 1L << (param_5 & 0x3f);
  uVar21 = 1L << (param_7 & 0x3f);
  uVar22 = 1L << (param_9 & 0x3f);
  uVar13 = 0xffffffffffffffff;
  if (param_4 != 2 && uVar5 == param_4) {
    uVar13 = ~(1L << (param_3 & 0x3f));
  }
  uVar19 = ~uVar20;
  uVar2 = 0xffffffffffffffff;
  if (param_6 != 2 && uVar5 == param_6) {
    uVar2 = ~uVar20;
  }
  uVar18 = ~uVar21;
  uVar20 = 0xffffffffffffffff;
  if (param_8 != 2 && uVar5 == param_8) {
    uVar20 = ~uVar21;
  }
  uVar21 = 0xffffffffffffffff;
  if (param_10 != 2 && uVar5 == param_10) {
    uVar21 = ~uVar22;
  }
  this = (CPURegList *)(param_1 + 0x198);
  uVar22 = ~uVar22;
  uVar21 = uVar13 & uVar15 & uVar2 & uVar20 & uVar21;
  if ((param_4 != 2) && (param_4 == extraout_var)) {
    uVar12 = uVar12 & (1L << (local_110 & 0x3f) ^ 0xffffffffffffffffU);
  }
  if (param_6 != extraout_var) {
    uVar19 = 0xffffffffffffffff;
  }
  if (param_6 == 2) {
    uVar19 = 0xffffffffffffffff;
  }
  if (param_8 != extraout_var) {
    uVar18 = 0xffffffffffffffff;
  }
  if (param_8 == 2) {
    uVar18 = 0xffffffffffffffff;
  }
  if (param_10 != extraout_var) {
    uVar22 = 0xffffffffffffffff;
  }
  if (param_10 == 2) {
    uVar22 = 0xffffffffffffffff;
  }
  uVar22 = uVar12 & uVar19 & uVar18 & uVar22;
  *(ulong *)(param_1 + 0x198) = uVar21;
  *(ulong *)(param_1 + 0x1a8) = uVar22;
  bVar6 = (int)param_5 == 0x3f;
  bVar4 = param_4 == 0 && ((int)param_3 == 0x3f && (int)local_110 != -1);
  bVar7 = (int)param_7 == 0x3f;
  bVar8 = (int)param_9 == 0x3f;
  if ((((bVar4) || (param_6 == 0 && bVar6)) || (param_8 == 0 && bVar7)) ||
     (uVar13 = uVar21, uVar12 = uVar22, param_10 == 0 && bVar8)) {
    if (uVar21 == 0) goto LAB_0127c630;
    uVar9 = CPURegList::PopLowestIndex(this);
    local_160 = (Assembler *)0x400000003f;
    if (uVar9 != 0x3f) {
      local_160 = (Assembler *)((ulong)uVar9 | 0x4000000000);
    }
    iVar23 = local_150._8_4_ + 7;
    if (-1 < (int)local_150._8_4_) {
      iVar23 = local_150._8_4_;
    }
    local_158 = 0;
    iVar10 = CountSetBits(local_150._0_8_,0x40);
    auVar25 = CPURegList::GetCallerSavedV(0x40);
    iVar11 = auVar25._8_4_;
    iVar1 = iVar11 + 7;
    if (-1 < iVar11) {
      iVar1 = iVar11;
    }
    iVar11 = CountSetBits(auVar25._0_8_,0x40);
    iVar23 = iVar10 * (iVar23 >> 3) + (iVar1 >> 3) * iVar11;
    local_e0 = (long)iVar23;
    local_100 = (Assembler *)((ulong)local_100 & 0xffffffffffffff00);
    local_f8[0] = (BlockScope)0x0;
    local_d8 = 0x13;
    local_d0 = 0xffffffff;
    local_c8 = 2;
    if (iVar23 < 0) {
      uVar13 = Assembler::IsImmAddSub(-local_e0);
      if ((uVar13 & 1) == 0) goto LAB_0127c388;
      local_b8 = (Assembler *)((ulong)local_b8 & 0xffffffffffffff00);
      local_98 = -local_e0;
      local_b0 = local_b0 & 0xffffff00;
      local_88 = 0xffffffff;
      local_90 = CONCAT71(local_90._1_7_,0x13);
      local_80 = 2;
      ppAVar14 = &local_b8;
      uVar15 = 0x40000000;
    }
    else {
LAB_0127c388:
      ppAVar14 = &local_100;
      uVar15 = 0;
    }
    AddSubMacro((TurboAssembler *)param_1,&local_160,&DAT_019f3ff4,ppAVar14,0,uVar15);
    if (bVar4) {
      local_108 = 0;
      local_110 = CONCAT44(local_110._4_4_,(undefined4)local_160);
    }
    if (param_6 == 0 && bVar6) {
      local_118 = 0;
      local_120 = CONCAT44(local_120._4_4_,(undefined4)local_160);
    }
    if (param_8 == 0 && bVar7) {
      local_128 = 0;
      local_130 = param_7 & 0xffffffff00000000 | (ulong)local_160 & 0xffffffff;
    }
    if (param_10 == 0 && bVar8) {
      local_138 = 0;
      local_140 = param_9 & 0xffffffff00000000 | (ulong)local_160 & 0xffffffff;
    }
    uVar13 = *(ulong *)(param_1 + 0x198);
    uVar12 = *(ulong *)(param_1 + 0x1a8);
  }
  if (uVar13 != 0) {
    uVar9 = CPURegList::PopLowestIndex(this);
    local_160 = (Assembler *)0x400000003f;
    if (uVar9 != 0x3f) {
      local_160 = (Assembler *)((ulong)uVar9 | 0x4000000000);
    }
    local_158 = 0;
    Assembler::mrs(param_1,&local_160,0x5a10);
    iVar23 = local_160._4_4_ + 7;
    if (-1 < (long)local_160) {
      iVar23 = local_160._4_4_;
    }
    local_100 = param_1;
    ConstantPool::BlockScope::BlockScope(local_f8,param_1,0);
    Assembler::CheckVeneerPool(local_100,false,true,0);
    Assembler::StartBlockVeneerPool(local_100);
    local_a0 = (long)((iVar23 >> 3) * -2);
    local_b8 = (Assembler *)0x400000003f;
    local_b0 = 0;
    local_ac = 0xffffffff;
    local_a4 = 2;
    local_98 = -0xffffffff;
    local_90 = 0xffffffff;
    Assembler::stp(param_1,(CPURegister *)&DAT_019f4018,(CPURegister *)&local_160,
                   (MemOperand *)&local_b8);
    Assembler::EndBlockVeneerPool(local_100);
    ConstantPool::BlockScope::~BlockScope(local_f8);
    *(ulong *)(param_1 + 0x198) = uVar13;
    *(ulong *)(param_1 + 0x1a8) = uVar12;
    PrintfNoPreserve((TurboAssembler *)param_1,param_2,(CPURegister *)&local_110,
                     (CPURegister *)&local_120,(CPURegister *)&local_130,(CPURegister *)&local_140);
    if (*(long *)(param_1 + 0x198) != 0) {
      uVar9 = CPURegList::PopLowestIndex(this);
      local_b8 = (Assembler *)0x400000003f;
      if (uVar9 != 0x3f) {
        local_b8 = (Assembler *)((ulong)uVar9 | 0x4000000000);
      }
      iVar23 = 1;
      if (local_b8 != (Assembler *)0x40ffffffff) {
        iVar23 = 2;
      }
      local_b0 = 0;
      PopHelper((TurboAssembler *)param_1,iVar23,8,(CPURegister *)&DAT_019f4018,
                (CPURegister *)&local_b8,(CPURegister *)&DAT_019f400c,(CPURegister *)&DAT_019f400c);
      Assembler::msr(param_1,0x5a10,&local_b8);
      *(ulong *)(param_1 + 0x198) = uVar21;
      *(ulong *)(param_1 + 0x1a8) = uVar22;
      auVar24 = CPURegList::GetCallerSavedV(0x40);
      PopCPURegList(param_1,auVar24._0_8_,auVar24._8_8_);
      PopCPURegList(param_1,local_150._0_8_,local_150._8_8_);
      *(undefined8 *)(param_1 + 0x198) = uVar16;
      *(undefined8 *)(param_1 + 0x1a8) = uVar17;
      if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  }
LAB_0127c630:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","!available->IsEmpty()");
}

