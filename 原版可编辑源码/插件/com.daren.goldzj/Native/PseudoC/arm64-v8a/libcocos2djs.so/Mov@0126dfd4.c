
/* v8::internal::TurboAssembler::Mov(v8::internal::Register const&, v8::internal::Operand const&,
   v8::internal::DiscardMoveMode) */

void __thiscall
v8::internal::TurboAssembler::Mov
          (TurboAssembler *this,Register *param_1,Operand *param_2,int param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_60;
  int local_58;
  undefined8 local_50;
  int local_48;
  
  lVar4 = *(long *)(this + 0x198);
  uVar5 = *(undefined8 *)(this + 0x1a8);
  if ((*(int *)(param_1 + 8) == 0) && (*(int *)param_1 == 0x3f)) {
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","!available->IsEmpty()");
    }
    uVar1 = CPURegList::PopLowestIndex((CPURegList *)(this + 0x198));
    local_48 = 0;
    local_50 = uVar1 & 0xffffffff | (ulong)*(uint *)(param_1 + 4) << 0x20;
  }
  else {
    local_48 = *(int *)(param_1 + 8);
    local_50 = *(ulong *)param_1;
  }
  uVar1 = Operand::NeedsRelocation(param_2,(Assembler *)this);
  if ((uVar1 & 1) == 0) {
    if (*(int *)(param_2 + 0x30) == -1) {
      if (((*(int *)(param_2 + 0x34) == 0) && (*(int *)(param_2 + 0x38) == 2)) &&
         (*param_2 == (Operand)0x0)) {
        Mov(this,(Register *)&local_50,*(ulong *)(param_2 + 0x20));
      }
      else {
LAB_0126e120:
        uVar2 = *(undefined8 *)(param_2 + 0x30);
        if (((*(int *)param_1 != (int)uVar2) ||
            (iVar3 = (int)((ulong)uVar2 >> 0x20), *(int *)(param_1 + 4) != iVar3)) ||
           ((*(int *)(param_1 + 8) != *(int *)(param_2 + 0x38) ||
            ((param_4 == 0 && (iVar3 == 0x20)))))) {
          local_60 = uVar2;
          local_58 = *(int *)(param_2 + 0x38);
          Assembler::mov((Assembler *)this,param_1,(Register *)&local_60);
        }
        local_48 = *(int *)(param_1 + 8);
        local_50 = *(ulong *)param_1;
      }
    }
    else if ((*(int *)(param_2 + 0x3c) == -1) || (*(int *)(param_2 + 0x44) == 0)) {
      if (*(int *)(param_2 + 0x40) == -1) goto LAB_0126e120;
      local_60 = *(undefined8 *)(param_2 + 0x30);
      local_58 = *(int *)(param_2 + 0x38);
      Assembler::EmitExtendShift
                ((Assembler *)this,&local_50,&local_60,*(int *)(param_2 + 0x40),
                 *(undefined4 *)(param_2 + 0x44));
    }
    else {
      local_60 = *(undefined8 *)(param_2 + 0x30);
      local_58 = *(int *)(param_2 + 0x38);
      Assembler::EmitShift((Assembler *)this,&local_50,&local_60);
    }
  }
  else {
    if ((this[0x188] != (TurboAssembler)0x0) && (this[0xa4] != (TurboAssembler)0x0)) {
      if (param_2[0x28] == (Operand)0x7) {
        TurboAssemblerBase::IndirectLoadExternalReference
                  (this,*(undefined8 *)param_1,*(undefined4 *)(param_1 + 8),
                   *(undefined8 *)(param_2 + 0x20));
        goto LAB_0126e210;
      }
      if (((byte)param_2[0x28] & 0xfe) == 2) {
        uVar1 = 0x400000003f;
        if (*(uint *)param_1 != 0x3f) {
          uVar1 = (ulong)*(uint *)param_1 | 0x4000000000;
        }
        TurboAssemblerBase::IndirectLoadConstant(this,uVar1,0,*(undefined8 *)(param_2 + 0x20));
        goto LAB_0126e210;
      }
    }
    Assembler::ldr((Assembler *)this,(CPURegister *)&local_50,param_2);
  }
  if ((((int)local_50 != *(int *)param_1) || (local_50._4_4_ != *(int *)(param_1 + 4))) ||
     (local_48 != *(int *)(param_1 + 8))) {
    Assembler::mov((Assembler *)this,param_1,(Register *)&local_50);
  }
LAB_0126e210:
  *(long *)(this + 0x198) = lVar4;
  *(undefined8 *)(this + 0x1a8) = uVar5;
  return;
}

