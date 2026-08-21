
/* v8::internal::TurboAssembler::EnterFrame(v8::internal::StackFrame::Type) */

void __thiscall v8::internal::TurboAssembler::EnterFrame(TurboAssembler *this,int param_2)

{
  CPURegList *this_00;
  long lVar1;
  uint uVar2;
  CPURegister *pCVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_e0;
  undefined4 local_d8;
  Assembler *local_d0;
  undefined4 local_c8 [2];
  ulong local_c0;
  uint local_b8;
  undefined8 local_b4;
  undefined4 local_ac;
  long local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  lVar5 = *(long *)(this + 0x198);
  uVar6 = *(undefined8 *)(this + 0x1a8);
  this_00 = (CPURegList *)(this + 0x198);
  if ((param_2 - 10U < 2) || (param_2 == 5)) {
    if (lVar5 == 0) goto LAB_01277f00;
    uVar2 = CPURegList::PopLowestIndex(this_00);
    local_e0 = 0x400000003f;
    if (uVar2 != 0x3f) {
      local_e0 = (ulong)uVar2 | 0x4000000000;
    }
    local_d8 = 0;
    Mov(this,(Register *)&local_e0,(long)(param_2 << 1));
    local_d0 = (Assembler *)this;
    ConstantPool::BlockScope::BlockScope((BlockScope *)local_c8,(Assembler *)this,0);
    Assembler::CheckVeneerPool(local_d0,false,true,0);
    Assembler::StartBlockVeneerPool(local_d0);
    local_c0 = 0x400000003f;
    local_b8 = 0;
    local_a8 = 0xfffffffffffffff0;
    local_b4 = 0xffffffff;
    local_ac = 2;
    local_a0 = 0xffffffff00000001;
    local_98 = 0xffffffff;
    Assembler::stp((Assembler *)this,(CPURegister *)&DAT_019f418c,(CPURegister *)&DAT_019f4198,
                   (MemOperand *)&local_c0);
    Assembler::EndBlockVeneerPool(local_d0);
    ConstantPool::BlockScope::~BlockScope((BlockScope *)local_c8);
    local_c0 = local_c0 & 0xffffffffffffff00;
    local_b8 = local_b8 & 0xffffff00;
    local_a0 = 0;
    local_98 = CONCAT71(local_98._1_7_,0x13);
    local_90 = 0x400000003f;
    uStack_80 = 0xffffffff;
    local_88 = 0;
    Mov(this,&DAT_019f418c,&local_c0,0);
    iVar4 = local_e0._4_4_ + 7;
    if (-1 < (long)local_e0) {
      iVar4 = local_e0._4_4_;
    }
    local_d0 = (Assembler *)this;
    ConstantPool::BlockScope::BlockScope((BlockScope *)local_c8,(Assembler *)this,0);
    Assembler::CheckVeneerPool(local_d0,false,true,0);
    Assembler::StartBlockVeneerPool(local_d0);
    local_a8 = (long)((iVar4 >> 3) * -2);
    local_c0 = 0x400000003f;
    local_b8 = 0;
    local_b4 = 0xffffffff;
    local_ac = 2;
    local_a0 = 0xffffffff00000001;
    local_98 = 0xffffffff;
    Assembler::stp((Assembler *)this,(CPURegister *)&DAT_019f41a4,(CPURegister *)&local_e0,
                   (MemOperand *)&local_c0);
    Assembler::EndBlockVeneerPool(local_d0);
    ConstantPool::BlockScope::~BlockScope((BlockScope *)local_c8);
  }
  else {
    if (param_2 == 0x11) {
      if (lVar5 == 0) {
LAB_01277f00:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","!available->IsEmpty()");
      }
      uVar2 = CPURegList::PopLowestIndex(this_00);
      local_d0 = (Assembler *)0x400000003f;
      if (uVar2 != 0x3f) {
        local_d0 = (Assembler *)((ulong)uVar2 | 0x4000000000);
      }
      local_c8[0] = 0;
      Mov(this,(Register *)&local_d0,0x22);
      iVar4 = 2;
      if ((int)local_d0 != -1) {
        iVar4 = 4;
      }
      pCVar3 = (CPURegister *)&local_d0;
    }
    else {
      if (lVar5 == 0) goto LAB_01277f00;
      uVar2 = CPURegList::PopLowestIndex(this_00);
      local_d0 = (Assembler *)0x400000003f;
      if (uVar2 != 0x3f) {
        local_d0 = (Assembler *)((ulong)uVar2 | 0x4000000000);
      }
      local_c8[0] = 0;
      Mov(this,(Register *)&local_d0,(long)(param_2 << 1));
      iVar4 = 3;
      if ((int)local_d0 != -1) {
        iVar4 = 4;
      }
      pCVar3 = (CPURegister *)&DAT_019f41bc;
    }
    PushHelper(this,iVar4,8,(CPURegister *)&DAT_019f4198,(CPURegister *)&DAT_019f418c,
               (CPURegister *)&local_d0,pCVar3);
    local_c0 = local_c0 & 0xffffffffffffff00;
    local_b8 = local_b8 & 0xffffff00;
    local_a0 = 0x10;
    local_98 = CONCAT71(local_98._1_7_,0x13);
    local_90 = 0xffffffff;
    local_88 = CONCAT44(local_88._4_4_,2);
    AddSubMacro(this,&DAT_019f418c,&DAT_019f3ff4,&local_c0,0,0);
  }
  *(long *)(this + 0x198) = lVar5;
  *(undefined8 *)(this + 0x1a8) = uVar6;
  if (*(long *)(lVar1 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

