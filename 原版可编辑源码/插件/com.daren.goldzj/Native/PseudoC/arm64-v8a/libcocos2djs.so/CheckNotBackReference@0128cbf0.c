
/* v8::internal::RegExpMacroAssemblerARM64::CheckNotBackReference(int, bool, v8::internal::Label*)
    */

void __thiscall
v8::internal::RegExpMacroAssemblerARM64::CheckNotBackReference
          (RegExpMacroAssemblerARM64 *this,int param_1,bool param_2,Label *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  Label *pLVar3;
  RegExpMacroAssemblerARM64 *pRVar4;
  undefined8 uVar5;
  TurboAssembler *pTVar6;
  ulong uVar7;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined4 local_118;
  ulong local_110;
  uint local_108;
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
  
  lVar2 = tpidr_el0;
  local_90 = *(long *)(lVar2 + 0x28);
  local_f0 = 0x400000000c;
  local_e8 = 0;
  local_100 = 0x400000000d;
  local_f8 = 0;
  local_110 = 0x400000000e;
  local_e0 = 0;
  local_108 = 0;
  local_120 = 0x200000000f;
  local_118 = 0;
  pTVar6 = *(TurboAssembler **)(this + 0x28);
  if (param_1 < 0x10) {
    if (param_1 < 0) {
      param_1 = param_1 + 1;
    }
    local_b0 = CONCAT71(local_b0._1_7_,0x13);
    uVar7 = (ulong)(uint)(param_1 >> 1) | 0x4000000000;
    local_d8 = local_d8 & 0xffffffffffffff00;
    local_d0 = local_d0 & 0xffffff00;
    local_b8 = 0;
    uStack_98 = 0xffffffff;
    uStack_94 = 0;
    local_a0 = 0;
    uStack_9c = 0;
    local_a8 = uVar7;
    TurboAssembler::Mov(pTVar6,&DAT_019f7b84,&local_d8,0);
    local_d0 = 0;
    local_d8 = uVar7;
    Assembler::ubfm(*(Assembler **)(this + 0x28),(Register *)&DAT_019f7b90,(Register *)&local_d8,
                    0x20,0x3f);
  }
  else {
    capture_location(&local_d8,this,param_1,0x400000000a,0);
    TurboAssembler::LoadStorePairMacro(pTVar6,&DAT_019f7ba8,&DAT_019f7b6c,&local_d8,0x400000);
  }
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
            (*(TurboAssembler **)(this + 0x28),&local_120,&DAT_019f7ba8,&local_d8,0,0x40000000);
  local_d8 = local_d8 & 0xffffffffffffff00;
  local_d0 = local_d0 & 0xffffff00;
  local_b8 = 0;
  local_b0._0_1_ = 0x13;
  local_a8 = 0xffffffff;
  local_a0 = 2;
  TurboAssembler::CompareAndBranch
            (*(TurboAssembler **)(this + 0x28),&local_120,&local_d8,0,&local_e0);
  if (param_2) {
    local_128 = 0;
    local_d8 = (ulong)local_d8._1_7_ << 8;
    local_d0 = (uint)local_d0._1_3_ << 8;
    local_b8 = 0;
    local_b0._0_1_ = 0x13;
    local_130 = 0x2000000018;
    local_a8 = local_120;
    local_a0 = local_118;
    uStack_9c = 0;
    uStack_98 = 0xffffffff;
    uStack_94 = 0;
    TurboAssembler::AddSubMacro
              (*(TurboAssembler **)(this + 0x28),&DAT_019f7bb4,&local_130,&local_d8,0,0);
    local_130 = 0x2000000015;
    local_128 = 0;
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
              (*(TurboAssembler **)(this + 0x28),&DAT_019f7c68,&local_130,&local_d8,1,0x40000000);
    pTVar6 = *(TurboAssembler **)(this + 0x28);
    pRVar4 = this + 0x54;
    if (param_3 != (Label *)0x0) {
      pRVar4 = (RegExpMacroAssemblerARM64 *)param_3;
    }
    uVar5 = 0xd;
  }
  else {
    puVar1 = (undefined8 *)&DAT_019f7b78;
    if (local_120._4_4_ != 0x40) {
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
    TurboAssembler::AddSubMacro(*(TurboAssembler **)(this + 0x28),puVar1,&local_120,&local_d8,1,0);
    pTVar6 = *(TurboAssembler **)(this + 0x28);
    pRVar4 = this + 0x54;
    if (param_3 != (Label *)0x0) {
      pRVar4 = (RegExpMacroAssemblerARM64 *)param_3;
    }
    uVar5 = 0xc;
  }
  TurboAssembler::B(pTVar6,pRVar4,uVar5);
  local_128 = 0;
  local_d8 = local_d8 & 0xffffffffffffff00;
  local_d0 = local_d0 & 0xffffff00;
  local_b8 = 0;
  local_130 = 0x4000000019;
  local_b0._0_1_ = 0x13;
  local_a8 = 0x200000000a;
  uStack_98 = 6;
  uStack_94 = 0;
  local_a0 = 0;
  uStack_9c = 0xffffffff;
  TurboAssembler::AddSubMacro(*(TurboAssembler **)(this + 0x28),&local_f0,&local_130,&local_d8,0,0);
  local_d8 = local_d8 & 0xffffffffffffff00;
  local_d0 = local_d0 & 0xffffff00;
  local_b8 = 0;
  local_b0._0_1_ = 0x13;
  local_a8 = local_120;
  local_a0 = local_118;
  uStack_9c = 0xffffffff;
  uStack_98 = 6;
  uStack_94 = 0;
  TurboAssembler::AddSubMacro(*(TurboAssembler **)(this + 0x28),&local_100,&local_f0,&local_d8,0,0);
  local_130 = 0x4000000019;
  local_128 = 0;
  local_d8 = local_d8 & 0xffffffffffffff00;
  local_d0 = local_d0 & 0xffffff00;
  local_b8 = 0;
  local_b0._0_1_ = 0x13;
  local_a8 = 0x2000000015;
  uStack_98 = 6;
  uStack_94 = 0;
  local_a0 = 0;
  uStack_9c = 0xffffffff;
  TurboAssembler::AddSubMacro(*(TurboAssembler **)(this + 0x28),&local_110,&local_130,&local_d8,0,0)
  ;
  if (param_2) {
    local_d8 = local_d8 & 0xffffffffffffff00;
    local_d0 = local_d0 & 0xffffff00;
    local_b8 = 0;
    local_b0._0_1_ = 0x13;
    local_a8 = local_120;
    local_a0 = local_118;
    uStack_9c = 0xffffffff;
    uStack_98 = 6;
    uStack_94 = 0;
    TurboAssembler::AddSubMacro
              (*(TurboAssembler **)(this + 0x28),&local_110,&local_110,&local_d8,0,0x40000000);
  }
  local_138 = 0;
  Assembler::bind(*(Label **)(this + 0x28));
  if (*(int *)(this + 0x30) == 1) {
    local_cc = 0xffffffff;
    local_c4 = 2;
    local_c0 = 1;
    local_d8 = local_f0;
    local_d0 = local_e8;
    local_b8 = 0xffffffff00000002;
    local_b0 = 0xffffffff;
    TurboAssembler::LoadStoreMacro
              (*(TurboAssembler **)(this + 0x28),&DAT_019f7b6c,&local_d8,0x400000);
    pTVar6 = *(TurboAssembler **)(this + 0x28);
    local_c0 = 1;
    uVar5 = 0x400000;
  }
  else {
    local_cc = 0xffffffff;
    local_c4 = 2;
    local_c0 = 2;
    local_d8 = local_f0;
    local_d0 = local_e8;
    local_b8 = 0xffffffff00000002;
    local_b0 = 0xffffffff;
    TurboAssembler::LoadStoreMacro
              (*(TurboAssembler **)(this + 0x28),&DAT_019f7b6c,&local_d8,0x40400000);
    pTVar6 = *(TurboAssembler **)(this + 0x28);
    uVar5 = 0x40400000;
    local_c0 = 2;
  }
  local_b0 = 0xffffffff;
  local_b8 = 0xffffffff00000002;
  local_c4 = 2;
  local_cc = 0xffffffff;
  local_d8 = local_110;
  local_d0 = local_108;
  TurboAssembler::LoadStoreMacro(pTVar6,&DAT_019f7ba8,&local_d8,uVar5);
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
            (*(TurboAssembler **)(this + 0x28),&DAT_019f7c68,&DAT_019f7b6c,&local_d8,1,0x40000000);
  pRVar4 = this + 0x54;
  if (param_3 != (Label *)0x0) {
    pRVar4 = (RegExpMacroAssemblerARM64 *)param_3;
  }
  TurboAssembler::B(*(TurboAssembler **)(this + 0x28),pRVar4,1);
  local_a8 = local_100;
  puVar1 = (undefined8 *)&DAT_019f7b78;
  if (local_f0._4_4_ != 0x40) {
    puVar1 = &DAT_019f7c68;
  }
  local_d8 = local_d8 & 0xffffffffffffff00;
  local_d0 = local_d0 & 0xffffff00;
  local_b8 = 0;
  local_b0._0_1_ = 0x13;
  local_a0 = local_f8;
  uStack_9c = 0;
  uStack_98 = 0xffffffff;
  uStack_94 = 0;
  TurboAssembler::AddSubMacro
            (*(TurboAssembler **)(this + 0x28),puVar1,&local_f0,&local_d8,1,0x40000000);
  TurboAssembler::B(*(TurboAssembler **)(this + 0x28),&local_138,0xb);
  local_130 = 0x4000000015;
  local_128 = 0;
  local_d8 = local_d8 & 0xffffffffffffff00;
  local_d0 = local_d0 & 0xffffff00;
  local_b8 = 0;
  local_b0._0_1_ = 0x13;
  local_a8 = 0x4000000019;
  uStack_98 = 0xffffffff;
  uStack_94 = 0;
  local_a0 = 0;
  uStack_9c = 0;
  TurboAssembler::AddSubMacro
            (*(TurboAssembler **)(this + 0x28),&local_130,&local_110,&local_d8,0,0x40000000);
  if (param_2) {
    local_130 = 0x4000000015;
    local_128 = 0;
    local_148 = 0x4000000015;
    local_140 = 0;
    local_d8 = local_d8 & 0xffffffffffffff00;
    local_d0 = local_d0 & 0xffffff00;
    local_b8 = 0;
    local_b0._0_1_ = 0x13;
    local_a8 = local_120;
    local_a0 = local_118;
    uStack_9c = 0xffffffff;
    uStack_98 = 6;
    uStack_94 = 0;
    TurboAssembler::AddSubMacro
              (*(TurboAssembler **)(this + 0x28),&local_130,&local_148,&local_d8,0,0x40000000);
  }
  pLVar3 = *(Label **)(this + 0x28);
  if (*(TurboAssembler *)(pLVar3 + 0xc0) != (TurboAssembler)0x0) {
    local_130 = 0x4000000015;
    local_128 = 0;
    local_d8 = local_d8 & 0xffffffffffffff00;
    local_d0 = local_d0 & 0xffffff00;
    local_b8 = 0;
    local_a8 = 0x2000000015;
    local_b0._0_1_ = 0x13;
    uStack_98 = 6;
    uStack_94 = 0;
    local_a0 = 0;
    uStack_9c = 0xffffffff;
    TurboAssembler::AddSubMacro
              ((TurboAssembler *)pLVar3,&DAT_019f7b78,&local_130,&local_d8,1,0x40000000);
    local_130 = 0x2000000015;
    local_128 = 0;
    local_d8 = local_d8 & 0xffffffffffffff00;
    local_d0 = local_d0 & 0xffffff00;
    local_b8 = 0;
    local_b0._0_1_ = 0x13;
    local_a8 = 0xffffffff;
    local_a0 = 2;
    TurboAssembler::ConditionalCompareMacro
              (*(TurboAssembler **)(this + 0x28),&local_130,&local_d8,0,0,0x60000000);
    TurboAssembler::Check(*(TurboAssembler **)(this + 0x28),0xd,0x11);
    pLVar3 = *(Label **)(this + 0x28);
  }
  Assembler::bind(pLVar3);
  if (*(long *)(lVar2 + 0x28) == local_90) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

