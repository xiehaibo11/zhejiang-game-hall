
/* v8::internal::MacroAssembler::LeaveExitFrame(bool, v8::internal::Register const&,
   v8::internal::Register const&) */

void __thiscall
v8::internal::MacroAssembler::LeaveExitFrame
          (MacroAssembler *this,bool param_1,Register *param_2,Register *param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined4 uVar4;
  BlockScope aBStack_b8 [8];
  ulong local_b0;
  uint local_a8;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if (param_1) {
    ExitFrameRestoreFPRegs(this);
  }
  local_90 = ExternalReference::Create(3,*(undefined8 *)(this + 0x178));
  local_b0 = local_b0 & 0xffffffffffffff00;
  local_a8 = local_a8 & 0xffffff00;
  local_88 = CONCAT71(local_88._1_7_,7);
  local_80 = 0xffffffff;
  local_78._0_4_ = 2;
  TurboAssembler::Mov((TurboAssembler *)this,param_2,&local_b0,0);
  local_b0 = *(ulong *)param_2;
  local_a8 = *(uint *)(param_2 + 8);
  local_a4 = 0xffffffff;
  local_9c = 2;
  local_98 = 0;
  local_90 = 0xffffffff00000000;
  local_88 = 0xffffffff;
  TurboAssembler::LoadStoreMacro((TurboAssembler *)this,&DAT_019f41bc,&local_b0,0xc0400000);
  if (this[0xc0] != (MacroAssembler)0x0) {
    local_b0 = local_b0 & 0xffffffffffffff00;
    local_a8 = local_a8 & 0xffffff00;
    local_80 = 0xffffffff;
    local_90 = 1;
    local_88._0_1_ = 0x13;
    local_78._0_4_ = 2;
    TurboAssembler::Mov((TurboAssembler *)this,param_3,&local_b0,0);
    local_90 = ExternalReference::Create(3,*(undefined8 *)(this + 0x178));
    local_b0 = local_b0 & 0xffffffffffffff00;
    local_a8 = local_a8 & 0xffffff00;
    local_88 = CONCAT71(local_88._1_7_,7);
    local_80 = 0xffffffff;
    local_78._0_4_ = 2;
    TurboAssembler::Mov((TurboAssembler *)this,param_2,&local_b0,0);
    local_b0 = *(ulong *)param_2;
    local_a8 = *(uint *)(param_2 + 8);
    local_9c = 2;
    local_a4 = 0xffffffff;
    local_98 = 0;
    local_90 = 0xffffffff00000000;
    local_88 = 0xffffffff;
    iVar1 = *(int *)(param_3 + 4);
    if (*(int *)(param_3 + 8) == 0) {
      uVar4 = 0xc0000000;
      if (iVar1 != 0x40) {
        uVar4 = 0x80000000;
      }
    }
    else {
      uVar2 = iVar1 - 8U >> 3 | iVar1 << 0x1d;
      if (uVar2 < 8) {
        uVar4 = *(undefined4 *)(&DAT_019f38a8 + (long)(int)uVar2 * 4);
      }
      else {
        uVar4 = 0x4800000;
      }
    }
    TurboAssembler::LoadStoreMacro((TurboAssembler *)this,param_3,&local_b0,uVar4);
  }
  local_90 = ExternalReference::Create(1,*(undefined8 *)(this + 0x178));
  local_b0 = local_b0 & 0xffffffffffffff00;
  local_a8 = local_a8 & 0xffffff00;
  local_88 = CONCAT71(local_88._1_7_,7);
  local_80 = 0xffffffff;
  local_78 = CONCAT44(local_78._4_4_,2);
  TurboAssembler::Mov((TurboAssembler *)this,param_2,&local_b0,0);
  local_b0 = *(ulong *)param_2;
  local_a8 = *(uint *)(param_2 + 8);
  local_a4 = 0xffffffff;
  local_9c = 2;
  local_98 = 0;
  local_90 = 0xffffffff00000000;
  local_88 = 0xffffffff;
  TurboAssembler::LoadStoreMacro((TurboAssembler *)this,&DAT_019f4018,&local_b0,0xc0000000);
  local_b0 = local_b0 & 0xffffffffffffff00;
  local_a8 = local_a8 & 0xffffff00;
  local_90 = 0;
  local_88 = CONCAT71(local_88._1_7_,0x13);
  local_80 = 0x400000001d;
  uStack_70 = 0xffffffff;
  local_78 = 0;
  TurboAssembler::Mov((TurboAssembler *)this,&DAT_019f3ff4,&local_b0,0);
  ConstantPool::BlockScope::BlockScope(aBStack_b8,(Assembler *)this,0);
  Assembler::CheckVeneerPool((Assembler *)this,false,true,0);
  Assembler::StartBlockVeneerPool((Assembler *)this);
  local_b0 = 0x400000003f;
  local_a8 = 0;
  local_a4 = 0xffffffff;
  local_9c = 2;
  local_98 = 0x10;
  local_90 = 0xffffffff00000002;
  local_88 = 0xffffffff;
  Assembler::ldp((Assembler *)this,(CPURegister *)&DAT_019f418c,(CPURegister *)&DAT_019f4198,
                 (MemOperand *)&local_b0);
  Assembler::EndBlockVeneerPool((Assembler *)this);
  ConstantPool::BlockScope::~BlockScope(aBStack_b8);
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

