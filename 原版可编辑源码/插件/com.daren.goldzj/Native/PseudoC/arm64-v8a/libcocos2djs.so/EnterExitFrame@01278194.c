
/* v8::internal::MacroAssembler::EnterExitFrame(bool, v8::internal::Register const&, int,
   v8::internal::StackFrame::Type) */

void __thiscall
v8::internal::MacroAssembler::EnterExitFrame
          (MacroAssembler *this,ulong param_2_00,Register *param_2,int param_3,int param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  Assembler **ppAVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  Assembler *local_110;
  BlockScope local_108 [24];
  ulong local_f0;
  undefined1 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  Assembler *local_c8;
  uint local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  long local_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80;
  
  lVar4 = tpidr_el0;
  local_80 = *(long *)(lVar4 + 0x28);
  local_110 = (Assembler *)this;
  ConstantPool::BlockScope::BlockScope(local_108,(Assembler *)this,0);
  Assembler::CheckVeneerPool(local_110,false,true,0);
  Assembler::StartBlockVeneerPool(local_110);
  local_c8 = (Assembler *)0x400000003f;
  local_c0 = 0;
  local_b0 = 0xfffffffffffffff0;
  local_bc = 0xffffffff;
  local_b4 = 2;
  local_a8 = 0xffffffff00000001;
  local_a0 = 0xffffffff;
  Assembler::stp((Assembler *)this,(CPURegister *)&DAT_019f418c,(CPURegister *)&DAT_019f4198,
                 (MemOperand *)&local_c8);
  Assembler::EndBlockVeneerPool(local_110);
  ConstantPool::BlockScope::~BlockScope(local_108);
  local_c8 = (Assembler *)((ulong)local_c8 & 0xffffffffffffff00);
  local_c0 = local_c0 & 0xffffff00;
  local_a8 = 0;
  local_a0 = CONCAT71(local_a0._1_7_,0x13);
  local_98 = 0x400000003f;
  uStack_88 = 0xffffffff;
  local_90 = 0;
  TurboAssembler::Mov((TurboAssembler *)this,&DAT_019f418c,&local_c8,0);
  TurboAssembler::Mov((TurboAssembler *)this,param_2,(long)(param_5 << 1));
  iVar3 = *(int *)(param_2 + 4);
  iVar2 = iVar3 + 7;
  if (-1 < iVar3) {
    iVar2 = iVar3;
  }
  local_110 = (Assembler *)this;
  ConstantPool::BlockScope::BlockScope(local_108,(Assembler *)this,0);
  Assembler::CheckVeneerPool(local_110,false,true,0);
  Assembler::StartBlockVeneerPool(local_110);
  local_b0 = (long)((iVar2 >> 3) * -2);
  local_c8 = (Assembler *)0x400000003f;
  local_c0 = 0;
  local_bc = 0xffffffff;
  local_b4 = 2;
  local_a8 = 0xffffffff00000001;
  local_a0 = 0xffffffff;
  Assembler::stp((Assembler *)this,(CPURegister *)&DAT_019f4018,(CPURegister *)param_2,
                 (MemOperand *)&local_c8);
  Assembler::EndBlockVeneerPool(local_110);
  ConstantPool::BlockScope::~BlockScope(local_108);
  local_a8 = ExternalReference::Create(1,*(undefined8 *)(this + 0x178));
  local_c8 = (Assembler *)((ulong)local_c8 & 0xffffffffffffff00);
  local_c0 = local_c0 & 0xffffff00;
  local_98 = 0xffffffff;
  local_a0 = CONCAT71(local_a0._1_7_,7);
  local_90._0_4_ = 2;
  TurboAssembler::Mov((TurboAssembler *)this,param_2,&local_c8,0);
  local_c8 = *(Assembler **)param_2;
  local_c0 = *(uint *)(param_2 + 8);
  local_bc = 0xffffffff;
  local_b4 = 2;
  local_b0 = 0;
  local_a8 = 0xffffffff00000000;
  local_a0 = 0xffffffff;
  TurboAssembler::LoadStoreMacro((TurboAssembler *)this,&DAT_019f418c,&local_c8,0xc0000000);
  local_a8 = ExternalReference::Create(3,*(undefined8 *)(this + 0x178));
  local_c8 = (Assembler *)((ulong)local_c8 & 0xffffffffffffff00);
  local_c0 = local_c0 & 0xffffff00;
  local_a0 = CONCAT71(local_a0._1_7_,7);
  local_98 = 0xffffffff;
  local_90 = CONCAT44(local_90._4_4_,2);
  TurboAssembler::Mov((TurboAssembler *)this,param_2,&local_c8,0);
  local_c8 = *(Assembler **)param_2;
  local_c0 = *(uint *)(param_2 + 8);
  local_bc = 0xffffffff;
  local_b4 = 2;
  local_b0 = 0;
  local_a8 = -0x100000000;
  local_a0 = 0xffffffff;
  TurboAssembler::LoadStoreMacro((TurboAssembler *)this,&DAT_019f41bc,&local_c8,0xc0000000);
  if ((param_2_00 & 1) != 0) {
    auVar10 = CPURegList::GetCallerSavedV(0x40);
    TurboAssembler::PushCPURegList(this,auVar10._0_8_,auVar10._8_8_);
  }
  uVar1 = param_3 + 2U & 0xfffffffe;
  if (uVar1 == 0) goto LAB_01278508;
  local_f0 = -(ulong)(param_3 + 2U >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
  local_110 = (Assembler *)((ulong)local_110 & 0xffffffffffffff00);
  local_108[0] = (BlockScope)0x0;
  local_e0 = 0xffffffff;
  local_e8 = 0x13;
  local_d8 = 2;
  if ((int)uVar1 < 0) {
    lVar9 = -local_f0;
    uVar5 = Assembler::IsImmAddSub(lVar9);
    if ((uVar5 & 1) == 0) goto LAB_012784e8;
    local_c8 = (Assembler *)((ulong)local_c8 & 0xffffffffffffff00);
    local_c0 = local_c0 & 0xffffff00;
    local_98 = 0xffffffff;
    local_a0 = CONCAT71(local_a0._1_7_,0x13);
    local_90 = CONCAT44(local_90._4_4_,2);
    ppAVar6 = &local_c8;
    uVar7 = 0;
    local_a8 = lVar9;
  }
  else {
LAB_012784e8:
    ppAVar6 = &local_110;
    uVar7 = 0x40000000;
  }
  TurboAssembler::AddSubMacro((TurboAssembler *)this,&DAT_019f3ff4,&DAT_019f3ff4,ppAVar6,0,uVar7);
LAB_01278508:
  local_c8 = (Assembler *)((ulong)local_c8 & 0xffffffffffffff00);
  local_c0 = local_c0 & 0xffffff00;
  local_98 = 0xffffffff;
  local_a8 = 8;
  local_a0 = CONCAT71(local_a0._1_7_,0x13);
  local_90 = CONCAT44(local_90._4_4_,2);
  TurboAssembler::AddSubMacro((TurboAssembler *)this,param_2,&DAT_019f3ff4,&local_c8,0,0);
  local_c0 = 0;
  local_b4 = 2;
  local_bc = 0xffffffff;
  local_c8 = (Assembler *)0x400000001d;
  local_b0 = 0xfffffffffffffff0;
  local_a8 = 0xffffffff00000000;
  local_a0 = 0xffffffff;
  iVar2 = *(int *)(param_2 + 4);
  if (*(int *)(param_2 + 8) == 0) {
    uVar8 = 0xc0000000;
    if (iVar2 != 0x40) {
      uVar8 = 0x80000000;
    }
  }
  else {
    uVar1 = iVar2 - 8U >> 3 | iVar2 << 0x1d;
    if (uVar1 < 8) {
      uVar8 = *(undefined4 *)(&DAT_019f38a8 + (long)(int)uVar1 * 4);
    }
    else {
      uVar8 = 0x4800000;
    }
  }
  TurboAssembler::LoadStoreMacro((TurboAssembler *)this,param_2,&local_c8,uVar8);
  if (*(long *)(lVar4 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

