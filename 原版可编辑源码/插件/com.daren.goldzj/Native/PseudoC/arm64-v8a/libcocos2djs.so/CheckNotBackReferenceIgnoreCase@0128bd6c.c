
/* WARNING: Removing unreachable block (ram,0x0128be18) */
/* v8::internal::RegExpMacroAssemblerARM64::CheckNotBackReferenceIgnoreCase(int, bool, bool,
   v8::internal::Label*) */

void v8::internal::RegExpMacroAssemblerARM64::CheckNotBackReferenceIgnoreCase
               (int param_1,bool param_2,bool param_3,Label *param_4)

{
  undefined8 *puVar1;
  Label *pLVar2;
  undefined1 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  Label *in_x4;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar7;
  TurboAssembler *pTVar8;
  Assembler *pAVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 local_170;
  undefined4 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined4 local_150;
  ulong local_148;
  uint local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  ulong local_d8;
  uint local_d0;
  undefined8 local_cc;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  ulong local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  long local_90;
  
  plVar5 = (long *)(ulong)(uint)param_1;
  lVar4 = tpidr_el0;
  local_90 = *(long *)(lVar4 + 0x28);
  local_e0 = 0;
  local_f0 = 0x200000000a;
  local_e8 = 0;
  local_100 = 0x2000000013;
  local_f8 = 0;
  plVar10 = plVar5 + 5;
  pTVar8 = (TurboAssembler *)*plVar10;
  if (param_2 < 0x10) {
    local_110 = 0x400000000a;
    local_b0 = CONCAT71(local_b0._1_7_,0x13);
    local_108 = 0;
    local_d8 = local_d8 & 0xffffffffffffff00;
    local_d0 = local_d0 & 0xffffff00;
    local_b8 = 0;
    uStack_98 = 0xffffffff;
    uStack_94 = 0;
    local_a0 = 0;
    uStack_9c = 0;
    local_a8 = 0x4000000000;
    TurboAssembler::Mov(pTVar8,&local_110,&local_d8,0);
    local_d0 = 0;
    local_d8 = 0x4000000000;
    Assembler::ubfm((Assembler *)*plVar10,(Register *)&DAT_019f7b90,(Register *)&local_d8,0x20,0x3f)
    ;
  }
  else {
    capture_location(&local_d8,plVar5,param_2,0x400000000a,0);
    TurboAssembler::LoadStorePairMacro(pTVar8,&DAT_019f7ba8,&local_f0,&local_d8,0x400000);
  }
  local_d8 = local_d8 & 0xffffffffffffff00;
  local_d0 = local_d0 & 0xffffff00;
  local_b8 = 0;
  local_b0._0_1_ = 0x13;
  local_a8 = local_f0;
  local_a0 = local_e8;
  uStack_9c = 0;
  uStack_98 = 0xffffffff;
  uStack_94 = 0;
  TurboAssembler::AddSubMacro
            ((TurboAssembler *)*plVar10,&local_100,&DAT_019f7ba8,&local_d8,0,0x40000000);
  local_d8 = local_d8 & 0xffffffffffffff00;
  local_d0 = local_d0 & 0xffffff00;
  local_b8 = 0;
  local_b0._0_1_ = 0x13;
  local_a8 = 0xffffffff;
  local_a0 = 2;
  TurboAssembler::CompareAndBranch((TurboAssembler *)*plVar10,&local_100,&local_d8,0,&local_e0);
  if (param_3) {
    local_108 = 0;
    local_d8 = (ulong)local_d8._1_7_ << 8;
    local_d0 = (uint)local_d0._1_3_ << 8;
    local_b8 = 0;
    local_b0._0_1_ = 0x13;
    local_110 = 0x2000000018;
    local_a8 = local_100;
    local_a0 = local_f8;
    uStack_9c = 0;
    uStack_98 = 0xffffffff;
    uStack_94 = 0;
    TurboAssembler::AddSubMacro((TurboAssembler *)*plVar10,&DAT_019f7bb4,&local_110,&local_d8,0,0);
    local_110 = 0x2000000015;
    local_108 = 0;
    local_d8 = local_d8 & 0xffffffffffffff00;
    local_d0 = local_d0 & 0xffffff00;
    local_b8 = 0;
    local_b0 = CONCAT71(local_b0._1_7_,0x13);
    local_a8 = 0x200000000c;
    uStack_98 = 0xffffffff;
    uStack_94 = 0;
    local_a0 = 0;
    uStack_9c = 0;
    TurboAssembler::AddSubMacro
              ((TurboAssembler *)*plVar10,&DAT_019f7c68,&local_110,&local_d8,1,0x40000000);
    uVar6 = 0xd;
  }
  else {
    puVar1 = (undefined8 *)&DAT_019f7b78;
    if (local_100._4_4_ != 0x40) {
      puVar1 = &DAT_019f7c68;
    }
    local_d8 = (ulong)local_d8._1_7_ << 8;
    local_d0 = (uint)local_d0._1_3_ << 8;
    local_b8 = 0;
    local_b0 = CONCAT71(local_b0._1_7_,0x13);
    local_a8 = 0x2000000015;
    uStack_98 = 0xffffffff;
    uStack_94 = 0;
    local_a0 = 0;
    uStack_9c = 0;
    TurboAssembler::AddSubMacro((TurboAssembler *)*plVar10,puVar1,&local_100,&local_d8,1,0);
    uVar6 = 0xc;
  }
  pLVar2 = (Label *)((long)plVar5 + 0x54);
  if (in_x4 != (Label *)0x0) {
    pLVar2 = in_x4;
  }
  TurboAssembler::B((TurboAssembler *)plVar5[5],pLVar2,uVar6);
  if ((int)plVar5[6] == 1) {
    local_110 = 0x400000000c;
    local_138 = 0x400000000d;
    local_120 = 0;
    uStack_118 = 0;
    local_128 = 0;
    local_108 = 0;
    local_130 = 0;
    local_148 = 0x400000000e;
    local_140 = 0;
    local_158 = 0x4000000019;
    local_150 = 0;
    local_d8 = local_d8 & 0xffffffffffffff00;
    local_d0 = local_d0 & 0xffffff00;
    local_b8 = 0;
    local_b0._0_1_ = 0x13;
    local_a8 = local_f0;
    local_a0 = local_e8;
    uStack_9c = 0xffffffff;
    uStack_98 = 6;
    uStack_94 = 0;
    TurboAssembler::AddSubMacro((TurboAssembler *)*plVar10,&local_110,&local_158,&local_d8,0,0);
    local_d8 = local_d8 & 0xffffffffffffff00;
    local_d0 = local_d0 & 0xffffff00;
    local_b8 = 0;
    local_b0._0_1_ = 0x13;
    local_a8 = local_100;
    local_a0 = local_f8;
    uStack_9c = 0xffffffff;
    uStack_98 = 6;
    uStack_94 = 0;
    TurboAssembler::AddSubMacro((TurboAssembler *)*plVar10,&local_138,&local_110,&local_d8,0,0);
    local_158 = 0x4000000019;
    local_150 = 0;
    local_d8 = local_d8 & 0xffffffffffffff00;
    local_d0 = local_d0 & 0xffffff00;
    local_b8 = 0;
    local_b0._0_1_ = 0x13;
    local_a8 = 0x2000000015;
    uVar11 = 6;
    uVar6 = 0xffffffff00000000;
    uStack_98 = 6;
    uStack_94 = 0;
    local_a0 = 0;
    uStack_9c = 0xffffffff;
    TurboAssembler::AddSubMacro
              ((TurboAssembler *)*plVar10,&local_148,&local_158,&local_d8,0,0,in_x6,in_x7,
               0xffffffff00000000,6);
    if (param_3) {
      local_d8 = local_d8 & 0xffffffffffffff00;
      local_d0 = local_d0 & 0xffffff00;
      local_b8 = 0;
      local_b0._0_1_ = 0x13;
      local_a8 = local_100;
      local_a0 = local_f8;
      uStack_9c = 0xffffffff;
      uStack_98 = 6;
      uStack_94 = 0;
      TurboAssembler::AddSubMacro
                ((TurboAssembler *)*plVar10,&local_148,&local_148,&local_d8,0,0x40000000);
    }
    local_160 = 0;
    Assembler::bind((Label *)*plVar10);
    local_d8 = local_110;
    local_c4 = 2;
    local_d0 = local_108;
    local_cc = 0xffffffff;
    local_c0 = 1;
    local_b8 = 0xffffffff00000002;
    local_b0 = 0xffffffff;
    TurboAssembler::LoadStoreMacro((TurboAssembler *)*plVar10,&DAT_019f7b6c,&local_d8,0x400000);
    local_d8 = local_148;
    local_d0 = local_140;
    local_cc = 0xffffffff;
    local_c0 = 1;
    local_c4 = 2;
    local_b8 = 0xffffffff00000002;
    local_b0 = 0xffffffff;
    TurboAssembler::LoadStoreMacro((TurboAssembler *)*plVar10,&DAT_019f7ba8,&local_d8,0x400000);
    local_d8 = local_d8 & 0xffffffffffffff00;
    local_d0 = local_d0 & 0xffffff00;
    local_b8 = 0;
    local_b0._0_1_ = 0x13;
    local_a8 = 0x200000000b;
    uStack_98 = 0xffffffff;
    uStack_94 = 0;
    local_a0 = 0;
    uStack_9c = 0;
    TurboAssembler::AddSubMacro
              ((TurboAssembler *)*plVar10,&DAT_019f7c68,&DAT_019f7b6c,&local_d8,1,0x40000000);
    TurboAssembler::B((TurboAssembler *)*plVar10,&local_128,0);
    local_d8 = local_d8 & 0xffffffffffffff00;
    local_d0 = local_d0 & 0xffffff00;
    local_b8 = 0x20;
    local_b0._0_1_ = 0x13;
    local_a8 = 0xffffffff;
    local_a0 = 2;
    TurboAssembler::LogicalMacro
              ((TurboAssembler *)*plVar10,&DAT_019f7b6c,&DAT_019f7b6c,&local_d8,0x20000000);
    local_d8 = local_d8 & 0xffffffffffffff00;
    local_d0 = local_d0 & 0xffffff00;
    local_b8 = 0x20;
    local_b0._0_1_ = 0x13;
    local_a8 = 0xffffffff;
    local_a0 = 2;
    TurboAssembler::LogicalMacro
              ((TurboAssembler *)*plVar10,&DAT_019f7ba8,&DAT_019f7ba8,&local_d8,0x20000000);
    local_d8 = local_d8 & 0xffffffffffffff00;
    local_d0 = local_d0 & 0xffffff00;
    local_b8 = 0;
    local_b0._0_1_ = 0x13;
    local_a8 = 0x200000000a;
    uStack_98 = 0xffffffff;
    uStack_94 = 0;
    local_a0 = 0;
    uStack_9c = 0;
    TurboAssembler::AddSubMacro
              ((TurboAssembler *)*plVar10,&DAT_019f7c68,&DAT_019f7ba8,&local_d8,1,0x40000000);
    TurboAssembler::B((TurboAssembler *)*plVar10,&local_120,1);
    local_d8 = local_d8 & 0xffffffffffffff00;
    local_d0 = local_d0 & 0xffffff00;
    local_b8 = 0x61;
    local_b0._0_1_ = 0x13;
    local_a8 = 0xffffffff;
    local_a0 = 2;
    TurboAssembler::AddSubMacro
              ((TurboAssembler *)*plVar10,&DAT_019f7b6c,&DAT_019f7b6c,&local_d8,0,0x40000000);
    local_d8 = local_d8 & 0xffffffffffffff00;
    local_d0 = local_d0 & 0xffffff00;
    local_b8 = 0x19;
    local_b0._0_1_ = 0x13;
    local_a8 = 0xffffffff;
    local_a0 = 2;
    TurboAssembler::AddSubMacro
              ((TurboAssembler *)*plVar10,&DAT_019f7c68,&DAT_019f7b6c,&local_d8,1,0x40000000);
    TurboAssembler::B((TurboAssembler *)*plVar10,&local_128,9);
    local_d8 = local_d8 & 0xffffffffffffff00;
    local_d0 = local_d0 & 0xffffff00;
    local_b8 = 0x7f;
    local_b0._0_1_ = 0x13;
    local_a8 = 0xffffffff;
    local_a0 = 2;
    TurboAssembler::AddSubMacro
              ((TurboAssembler *)*plVar10,&DAT_019f7b6c,&DAT_019f7b6c,&local_d8,0,0x40000000);
    local_d8 = local_d8 & 0xffffffffffffff00;
    local_d0 = local_d0 & 0xffffff00;
    local_b8 = 0x1e;
    local_b0._0_1_ = 0x13;
    local_a8 = 0xffffffff;
    local_a0 = 2;
    TurboAssembler::AddSubMacro
              ((TurboAssembler *)*plVar10,&DAT_019f7c68,&DAT_019f7b6c,&local_d8,1,0x40000000);
    local_d8 = local_d8 & 0xffffffffffffff00;
    local_d0 = local_d0 & 0xffffff00;
    local_b8 = 0x17;
    local_b0._0_1_ = 0x13;
    local_a8 = 0xffffffff;
    local_a0 = 2;
    TurboAssembler::ConditionalCompareMacro
              ((TurboAssembler *)*plVar10,&DAT_019f7b6c,&local_d8,0x40000000,9,0x60000000);
    TurboAssembler::B((TurboAssembler *)*plVar10,&local_120,0);
    Assembler::bind((Label *)*plVar10);
    local_a8 = local_138;
    puVar1 = (undefined8 *)&DAT_019f7b78;
    if (local_110._4_4_ != 0x40) {
      puVar1 = &DAT_019f7c68;
    }
    local_d8 = local_d8 & 0xffffffffffffff00;
    local_d0 = local_d0 & 0xffffff00;
    local_b8 = 0;
    local_b0 = CONCAT71(local_b0._1_7_,0x13);
    local_a0 = local_130;
    uStack_9c = 0;
    uStack_98 = 0xffffffff;
    uStack_94 = 0;
    TurboAssembler::AddSubMacro((TurboAssembler *)*plVar10,puVar1,&local_110,&local_d8,1,0x40000000)
    ;
    TurboAssembler::B((TurboAssembler *)*plVar10,&local_160,0xb);
    pAVar9 = (Assembler *)*plVar10;
    Assembler::b(pAVar9,(Label *)&uStack_118);
    Assembler::CheckVeneerPool(pAVar9,false,false,0x400);
    Assembler::bind((Label *)*plVar10);
    if (in_x4 == (Label *)0x0) {
      (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    else {
      pAVar9 = (Assembler *)*plVar10;
      Assembler::b(pAVar9,in_x4);
      Assembler::CheckVeneerPool(pAVar9,false,false,0x400);
    }
    Assembler::bind((Label *)*plVar10);
    local_150 = 0;
    local_d8 = local_d8 & 0xffffffffffffff00;
    local_d0 = local_d0 & 0xffffff00;
    local_b8 = 0;
    local_158 = 0x4000000015;
    local_b0._0_1_ = 0x13;
    local_a8 = 0x4000000019;
    uStack_98 = 0xffffffff;
    uStack_94 = 0;
    local_a0 = 0;
    uStack_9c = 0;
    TurboAssembler::AddSubMacro
              ((TurboAssembler *)*plVar10,&local_158,&local_148,&local_d8,0,0x40000000);
    if (param_3) {
      local_158 = 0x4000000015;
      local_150 = 0;
      local_170 = 0x4000000015;
      local_168 = 0;
      local_d8 = local_d8 & 0xffffffffffffff00;
      local_d0 = local_d0 & 0xffffff00;
      local_b8 = 0;
      local_b0._0_1_ = 0x13;
      local_a8 = local_100;
      local_a0 = local_f8;
      uStack_9c = 0xffffffff;
      uStack_98 = 6;
      uStack_94 = 0;
      TurboAssembler::AddSubMacro
                ((TurboAssembler *)*plVar10,&local_158,&local_170,&local_d8,0,0x40000000);
    }
    if (((TurboAssembler *)*plVar10)[0xc0] != (TurboAssembler)0x0) {
      local_158 = 0x4000000015;
      local_150 = 0;
      local_d8 = local_d8 & 0xffffffffffffff00;
      local_d0 = local_d0 & 0xffffff00;
      local_b8 = 0;
      local_a8 = 0x2000000015;
      local_b0._0_1_ = 0x13;
      uStack_98 = (undefined4)uVar11;
      uStack_94 = (undefined4)((ulong)uVar11 >> 0x20);
      local_a0 = (undefined4)uVar6;
      uStack_9c = (undefined4)((ulong)uVar6 >> 0x20);
      TurboAssembler::AddSubMacro
                ((TurboAssembler *)*plVar10,&DAT_019f7b78,&local_158,&local_d8,1,0x40000000);
      local_158 = 0x2000000015;
      local_150 = 0;
      local_d8 = local_d8 & 0xffffffffffffff00;
      local_d0 = local_d0 & 0xffffff00;
      local_b8 = 0;
      local_b0._0_1_ = 0x13;
      local_a8 = 0xffffffff;
      local_a0 = 2;
      TurboAssembler::ConditionalCompareMacro
                ((TurboAssembler *)*plVar10,&local_158,&local_d8,0,0,0x60000000);
      TurboAssembler::Check((TurboAssembler *)*plVar10,0xd,0x11);
    }
  }
  else {
    TurboAssembler::PushCPURegList(*plVar10,0xff,0x40);
    local_110 = 0x4000000019;
    local_108 = 0;
    local_d8 = local_d8 & 0xffffffffffffff00;
    local_d0 = local_d0 & 0xffffff00;
    local_b8 = 0;
    local_b0._0_1_ = 0x13;
    local_a8 = local_f0;
    local_a0 = local_e8;
    uStack_9c = 0xffffffff;
    uStack_98 = 6;
    uStack_94 = 0;
    TurboAssembler::AddSubMacro((TurboAssembler *)*plVar10,&DAT_019f7be4,&local_110,&local_d8,0,0);
    local_d8 = local_d8 & 0xffffffffffffff00;
    local_d0 = local_d0 & 0xffffff00;
    local_b8 = 0;
    local_b0._0_1_ = 0x13;
    local_a8 = local_100;
    local_a0 = local_f8;
    uStack_9c = 0;
    uStack_98 = 0xffffffff;
    uStack_94 = 0;
    TurboAssembler::Mov((TurboAssembler *)*plVar10,&DAT_019f7bf0,&local_d8,0);
    local_110 = 0x4000000019;
    local_108 = 0;
    local_d8 = local_d8 & 0xffffffffffffff00;
    local_d0 = local_d0 & 0xffffff00;
    local_b8 = 0;
    local_b0._0_1_ = 0x13;
    local_a8 = 0x2000000015;
    uStack_98 = 6;
    uStack_94 = 0;
    local_a0 = 0;
    uStack_9c = 0xffffffff;
    TurboAssembler::AddSubMacro((TurboAssembler *)*plVar10,&DAT_019f7bfc,&local_110,&local_d8,0,0);
    if (param_3) {
      local_d8 = local_d8 & 0xffffffffffffff00;
      local_d0 = local_d0 & 0xffffff00;
      local_b8 = 0;
      local_b0._0_1_ = 0x13;
      local_a8 = local_100;
      local_a0 = local_f8;
      uStack_9c = 0xffffffff;
      uStack_98 = 6;
      uStack_94 = 0;
      TurboAssembler::AddSubMacro
                ((TurboAssembler *)*plVar10,&DAT_019f7bfc,&DAT_019f7bfc,&local_d8,0,0x40000000);
    }
    pTVar8 = (TurboAssembler *)plVar5[5];
    local_b8 = ExternalReference::isolate_address(*(Isolate **)(pTVar8 + 0x178));
    local_d8 = local_d8 & 0xffffffffffffff00;
    local_d0 = local_d0 & 0xffffff00;
    local_a8 = 0xffffffff;
    local_b0._0_1_ = 7;
    local_a0 = 2;
    TurboAssembler::Mov(pTVar8,&DAT_019f7c08,&local_d8,0);
    lVar7 = plVar5[5];
    uVar3 = *(undefined1 *)(lVar7 + 400);
    *(undefined1 *)(lVar7 + 400) = 1;
    uVar6 = ExternalReference::re_case_insensitive_compare_uc16(*(Isolate **)(plVar5[5] + 0x178));
    TurboAssembler::CallCFunction(plVar5[5],uVar6,4);
    *(undefined1 *)(lVar7 + 400) = uVar3;
    local_d8 = local_d8 & 0xffffffffffffff00;
    local_d0 = local_d0 & 0xffffff00;
    local_b8 = 0;
    local_b0._0_1_ = 0x13;
    local_a8 = 0xffffffff;
    local_a0 = 2;
    TurboAssembler::AddSubMacro
              ((TurboAssembler *)plVar5[5],&DAT_019f7b78,&DAT_019f7be4,&local_d8,1,0x40000000);
    TurboAssembler::PopCPURegList(plVar5[5],0xff,0x40);
    pLVar2 = (Label *)((long)plVar5 + 0x54);
    if (in_x4 != (Label *)0x0) {
      pLVar2 = in_x4;
    }
    TurboAssembler::B((TurboAssembler *)plVar5[5],pLVar2,0);
    if (param_3) {
      uVar6 = 0x40000000;
    }
    else {
      uVar6 = 0;
    }
    uStack_94 = 0;
    uStack_98 = 0xffffffff;
    uStack_9c = 0;
    local_a0 = local_f8;
    local_a8 = local_100;
    local_b0._0_1_ = 0x13;
    local_b8 = 0;
    local_d0 = local_d0 & 0xffffff00;
    local_d8 = local_d8 & 0xffffffffffffff00;
    local_108 = 0;
    local_110 = 0x2000000015;
    local_130 = 0;
    local_138 = 0x2000000015;
    TurboAssembler::AddSubMacro((TurboAssembler *)plVar5[5],&local_110,&local_138,&local_d8,0,uVar6)
    ;
  }
  Assembler::bind((Label *)*plVar10);
  if (*(long *)(lVar4 + 0x28) != local_90) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

