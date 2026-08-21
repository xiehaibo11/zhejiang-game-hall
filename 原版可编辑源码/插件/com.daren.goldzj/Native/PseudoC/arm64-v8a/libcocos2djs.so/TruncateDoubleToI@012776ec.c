
/* v8::internal::TurboAssembler::TruncateDoubleToI(v8::internal::Isolate*, v8::internal::Zone*,
   v8::internal::Register, v8::internal::VRegister, v8::internal::StubCallMode) */

void v8::internal::TurboAssembler::TruncateDoubleToI
               (Assembler *param_1,long param_2,undefined8 param_3,ulong param_4,int param_5,
               Assembler *param_6,ulong param_7,int param_8)

{
  int iVar1;
  Assembler *pAVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 local_110;
  undefined8 uStack_108;
  ulong local_100;
  undefined8 local_f8;
  int local_f0;
  Assembler *local_e8;
  undefined4 local_e0;
  Assembler *local_d8;
  ulong local_d0;
  Assembler *local_c8;
  uint local_c0 [4];
  long local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  long local_80;
  
  lVar4 = tpidr_el0;
  local_80 = *(long *)(lVar4 + 0x28);
  pAVar2 = (Assembler *)0x400000003f;
  if ((int)param_4 != 0x3f) {
    pAVar2 = (Assembler *)(param_4 & 0xffffffff | 0x4000000000);
  }
  local_110 = 0;
  local_c0[0] = 0;
  uStack_108 = param_6;
  local_100 = param_7;
  local_f8 = param_4;
  local_f0 = param_5;
  local_d8 = param_6;
  local_d0 = param_7;
  local_c8 = pAVar2;
  Assembler::fcvtzs(param_1,(Register *)&local_c8,(VRegister *)&local_d8,0);
  local_e0 = 0;
  local_c8 = (Assembler *)((ulong)local_c8 & 0xffffffffffffff00);
  local_c0[0] = local_c0[0] & 0xffffff00;
  local_a8 = 1;
  local_a0._0_1_ = 0x13;
  local_98 = 0xffffffff;
  local_90 = 2;
  local_e8 = pAVar2;
  AddSubMacro((TurboAssembler *)param_1,&DAT_019f4018,&local_e8,&local_c8,1,0x40000000);
  local_e0 = 0;
  local_c8 = (Assembler *)((ulong)local_c8 & 0xffffffffffffff00);
  local_c0[0] = local_c0[0] & 0xffffff00;
  local_a8 = 1;
  local_a0 = CONCAT71(local_a0._1_7_,0x13);
  local_98 = 0xffffffff;
  local_90 = 2;
  local_e8 = pAVar2;
  ConditionalCompareMacro((TurboAssembler *)param_1,&local_e8,&local_c8,0x10000000,7,0x20000000);
  B((TurboAssembler *)param_1,&local_110,7);
  iVar6 = (int)((ulong)param_6 >> 0x20);
  iVar1 = iVar6 + 7;
  if (-1 < (long)param_6) {
    iVar1 = iVar6;
  }
  local_b0 = (long)(-8 - (iVar1 >> 3));
  local_a8 = 0xffffffff00000001;
  local_a0 = 0xffffffff;
  local_c8 = (Assembler *)0x400000003f;
  local_c0[0] = 0;
  local_c0[1] = 0xffffffff;
  local_c0[2] = 0;
  local_c0[3] = 2;
  Assembler::str((CPURegister *)param_1,(MemOperand *)&uStack_108);
  uVar3 = uStack_108._4_4_ + 7;
  if (-1 < (long)uStack_108) {
    uVar3 = uStack_108._4_4_;
  }
  local_b0 = (long)((ulong)uVar3 << 0x20) >> 0x23;
  local_c8 = (Assembler *)0x400000003f;
  local_c0[0] = 0;
  local_c0[1] = 0xffffffff;
  local_c0[2] = 0;
  local_c0[3] = 2;
  local_a8 = 0xffffffff00000000;
  local_a0 = 0xffffffff;
  Assembler::str((CPURegister *)param_1,(MemOperand *)&DAT_019f4198);
  if (param_8 == 1) {
    local_c8 = param_1;
    ConstantPool::BlockScope::BlockScope((BlockScope *)local_c0,param_1,0);
    Assembler::CheckVeneerPool(local_c8,false,true,0);
    Assembler::StartBlockVeneerPool(local_c8);
    Assembler::near_call(param_1,0x1c,5);
    Assembler::EndBlockVeneerPool(local_c8);
    ConstantPool::BlockScope::~BlockScope((BlockScope *)local_c0);
  }
  else if (param_1[0xa5] == (Assembler)0x0) {
    uVar5 = Builtins::builtin_handle((Builtins *)(param_2 + 0x9e00),0x283);
    Call((TurboAssembler *)param_1,uVar5,0);
  }
  else {
    CallBuiltin((TurboAssembler *)param_1,0x283);
  }
  local_c8 = (Assembler *)0x400000003f;
  local_c0[0] = 0;
  local_c0[1] = 0xffffffff;
  local_c0[2] = 0;
  local_c0[3] = 2;
  local_b0 = 0;
  local_a8 = 0xffffffff00000000;
  local_a0 = 0xffffffff;
  if (local_f0 == 0) {
    uVar7 = 0xc0400000;
    if (local_f8._4_4_ != 0x40) {
      uVar7 = 0x80400000;
    }
  }
  else {
    uVar3 = local_f8._4_4_ - 8U >> 3 | local_f8._4_4_ << 0x1d;
    if (uVar3 < 8) {
      uVar7 = *(undefined4 *)(&DAT_019f3888 + (long)(int)uVar3 * 4);
    }
    else {
      uVar7 = 0x4c00000;
    }
  }
  LoadStoreMacro((TurboAssembler *)param_1,&local_f8,&local_c8,uVar7);
  local_d8 = param_1;
  ConstantPool::BlockScope::BlockScope((BlockScope *)&local_d0,param_1,0);
  Assembler::CheckVeneerPool(local_d8,false,true,0);
  Assembler::StartBlockVeneerPool(local_d8);
  local_c8 = (Assembler *)0x400000003f;
  local_c0[0] = 0;
  local_c0[1] = 0xffffffff;
  local_c0[2] = 0;
  local_c0[3] = 2;
  local_b0 = 0x10;
  local_a8 = 0xffffffff00000002;
  local_a0 = 0xffffffff;
  Assembler::ldp(param_1,(CPURegister *)&DAT_019f4018,(CPURegister *)&DAT_019f4198,
                 (MemOperand *)&local_c8);
  Assembler::EndBlockVeneerPool(local_d8);
  ConstantPool::BlockScope::~BlockScope((BlockScope *)&local_d0);
  Assembler::bind((Label *)param_1);
  local_d8 = (Assembler *)0x200000003f;
  if ((int)local_f8 != 0x3f) {
    local_d8 = (Assembler *)(local_f8 & 0xffffffff | 0x2000000000);
  }
  local_c0[0] = 0;
  local_d0 = local_d0 & 0xffffffff00000000;
  local_c8 = local_d8;
  Assembler::ubfm(param_1,(Register *)&local_c8,(Register *)&local_d8,0,0x1f);
  if (*(long *)(lVar4 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

