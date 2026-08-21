
/* v8::internal::TurboAssembler::ConditionalCompareMacro(v8::internal::Register const&,
   v8::internal::Operand const&, v8::internal::StatusFlags, v8::internal::Condition,
   v8::internal::ConditionalCompareOp) */

void __thiscall
v8::internal::TurboAssembler::ConditionalCompareMacro
          (TurboAssembler *this,long param_1,Operand *param_2,undefined4 param_4,undefined4 param_5,
          undefined4 param_6)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
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
  uVar3 = Operand::NeedsRelocation(param_2,(Assembler *)this);
  if ((uVar3 & 1) == 0) {
    if (*(int *)(param_2 + 0x30) == -1) {
      if ((((*(int *)(param_2 + 0x34) != 0) || (*(int *)(param_2 + 0x38) != 2)) ||
          (*param_2 != (Operand)0x0)) ||
         (uVar3 = Assembler::IsImmConditionalCompare(*(long *)(param_2 + 0x20)), (uVar3 & 1) == 0))
      goto LAB_0126f0d0;
    }
    else if ((*(int *)(param_2 + 0x3c) == -1) || (*(int *)(param_2 + 0x44) != 0)) {
LAB_0126f0d0:
      lVar4 = *(long *)(this + 0x198);
      if (lVar4 == 0) {
LAB_0126f18c:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","!available->IsEmpty()");
      }
      uVar5 = *(undefined8 *)(this + 0x1a8);
      uVar3 = CPURegList::PopLowestIndex((CPURegList *)(this + 0x198));
      local_c0 = uVar3 & 0xffffffff | (ulong)*(uint *)(param_1 + 4) << 0x20;
      local_b8 = 0;
      Mov(this,&local_c0,param_2,0);
      local_b0[0] = (Operand)0x0;
      local_a8 = 0;
      local_90 = 0;
      uStack_88 = CONCAT71(uStack_88._1_7_,0x13);
      local_74 = 0xffffffff00000000;
      local_80 = local_c0;
      local_78 = local_b8;
      local_6c = 0;
      Assembler::ConditionalCompare((Assembler *)this,param_1,local_b0,param_4,param_5,param_6);
      goto LAB_0126f154;
    }
    Assembler::ConditionalCompare((Assembler *)this,param_1,param_2,param_4,param_5,param_6);
  }
  else {
    lVar4 = *(long *)(this + 0x198);
    if (lVar4 == 0) goto LAB_0126f18c;
    uVar5 = *(undefined8 *)(this + 0x1a8);
    uVar2 = CPURegList::PopLowestIndex((CPURegList *)(this + 0x198));
    local_c0 = 0x400000003f;
    if (uVar2 != 0x3f) {
      local_c0 = (ulong)uVar2 | 0x4000000000;
    }
    local_b8 = 0;
    uStack_88 = *(undefined8 *)(param_2 + 0x28);
    local_90 = *(undefined8 *)(param_2 + 0x20);
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
    ConditionalCompareMacro(this,param_1,local_b0,param_4,param_5,param_6);
LAB_0126f154:
    *(long *)(this + 0x198) = lVar4;
    *(undefined8 *)(this + 0x1a8) = uVar5;
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

