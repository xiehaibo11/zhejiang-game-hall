
/* v8::internal::RegExpMacroAssemblerARM64::GetCode(v8::internal::Handle<v8::internal::String>) */

undefined8 * __thiscall
v8::internal::RegExpMacroAssemblerARM64::GetCode
          (RegExpMacroAssemblerARM64 *this,undefined8 *param_2)

{
  bool bVar1;
  ulong uVar2;
  Mutex *this_00;
  int iVar3;
  undefined1 uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  long lVar18;
  uint uVar19;
  RegExpMacroAssemblerARM64 *pRVar20;
  uint uVar21;
  undefined8 uVar22;
  long *plVar23;
  TurboAssembler *pTVar24;
  Assembler *pAVar25;
  long lVar26;
  undefined1 auVar27 [16];
  uint local_1f0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  ulong local_1a8;
  uint local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_188;
  int local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  int local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_138;
  ulong local_130;
  uint uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  int local_11c;
  undefined8 local_118;
  long local_110;
  undefined8 uStack_108;
  ulong local_100;
  int local_f8;
  uint uStack_f4;
  undefined4 uStack_f0;
  uint uStack_ec;
  undefined8 local_e8;
  ulong local_e0;
  uint local_d8;
  undefined8 local_c8;
  ulong local_c0;
  undefined1 local_b8;
  ulong local_b0;
  undefined4 local_a8;
  long local_98;
  
  lVar6 = tpidr_el0;
  local_98 = *(long *)(lVar6 + 0x28);
  local_138 = 0;
  pRVar20 = this + 0x28;
  Assembler::bind(*(Label **)pRVar20);
  lVar18 = *(long *)pRVar20;
  uVar4 = *(undefined1 *)(lVar18 + 400);
  *(undefined1 *)(lVar18 + 400) = 1;
  auVar27 = CPURegList::GetCalleeSaved(0x40);
  TurboAssembler::PushCPURegList(*(undefined8 *)pRVar20);
  TurboAssembler::PushCPURegList(*(undefined8 *)pRVar20,0xe1,0x40);
  pTVar24 = *(TurboAssembler **)pRVar20;
  local_148 = 0x400000001d;
  local_140 = 0;
  iVar11 = CountSetBits(0xe1,0x40);
  local_c0 = (ulong)(iVar11 << 3);
  local_e0 = local_e0 & 0xffffffffffffff00;
  local_d8 = local_d8 & 0xffffff00;
  local_b8 = 0x13;
  local_b0 = 0xffffffff;
  local_a8 = 2;
  if (iVar11 < 0) {
    lVar26 = -local_c0;
    uVar13 = Assembler::IsImmAddSub(lVar26);
    if ((uVar13 & 1) == 0) goto LAB_0128e46c;
    uStack_108 = CONCAT71(uStack_108._1_7_,0x13);
    local_130 = local_130 & 0xffffffffffffff00;
    uStack_128 = uStack_128 & 0xffffff00;
    local_100 = 0xffffffff;
    local_f8 = 2;
    lVar7 = -0xb0;
    uVar16 = 0x40000000;
    local_110 = lVar26;
  }
  else {
LAB_0128e46c:
    lVar7 = -0x60;
    uVar16 = 0;
  }
  TurboAssembler::AddSubMacro
            (pTVar24,&local_148,&DAT_019f7c44,&stack0xffffffffffffff80 + lVar7,0,uVar16);
  local_e0 = 0x200000001b;
  local_d8 = 0;
  local_130 = local_130 & 0xffffffffffffff00;
  uStack_128 = uStack_128 & 0xffffff00;
  local_110 = 0;
  uStack_108._0_1_ = 0x13;
  local_100 = 0x2000000001;
  uStack_f0 = 0xffffffff;
  uStack_ec = 0;
  local_f8 = 0;
  uStack_f4 = 0;
  TurboAssembler::Mov(*(TurboAssembler **)(this + 0x28),&local_e0,&local_130,0);
  local_e0 = 0x400000001a;
  local_d8 = 0;
  local_130 = local_130 & 0xffffffffffffff00;
  uStack_128 = uStack_128 & 0xffffff00;
  local_110 = 0;
  uStack_108._0_1_ = 0x13;
  local_100 = 0x4000000002;
  uStack_f0 = 0xffffffff;
  uStack_ec = 0;
  local_f8 = 0;
  uStack_f4 = 0;
  TurboAssembler::Mov(*(TurboAssembler **)(this + 0x28),&local_e0,&local_130,0);
  local_e0 = 0x4000000019;
  local_d8 = 0;
  local_130 = local_130 & 0xffffffffffffff00;
  uStack_128 = uStack_128 & 0xffffff00;
  local_110 = 0;
  uStack_108._0_1_ = 0x13;
  local_100 = 0x4000000003;
  uStack_f0 = 0xffffffff;
  uStack_ec = 0;
  local_f8 = 0;
  uStack_f4 = 0;
  TurboAssembler::Mov(*(TurboAssembler **)(this + 0x28),&local_e0,&local_130,0);
  local_e0 = 0x400000001c;
  local_d8 = 0;
  local_130 = local_130 & 0xffffffffffffff00;
  uStack_128 = uStack_128 & 0xffffff00;
  local_110 = 0;
  uStack_108._0_1_ = 0x13;
  local_100 = 0x4000000004;
  uStack_f0 = 0xffffffff;
  uStack_ec = 0;
  local_f8 = 0;
  uStack_f4 = 0;
  TurboAssembler::Mov(*(TurboAssembler **)(this + 0x28),&local_e0,&local_130,0);
  iVar11 = *(int *)(this + 0x34);
  if (iVar11 < 0x11) {
    iVar11 = 0x10;
  }
  iVar12 = TurboAssembler::ActivationFrameAlignment();
  local_158 = 0;
  uStack_150 = 0;
  iVar3 = iVar12 + 3;
  if (-1 < iVar12) {
    iVar3 = iVar12;
  }
  uVar5 = (iVar11 + (iVar3 >> 2)) - 0xd;
  uVar19 = -(iVar3 >> 2);
  uVar21 = uVar5 & uVar19;
  local_110 = ExternalReference::address_of_jslimit(*(Isolate **)(*(long *)(this + 0x28) + 0x178));
  local_130 = local_130 & 0xffffffffffffff00;
  uStack_128 = uStack_128 & 0xffffff00;
  uStack_108 = CONCAT71(uStack_108._1_7_,7);
  local_100 = 0xffffffff;
  local_f8 = 2;
  TurboAssembler::Mov(*(TurboAssembler **)(this + 0x28),&DAT_019f7b84,&local_130,0);
  local_11c = 2;
  uStack_128 = 0;
  local_130 = 0x400000000a;
  uStack_124 = 0xffffffff;
  uStack_120 = 0;
  local_118 = 0;
  local_110 = 0xffffffff00000000;
  uStack_108 = 0xffffffff;
  TurboAssembler::LoadStoreMacro
            (*(TurboAssembler **)(this + 0x28),&DAT_019f7b84,&local_130,0xc0400000);
  local_130 = local_130 & 0xffffffffffffff00;
  uStack_128 = uStack_128 & 0xffffff00;
  local_110 = 0;
  uStack_108._0_1_ = 0x13;
  local_100 = 0x400000000a;
  uStack_f0 = 0xffffffff;
  uStack_ec = 0;
  local_f8 = 0;
  uStack_f4 = 0;
  TurboAssembler::AddSubMacro
            (*(TurboAssembler **)(this + 0x28),&DAT_019f7b84,&DAT_019f7c44,&local_130,1,0x40000000);
  TurboAssembler::B(*(TurboAssembler **)(this + 0x28),&uStack_150,9);
  pTVar24 = *(TurboAssembler **)(this + 0x28);
  local_c0 = (ulong)(int)(uVar21 << 2);
  local_e0 = local_e0 & 0xffffffffffffff00;
  local_d8 = local_d8 & 0xffffff00;
  local_b8 = 0x13;
  local_b0 = 0xffffffff;
  local_a8 = 2;
  if (((int)(uVar5 & uVar19) < 0) && (uVar13 = Assembler::IsImmAddSub(-local_c0), (uVar13 & 1) != 0)
     ) {
    local_110 = -local_c0;
    local_130 = local_130 & 0xffffffffffffff00;
    uStack_128 = uStack_128 & 0xffffff00;
    local_100 = 0xffffffff;
    uStack_108._0_1_ = 0x13;
    local_f8 = 2;
    lVar26 = -0xb0;
    uVar16 = 0;
  }
  else {
    lVar26 = -0x60;
    uVar16 = 0x40000000;
  }
  TurboAssembler::AddSubMacro
            (pTVar24,&DAT_019f7b78,&DAT_019f7b84,&stack0xffffffffffffff80 + lVar26,1,uVar16);
  TurboAssembler::B(*(TurboAssembler **)(this + 0x28),&local_158,2);
  TurboAssembler::Mov(*(TurboAssembler **)(this + 0x28),(Register *)&DAT_019f7c20,0xffffffffffffffff
                     );
  pAVar25 = *(Assembler **)(this + 0x28);
  Assembler::b(pAVar25,(Label *)&local_138);
  Assembler::CheckVeneerPool(pAVar25,false,false,0x400);
  Assembler::bind(*(Label **)(this + 0x28));
  CallCheckStackGuardState(this,0x400000000a,0);
  TurboAssembler::Cbnz
            (*(TurboAssembler **)(this + 0x28),(Register *)&DAT_019f7c20,(Label *)&local_138);
  Assembler::bind(*(Label **)(this + 0x28));
  pTVar24 = *(TurboAssembler **)(this + 0x28);
  if (uVar21 != 0) {
    local_c0 = -(ulong)(uVar21 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar21 << 2;
    local_e0 = local_e0 & 0xffffffffffffff00;
    local_d8 = local_d8 & 0xffffff00;
    local_b0 = 0xffffffff;
    local_b8 = 0x13;
    local_a8 = 2;
    if ((int)uVar21 < 0) {
      lVar26 = -local_c0;
      uVar13 = Assembler::IsImmAddSub(lVar26);
      if ((uVar13 & 1) == 0) goto LAB_0128e894;
      local_130 = local_130 & 0xffffffffffffff00;
      uStack_128 = uStack_128 & 0xffffff00;
      local_100 = 0xffffffff;
      uStack_108._0_1_ = 0x13;
      local_f8 = 2;
      lVar7 = -0xb0;
      uVar16 = 0;
      local_110 = lVar26;
    }
    else {
LAB_0128e894:
      lVar7 = -0x60;
      uVar16 = 0x40000000;
    }
    TurboAssembler::AddSubMacro
              (pTVar24,&DAT_019f7c44,&DAT_019f7c44,&stack0xffffffffffffff80 + lVar7,0,uVar16);
    pTVar24 = *(TurboAssembler **)pRVar20;
  }
  local_130 = 0x400000001d;
  local_11c = 2;
  uStack_128 = 0;
  uStack_124 = 0xffffffff;
  uStack_120 = 0;
  local_118 = 0xffffffffffffffd8;
  local_110 = 0xffffffff00000000;
  uStack_108 = 0xffffffff;
  TurboAssembler::LoadStoreMacro(pTVar24,&DAT_019f7c68,&local_130,0x80000000);
  local_130 = 0x400000001d;
  local_11c = 2;
  uStack_128 = 0;
  uStack_124 = 0xffffffff;
  uStack_120 = 0;
  local_118 = 0xffffffffffffffd0;
  local_110 = 0xffffffff00000000;
  uStack_108 = 0xffffffff;
  TurboAssembler::LoadStoreMacro(*(TurboAssembler **)pRVar20,&DAT_019f7c68,&local_130,0x80000000);
  local_e0 = 0x400000001a;
  local_d8 = 0;
  local_130 = local_130 & 0xffffffffffffff00;
  uStack_128 = uStack_128 & 0xffffff00;
  local_110 = 0;
  uStack_108._0_1_ = 0x13;
  local_100 = 0x4000000019;
  uStack_f0 = 0xffffffff;
  uStack_ec = 0;
  local_f8 = 0;
  uStack_f4 = 0;
  TurboAssembler::AddSubMacro
            (*(TurboAssembler **)pRVar20,&DAT_019f7b84,&local_e0,&local_130,0,0x40000000);
  pTVar24 = *(TurboAssembler **)pRVar20;
  if (pTVar24[0xc0] != (TurboAssembler)0x0) {
    local_130 = local_130 & 0xffffffffffffff00;
    uStack_128 = uStack_128 & 0xffffff00;
    local_110 = 0;
    uStack_108._0_1_ = 0x13;
    local_100 = 0x400000000a;
    uStack_f0 = 0xffffffff;
    uStack_ec = 0;
    local_f8 = 0;
    uStack_f4 = 0;
    TurboAssembler::AddSubMacro(pTVar24,&DAT_019f7b90,&DAT_019f7b78,&local_130,0,0x40000000);
    local_130 = local_130 & 0xffffffffffffff00;
    uStack_128 = uStack_128 & 0xffffff00;
    local_110 = 0x1fffffe0;
    uStack_108._0_1_ = 0x13;
    local_100 = 0xffffffff;
    local_f8 = 2;
    TurboAssembler::AddSubMacro
              (*(TurboAssembler **)pRVar20,&DAT_019f7b78,&DAT_019f7b90,&local_130,1,0x40000000);
    TurboAssembler::Check(*(TurboAssembler **)pRVar20,9,8);
    pTVar24 = *(TurboAssembler **)pRVar20;
  }
  local_e0 = 0x2000000015;
  local_d8 = 0;
  local_130 = local_130 & 0xffffffffffffff00;
  uStack_128 = uStack_128 & 0xffffff00;
  local_110 = 0;
  uStack_108._0_1_ = 0x13;
  local_100 = 0x200000000a;
  uStack_f0 = 0xffffffff;
  uStack_ec = 0;
  local_f8 = 0;
  uStack_f4 = 0;
  TurboAssembler::Mov(pTVar24,&local_e0,&local_130,0);
  pTVar24 = *(TurboAssembler **)(this + 0x28);
  local_140 = 0;
  local_168 = 0x2000000015;
  local_160 = 0;
  local_148 = 0x2000000018;
  local_c0 = (ulong)*(int *)(this + 0x30);
  local_e0 = local_e0 & 0xffffffffffffff00;
  local_d8 = local_d8 & 0xffffff00;
  local_b8 = 0x13;
  local_b0 = 0xffffffff;
  local_a8 = 2;
  if ((*(int *)(this + 0x30) < 0) && (uVar13 = Assembler::IsImmAddSub(-local_c0), (uVar13 & 1) != 0)
     ) {
    local_130 = local_130 & 0xffffffffffffff00;
    uStack_128 = uStack_128 & 0xffffff00;
    local_110 = -local_c0;
    local_100 = 0xffffffff;
    uStack_108._0_1_ = 0x13;
    local_f8 = 2;
    lVar26 = -0xb0;
    uVar16 = 0;
  }
  else {
    lVar26 = -0x60;
    uVar16 = 0x40000000;
  }
  TurboAssembler::AddSubMacro
            (pTVar24,&local_148,&local_168,&stack0xffffffffffffff80 + lVar26,0,uVar16);
  local_d8 = 0;
  local_140 = 0;
  local_e0 = 0x2000000018;
  local_148 = 0x2000000018;
  local_130 = local_130 & 0xffffffffffffff00;
  uStack_128 = uStack_128 & 0xffffff00;
  local_110 = 0;
  uStack_108._0_1_ = 0x13;
  local_100 = 0x200000001b;
  local_f8 = 0;
  uStack_f4 = 0;
  uStack_ec = (uint)(*(int *)(this + 0x30) == 2);
  uStack_f0 = 0xffffffff;
  TurboAssembler::AddSubMacro
            (*(TurboAssembler **)(this + 0x28),&local_e0,&local_148,&local_130,0,0x40000000);
  local_d8 = 0;
  local_140 = 0;
  local_130 = local_130 & 0xffffffffffffff00;
  uStack_128 = uStack_128 & 0xffffff00;
  local_e0 = 0x4000000018;
  local_148 = 0x4000000018;
  local_110 = 0;
  uStack_108._0_1_ = 0x13;
  local_100 = 0x4000000018;
  uStack_f0 = 0xffffffff;
  uStack_ec = 0x20;
  local_f8 = 0;
  uStack_f4 = 0;
  TurboAssembler::LogicalMacro
            (*(TurboAssembler **)(this + 0x28),&local_e0,&local_148,&local_130,0x20000000);
  local_d8 = 0;
  local_e0 = 0x4000000014;
  local_110 = *(long *)(*(TurboAssembler **)(this + 0x28) + 0x180);
  local_130 = local_130 & 0xffffffffffffff00;
  uStack_128 = uStack_128 & 0xffffff00;
  uStack_108 = CONCAT71(uStack_108._1_7_,3);
  local_100 = 0xffffffff;
  local_f8 = 2;
  TurboAssembler::Mov(*(TurboAssembler **)(this + 0x28),&local_e0,&local_130,0);
  local_178 = 0;
  uStack_170 = 0;
  local_130 = 0x200000001b;
  uStack_128 = 0;
  TurboAssembler::Cbnz
            (*(TurboAssembler **)(this + 0x28),(Register *)&local_130,(Label *)&uStack_170);
  local_130 = 0x2000000016;
  uStack_128 = 0;
  TurboAssembler::Mov(*(TurboAssembler **)(this + 0x28),(Register *)&local_130,10);
  pAVar25 = *(Assembler **)(this + 0x28);
  Assembler::b(pAVar25,(Label *)&local_178);
  Assembler::CheckVeneerPool(pAVar25,false,false,0x400);
  Assembler::bind(*(Label **)(this + 0x28));
  LoadCurrentCharacterUnchecked(this,-1,1);
  Assembler::bind(*(Label **)(this + 0x28));
  if (0 < *(int *)(this + 0x38)) {
    (**(code **)(*(long *)this + 0x168))(this,0,*(int *)(this + 0x38) + -1);
  }
  local_130 = 0x400000001d;
  local_d8 = 0;
  local_11c = 2;
  uStack_128 = 0;
  uStack_124 = 0xffffffff;
  uStack_120 = 0;
  local_e0 = 0x4000000017;
  local_118 = 0xfffffffffffffff0;
  local_110 = -0x100000000;
  uStack_108 = 0xffffffff;
  TurboAssembler::LoadStoreMacro(*(TurboAssembler **)(this + 0x28),&local_e0,&local_130,0xc0400000);
  pAVar25 = *(Assembler **)(this + 0x28);
  Assembler::b(pAVar25,(Label *)(this + 0x44));
  Assembler::CheckVeneerPool(pAVar25,false,false,0x400);
  if (0 < *(int *)(this + 0x54)) {
    Assembler::bind(*(Label **)(this + 0x28));
    (**(code **)(*(long *)this + 0x38))(this);
  }
  if (0 < *(int *)(this + 0x4c)) {
    local_148 = 0x200000000f;
    local_140 = 0;
    Assembler::bind(*(Label **)(this + 0x28));
    if (0 < *(int *)(this + 0x38)) {
      local_160 = 0;
      local_168 = 0x200000000c;
      local_198 = 0x200000000e;
      local_188 = 0x200000000d;
      local_180 = 0;
      local_190 = 0;
      local_e0 = 0x4000000019;
      local_d8 = 0;
      local_130 = local_130 & 0xffffffffffffff00;
      uStack_128 = uStack_128 & 0xffffff00;
      local_110 = 0;
      uStack_108._0_1_ = 0x13;
      local_100 = 0x400000001a;
      uStack_f0 = 0xffffffff;
      uStack_ec = 0;
      local_f8 = 0;
      uStack_f4 = 0;
      TurboAssembler::AddSubMacro
                (*(TurboAssembler **)pRVar20,&DAT_019f7b84,&local_e0,&local_130,0,0x40000000);
      pTVar24 = *(TurboAssembler **)pRVar20;
      if (pTVar24[0xc0] != (TurboAssembler)0x0) {
        local_130 = local_130 & 0xffffffffffffff00;
        uStack_128 = uStack_128 & 0xffffff00;
        uStack_108._0_1_ = 0x13;
        local_100 = 0xffffffff;
        local_110 = 0x1fffffe0;
        local_f8 = 2;
        TurboAssembler::AddSubMacro(pTVar24,&DAT_019f7b78,&DAT_019f7b84,&local_130,1,0x40000000);
        TurboAssembler::Check(*(TurboAssembler **)pRVar20,9,8);
        pTVar24 = *(TurboAssembler **)pRVar20;
      }
      if (*(int *)(this + 0x30) != 2) {
        uVar16 = 0xffffffff;
      }
      else {
        uVar16 = 0x1ffffffff;
      }
      uStack_f4 = (uint)(*(int *)(this + 0x30) == 2);
      local_d8 = 0;
      local_e0 = 0x200000001b;
      local_100 = 0x200000000a;
      uStack_108 = CONCAT71(uStack_108._1_7_,0x13);
      local_110 = 0;
      uStack_128 = uStack_128 & 0xffffff00;
      local_130 = local_130 & 0xffffffffffffff00;
      uStack_f0 = (undefined4)uVar16;
      uStack_ec = (uint)((ulong)uVar16 >> 0x20);
      local_f8 = 0;
      TurboAssembler::AddSubMacro(pTVar24,&local_198,&local_e0,&local_130,0,0);
      uVar17 = uStack_120;
      uVar8 = uStack_124;
      iVar11 = *(int *)(this + 0x38);
      uStack_124 = 0xffffffff;
      uVar9 = uStack_124;
      uStack_120 = 0;
      uVar10 = uStack_120;
      uStack_124 = uVar8;
      uStack_120 = uVar17;
      if (0 < iVar11) {
        uVar13 = 0;
        uVar14 = 2;
        do {
          uVar2 = 0x400000003f;
          local_100 = uVar13 | 0x4000000000;
          local_e0 = uVar2;
          if ((int)local_168 != 0x3f) {
            local_e0 = local_168 & 0xffffffff | 0x4000000000;
          }
          local_d8 = 0;
          local_130 = local_130 & 0xffffffffffffff00;
          uStack_128 = uStack_128 & 0xffffff00;
          local_110 = 0;
          uStack_108._0_1_ = 0x13;
          uStack_f0 = 0xffffffff;
          uStack_ec = 0;
          local_f8 = 0;
          uStack_f4 = 0;
          TurboAssembler::Mov(*(TurboAssembler **)pRVar20,&local_e0,&local_130,0);
          local_130 = uVar2;
          if ((int)local_188 != 0x3f) {
            local_130 = local_188 & 0xffffffff | 0x4000000000;
          }
          local_e0 = uVar2;
          if ((int)local_168 != 0x3f) {
            local_e0 = local_168 & 0xffffffff | 0x4000000000;
          }
          uStack_128 = 0;
          local_d8 = 0;
          Assembler::ubfm(*(Assembler **)pRVar20,(Register *)&local_130,(Register *)&local_e0,0x20,
                          0x3f);
          if ((uVar14 == 2) && ((*(uint *)(this + 0x10) | 1) == 3)) {
            local_130 = local_130 & 0xffffffffffffff00;
            uStack_128 = uStack_128 & 0xffffff00;
            local_110 = 0;
            uStack_108._0_1_ = 0x13;
            local_100 = local_168;
            local_f8 = local_160;
            uStack_f4 = 0;
            uStack_f0 = 0xffffffff;
            uStack_ec = 0;
            TurboAssembler::Mov(*(TurboAssembler **)pRVar20,&local_148,&local_130,0);
          }
          iVar11 = *(int *)(this + 0x30);
          if (iVar11 != 2) {
            local_130 = (ulong)local_130._1_7_ << 8;
            uStack_128 = (uint)uStack_128._1_3_ << 8;
            local_110 = 0;
            uStack_108._0_1_ = 0x13;
            local_100 = local_168;
            local_f8 = local_160;
            uStack_f4 = 0;
            uStack_f0 = 0xffffffff;
            uStack_ec = 0;
            TurboAssembler::AddSubMacro
                      (*(TurboAssembler **)(this + 0x28),&local_168,&local_198,&local_130,0,0);
            pTVar24 = *(TurboAssembler **)pRVar20;
            uStack_f4 = 0;
          }
          else {
            local_130 = (ulong)local_130._1_7_ << 8;
            uStack_128 = (uint)uStack_128._1_3_ << 8;
            local_110 = 0;
            uStack_108._0_1_ = 0x13;
            local_100 = local_168;
            local_f8 = local_160;
            uStack_f4 = 2;
            uStack_f0 = 0xffffffff;
            uStack_ec = 1;
            TurboAssembler::AddSubMacro
                      (*(TurboAssembler **)(this + 0x28),&local_168,&local_198,&local_130,0,0);
            pTVar24 = *(TurboAssembler **)pRVar20;
            uStack_f4 = 2;
          }
          uStack_f0 = 0xffffffff;
          uStack_108 = CONCAT71(uStack_108._1_7_,0x13);
          uStack_ec = (uint)(iVar11 == 2);
          local_110 = 0;
          uStack_128 = uStack_128 & 0xffffff00;
          local_130 = local_130 & 0xffffffffffffff00;
          local_100 = local_188;
          local_f8 = local_180;
          TurboAssembler::AddSubMacro(pTVar24,&local_188,&local_198,&local_130,0,0);
          uStack_128 = 0;
          local_130 = 0x400000001c;
          local_11c = 2;
          local_118 = 8;
          local_110 = -0xfffffffe;
          uStack_108 = 0xffffffff;
          iVar11 = 0x44000000;
          if (local_168._4_4_ != 0x40) {
            iVar11 = -0x7c000000;
          }
          iVar3 = 0x4000000;
          if (local_168._4_4_ != 0x20) {
            iVar3 = iVar11;
          }
          iVar11 = (uint)(local_168._4_4_ == 0x40) << 0x1f;
          if (local_160 != 0) {
            iVar11 = iVar3;
          }
          uStack_124 = uVar9;
          uStack_120 = uVar10;
          TurboAssembler::LoadStorePairMacro
                    (*(TurboAssembler **)(this + 0x28),&local_168,&local_188,&local_130,iVar11);
          iVar11 = *(int *)(this + 0x38);
          if (0xf < uVar14) break;
          uVar13 = uVar13 + 1;
          bVar1 = (long)uVar14 < (long)iVar11;
          uVar14 = uVar14 + 2;
        } while (bVar1);
      }
      uVar21 = iVar11 - 0x10;
      if (0 < (int)uVar21) {
        local_1a8 = 0x400000000a;
        local_1a0 = 0;
        pTVar24 = *(TurboAssembler **)pRVar20;
        local_1b8 = 0x400000001d;
        local_1b0 = 0;
        local_e0 = local_e0 & 0xffffffffffffff00;
        local_d8 = local_d8 & 0xffffff00;
        local_c0 = -0x38;
        local_b8 = 0x13;
        local_b0 = 0xffffffff;
        local_a8 = 2;
        uVar13 = Assembler::IsImmAddSub(0x38);
        if ((uVar13 & 1) == 0) {
          lVar26 = -0x60;
          uVar16 = 0;
        }
        else {
          local_130 = local_130 & 0xffffffffffffff00;
          uStack_128 = uStack_128 & 0xffffff00;
          uStack_108 = CONCAT71(uStack_108._1_7_,0x13);
          local_110 = -local_c0;
          local_100 = 0xffffffff;
          local_f8 = 2;
          lVar26 = -0xb0;
          uVar16 = 0x40000000;
        }
        TurboAssembler::AddSubMacro
                  (pTVar24,&local_1a8,&local_1b8,&stack0xffffffffffffff80 + lVar26,0,uVar16);
        if ((int)uVar21 < 0x11) {
          if (1 < (int)uVar21) {
            local_1f0 = uVar21 >> 1 & 0x7f;
            uVar21 = 0;
            do {
              local_11c = 2;
              local_130 = local_1a8;
              uStack_128 = local_1a0;
              local_118 = 0xfffffffffffffff8;
              uVar19 = 0x44000000;
              if (local_188._4_4_ != 0x40) {
                uVar19 = 0x84000000;
              }
              uVar5 = 0x4000000;
              if (local_188._4_4_ != 0x20) {
                uVar5 = uVar19;
              }
              uVar19 = (uint)(local_188._4_4_ == 0x40) << 0x1f;
              if (local_180 != 0) {
                uVar19 = uVar5;
              }
              local_110 = 0xffffffff00000002;
              uStack_108 = 0xffffffff;
              uStack_124 = uVar9;
              uStack_120 = uVar10;
              TurboAssembler::LoadStorePairMacro
                        (*(TurboAssembler **)pRVar20,&local_188,&local_168,&local_130,
                         uVar19 | 0x400000);
              if ((uVar21 == 0) && ((*(uint *)(this + 0x10) | 1) == 3)) {
                local_130 = local_130 & 0xffffffffffffff00;
                uStack_128 = uStack_128 & 0xffffff00;
                local_110 = 0;
                uStack_108 = CONCAT71(uStack_108._1_7_,0x13);
                local_100 = local_168;
                local_f8 = local_160;
                uStack_f4 = 0;
                uStack_f0 = 0xffffffff;
                uStack_ec = 0;
                TurboAssembler::Mov(*(TurboAssembler **)pRVar20,&local_148,&local_130,0);
              }
              iVar11 = *(int *)(this + 0x30);
              if (iVar11 != 2) {
                local_130 = (ulong)local_130._1_7_ << 8;
                uStack_128 = (uint)uStack_128._1_3_ << 8;
                local_110 = 0;
                uStack_108._0_1_ = 0x13;
                local_100 = local_168;
                local_f8 = local_160;
                uStack_f4 = 0;
                uStack_f0 = 0xffffffff;
                uStack_ec = 0;
                TurboAssembler::AddSubMacro
                          (*(TurboAssembler **)(this + 0x28),&local_168,&local_198,&local_130,0,0);
                pTVar24 = *(TurboAssembler **)pRVar20;
                uStack_f4 = 0;
              }
              else {
                local_130 = (ulong)local_130._1_7_ << 8;
                uStack_128 = (uint)uStack_128._1_3_ << 8;
                local_110 = 0;
                uStack_108._0_1_ = 0x13;
                local_100 = local_168;
                local_f8 = local_160;
                uStack_f4 = 2;
                uStack_f0 = 0xffffffff;
                uStack_ec = 1;
                TurboAssembler::AddSubMacro
                          (*(TurboAssembler **)(this + 0x28),&local_168,&local_198,&local_130,0,0);
                pTVar24 = *(TurboAssembler **)pRVar20;
                uStack_f4 = 2;
              }
              uStack_f0 = 0xffffffff;
              uStack_108 = CONCAT71(uStack_108._1_7_,0x13);
              uStack_128 = uStack_128 & 0xffffff00;
              local_130 = local_130 & 0xffffffffffffff00;
              uStack_ec = (uint)(iVar11 == 2);
              local_110 = 0;
              local_100 = local_188;
              local_f8 = local_180;
              TurboAssembler::AddSubMacro(pTVar24,&local_188,&local_198,&local_130,0,0);
              local_130 = 0x400000001c;
              uStack_128 = 0;
              local_11c = 2;
              local_118 = 8;
              uVar19 = 0x44000000;
              if (local_168._4_4_ != 0x40) {
                uVar19 = 0x84000000;
              }
              uVar5 = 0x4000000;
              if (local_168._4_4_ != 0x20) {
                uVar5 = uVar19;
              }
              uVar19 = (uint)(local_168._4_4_ == 0x40) << 0x1f;
              if (local_160 != 0) {
                uVar19 = uVar5;
              }
              local_110 = -0xfffffffe;
              uStack_108 = 0xffffffff;
              uStack_124 = uVar9;
              uStack_120 = uVar10;
              TurboAssembler::LoadStorePairMacro
                        (*(TurboAssembler **)pRVar20,&local_168,&local_188,&local_130,uVar19);
              uVar21 = uVar21 + 1;
            } while (local_1f0 != uVar21);
          }
        }
        else {
          local_e0 = 0;
          local_1b8 = 0;
          TurboAssembler::Mov(*(TurboAssembler **)(this + 0x28),(Register *)&DAT_019f7b90,
                              (ulong)uVar21);
          local_130 = local_1a8;
          uStack_128 = local_1a0;
          uVar19 = 0x44000000;
          uVar21 = uVar19;
          if (local_188._4_4_ != 0x40) {
            uVar21 = 0x84000000;
          }
          uVar5 = 0x4000000;
          if (local_188._4_4_ != 0x20) {
            uVar5 = uVar21;
          }
          uVar21 = (uint)(local_188._4_4_ == 0x40) << 0x1f;
          if (local_180 != 0) {
            uVar21 = uVar5;
          }
          local_11c = 2;
          local_118 = 0xfffffffffffffff8;
          local_110 = 0xffffffff00000002;
          uStack_108 = 0xffffffff;
          uStack_124 = uVar9;
          uStack_120 = uVar10;
          TurboAssembler::LoadStorePairMacro
                    (*(TurboAssembler **)(this + 0x28),&local_188,&local_168,&local_130,
                     uVar21 | 0x400000);
          if ((*(uint *)(this + 0x10) | 1) == 3) {
            local_130 = local_130 & 0xffffffffffffff00;
            uStack_128 = uStack_128 & 0xffffff00;
            local_110 = 0;
            uStack_108 = CONCAT71(uStack_108._1_7_,0x13);
            local_100 = local_168;
            local_f8 = local_160;
            uStack_f4 = 0;
            uStack_f0 = 0xffffffff;
            uStack_ec = 0;
            TurboAssembler::Mov(*(TurboAssembler **)pRVar20,&local_148,&local_130,0);
          }
          pAVar25 = *(Assembler **)(this + 0x28);
          Assembler::b(pAVar25,(Label *)&local_1b8);
          Assembler::CheckVeneerPool(pAVar25,false,false,0x400);
          Assembler::bind(*(Label **)(this + 0x28));
          local_130 = local_1a8;
          uStack_128 = local_1a0;
          uStack_124 = 0xffffffff;
          uStack_120 = 0;
          if (local_188._4_4_ != 0x40) {
            uVar19 = 0x84000000;
          }
          uVar21 = 0x4000000;
          if (local_188._4_4_ != 0x20) {
            uVar21 = uVar19;
          }
          uVar19 = (uint)(local_188._4_4_ == 0x40) << 0x1f;
          if (local_180 != 0) {
            uVar19 = uVar21;
          }
          local_11c = 2;
          local_118 = 0xfffffffffffffff8;
          local_110 = 0xffffffff00000002;
          uStack_108 = 0xffffffff;
          TurboAssembler::LoadStorePairMacro
                    (*(TurboAssembler **)(this + 0x28),&local_188,&local_168,&local_130,
                     uVar19 | 0x400000);
          Assembler::bind(*(Label **)(this + 0x28));
          iVar11 = *(int *)(this + 0x30);
          if (iVar11 != 2) {
            local_130 = (ulong)local_130._1_7_ << 8;
            uStack_128 = (uint)uStack_128._1_3_ << 8;
            local_110 = 0;
            uStack_108._0_1_ = 0x13;
            local_100 = local_168;
            local_f8 = local_160;
            uStack_f4 = 0;
            uStack_f0 = 0xffffffff;
            uStack_ec = 0;
            TurboAssembler::AddSubMacro
                      (*(TurboAssembler **)(this + 0x28),&local_168,&local_198,&local_130,0,0);
            pTVar24 = *(TurboAssembler **)pRVar20;
            uStack_f4 = 0;
          }
          else {
            local_130 = (ulong)local_130._1_7_ << 8;
            uStack_128 = (uint)uStack_128._1_3_ << 8;
            local_110 = 0;
            uStack_108._0_1_ = 0x13;
            local_100 = local_168;
            local_f8 = local_160;
            uStack_f4 = 2;
            uStack_f0 = 0xffffffff;
            uStack_ec = 1;
            TurboAssembler::AddSubMacro
                      (*(TurboAssembler **)(this + 0x28),&local_168,&local_198,&local_130,0,0);
            pTVar24 = *(TurboAssembler **)pRVar20;
            uStack_f4 = 2;
          }
          uStack_f0 = 0xffffffff;
          uStack_108 = CONCAT71(uStack_108._1_7_,0x13);
          uStack_ec = (uint)(iVar11 == 2);
          local_110 = 0;
          uStack_128 = uStack_128 & 0xffffff00;
          local_130 = local_130 & 0xffffffffffffff00;
          local_100 = local_188;
          local_f8 = local_180;
          TurboAssembler::AddSubMacro(pTVar24,&local_188,&local_198,&local_130,0,0);
          local_130 = 0x400000001c;
          uStack_128 = 0;
          uStack_124 = 0xffffffff;
          uStack_120 = 0;
          local_118 = 8;
          iVar11 = 0x44000000;
          if (local_168._4_4_ != 0x40) {
            iVar11 = -0x7c000000;
          }
          iVar3 = 0x4000000;
          if (local_168._4_4_ != 0x20) {
            iVar3 = iVar11;
          }
          iVar11 = (uint)(local_168._4_4_ == 0x40) << 0x1f;
          if (local_160 != 0) {
            iVar11 = iVar3;
          }
          local_11c = 2;
          local_110 = 0xffffffff00000002;
          uStack_108 = 0xffffffff;
          TurboAssembler::LoadStorePairMacro
                    (*(TurboAssembler **)pRVar20,&local_168,&local_188,&local_130,iVar11);
          local_130 = local_130 & 0xffffffffffffff00;
          uStack_128 = uStack_128 & 0xffffff00;
          local_110 = 2;
          uStack_108 = CONCAT71(uStack_108._1_7_,0x13);
          local_100 = 0xffffffff;
          local_f8 = 2;
          TurboAssembler::AddSubMacro
                    (*(TurboAssembler **)pRVar20,&DAT_019f7b90,&DAT_019f7b90,&local_130,0,0x40000000
                    );
          TurboAssembler::Cbnz
                    (*(TurboAssembler **)pRVar20,(Register *)&DAT_019f7b90,(Label *)&local_e0);
        }
      }
    }
    uVar13 = 0xffffffff;
    iVar11 = 2;
    if (*(int *)(this + 0x10) == 0) {
      TurboAssembler::Mov(*(TurboAssembler **)pRVar20,(Register *)&DAT_019f7c20,1);
    }
    else {
      local_168 = 0x2000000000;
      local_160 = 0;
      local_188 = 0x400000000a;
      local_180 = 0;
      local_130 = 0x400000001d;
      uStack_128 = 0;
      uStack_124 = 0xffffffff;
      uVar8 = uStack_124;
      uStack_120 = 0;
      uVar9 = uStack_120;
      local_118 = 0xffffffffffffffd8;
      local_110 = 0xffffffff00000000;
      uStack_108 = 0xffffffff;
      local_11c = iVar11;
      TurboAssembler::LoadStoreMacro(*(TurboAssembler **)pRVar20,&local_168,&local_130,0x80400000);
      local_130 = local_130 & 0xffffffffffffff00;
      uStack_128 = uStack_128 & 0xffffff00;
      local_110 = 1;
      uStack_108 = CONCAT71(uStack_108._1_7_,0x13);
      local_100 = uVar13;
      local_f8 = iVar11;
      TurboAssembler::AddSubMacro(*(TurboAssembler **)pRVar20,&local_168,&local_168,&local_130,0,0);
      local_130 = 0x400000001d;
      uStack_128 = 0;
      local_118 = 0xffffffffffffffd8;
      local_110 = 0xffffffff00000000;
      uStack_108 = 0xffffffff;
      if (local_160 == 0) {
        uVar17 = 0xc0000000;
        if (local_168._4_4_ != 0x40) {
          uVar17 = 0x80000000;
        }
      }
      else {
        uVar21 = local_168._4_4_ - 8U >> 3 | local_168._4_4_ << 0x1d;
        if (uVar21 < 8) {
          uVar17 = *(undefined4 *)(&DAT_019f38a8 + (long)(int)uVar21 * 4);
        }
        else {
          uVar17 = 0x4800000;
        }
      }
      uStack_124 = uVar8;
      uStack_120 = uVar9;
      local_11c = iVar11;
      TurboAssembler::LoadStoreMacro(*(TurboAssembler **)pRVar20,&local_168,&local_130,uVar17);
      local_130 = 0x400000001d;
      uStack_128 = 0;
      uStack_124 = 0xffffffff;
      uVar8 = uStack_124;
      local_118 = 0xffffffffffffffe8;
      local_110 = -0x100000000;
      uStack_108._0_1_ = 0xff;
      uStack_108._1_7_ = 0xffffff;
      if (local_180 == 0) {
        uVar17 = 0xc0400000;
        if (local_188._4_4_ != 0x40) {
          uVar17 = 0x80400000;
        }
      }
      else {
        uVar21 = local_188._4_4_ - 8U >> 3 | local_188._4_4_ << 0x1d;
        if (uVar21 < 8) {
          uVar17 = *(undefined4 *)(&DAT_019f3888 + (long)(int)uVar21 * 4);
        }
        else {
          uVar17 = 0x4c00000;
        }
      }
      uStack_120 = uVar9;
      local_11c = iVar11;
      TurboAssembler::LoadStoreMacro(*(TurboAssembler **)pRVar20,&local_188,&local_130,uVar17);
      pTVar24 = *(TurboAssembler **)(this + 0x28);
      local_c0 = (ulong)*(int *)(this + 0x38);
      local_b8 = 0x13;
      local_e0 = local_e0 & 0xffffffffffffff00;
      local_d8 = local_d8 & 0xffffff00;
      local_a8 = 2;
      local_b0 = uVar13;
      if ((*(int *)(this + 0x38) < 0) &&
         (uVar14 = Assembler::IsImmAddSub(-local_c0), (uVar14 & 1) != 0)) {
        local_130 = local_130 & 0xffffffffffffff00;
        uStack_128 = uStack_128 & 0xffffff00;
        local_110 = -local_c0;
        uStack_108._0_1_ = 0x13;
        local_f8 = 2;
        lVar26 = -0xb0;
        uVar16 = 0;
        local_100 = uVar13;
      }
      else {
        lVar26 = -0x60;
        uVar16 = 0x40000000;
      }
      TurboAssembler::AddSubMacro
                (pTVar24,&local_188,&local_188,&stack0xffffffffffffff80 + lVar26,0,uVar16);
      pTVar24 = *(TurboAssembler **)(this + 0x28);
      local_c0 = (ulong)*(int *)(this + 0x38);
      local_b8 = 0x13;
      puVar15 = (undefined8 *)&DAT_019f7b78;
      if (local_188._4_4_ != 0x40) {
        puVar15 = &DAT_019f7c68;
      }
      local_e0 = local_e0 & 0xffffffffffffff00;
      local_d8 = local_d8 & 0xffffff00;
      local_a8 = 2;
      local_b0 = uVar13;
      if ((*(int *)(this + 0x38) < 0) &&
         (uVar14 = Assembler::IsImmAddSub(-local_c0), (uVar14 & 1) != 0)) {
        local_130 = local_130 & 0xffffffffffffff00;
        uStack_128 = uStack_128 & 0xffffff00;
        local_110 = -local_c0;
        uStack_108._0_1_ = 0x13;
        local_f8 = 2;
        lVar26 = -0xb0;
        uVar16 = 0;
        local_100 = uVar13;
      }
      else {
        lVar26 = -0x60;
        uVar16 = 0x40000000;
      }
      TurboAssembler::AddSubMacro
                (pTVar24,puVar15,&local_188,&stack0xffffffffffffff80 + lVar26,1,uVar16);
      TurboAssembler::B(*(TurboAssembler **)pRVar20,&local_138,0xb);
      local_130 = 0x400000001d;
      uStack_128 = 0;
      local_118 = 0xffffffffffffffe8;
      local_11c = 2;
      local_110 = -0x100000000;
      uStack_108 = 0xffffffff;
      if (local_180 == 0) {
        uVar17 = 0xc0000000;
        if (local_188._4_4_ != 0x40) {
          uVar17 = 0x80000000;
        }
      }
      else {
        uVar21 = local_188._4_4_ - 8U >> 3 | local_188._4_4_ << 0x1d;
        if (uVar21 < 8) {
          uVar17 = *(undefined4 *)(&DAT_019f38a8 + (long)(int)uVar21 * 4);
        }
        else {
          uVar17 = 0x4800000;
        }
      }
      uStack_124 = uVar8;
      uStack_120 = uVar9;
      TurboAssembler::LoadStoreMacro(*(TurboAssembler **)pRVar20,&local_188,&local_130,uVar17);
      if ((*(uint *)(this + 0x10) | 1) == 3) {
        local_e0 = 0x2000000015;
        local_d8 = 0;
        local_130 = local_130 & 0xffffffffffffff00;
        uStack_128 = uStack_128 & 0xffffff00;
        local_110 = 0;
        uStack_108._0_1_ = 0x13;
        local_100 = local_148;
        local_f8 = local_140;
        uStack_f4 = 0;
        uStack_f0 = 0xffffffff;
        uStack_ec = 0;
        TurboAssembler::AddSubMacro
                  (*(TurboAssembler **)(this + 0x28),&DAT_019f7c68,&local_e0,&local_130,1,0x40000000
                  );
        TurboAssembler::B(*(TurboAssembler **)(this + 0x28),&uStack_170,1);
        local_130 = 0x2000000015;
        uStack_128 = 0;
        TurboAssembler::Cbz(*(TurboAssembler **)(this + 0x28),(Register *)&local_130,
                            (Label *)&local_138);
        local_1a8 = 0;
        Assembler::bind(*(Label **)(this + 0x28));
        local_e0 = 0x2000000015;
        local_d8 = 0;
        local_198 = 0x2000000015;
        local_190 = 0;
        local_110 = 1;
        if (*(int *)(this + 0x30) == 2) {
          local_110 = 2;
        }
        local_130 = local_130 & 0xffffffffffffff00;
        uStack_128 = uStack_128 & 0xffffff00;
        uStack_108 = CONCAT71(uStack_108._1_7_,0x13);
        local_f8 = 2;
        local_100 = uVar13;
        TurboAssembler::AddSubMacro
                  (*(TurboAssembler **)(this + 0x28),&local_e0,&local_198,&local_130,0,0);
        if (*(int *)(this + 0x10) == 3) {
          RegExpMacroAssembler::CheckNotInSurrogatePair
                    ((RegExpMacroAssembler *)this,0,(Label *)&local_1a8);
        }
      }
      pAVar25 = *(Assembler **)pRVar20;
      Assembler::b(pAVar25,(Label *)&uStack_170);
      Assembler::CheckVeneerPool(pAVar25,false,false,0x400);
    }
  }
  if ((0 < *(int *)(this + 0x5c)) &&
     (Assembler::bind(*(Label **)(this + 0x28)), *(int *)(this + 0x10) != 0)) {
    local_130 = 0x400000001d;
    local_11c = 2;
    uStack_128 = 0;
    uStack_124 = 0xffffffff;
    uStack_120 = 0;
    local_118 = 0xffffffffffffffd8;
    local_110 = -0x100000000;
    uStack_108 = 0xffffffff;
    TurboAssembler::LoadStoreMacro(*(TurboAssembler **)pRVar20,&DAT_019f7c20,&local_130,0x80400000);
  }
  Assembler::bind(*(Label **)(this + 0x28));
  uStack_108._0_1_ = 0x13;
  local_130 = local_130 & 0xffffffffffffff00;
  uStack_128 = uStack_128 & 0xffffff00;
  local_110 = 0;
  local_100 = 0x400000001d;
  uStack_f0 = 0xffffffff;
  uStack_ec = 0;
  local_f8 = 0;
  uStack_f4 = 0;
  TurboAssembler::Mov(*(TurboAssembler **)(this + 0x28),&DAT_019f7c44,&local_130,0);
  TurboAssembler::PopCPURegList
            (*(undefined8 *)(this + 0x28),auVar27._0_8_ | 0x40000000,auVar27._8_8_);
  pAVar25 = *(Assembler **)(this + 0x28);
  Assembler::ret(pAVar25,(Register *)&DAT_019f7c38);
  Assembler::CheckVeneerPool(pAVar25,false,false,0x400);
  local_168 = 0;
  if (0 < *(int *)(this + 100)) {
    Assembler::bind(*(Label **)pRVar20);
    pTVar24 = *(TurboAssembler **)pRVar20;
    local_c0 = *(ulong *)(pTVar24 + 0x180);
    local_e0 = local_e0 & 0xffffffffffffff00;
    local_d8 = local_d8 & 0xffffff00;
    local_b8 = 3;
    local_a8 = 2;
    local_b0 = 0xffffffff;
    if ((long)local_c0 < 0) {
      lVar26 = -local_c0;
      uVar13 = Assembler::IsImmAddSub(lVar26);
      if ((uVar13 & 1) == 0) goto LAB_0128fedc;
      local_130 = local_130 & 0xffffffffffffff00;
      uStack_128 = uStack_128 & 0xffffff00;
      local_100 = 0xffffffff;
      uStack_108._0_1_ = 0x13;
      local_f8 = 2;
      lVar7 = -0xb0;
      uVar16 = 0;
      local_110 = lVar26;
    }
    else {
LAB_0128fedc:
      lVar7 = -0x60;
      uVar16 = 0x40000000;
    }
    TurboAssembler::AddSubMacro
              (pTVar24,&DAT_019f7c38,&DAT_019f7c38,&stack0xffffffffffffff80 + lVar7,0,uVar16);
    TurboAssembler::Push
              (*(TurboAssembler **)(this + 0x28),(CPURegister *)&DAT_019f7b78,
               (CPURegister *)&DAT_019f7c38,(CPURegister *)&DAT_019f7b60,
               (CPURegister *)&DAT_019f7b60);
    TurboAssembler::PushCPURegList(*(undefined8 *)(this + 0x28),0xff,0x40);
    CallCheckStackGuardState(this,0x400000000a,0);
    TurboAssembler::Cbnz
              (*(TurboAssembler **)(this + 0x28),(Register *)&DAT_019f7c20,(Label *)&local_138);
    TurboAssembler::PopCPURegList(*(undefined8 *)(this + 0x28),0xff,0x40);
    TurboAssembler::Pop(*(TurboAssembler **)(this + 0x28),(CPURegister *)&DAT_019f7c38,
                        (CPURegister *)&DAT_019f7b78,(CPURegister *)&DAT_019f7b60,
                        (CPURegister *)&DAT_019f7b60);
    pTVar24 = *(TurboAssembler **)(this + 0x28);
    local_c0 = *(ulong *)(pTVar24 + 0x180);
    local_b8 = 3;
    local_e0 = local_e0 & 0xffffffffffffff00;
    local_d8 = local_d8 & 0xffffff00;
    local_b0 = 0xffffffff;
    local_a8 = 2;
    if ((long)local_c0 < 0) {
      lVar26 = -local_c0;
      uVar13 = Assembler::IsImmAddSub(lVar26);
      if ((uVar13 & 1) == 0) goto LAB_01290004;
      local_130 = local_130 & 0xffffffffffffff00;
      uStack_128 = uStack_128 & 0xffffff00;
      local_100 = 0xffffffff;
      uStack_108._0_1_ = 0x13;
      local_f8 = 2;
      local_110 = lVar26;
      TurboAssembler::AddSubMacro(pTVar24,&DAT_019f7c38,&DAT_019f7c38,&local_130,0,0x40000000);
    }
    else {
LAB_01290004:
      TurboAssembler::AddSubMacro(pTVar24,&DAT_019f7c38,&DAT_019f7c38,&local_e0,0,0);
    }
    pAVar25 = *(Assembler **)pRVar20;
    Assembler::ret(pAVar25,(Register *)&DAT_019f7c38);
    Assembler::CheckVeneerPool(pAVar25,false,false,0x400);
  }
  uVar13 = 0xffffffff;
  if (*(int *)(this + 0x6c) < 1) goto LAB_012903a4;
  Assembler::bind(*(Label **)pRVar20);
  pTVar24 = *(TurboAssembler **)pRVar20;
  local_c0 = *(ulong *)(pTVar24 + 0x180);
  local_e0 = local_e0 & 0xffffffffffffff00;
  local_d8 = local_d8 & 0xffffff00;
  local_b8 = 3;
  local_a8 = 2;
  local_b0 = uVar13;
  if ((long)local_c0 < 0) {
    lVar26 = -local_c0;
    uVar14 = Assembler::IsImmAddSub(lVar26);
    if ((uVar14 & 1) == 0) goto LAB_012900dc;
    local_130 = local_130 & 0xffffffffffffff00;
    uStack_128 = uStack_128 & 0xffffff00;
    uStack_108._0_1_ = 0x13;
    local_f8 = 2;
    lVar7 = -0xb0;
    uVar16 = 0;
    local_110 = lVar26;
    local_100 = uVar13;
  }
  else {
LAB_012900dc:
    lVar7 = -0x60;
    uVar16 = 0x40000000;
  }
  TurboAssembler::AddSubMacro
            (pTVar24,&DAT_019f7c38,&DAT_019f7c38,&stack0xffffffffffffff80 + lVar7,0,uVar16);
  TurboAssembler::Push
            (*(TurboAssembler **)pRVar20,(CPURegister *)&DAT_019f7b78,(CPURegister *)&DAT_019f7c38,
             (CPURegister *)&DAT_019f7b60,(CPURegister *)&DAT_019f7b60);
  TurboAssembler::PushCPURegList(*(undefined8 *)pRVar20,0xff,0x40);
  pTVar24 = *(TurboAssembler **)pRVar20;
  local_110 = ExternalReference::isolate_address(*(Isolate **)(pTVar24 + 0x178));
  local_130 = local_130 & 0xffffffffffffff00;
  uStack_128 = uStack_128 & 0xffffff00;
  uStack_108._0_1_ = 7;
  local_f8 = 2;
  local_100 = uVar13;
  TurboAssembler::Mov(pTVar24,&DAT_019f7c50,&local_130,0);
  pTVar24 = *(TurboAssembler **)pRVar20;
  local_148 = 0x400000001d;
  local_140 = 0;
  local_e0 = local_e0 & 0xffffffffffffff00;
  local_d8 = local_d8 & 0xffffff00;
  local_c0 = -0x10;
  local_b8 = 0x13;
  local_a8 = 2;
  local_b0 = uVar13;
  uVar14 = Assembler::IsImmAddSub(0x10);
  if ((uVar14 & 1) == 0) {
    lVar26 = -0x60;
    uVar16 = 0;
  }
  else {
    local_130 = local_130 & 0xffffffffffffff00;
    uStack_128 = uStack_128 & 0xffffff00;
    local_110 = -local_c0;
    uStack_108._0_1_ = 0x13;
    local_f8 = 2;
    lVar26 = -0xb0;
    uVar16 = 0x40000000;
    local_100 = uVar13;
  }
  TurboAssembler::AddSubMacro
            (pTVar24,&DAT_019f7bfc,&local_148,&stack0xffffffffffffff80 + lVar26,0,uVar16);
  local_130 = local_130 & 0xffffffffffffff00;
  uStack_128 = uStack_128 & 0xffffff00;
  local_110 = 0;
  uStack_108._0_1_ = 0x13;
  local_100 = 0x4000000017;
  uStack_f0 = 0xffffffff;
  uStack_ec = 0;
  local_f8 = 0;
  uStack_f4 = 0;
  TurboAssembler::Mov(*(TurboAssembler **)pRVar20,&DAT_019f7be4,&local_130,0);
  uVar16 = ExternalReference::re_grow_stack(*(Isolate **)(*(long *)pRVar20 + 0x178));
  TurboAssembler::CallCFunction(*(undefined8 *)pRVar20,uVar16,3);
  TurboAssembler::Cbz(*(TurboAssembler **)pRVar20,(Register *)&DAT_019f7c20,(Label *)&local_168);
  local_e0 = 0x4000000017;
  local_d8 = 0;
  local_130 = local_130 & 0xffffffffffffff00;
  uStack_128 = uStack_128 & 0xffffff00;
  local_110 = 0;
  uStack_108._0_1_ = 0x13;
  local_100 = 0x4000000000;
  uStack_f0 = 0xffffffff;
  uStack_ec = 0;
  local_f8 = 0;
  uStack_f4 = 0;
  TurboAssembler::Mov(*(TurboAssembler **)pRVar20,&local_e0,&local_130,0);
  TurboAssembler::PopCPURegList(*(undefined8 *)pRVar20,0xff,0x40);
  TurboAssembler::Pop(*(TurboAssembler **)pRVar20,(CPURegister *)&DAT_019f7c38,
                      (CPURegister *)&DAT_019f7b78,(CPURegister *)&DAT_019f7b60,
                      (CPURegister *)&DAT_019f7b60);
  pTVar24 = *(TurboAssembler **)pRVar20;
  local_c0 = *(ulong *)(pTVar24 + 0x180);
  local_e0 = local_e0 & 0xffffffffffffff00;
  local_d8 = local_d8 & 0xffffff00;
  local_b8 = 3;
  local_a8 = 2;
  local_b0 = uVar13;
  if ((long)local_c0 < 0) {
    lVar26 = -local_c0;
    uVar14 = Assembler::IsImmAddSub(lVar26);
    if ((uVar14 & 1) == 0) goto LAB_0129035c;
    local_130 = local_130 & 0xffffffffffffff00;
    uStack_128 = uStack_128 & 0xffffff00;
    uStack_108._0_1_ = 0x13;
    local_f8 = 2;
    lVar7 = -0xb0;
    uVar16 = 0x40000000;
    local_110 = lVar26;
    local_100 = uVar13;
  }
  else {
LAB_0129035c:
    lVar7 = -0x60;
    uVar16 = 0;
  }
  TurboAssembler::AddSubMacro
            (pTVar24,&DAT_019f7c38,&DAT_019f7c38,&stack0xffffffffffffff80 + lVar7,0,uVar16);
  pAVar25 = *(Assembler **)pRVar20;
  Assembler::ret(pAVar25,(Register *)&DAT_019f7c38);
  Assembler::CheckVeneerPool(pAVar25,false,false,0x400);
LAB_012903a4:
  if (0 < (int)local_168) {
    Assembler::bind(*(Label **)pRVar20);
    TurboAssembler::Mov(*(TurboAssembler **)pRVar20,(Register *)&DAT_019f7c20,0xffffffffffffffff);
    pAVar25 = *(Assembler **)pRVar20;
    Assembler::b(pAVar25,(Label *)&local_138);
    Assembler::CheckVeneerPool(pAVar25,false,false,0x400);
  }
  local_e8 = 0;
  uStack_128 = 0;
  uStack_124 = 0;
  local_130 = 0;
  local_118 = 0;
  uStack_120 = 0;
  local_11c = 0;
  uStack_108 = 0;
  local_110 = 0;
  local_f8 = 0;
  uStack_f4 = 0;
  local_100 = 0;
  uStack_f0 = 0;
  Assembler::GetCode(*(Assembler **)pRVar20,*(Isolate **)(*(Assembler **)pRVar20 + 0x178),
                     (CodeDesc *)&local_130,(SafepointTableBuilder *)0x0,0);
  Factory::CodeBuilder::CodeBuilder
            ((CodeBuilder *)&local_e0,*(undefined8 *)(*(long *)pRVar20 + 0x178),&local_130,4);
  local_c8 = *(undefined8 *)(*(long *)pRVar20 + 0x180);
  puVar15 = (undefined8 *)Factory::CodeBuilder::Build((CodeBuilder *)&local_e0);
  uVar16 = *puVar15;
  lVar26 = *(long *)(*(long *)(*(long *)pRVar20 + 0x178) + 0xb6d8);
  this_00 = (Mutex *)(lVar26 + 0x28);
  uVar22 = *param_2;
  base::Mutex::Lock(this_00);
  for (plVar23 = *(long **)(lVar26 + 0x10); plVar23 != (long *)0x0; plVar23 = (long *)*plVar23) {
    (**(code **)(*(long *)plVar23[2] + 0x50))((long *)plVar23[2],uVar16,uVar22);
  }
  base::Mutex::Unlock(this_00);
  *(undefined1 *)(lVar18 + 400) = uVar4;
  if (*(long *)(lVar6 + 0x28) == local_98) {
    return puVar15;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

