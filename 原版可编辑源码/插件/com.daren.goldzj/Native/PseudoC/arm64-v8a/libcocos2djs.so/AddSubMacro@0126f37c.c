
/* v8::internal::TurboAssembler::AddSubMacro(v8::internal::Register const&, v8::internal::Register
   const&, v8::internal::Operand const&, v8::internal::FlagsUpdate, v8::internal::AddSubOp) */

void __thiscall
v8::internal::TurboAssembler::AddSubMacro
          (TurboAssembler *this,int *param_1,int *param_2,Operand *param_3,int param_5,
          undefined4 param_6)

{
  long lVar1;
  undefined1 uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong local_c0;
  undefined4 local_b8;
  Operand local_b0 [8];
  undefined1 local_a8;
  undefined8 local_90;
  undefined8 uStack_88;
  ulong local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if ((((*(int *)(param_3 + 0x30) == -1) && (*(int *)(param_3 + 0x34) == 0)) &&
      (*(int *)(param_3 + 0x38) == 2)) && (*param_3 == (Operand)0x0)) {
    if (*(long *)(param_3 + 0x20) == 0) {
LAB_0126f3fc:
      if (((*param_1 == *param_2) && (param_1[1] == param_2[1])) &&
         ((param_1[2] == param_2[2] &&
          (((param_1[1] == 0x40 &&
            (uVar4 = Operand::NeedsRelocation(param_3,(Assembler *)this), param_5 == 0)) &&
           ((uVar4 & 1) == 0)))))) goto LAB_0126f66c;
    }
  }
  else if ((*(int *)(param_3 + 0x38) == 0) && (*(int *)(param_3 + 0x30) == 0x1f)) goto LAB_0126f3fc;
  uVar4 = Operand::NeedsRelocation(param_3,(Assembler *)this);
  if ((uVar4 & 1) == 0) {
    if (((((*(int *)(param_3 + 0x30) != -1) || (*(int *)(param_3 + 0x34) != 0)) ||
         ((*(int *)(param_3 + 0x38) != 2 ||
          ((*param_3 != (Operand)0x0 ||
           (uVar4 = Assembler::IsImmAddSub(*(long *)(param_3 + 0x20)), (uVar4 & 1) != 0)))))) &&
        ((param_2[2] != 0 ||
         ((*param_2 != 0x1f ||
          ((*(int *)(param_3 + 0x30) != -1 && (*(int *)(param_3 + 0x3c) != -1)))))))) &&
       ((*(int *)(param_3 + 0x30) == -1 || (*(int *)(param_3 + 0x3c) != 3)))) {
      Assembler::AddSub(this,param_1,param_2,param_3,param_5,param_6);
      goto LAB_0126f66c;
    }
    lVar5 = *(long *)(this + 0x198);
    if (lVar5 == 0) goto LAB_0126f70c;
    uVar6 = *(undefined8 *)(this + 0x1a8);
    uVar4 = CPURegList::PopLowestIndex((CPURegList *)(this + 0x198));
    local_b8 = 0;
    local_c0 = uVar4 & 0xffffffff | (ulong)(uint)param_2[1] << 0x20;
    if ((((*(int *)(param_3 + 0x30) == -1) && (*(int *)(param_3 + 0x34) == 0)) &&
        (*(int *)(param_3 + 0x38) == 2)) && (*param_3 == (Operand)0x0)) {
      if (((*param_1 == 0x3f) && (param_1[1] == 0x40)) && (param_1[2] == 0)) {
        uVar2 = param_5 != 1;
      }
      else {
        uVar2 = 2;
        if (((*param_2 == 0x3f) && (param_2[1] == 0x40)) && (uVar2 = 1, param_2[2] != 0)) {
          uVar2 = 2;
        }
      }
      MoveImmediateForShiftedOp(local_b0,this,&local_c0,*(undefined8 *)(param_3 + 0x20),uVar2);
    }
    else {
      Mov(this,&local_c0,param_3,0);
      local_b0[0] = (Operand)0x0;
      local_a8 = 0;
      local_90 = 0;
      uStack_88 = CONCAT71(uStack_88._1_7_,0x13);
      local_74 = 0xffffffff00000000;
      local_80 = local_c0;
      local_78 = local_b8;
      local_6c = 0;
    }
    Assembler::AddSub(this,param_1,param_2,local_b0,param_5,param_6);
  }
  else {
    lVar5 = *(long *)(this + 0x198);
    if (lVar5 == 0) {
LAB_0126f70c:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","!available->IsEmpty()");
    }
    uVar6 = *(undefined8 *)(this + 0x1a8);
    uVar3 = CPURegList::PopLowestIndex((CPURegList *)(this + 0x198));
    local_c0 = 0x400000003f;
    if (uVar3 != 0x3f) {
      local_c0 = (ulong)uVar3 | 0x4000000000;
    }
    local_b8 = 0;
    uStack_88 = *(undefined8 *)(param_3 + 0x28);
    local_90 = *(undefined8 *)(param_3 + 0x20);
    local_b0[0] = (Operand)0x0;
    local_a8 = 0;
    local_80 = 0xffffffff;
    local_78 = 2;
    Assembler::ldr((Assembler *)this,(CPURegister *)&local_c0,local_b0);
    local_b0[0] = (Operand)0x0;
    local_a8 = 0;
    local_90 = 0;
    uStack_88 = CONCAT71(uStack_88._1_7_,0x13);
    local_74 = 0xffffffff00000000;
    local_80 = local_c0;
    local_78 = local_b8;
    local_6c = 0;
    AddSubMacro(this,param_1,param_2,local_b0,param_5,param_6);
  }
  *(long *)(this + 0x198) = lVar5;
  *(undefined8 *)(this + 0x1a8) = uVar6;
LAB_0126f66c:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

