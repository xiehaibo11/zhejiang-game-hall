
/* v8::internal::compiler::InstructionSelector::VisitReturn(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::InstructionSelector::VisitReturn(InstructionSelector *this,Node *param_1)

{
  Node *pNVar1;
  uint uVar2;
  Zone *pZVar3;
  ulong uVar4;
  undefined8 uVar5;
  InstructionOperand *pIVar6;
  Instruction *this_00;
  ulong uVar7;
  InstructionSelector *pIVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  Node *pNVar12;
  long lVar13;
  InstructionSequence *this_01;
  long lVar14;
  undefined1 local_70 [16];
  InstructionSelector *local_48;
  
  if (**(long **)(**(long **)(this + 8) + 0x10) == 0) {
    uVar11 = 1;
  }
  else {
    uVar11 = (ulong)*(uint *)(*(long *)param_1 + 0x14);
  }
  pZVar3 = *(Zone **)this;
  uVar7 = -(uVar11 >> 0x1f) & 0xfffffff800000000 | uVar11 << 3;
  pIVar6 = *(InstructionOperand **)(pZVar3 + 0x10);
  local_48 = this;
  if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)pIVar6) < uVar7) {
    pIVar6 = (InstructionOperand *)Zone::NewExpand(pZVar3,uVar7);
  }
  else {
    *(InstructionOperand **)(pZVar3 + 0x10) = pIVar6 + uVar7;
  }
  pNVar1 = param_1 + 0x20;
  uVar10 = (uint)uVar11;
  pNVar12 = pNVar1;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar12 = (Node *)(*(long *)pNVar1 + 0x10);
  }
  pNVar12 = *(Node **)pNVar12;
  if (*(ushort *)(*(long *)pNVar12 + 0x10) - 0x17 < 2) {
    this_01 = *(InstructionSequence **)(this + 0x10);
    local_70 = OperandGenerator::ToConstant(pNVar12);
    uVar4 = InstructionSequence::AddImmediate(this_01,(Constant *)local_70);
  }
  else {
    uVar7 = (ulong)*(uint *)(pNVar12 + 0x14) & 0xffffff;
    uVar2 = *(uint *)(*(long *)(this + 0x118) + uVar7 * 4);
    pIVar8 = this;
    if (uVar2 == 0xffffffff) {
      uVar2 = InstructionSequence::NextVirtualRegister(*(InstructionSequence **)(this + 0x10));
      *(uint *)(*(long *)(this + 0x118) + uVar7 * 4) = uVar2;
      uVar7 = (ulong)*(uint *)(pNVar12 + 0x14) & 0xffffff;
      pIVar8 = local_48;
    }
    uVar9 = uVar7 >> 3 & 0x1ffff8;
    uVar4 = (ulong)uVar2 << 3 | 0x5800000001;
    *(ulong *)(*(long *)(pIVar8 + 0xd8) + uVar9) =
         *(ulong *)(*(long *)(pIVar8 + 0xd8) + uVar9) | 1L << (uVar7 & 0x3f);
  }
  *(ulong *)pIVar6 = uVar4;
  if (1 < (int)uVar10) {
    lVar13 = 0;
    do {
      pNVar12 = pNVar1;
      if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
        pNVar12 = (Node *)(*(long *)pNVar1 + 0x10);
      }
      lVar14 = lVar13 * 8;
      uVar5 = OperandGenerator::UseLocation
                        ((OperandGenerator *)&local_48,*(undefined8 *)(pNVar12 + lVar14 + 8),
                         *(undefined8 *)
                          (*(long *)(*(long *)(**(long **)(this + 8) + 0x10) + 0x10) + lVar14));
      lVar13 = lVar13 + 1;
      *(undefined8 *)(pIVar6 + lVar14 + 8) = uVar5;
    } while (uVar11 - 1 != lVar13);
  }
  if (uVar10 < 0xffff) {
    pZVar3 = *(Zone **)(*(long *)(this + 0x10) + 8);
    this_00 = *(Instruction **)(pZVar3 + 0x10);
    uVar11 = 0x30;
    if (uVar10 != 0) {
      uVar11 = ((long)(int)uVar10 << 0x23) + 0x2800000000 >> 0x20;
    }
    if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)this_00) < uVar11) {
      this_00 = (Instruction *)Zone::NewExpand(pZVar3,uVar11);
    }
    else {
      *(Instruction **)(pZVar3 + 0x10) = this_00 + uVar11;
    }
    Instruction::Instruction
              (this_00,0x17,0,(InstructionOperand *)0x0,(long)(int)uVar10,pIVar6,0,
               (InstructionOperand *)0x0);
    Emit(this,this_00);
  }
  else {
    this[0x178] = (InstructionSelector)0x1;
  }
  return;
}

