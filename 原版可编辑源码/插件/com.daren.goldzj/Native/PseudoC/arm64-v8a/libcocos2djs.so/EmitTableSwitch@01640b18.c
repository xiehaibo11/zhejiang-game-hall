
/* v8::internal::compiler::InstructionSelector::EmitTableSwitch(v8::internal::compiler::SwitchInfo
   const&, v8::internal::compiler::InstructionOperand const&) */

void __thiscall
v8::internal::compiler::InstructionSelector::EmitTableSwitch
          (InstructionSelector *this,SwitchInfo *param_1,InstructionOperand *param_2)

{
  ulong uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  Zone *pZVar7;
  undefined8 uVar8;
  InstructionOperand *pIVar9;
  Instruction *this_00;
  ulong uVar10;
  ulong uVar11;
  InstructionOperand *pIVar12;
  ulong uVar13;
  undefined4 local_70;
  undefined1 local_6c;
  long local_68;
  
  pZVar7 = *(Zone **)this;
  pIVar9 = *(InstructionOperand **)(pZVar7 + 0x10);
  uVar1 = *(long *)(param_1 + 0x10) + 2;
  uVar13 = uVar1 * 8;
  if (uVar13 < (ulong)(*(long *)(pZVar7 + 0x18) - (long)pIVar9) ||
      uVar13 - (*(long *)(pZVar7 + 0x18) - (long)pIVar9) == 0) {
    *(InstructionOperand **)(pZVar7 + 0x10) = pIVar9 + uVar13;
  }
  else {
    pIVar9 = (InstructionOperand *)Zone::NewExpand(pZVar7,uVar13);
  }
  *(undefined8 *)pIVar9 = *(undefined8 *)param_2;
  local_68 = (long)*(int *)(*(long *)(param_1 + 0x18) + 4);
  local_70 = 7;
  local_6c = 0x13;
  uVar8 = InstructionSequence::AddImmediate
                    (*(InstructionSequence **)(this + 0x10),(Constant *)&local_70);
  uVar13 = uVar13 - 8;
  if (0 < (long)uVar13) {
    uVar10 = uVar13 >> 3;
    pIVar12 = pIVar9;
    if (0x1f < uVar13) {
      uVar11 = uVar10 & 0x1ffffffffffffffc;
      pIVar12 = pIVar9 + 0x18;
      uVar13 = uVar11;
      do {
        *(undefined8 *)(pIVar12 + -8) = uVar8;
        *(undefined8 *)(pIVar12 + -0x10) = uVar8;
        *(undefined8 *)(pIVar12 + 8) = uVar8;
        *(undefined8 *)pIVar12 = uVar8;
        uVar13 = uVar13 - 4;
        pIVar12 = pIVar12 + 0x20;
      } while (uVar13 != 0);
      bVar6 = uVar10 == uVar11;
      uVar10 = uVar10 - uVar11;
      pIVar12 = pIVar9 + uVar11 * 8;
      if (bVar6) goto LAB_01640c04;
    }
    do {
      uVar10 = uVar10 - 1;
      *(undefined8 *)(pIVar12 + 8) = uVar8;
      pIVar12 = pIVar12 + 8;
    } while (0 < (long)uVar10);
  }
LAB_01640c04:
  piVar3 = (int *)(*(undefined8 **)param_1)[1];
  for (piVar2 = (int *)**(undefined8 **)param_1; piVar2 != piVar3; piVar2 = piVar2 + 4) {
    iVar4 = *piVar2;
    iVar5 = *(int *)(param_1 + 8);
    local_68 = (long)*(int *)(*(long *)(piVar2 + 2) + 4);
    local_70 = 7;
    local_6c = 0x13;
    uVar8 = InstructionSequence::AddImmediate
                      (*(InstructionSequence **)(this + 0x10),(Constant *)&local_70);
    *(undefined8 *)(pIVar9 + ((long)iVar4 - (long)iVar5) * 8 + 0x10) = uVar8;
  }
  if (uVar1 < 0xffff) {
    if (0xffff < (uint)uVar1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","InputCountField::is_valid(input_count)");
    }
    pZVar7 = *(Zone **)(*(long *)(this + 0x10) + 8);
    this_00 = *(Instruction **)(pZVar7 + 0x10);
    uVar13 = 0x30;
    if (uVar1 != 0) {
      uVar13 = (long)((uVar1 << 0x23) + 0x2800000000) >> 0x20;
    }
    if ((ulong)(*(long *)(pZVar7 + 0x18) - (long)this_00) < uVar13) {
      this_00 = (Instruction *)Zone::NewExpand(pZVar7,uVar13);
    }
    else {
      *(Instruction **)(pZVar7 + 0x10) = this_00 + uVar13;
    }
    Instruction::Instruction
              (this_00,0x10,0,(InstructionOperand *)0x0,uVar1,pIVar9,0,(InstructionOperand *)0x0);
    Emit(this,this_00);
  }
  else {
    this[0x178] = (InstructionSelector)0x1;
  }
  return;
}

