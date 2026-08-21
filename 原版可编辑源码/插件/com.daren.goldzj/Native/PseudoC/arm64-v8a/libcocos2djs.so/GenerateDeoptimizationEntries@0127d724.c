
/* v8::internal::Deoptimizer::GenerateDeoptimizationEntries(v8::internal::MacroAssembler*,
   v8::internal::Isolate*, v8::internal::DeoptimizeKind) */

void v8::internal::Deoptimizer::GenerateDeoptimizationEntries
               (TurboAssembler *param_1,Isolate *param_2,ulong param_3)

{
  TurboAssembler *pTVar1;
  TurboAssembler *pTVar2;
  TurboAssembler TVar3;
  TurboAssembler TVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  TurboAssembler **ppTVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 local_1c0;
  undefined4 local_1b8;
  TurboAssembler *local_1b0;
  uint local_1a8;
  ulong local_1a0;
  int local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  TurboAssembler *local_180;
  uint local_178;
  undefined8 local_170;
  uint local_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined8 local_140;
  undefined4 local_138;
  ulong local_130;
  undefined8 local_128;
  ulong local_120 [2];
  TurboAssembler *local_110;
  TurboAssembler *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  ulong local_f0;
  undefined1 local_e8;
  undefined8 local_e0;
  int local_d8;
  undefined8 local_d4;
  undefined4 local_cc;
  TurboAssembler *local_c8;
  uint local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined8 local_b0;
  long local_a8;
  undefined8 local_a0;
  TurboAssembler *local_98;
  uint local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  long local_80;
  
  lVar5 = tpidr_el0;
  local_80 = *(long *)(lVar5 + 0x28);
  TVar3 = param_1[0x188];
  param_1[0x188] = (TurboAssembler)0x0;
  lVar11 = RegisterConfiguration::Default();
  uVar14 = (ulong)*(int *)(lVar11 + 0x30);
  local_120[1] = 0x100000040;
  local_120[0] = uVar14;
  TurboAssembler::PushCPURegList(param_1,uVar14,0x100000040);
  local_130 = 0x3ff8ffff;
  local_128 = 0x40;
  CPURegList::Align((CPURegList *)&local_130);
  TurboAssembler::PushCPURegList(param_1,local_130,local_128);
  local_a8 = ExternalReference::Create(1,param_2);
  local_c8 = (TurboAssembler *)((ulong)local_c8 & 0xffffffffffffff00);
  local_c0 = local_c0 & 0xffffff00;
  local_a0 = CONCAT71(local_a0._1_7_,7);
  local_98 = (TurboAssembler *)0xffffffff;
  local_90 = 2;
  TurboAssembler::Mov(param_1,&DAT_019f4284,&local_c8,0);
  local_b4 = 2;
  local_c0 = 0;
  local_c8 = (TurboAssembler *)0x4000000003;
  local_bc = 0xffffffff;
  local_b0 = 0;
  local_a8 = 0xffffffff00000000;
  local_a0 = 0xffffffff;
  TurboAssembler::LoadStoreMacro(param_1,&DAT_019f4278,&local_c8,0xc0000000);
  iVar7 = CountSetBits(local_130,0x40);
  iVar8 = CountSetBits(uVar14,0x40);
  uVar10 = (iVar8 + iVar7) * 8;
  iVar7 = CountSetBits(local_130,0x40);
  local_140 = 0x4000000002;
  local_138 = 0;
  TurboAssembler::Mov(param_1,(Register *)&local_140,0xffffffff);
  local_98 = (TurboAssembler *)0x400000001e;
  local_150 = 0x4000000003;
  local_148 = 0;
  local_c8 = (TurboAssembler *)((ulong)local_c8 & 0xffffffffffffff00);
  local_c0 = local_c0 & 0xffffff00;
  local_a8 = 0;
  local_160 = 0x4000000004;
  local_a0._0_1_ = 0x13;
  local_158 = 0;
  uStack_88 = 0xffffffff;
  uStack_84 = 0;
  local_90 = 0;
  uStack_8c = 0;
  TurboAssembler::Mov(param_1,&local_150,&local_c8,0);
  local_f0 = (ulong)(int)uVar10;
  local_110 = (TurboAssembler *)((ulong)local_110 & 0xffffffffffffff00);
  local_108 = (TurboAssembler *)((ulong)local_108 & 0xffffffffffffff00);
  local_e8 = 0x13;
  local_e0 = 0xffffffff;
  local_d8 = 2;
  if (((int)uVar10 < 0) && (uVar14 = Assembler::IsImmAddSub(-local_f0), (uVar14 & 1) != 0)) {
    local_c8 = (TurboAssembler *)((ulong)local_c8 & 0xffffffffffffff00);
    local_a8 = -local_f0;
    local_c0 = local_c0 & 0xffffff00;
    local_98 = (TurboAssembler *)0xffffffff;
    local_a0._0_1_ = 0x13;
    local_90 = 2;
    lVar11 = -0x58;
    uVar13 = 0x40000000;
  }
  else {
    lVar11 = -0xa0;
    uVar13 = 0;
  }
  TurboAssembler::AddSubMacro
            (param_1,&local_160,&DAT_019f42b4,&stack0xffffffffffffff90 + lVar11,0,uVar13);
  local_c8 = (TurboAssembler *)((ulong)local_c8 & 0xffffffffffffff00);
  local_c0 = local_c0 & 0xffffff00;
  local_a8 = 0;
  local_a0 = CONCAT71(local_a0._1_7_,0x13);
  local_98 = (TurboAssembler *)local_160;
  local_90 = local_158;
  uStack_8c = 0;
  uStack_88 = 0xffffffff;
  uStack_84 = 0;
  TurboAssembler::AddSubMacro(param_1,&local_160,&DAT_019f4278,&local_c8,0,0x40000000);
  local_b4 = 2;
  local_c0 = 0;
  local_c8 = (TurboAssembler *)0x400000001d;
  local_bc = 0xffffffff;
  local_b0 = 0xfffffffffffffff8;
  local_a8 = 0xffffffff00000000;
  local_a0 = 0xffffffff;
  TurboAssembler::LoadStoreMacro(param_1,&DAT_019f42c0,&local_c8,0xc0400000);
  local_c8 = (TurboAssembler *)0x400000001d;
  local_c0 = 0;
  local_bc = 0xffffffff;
  local_b4 = 2;
  local_b0 = 0xfffffffffffffff0;
  local_a8 = 0xffffffff00000000;
  local_a0 = 0xffffffff;
  TurboAssembler::LoadStoreMacro(param_1,&DAT_019f42cc,&local_c8,0xc0400000);
  local_a0._0_1_ = 0x13;
  local_c8 = (TurboAssembler *)((ulong)local_c8 & 0xffffffffffffff00);
  local_c0 = local_c0 & 0xffffff00;
  local_98 = (TurboAssembler *)0xffffffff;
  local_a8 = 1;
  local_90 = 2;
  TurboAssembler::LogicalMacro(param_1,&DAT_019f42e4,&DAT_019f42c0,&local_c8,0x60000000);
  Assembler::csel((Assembler *)param_1,&DAT_019f42cc,&DAT_019f42e4,&DAT_019f42cc,0);
  TurboAssembler::Mov(param_1,(Register *)&DAT_019f42c0,param_3 & 0xff);
  local_a8 = ExternalReference::isolate_address(param_2);
  local_c8 = (TurboAssembler *)((ulong)local_c8 & 0xffffffffffffff00);
  local_c0 = local_c0 & 0xffffff00;
  local_98 = (TurboAssembler *)0xffffffff;
  local_a0 = CONCAT71(local_a0._1_7_,7);
  local_90 = 2;
  TurboAssembler::Mov(param_1,&DAT_019f42d8,&local_c8,0);
  TVar4 = param_1[400];
  param_1[400] = (TurboAssembler)0x1;
  uVar13 = ExternalReference::new_deoptimizer_function();
  TurboAssembler::CallCFunction(param_1,uVar13,6);
  param_1[400] = TVar4;
  local_b4 = 2;
  local_c0 = 0;
  local_c8 = (TurboAssembler *)0x4000000000;
  local_bc = 0xffffffff;
  local_b0 = 0x38;
  local_a8 = 0xffffffff00000000;
  local_a0 = 0xffffffff;
  TurboAssembler::LoadStoreMacro(param_1,&DAT_019f42c0,&local_c8,0xc0400000);
  FUN_0127e600(param_1,0x10,&local_130,0);
  FUN_0127e600(param_1,0x110,local_120,iVar7 << 3);
  pTVar1 = param_1 + 0x198;
  pTVar2 = param_1 + 0x1a8;
  local_100 = *(undefined8 *)(param_1 + 0x198);
  local_f8 = *(undefined8 *)(param_1 + 0x1a8);
  local_110 = pTVar1;
  local_108 = pTVar2;
  uVar9 = UseScratchRegisterScope::AcquireNextAvailable(pTVar1);
  local_170 = (TurboAssembler *)0x400000003f;
  if (uVar9 != 0x3f) {
    local_170 = (TurboAssembler *)((ulong)uVar9 | 0x4000000000);
  }
  local_168 = 0;
  local_a8 = ExternalReference::stack_is_iterable_address(param_2);
  local_c8 = (TurboAssembler *)((ulong)local_c8 & 0xffffffffffffff00);
  local_c0 = local_c0 & 0xffffff00;
  local_a0 = CONCAT71(local_a0._1_7_,7);
  local_98 = (TurboAssembler *)0xffffffff;
  local_90 = 2;
  TurboAssembler::Mov(param_1,&local_170,&local_c8,0);
  local_c8 = local_170;
  local_b4 = 2;
  local_c0 = local_168;
  local_bc = 0xffffffff;
  local_b0 = 0;
  local_a8 = -0x100000000;
  local_a0 = 0xffffffff;
  Assembler::strb((Register *)param_1,(MemOperand *)&DAT_019f42e4);
  UseScratchRegisterScope::~UseScratchRegisterScope((UseScratchRegisterScope *)&local_110);
  uVar9 = uVar10 + 7;
  if (-1 < (int)uVar10) {
    uVar9 = uVar10;
  }
  if (0xe < (uVar10 | 7)) {
    local_f0 = -(ulong)((uint)((int)uVar9 >> 3) >> 0x1f) & 0xfffffff800000000 |
               (ulong)(uint)((int)uVar9 >> 3) << 3;
    local_110 = (TurboAssembler *)((ulong)local_110 & 0xffffffffffffff00);
    local_108 = (TurboAssembler *)((ulong)local_108 & 0xffffffffffffff00);
    local_e8 = 0x13;
    local_e0 = 0xffffffff;
    local_d8 = 2;
    if ((int)uVar10 < -7) {
      lVar11 = -local_f0;
      uVar14 = Assembler::IsImmAddSub(lVar11);
      if ((uVar14 & 1) == 0) goto LAB_0127dd14;
      local_c8 = (TurboAssembler *)((ulong)local_c8 & 0xffffffffffffff00);
      local_c0 = local_c0 & 0xffffff00;
      local_98 = (TurboAssembler *)0xffffffff;
      local_a0 = CONCAT71(local_a0._1_7_,0x13);
      local_90 = 2;
      lVar6 = -0x58;
      uVar13 = 0x40000000;
      local_a8 = lVar11;
    }
    else {
LAB_0127dd14:
      lVar6 = -0xa0;
      uVar13 = 0;
    }
    TurboAssembler::AddSubMacro
              (param_1,&DAT_019f42b4,&DAT_019f42b4,&stack0xffffffffffffff90 + lVar6,0,uVar13);
  }
  local_170 = (TurboAssembler *)0x4000000002;
  local_b4 = 2;
  local_168 = 0;
  local_c0 = 0;
  local_c8 = (TurboAssembler *)0x4000000001;
  local_bc = 0xffffffff;
  local_b0 = 0;
  local_a8 = 0xffffffff00000000;
  local_a0 = 0xffffffff;
  TurboAssembler::LoadStoreMacro(param_1,&local_170,&local_c8,0xc0400000);
  local_c8 = (TurboAssembler *)((ulong)local_c8 & 0xffffffffffffff00);
  local_c0 = local_c0 & 0xffffff00;
  local_a0._0_1_ = 0x13;
  local_98 = (TurboAssembler *)0xffffffff;
  local_a8 = 0x240;
  local_90 = 2;
  TurboAssembler::AddSubMacro(param_1,&DAT_019f4284,&DAT_019f42c0,&local_c8,0,0);
  TurboAssembler::SlotAddress(param_1,0x4000000001,0,0);
  Assembler::ubfm((Assembler *)param_1,(Register *)&local_170,(Register *)&local_170,3,
                  local_170._4_4_ + -1);
  local_c8 = (TurboAssembler *)((ulong)local_c8 & 0xffffffffffffff00);
  local_c0 = local_c0 & 0xffffff00;
  local_a8 = 0;
  local_a0._0_1_ = 0x13;
  local_98 = local_170;
  local_90 = local_168;
  uStack_8c = 0;
  uStack_88 = 0xffffffff;
  uStack_84 = 0;
  TurboAssembler::Mov(param_1,&DAT_019f42d8,&local_c8,0);
  TurboAssembler::CopyDoubleWords(param_1,0x4000000003,0,0x4000000001,0,0x4000000005,0,0);
  local_110 = (TurboAssembler *)((ulong)local_110 & 0xffffffffffffff00);
  local_108 = (TurboAssembler *)((ulong)local_108 & 0xffffffffffffff00);
  local_f0 = 0;
  local_e8 = 0x13;
  local_e0 = (ulong)local_170;
  local_d8 = local_168;
  local_d4 = 0xffffffff00000000;
  local_cc = 3;
  if ((int)local_170 == -1) {
    if (((ulong)local_170 >> 0x20 != 0) || (local_168 != 2)) goto LAB_0127deac;
  }
  else if ((local_168 != 0) || ((int)local_170 != 0x1f)) {
LAB_0127deac:
    TurboAssembler::AssertPositiveOrZero(param_1);
    if ((((((int)local_e0 == -1) && (local_e0._4_4_ == 0)) && (local_d8 == 2)) &&
        ((local_110._0_1_ == (UseScratchRegisterScope)0x0 && ((long)local_f0 < 0)))) &&
       (uVar14 = Assembler::IsImmAddSub(-local_f0), (uVar14 & 1) != 0)) {
      local_a8 = -local_f0;
      local_c8 = (TurboAssembler *)((ulong)local_c8 & 0xffffffffffffff00);
      local_c0 = local_c0 & 0xffffff00;
      local_a0._0_1_ = 0x13;
      ppTVar12 = &local_c8;
      uVar13 = 0x40000000;
      local_98 = (TurboAssembler *)0xffffffff;
      local_90 = 2;
    }
    else {
      ppTVar12 = &local_110;
      uVar13 = 0;
    }
    TurboAssembler::AddSubMacro(param_1,&DAT_019f42b4,&DAT_019f42b4,ppTVar12,0,uVar13);
  }
  TurboAssembler::Push
            (param_1,(CPURegister *)&DAT_019f42f0,(CPURegister *)&DAT_019f42cc,
             (CPURegister *)&DAT_019f42fc,(CPURegister *)&DAT_019f42fc);
  TVar4 = param_1[400];
  param_1[400] = (TurboAssembler)0x1;
  uVar13 = ExternalReference::compute_output_frames_function();
  TurboAssembler::CallCFunction(param_1,uVar13,1);
  param_1[400] = TVar4;
  TurboAssembler::Pop(param_1,(CPURegister *)&DAT_019f429c,(CPURegister *)&DAT_019f42f0,
                      (CPURegister *)&DAT_019f42fc,(CPURegister *)&DAT_019f42fc);
  local_100 = *(undefined8 *)(param_1 + 0x198);
  local_f8 = *(undefined8 *)(param_1 + 0x1a8);
  local_110 = pTVar1;
  local_108 = pTVar2;
  uVar10 = UseScratchRegisterScope::AcquireNextAvailable(pTVar1);
  local_180 = (TurboAssembler *)0x400000003f;
  if (uVar10 != 0x3f) {
    local_180 = (TurboAssembler *)((ulong)uVar10 | 0x4000000000);
  }
  local_178 = 0;
  local_c8 = (TurboAssembler *)0x4000000004;
  local_b4 = 2;
  local_c0 = 0;
  local_bc = 0xffffffff;
  local_b0 = 0x50;
  local_a8 = 0xffffffff00000000;
  local_a0 = 0xffffffff;
  TurboAssembler::LoadStoreMacro(param_1,&local_180,&local_c8,0xc0400000);
  local_c8 = (TurboAssembler *)((ulong)local_c8 & 0xffffffffffffff00);
  local_c0 = local_c0 & 0xffffff00;
  local_a8 = 0;
  local_a0 = CONCAT71(local_a0._1_7_,0x13);
  local_98 = local_180;
  local_90 = local_178;
  uStack_8c = 0;
  uStack_88 = 0xffffffff;
  uStack_84 = 0;
  TurboAssembler::Mov(param_1,&DAT_019f42b4,&local_c8,0);
  UseScratchRegisterScope::~UseScratchRegisterScope((UseScratchRegisterScope *)&local_110);
  local_c8 = (TurboAssembler *)0x4000000004;
  local_b4 = 2;
  local_c0 = 0;
  local_bc = 0xffffffff;
  local_190 = 0;
  uStack_188 = 0;
  local_b0 = 0x40;
  local_a8 = 0xffffffff00000000;
  local_a0 = 0xffffffff;
  TurboAssembler::LoadStoreMacro(param_1,&DAT_019f42c0,&local_c8,0x80800000);
  local_c8 = (TurboAssembler *)0x4000000004;
  local_b4 = 2;
  local_c0 = 0;
  local_bc = 0xffffffff;
  local_b0 = 0x48;
  local_a8 = 0xffffffff00000000;
  local_a0 = 0xffffffff;
  TurboAssembler::LoadStoreMacro(param_1,&DAT_019f42cc,&local_c8,0xc0400000);
  local_c8 = (TurboAssembler *)((ulong)local_c8 & 0xffffffffffffff00);
  local_c0 = local_c0 & 0xffffff00;
  local_a8 = 0;
  local_a0 = CONCAT71(local_a0._1_7_,0x13);
  local_98 = (TurboAssembler *)0x4000000001;
  uStack_88 = 0xffffffff;
  uStack_84 = 3;
  local_90 = 0;
  uStack_8c = 0;
  TurboAssembler::AddSubMacro(param_1,&DAT_019f42c0,&DAT_019f42cc,&local_c8,0,0);
  Assembler::b((Assembler *)param_1,(Label *)&local_190);
  Assembler::CheckVeneerPool((Assembler *)param_1,false,false,0x400);
  Assembler::bind((Label *)param_1);
  local_c8 = (TurboAssembler *)0x4000000000;
  local_180 = (TurboAssembler *)0x4000000002;
  local_c0 = 0;
  local_bc = 0xffffffff;
  local_b0 = 8;
  local_178 = 0;
  local_b4 = 2;
  local_1a0 = 0x4000000003;
  local_198 = 0;
  local_a8 = 0xffffffff00000002;
  local_a0 = 0xffffffff;
  TurboAssembler::LoadStoreMacro(param_1,&local_180,&local_c8,0xc0400000);
  local_c8 = local_180;
  local_b4 = 2;
  local_c0 = local_178;
  local_bc = 0xffffffff;
  local_b0 = 0;
  local_a8 = 0xffffffff00000000;
  local_a0 = 0xffffffff;
  TurboAssembler::LoadStoreMacro(param_1,&DAT_019f4284,&local_c8,0xc0400000);
  Assembler::ubfm((Assembler *)param_1,(Register *)&local_1a0,(Register *)&DAT_019f4284,3,0x3f);
  local_c8 = (TurboAssembler *)((ulong)local_c8 & 0xffffffffffffff00);
  local_c0 = local_c0 & 0xffffff00;
  local_a8 = 0;
  local_a0._0_1_ = 0x13;
  local_98 = (TurboAssembler *)local_1a0;
  local_90 = local_198;
  uStack_8c = 0;
  uStack_88 = 0xffffffff;
  uStack_84 = 3;
  if ((int)local_1a0 == -1) {
    if ((local_1a0 >> 0x20 == 0) && (local_198 == 2)) goto LAB_0127e21c;
  }
  else if ((local_198 == 0) && ((int)local_1a0 == 0x1f)) goto LAB_0127e21c;
  TurboAssembler::AssertPositiveOrZero(param_1);
  TurboAssembler::AddSubMacro(param_1,&DAT_019f42b4,&DAT_019f42b4,&local_c8,0,0x40000000);
LAB_0127e21c:
  local_c8 = (TurboAssembler *)((ulong)local_c8 & 0xffffffffffffff00);
  local_c0 = local_c0 & 0xffffff00;
  local_98 = (TurboAssembler *)0xffffffff;
  local_a8 = 0x240;
  local_a0._0_1_ = 0x13;
  local_90 = 2;
  TurboAssembler::AddSubMacro(param_1,&DAT_019f4308,&local_180,&local_c8,0,0);
  TurboAssembler::SlotAddress(param_1,0x4000000006,0,0);
  TurboAssembler::CopyDoubleWords(param_1,0x4000000006,0,0x4000000007,0,local_1a0,local_198,0);
  Assembler::bind((Label *)param_1);
  local_c8 = (TurboAssembler *)((ulong)local_c8 & 0xffffffffffffff00);
  local_c0 = local_c0 & 0xffffff00;
  local_a8 = 0;
  local_a0 = CONCAT71(local_a0._1_7_,0x13);
  local_98 = (TurboAssembler *)0x4000000001;
  uStack_88 = 0xffffffff;
  uStack_84 = 0;
  local_90 = 0;
  uStack_8c = 0;
  TurboAssembler::AddSubMacro(param_1,&DAT_019f42e4,&DAT_019f42cc,&local_c8,1,0x40000000);
  TurboAssembler::B(param_1,&uStack_188,0xb);
  local_c8 = (TurboAssembler *)0x4000000004;
  local_b4 = 2;
  local_c0 = 0;
  local_bc = 0xffffffff;
  local_b0 = 0x38;
  local_a8 = 0xffffffff00000000;
  local_a0 = 0xffffffff;
  TurboAssembler::LoadStoreMacro(param_1,&DAT_019f42c0,&local_c8,0xc0400000);
  FUN_0127ea30(param_1,local_120,&DAT_019f42c0,0x110);
  local_100 = *(undefined8 *)(param_1 + 0x198);
  local_f8 = *(undefined8 *)(param_1 + 0x1a8);
  local_110 = pTVar1;
  local_108 = pTVar2;
  uVar10 = UseScratchRegisterScope::AcquireNextAvailable(pTVar1);
  local_1b0 = (TurboAssembler *)0x400000003f;
  if (uVar10 != 0x3f) {
    local_1b0 = (TurboAssembler *)((ulong)uVar10 | 0x4000000000);
  }
  local_1a8 = 0;
  local_1c0 = 0x4000000004;
  local_1b8 = 0;
  local_a8 = ExternalReference::stack_is_iterable_address(param_2);
  local_c8 = (TurboAssembler *)((ulong)local_c8 & 0xffffffffffffff00);
  local_c0 = local_c0 & 0xffffff00;
  local_98 = (TurboAssembler *)0xffffffff;
  local_a0._0_1_ = 7;
  local_90 = 2;
  TurboAssembler::Mov(param_1,&local_1b0,&local_c8,0);
  local_c8 = (TurboAssembler *)((ulong)local_c8 & 0xffffffffffffff00);
  local_c0 = local_c0 & 0xffffff00;
  local_a8 = 1;
  local_a0 = CONCAT71(local_a0._1_7_,0x13);
  local_98 = (TurboAssembler *)0xffffffff;
  local_90 = 2;
  TurboAssembler::Mov(param_1,&local_1c0,&local_c8,0);
  local_c8 = local_1b0;
  local_b4 = 2;
  local_c0 = local_1a8;
  local_bc = 0xffffffff;
  local_b0 = 0;
  local_a8 = 0xffffffff00000000;
  local_a0 = 0xffffffff;
  Assembler::strb((Register *)param_1,(MemOperand *)&local_1c0);
  UseScratchRegisterScope::~UseScratchRegisterScope((UseScratchRegisterScope *)&local_110);
  local_98 = local_180;
  local_c8 = (TurboAssembler *)((ulong)local_c8 & 0xffffffffffffff00);
  local_c0 = local_c0 & 0xffffff00;
  local_a8 = 0;
  local_a0 = CONCAT71(local_a0._1_7_,0x13);
  local_90 = local_178;
  uStack_8c = 0;
  uStack_88 = 0xffffffff;
  local_110 = (TurboAssembler *)0x400000001e;
  local_108 = (TurboAssembler *)((ulong)local_108 & 0xffffffff00000000);
  uStack_84 = 0;
  TurboAssembler::Mov(param_1,&local_110,&local_c8,0);
  FUN_0127ea30(param_1,&local_130,&local_110,0x10);
  local_1b0 = (TurboAssembler *)0x4000000007;
  local_1a8 = 0;
  local_c8 = local_110;
  local_b4 = 2;
  local_c0 = local_108._0_4_;
  local_bc = 0xffffffff;
  local_b0 = 0x238;
  local_a8 = 0xffffffff00000000;
  local_a0 = 0xffffffff;
  TurboAssembler::LoadStoreMacro(param_1,&local_1b0,&local_c8,0xc0400000);
  local_c8 = local_110;
  local_b4 = 2;
  local_c0 = local_108._0_4_;
  local_bc = 0xffffffff;
  local_b0 = 0x218;
  local_a8 = 0xffffffff00000000;
  local_a0 = 0xffffffff;
  TurboAssembler::LoadStoreMacro(param_1,&DAT_019f42a8,&local_c8,0xc0400000);
  Assembler::br((Assembler *)param_1,(Register *)&local_1b0);
  param_1[0x188] = TVar3;
  if (*(long *)(lVar5 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

