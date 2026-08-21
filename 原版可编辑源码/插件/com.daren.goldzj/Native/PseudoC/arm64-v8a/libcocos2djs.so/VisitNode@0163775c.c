
/* v8::internal::compiler::InstructionSelector::VisitNode(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::InstructionSelector::VisitNode(InstructionSelector *this,Node *param_1)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  Operator *this_00;
  Zone *pZVar5;
  Instruction *pIVar6;
  InstructionSelector *this_01;
  undefined8 uVar7;
  Node *pNVar8;
  Node *pNVar9;
  ulong uVar10;
  uint uVar11;
  long *plVar12;
  InstructionSequence *pIVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  InstructionSelector *pIStack_a0;
  Node *pNStack_98;
  undefined8 local_88 [2];
  undefined8 local_78;
  undefined4 local_70;
  Node *local_68;
  undefined4 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  TickCounter::DoTick(*(TickCounter **)(this + 0x1a8));
  this_00 = *(Operator **)param_1;
  switch((ulong)*(ushort *)(this_00 + 0x10)) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 8:
  case 9:
  case 10:
  case 0x12:
  case 0x16:
  case 0x24:
  case 0x27:
  case 0x29:
  case 0x2a:
  case 0x2e:
    break;
  case 7:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,8,iVar4);
    VisitIfException(this,param_1);
    break;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Unexpected operator #%d:%s @ node #%d",(ulong)*(ushort *)(this_00 + 0x10),
             *(undefined8 *)(this_00 + 8),(ulong)(*(uint *)(param_1 + 0x14) & 0xffffff));
  case 0xc:
    VisitDeoptimizeIf(this,param_1);
    break;
  case 0xd:
    VisitDeoptimizeUnless(this,param_1);
    break;
  case 0xe:
    local_50 = TrapIdOf(this_00);
    pNVar8 = param_1 + 0x20;
    uVar11 = *(uint *)(param_1 + 0x14) & 0xf000000;
    if (uVar11 == 0xf000000) {
      pNVar8 = (Node *)(*(long *)pNVar8 + 0x10);
    }
    local_68 = *(Node **)(pNVar8 + 8);
    local_88[0] = 0x100000006;
    goto LAB_01639dc4;
  case 0xf:
    local_50 = TrapIdOf(this_00);
    pNVar8 = param_1 + 0x20;
    uVar11 = *(uint *)(param_1 + 0x14) & 0xf000000;
    if (uVar11 == 0xf000000) {
      pNVar8 = (Node *)(*(long *)pNVar8 + 0x10);
    }
    local_68 = *(Node **)(pNVar8 + 8);
    local_88[0] = 6;
LAB_01639dc4:
    local_78 = 0;
    pNVar8 = param_1 + 0x20;
    local_70 = 0xffffffff;
    if (uVar11 == 0xf000000) {
      pNVar8 = (Node *)(*(long *)pNVar8 + 0x10);
    }
    VisitWordCompareZero(this,param_1,*(Node **)pNVar8,(FlagsContinuation *)local_88);
    break;
  case 0x17:
  case 0x18:
  case 0x1b:
  case 0x20:
  case 0x21:
    goto switchD_016377b4_caseD_17;
  case 0x19:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    uVar7 = 0xb;
    goto LAB_016383a0;
  case 0x1a:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    uVar7 = 0xc;
    goto LAB_016383a0;
  case 0x1c:
    dVar14 = *(double *)(this_00 + 0x30);
    if ((((1073741823.0 < dVar14) || (dVar14 < -1073741824.0)) || (dVar14 == -0.0)) ||
       (dVar14 != (double)(int)dVar14)) goto switchD_016377b4_caseD_1e;
    goto switchD_016377b4_caseD_17;
  case 0x1e:
  case 0x119:
switchD_016377b4_caseD_1e:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    uVar7 = 8;
    goto LAB_016383a0;
  case 0x1f:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    uVar7 = 10;
LAB_016383a0:
    InstructionSequence::MarkAsRepresentation(pIVar13,uVar7,iVar4);
switchD_016377b4_caseD_17:
    VisitConstant(this,param_1);
    break;
  case 0x23:
    uVar11 = PhiRepresentationOf(this_00);
    if ((uVar11 & 0xff) != 0) {
      uVar1 = *(uint *)(param_1 + 0x14);
      pIVar13 = *(InstructionSequence **)(this + 0x10);
      iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar1 & 0xffffff) * 4);
      if (iVar4 == -1) {
        iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
        *(int *)(*(long *)(this + 0x118) + ((ulong)uVar1 & 0xffffff) * 4) = iVar4;
      }
      InstructionSequence::MarkAsRepresentation(pIVar13,uVar11,iVar4);
      VisitPhi(this,param_1);
    }
    break;
  case 0x28:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    uVar7 = 8;
    goto LAB_0163cb70;
  case 0x31:
    VisitCall(this,param_1,(BasicBlock *)0x0);
    break;
  case 0x32:
    plVar12 = *(long **)(this + 8);
    iVar4 = ParameterIndexOf(this_00);
    if (iVar4 == -1) {
      uVar11 = (uint)*(byte *)(*plVar12 + 4);
    }
    else {
      plVar12 = *(long **)(*plVar12 + 0x10);
      uVar11 = *(uint *)(plVar12[2] + (*plVar12 + (long)iVar4) * 8 + 4);
    }
    uVar1 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar1 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar1 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,uVar11,iVar4);
    VisitParameter(this,param_1);
    break;
  case 0x33:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,8,iVar4);
    VisitOsrValue(this,param_1);
    break;
  case 0x37:
    VisitProjection(this,param_1);
    break;
  case 0x38:
    VisitRetain(this,param_1);
    break;
  case 0x3b:
  case 0x1a8:
    local_88[0] = 0;
    pZVar5 = *(Zone **)(*(long *)(this + 0x10) + 8);
    pIVar6 = *(Instruction **)(pZVar5 + 0x10);
    if ((ulong)(*(long *)(pZVar5 + 0x18) - (long)pIVar6) < 0x30) {
      pIVar6 = (Instruction *)Zone::NewExpand(pZVar5,0x30);
    }
    else {
      *(Instruction **)(pZVar5 + 0x10) = pIVar6 + 0x30;
    }
    Instruction::Instruction
              (pIVar6,0x13,0,(InstructionOperand *)local_88,0,(InstructionOperand *)0x0,0,
               (InstructionOperand *)0x0);
    Emit(this,pIVar6);
    break;
  case 0x3c:
    VisitDeadValue(this,param_1);
    break;
  case 0x3e:
    auVar15 = VisitStaticAssert((InstructionSelector *)this_00,param_1);
    this_01 = auVar15._0_8_;
    pcStack_a8 = VisitGoto;
    lStack_b8 = (long)*(int *)(auVar15._8_8_ + 4);
    uStack_c0 = CONCAT35(uStack_c0._5_3_,0x1300000007);
    puStack_b0 = &stack0xffffffffffffffc0;
    pIStack_a0 = this;
    pNStack_98 = param_1;
    uStack_c8 = InstructionSequence::AddImmediate
                          (*(InstructionSequence **)(this_01 + 0x10),(Constant *)&uStack_c0);
    uStack_c0 = 0;
    pZVar5 = *(Zone **)(*(long *)(this_01 + 0x10) + 8);
    pIVar6 = *(Instruction **)(pZVar5 + 0x10);
    if ((ulong)(*(long *)(pZVar5 + 0x18) - (long)pIVar6) < 0x30) {
      pIVar6 = (Instruction *)Zone::NewExpand(pZVar5,0x30);
    }
    else {
      *(Instruction **)(pZVar5 + 0x10) = pIVar6 + 0x30;
    }
    Instruction::Instruction
              (pIVar6,0xd,0,(InstructionOperand *)&uStack_c0,1,(InstructionOperand *)&uStack_c8,0,
               (InstructionOperand *)0x0);
    Emit(this_01,pIVar6);
    return;
  case 0x123:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,4,iVar4);
    VisitWord32Clz(this,param_1);
    break;
  case 0x124:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,4,iVar4);
    VisitWord32Ctz((Node *)this);
    break;
  case 0x125:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,4,iVar4);
    VisitInt32AbsWithOverflow((Node *)this);
    break;
  case 0x126:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,4,iVar4);
    VisitWord32ReverseBits(this,param_1);
    break;
  case 0x127:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,4,iVar4);
    VisitWord32ReverseBytes(this,param_1);
    break;
  case 0x128:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,4,iVar4);
    VisitWord32And(this,param_1);
    break;
  case 0x129:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,4,iVar4);
    VisitWord32Or(this,param_1);
    break;
  case 0x12a:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,4,iVar4);
    VisitWord32Xor(this,param_1);
    break;
  case 299:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,4,iVar4);
    VisitWord32Shl(this,param_1);
    break;
  case 300:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,4,iVar4);
    VisitWord32Shr(this,param_1);
    break;
  case 0x12d:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,4,iVar4);
    VisitWord32Sar(this,param_1);
    break;
  case 0x12e:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,4,iVar4);
    VisitWord32Ror(this,param_1);
    break;
  case 0x12f:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,4,iVar4);
    VisitInt32Add(this,param_1);
    break;
  case 0x130:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,4,iVar4);
    VisitInt32AddWithOverflow(this,param_1);
    break;
  case 0x131:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,4,iVar4);
    VisitInt32Sub(this,param_1);
    break;
  case 0x132:
    VisitInt32SubWithOverflow(this,param_1);
    break;
  case 0x133:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,4,iVar4);
    VisitInt32Mul(this,param_1);
    break;
  case 0x134:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,4,iVar4);
    VisitInt32MulWithOverflow(this,param_1);
    break;
  case 0x135:
    VisitInt32MulHigh(this,param_1);
    break;
  case 0x136:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,4,iVar4);
    VisitInt32Div(this,param_1);
    break;
  case 0x137:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,4,iVar4);
    VisitInt32Mod(this,param_1);
    break;
  case 0x138:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,4,iVar4);
    VisitUint32Div(this,param_1);
    break;
  case 0x139:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,4,iVar4);
    VisitUint32Mod(this,param_1);
    break;
  case 0x13a:
    VisitUint32MulHigh(this,param_1);
    break;
  case 0x13b:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,5,iVar4);
    VisitWord64And(this,param_1);
    break;
  case 0x13c:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,5,iVar4);
    VisitWord64Or(this,param_1);
    break;
  case 0x13d:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,5,iVar4);
    VisitWord64Xor(this,param_1);
    break;
  case 0x13e:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,5,iVar4);
    VisitWord64Shl(this,param_1);
    break;
  case 0x13f:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,5,iVar4);
    VisitWord64Shr(this,param_1);
    break;
  case 0x140:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,5,iVar4);
    VisitWord64Sar(this,param_1);
    break;
  case 0x141:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,5,iVar4);
    VisitWord64Ror(this,param_1);
    break;
  case 0x142:
  case 0x1f7:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,5,iVar4);
    VisitInt64Add(this,param_1);
    break;
  case 0x143:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,5,iVar4);
    VisitInt64AddWithOverflow(this,param_1);
    break;
  case 0x144:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,5,iVar4);
    VisitInt64Sub(this,param_1);
    break;
  case 0x145:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,5,iVar4);
    VisitInt64SubWithOverflow(this,param_1);
    break;
  case 0x146:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,5,iVar4);
    VisitInt64Mul(this,param_1);
    break;
  case 0x147:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,5,iVar4);
    VisitInt64Div(this,param_1);
    break;
  case 0x148:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,5,iVar4);
    VisitInt64Mod(this,param_1);
    break;
  case 0x149:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,5,iVar4);
    VisitUint64Div(this,param_1);
    break;
  case 0x14a:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,5,iVar4);
    VisitUint64Mod(this,param_1);
    break;
  case 0x14b:
    VisitWord32Equal(this,param_1);
    break;
  case 0x14c:
    VisitWord64Equal(this,param_1);
    break;
  case 0x14d:
    VisitInt32LessThan(this,param_1);
    break;
  case 0x14e:
    VisitInt32LessThanOrEqual(this,param_1);
    break;
  case 0x14f:
    VisitUint32LessThan(this,param_1);
    break;
  case 0x150:
    VisitUint32LessThanOrEqual(this,param_1);
    break;
  case 0x151:
    VisitInt64LessThan(this,param_1);
    break;
  case 0x152:
    VisitInt64LessThanOrEqual(this,param_1);
    break;
  case 0x153:
    VisitUint64LessThan(this,param_1);
    break;
  case 0x154:
    VisitUint64LessThanOrEqual(this,param_1);
    break;
  case 0x155:
    VisitFloat32Equal(this,param_1);
    break;
  case 0x156:
    VisitFloat32LessThan(this,param_1);
    break;
  case 0x157:
    VisitFloat32LessThanOrEqual(this,param_1);
    break;
  case 0x158:
    VisitFloat64Equal(this,param_1);
    break;
  case 0x159:
    VisitFloat64LessThan(this,param_1);
    break;
  case 0x15a:
    VisitFloat64LessThanOrEqual(this,param_1);
    break;
  case 0x15b:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xb,iVar4);
    VisitFloat32Add(this,param_1);
    break;
  case 0x15c:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xb,iVar4);
    VisitFloat32Sub(this,param_1);
    break;
  case 0x15d:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xb,iVar4);
    VisitFloat32Mul(this,param_1);
    break;
  case 0x15e:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xb,iVar4);
    VisitFloat32Div(this,param_1);
    break;
  case 0x15f:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xb,iVar4);
    VisitFloat32Max(this,param_1);
    break;
  case 0x160:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xb,iVar4);
    VisitFloat32Min(this,param_1);
    break;
  case 0x161:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xb,iVar4);
    VisitFloat32Abs(this,param_1);
    break;
  case 0x162:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xb,iVar4);
    VisitFloat32Neg(this,param_1);
    break;
  case 0x163:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xb,iVar4);
    VisitFloat32RoundDown(this,param_1);
    break;
  case 0x164:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xb,iVar4);
    VisitFloat32RoundTiesEven(this,param_1);
    break;
  case 0x165:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xb,iVar4);
    VisitFloat32RoundTruncate(this,param_1);
    break;
  case 0x166:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xb,iVar4);
    VisitFloat32RoundUp(this,param_1);
    break;
  case 0x167:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xb,iVar4);
    VisitFloat32Sqrt(this,param_1);
    break;
  case 0x168:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xc,iVar4);
    VisitFloat64Ieee754Binop(this,param_1,0x51);
    break;
  case 0x169:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xc,iVar4);
    VisitFloat64Max(this,param_1);
    break;
  case 0x16a:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xc,iVar4);
    VisitFloat64Min(this,param_1);
    break;
  case 0x16b:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xc,iVar4);
    VisitFloat64Add(this,param_1);
    break;
  case 0x16c:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xc,iVar4);
    VisitFloat64Sub(this,param_1);
    break;
  case 0x16d:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xc,iVar4);
    VisitFloat64Mul(this,param_1);
    break;
  case 0x16e:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xc,iVar4);
    VisitFloat64Div(this,param_1);
    break;
  case 0x16f:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xc,iVar4);
    VisitFloat64Mod(this,param_1);
    break;
  case 0x170:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xc,iVar4);
    VisitFloat64Ieee754Binop(this,param_1,0x5b);
    break;
  case 0x171:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xc,iVar4);
    VisitFloat64Abs(this,param_1);
    break;
  case 0x172:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xc,iVar4);
    uVar11 = 0x4b;
    goto LAB_0163dd0c;
  case 0x173:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xc,iVar4);
    uVar11 = 0x4c;
    goto LAB_0163dd0c;
  case 0x174:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xc,iVar4);
    uVar11 = 0x4d;
    goto LAB_0163dd0c;
  case 0x175:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xc,iVar4);
    uVar11 = 0x4e;
    goto LAB_0163dd0c;
  case 0x176:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xc,iVar4);
    uVar11 = 0x4f;
    goto LAB_0163dd0c;
  case 0x177:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xc,iVar4);
    uVar11 = 0x50;
LAB_0163dd0c:
    VisitFloat64Ieee754Unop(this,param_1,uVar11);
    break;
  case 0x178:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xc,iVar4);
    uVar11 = 0x52;
    goto LAB_0163dcbc;
  case 0x179:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xc,iVar4);
    uVar11 = 0x53;
    goto LAB_0163dcbc;
  case 0x17a:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xc,iVar4);
    uVar11 = 0x54;
    goto LAB_0163dcbc;
  case 0x17b:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xc,iVar4);
    uVar11 = 0x55;
    goto LAB_0163dcbc;
  case 0x17c:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xc,iVar4);
    uVar11 = 0x56;
    goto LAB_0163dcbc;
  case 0x17d:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xc,iVar4);
    uVar11 = 0x57;
    goto LAB_0163dcbc;
  case 0x17e:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xc,iVar4);
    uVar11 = 0x58;
    goto LAB_0163dcbc;
  case 0x17f:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xc,iVar4);
    uVar11 = 0x59;
    goto LAB_0163dcbc;
  case 0x180:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xc,iVar4);
    uVar11 = 0x5a;
    goto LAB_0163dcbc;
  case 0x181:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xc,iVar4);
    VisitFloat64Neg(this,param_1);
    break;
  case 0x182:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xc,iVar4);
    VisitFloat64RoundDown(this,param_1);
    break;
  case 0x183:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xc,iVar4);
    VisitFloat64RoundTiesAway(this,param_1);
    break;
  case 0x184:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xc,iVar4);
    VisitFloat64RoundTiesEven(this,param_1);
    break;
  case 0x185:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xc,iVar4);
    VisitFloat64RoundTruncate(this,param_1);
    break;
  case 0x186:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xc,iVar4);
    VisitFloat64RoundUp(this,param_1);
    break;
  case 0x187:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xc,iVar4);
    uVar11 = 0x5c;
    goto LAB_0163dcbc;
  case 0x188:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xc,iVar4);
    uVar11 = 0x5d;
    goto LAB_0163dcbc;
  case 0x189:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xc,iVar4);
    VisitFloat64Sqrt(this,param_1);
    break;
  case 0x18a:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xc,iVar4);
    uVar11 = 0x5e;
    goto LAB_0163dcbc;
  case 0x18b:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xc,iVar4);
    uVar11 = 0x5f;
LAB_0163dcbc:
    VisitFloat64Ieee754Unop(this,param_1,uVar11);
    break;
  case 0x18c:
    uVar3 = LoadRepresentationOf(this_00);
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,uVar3,iVar4);
    VisitWord32AtomicLoad(this,param_1);
    break;
  case 0x18d:
    VisitWord32AtomicStore(this,param_1);
    break;
  case 0x18e:
    uVar3 = AtomicOpType(this_00);
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,uVar3,iVar4);
    VisitWord32AtomicExchange(this,param_1);
    break;
  case 399:
    uVar3 = AtomicOpType(this_00);
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,uVar3,iVar4);
    VisitWord32AtomicCompareExchange(this,param_1);
    break;
  case 400:
    uVar3 = AtomicOpType(this_00);
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,uVar3,iVar4);
    VisitWord32AtomicAdd(this,param_1);
    break;
  case 0x191:
    uVar3 = AtomicOpType(this_00);
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,uVar3,iVar4);
    VisitWord32AtomicSub(this,param_1);
    break;
  case 0x192:
    uVar3 = AtomicOpType(this_00);
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,uVar3,iVar4);
    VisitWord32AtomicAnd(this,param_1);
    break;
  case 0x193:
    uVar3 = AtomicOpType(this_00);
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,uVar3,iVar4);
    VisitWord32AtomicOr(this,param_1);
    break;
  case 0x194:
    uVar3 = AtomicOpType(this_00);
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,uVar3,iVar4);
    VisitWord32AtomicXor(this,param_1);
    break;
  case 0x195:
  case 0x197:
  case 0x198:
  case 0x199:
  case 0x19a:
  case 0x19b:
  case 0x19c:
  case 0x19d:
  case 0x1e9:
  case 0x1ea:
  case 0x1eb:
  case 0x1ec:
  case 0x1ed:
  case 0x1ee:
    MarkAsWord32(this,param_1);
    MarkPairProjectionsAsWord32(this,param_1);
  case 0x196:
    goto switchD_016377b4_caseD_196;
  case 0x19e:
    uVar3 = LoadRepresentationOf(this_00);
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,uVar3,iVar4);
    VisitWord64AtomicLoad(this,param_1);
    break;
  case 0x19f:
    VisitWord64AtomicStore(this,param_1);
    break;
  case 0x1a0:
    uVar3 = AtomicOpType(this_00);
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,uVar3,iVar4);
    VisitWord64AtomicAdd(this,param_1);
    break;
  case 0x1a1:
    uVar3 = AtomicOpType(this_00);
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,uVar3,iVar4);
    VisitWord64AtomicSub(this,param_1);
    break;
  case 0x1a2:
    uVar3 = AtomicOpType(this_00);
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,uVar3,iVar4);
    VisitWord64AtomicAnd(this,param_1);
    break;
  case 0x1a3:
    uVar3 = AtomicOpType(this_00);
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,uVar3,iVar4);
    VisitWord64AtomicOr(this,param_1);
    break;
  case 0x1a4:
    uVar3 = AtomicOpType(this_00);
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,uVar3,iVar4);
    VisitWord64AtomicXor(this,param_1);
    break;
  case 0x1a5:
    uVar3 = AtomicOpType(this_00);
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,uVar3,iVar4);
    VisitWord64AtomicExchange(this,param_1);
    break;
  case 0x1a6:
    uVar3 = AtomicOpType(this_00);
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,uVar3,iVar4);
    VisitWord64AtomicCompareExchange(this,param_1);
    break;
  case 0x1a7:
    VisitAbortCSAAssert(this,param_1);
    break;
  case 0x1a9:
    VisitComment(this,param_1);
    break;
  case 0x1aa:
    uVar3 = LoadRepresentationOf(this_00);
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,uVar3,iVar4);
    VisitLoad(this,param_1);
    break;
  case 0x1ab:
    uVar3 = LoadRepresentationOf(this_00);
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,uVar3,iVar4);
    VisitPoisonedLoad((Node *)this);
    break;
  case 0x1ac:
    VisitStore(this,param_1);
    break;
  case 0x1ad:
    VisitStackSlot(this,param_1);
    break;
  case 0x1ae:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,4,iVar4);
    VisitWord32Popcnt((Node *)this);
    break;
  case 0x1af:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,4,iVar4);
    VisitWord64Popcnt((Node *)this);
    break;
  case 0x1b0:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,5,iVar4);
    VisitWord64Clz(this,param_1);
    break;
  case 0x1b1:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,5,iVar4);
    VisitWord64Ctz((Node *)this);
    break;
  case 0x1b2:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,5,iVar4);
    VisitWord64ReverseBits(this,param_1);
    break;
  case 0x1b3:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,5,iVar4);
    VisitWord64ReverseBytes(this,param_1);
    break;
  case 0x1b4:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitSimd128ReverseBytes((Node *)this);
    break;
  case 0x1b5:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,5,iVar4);
    VisitInt64AbsWithOverflow((Node *)this);
    break;
  case 0x1b6:
  case 0x1b7:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    uVar7 = 5;
    goto LAB_0163cb70;
  case 0x1b8:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,8,iVar4);
    VisitBitcastWordToTagged(this,param_1);
    break;
  case 0x1b9:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    uVar7 = 6;
LAB_0163cb70:
    InstructionSequence::MarkAsRepresentation(pIVar13,uVar7,iVar4);
    pNVar8 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
LAB_0163cb90:
      pNVar8 = (Node *)(*(long *)(param_1 + 0x20) + 0x10);
    }
LAB_0163cb98:
    pNVar9 = param_1 + 0x20;
    uVar10 = ((ulong)*(uint *)(*(long *)pNVar8 + 0x14) & 0xffffc0) >> 3;
    *(ulong *)(*(long *)(this + 0xd8) + uVar10) =
         1L << ((ulong)*(uint *)(*(long *)pNVar8 + 0x14) & 0x3f) |
         *(ulong *)(*(long *)(this + 0xd8) + uVar10);
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar9 = (Node *)(*(long *)pNVar9 + 0x10);
    }
    SetRename(this,param_1,*(Node **)pNVar9);
    break;
  case 0x1ba:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,4,iVar4);
    VisitTruncateFloat64ToWord32(this,param_1);
    break;
  case 0x1bb:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xc,iVar4);
    VisitChangeFloat32ToFloat64(this,param_1);
    break;
  case 0x1bc:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,4,iVar4);
    VisitChangeFloat64ToInt32(this,param_1);
    break;
  case 0x1bd:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,5,iVar4);
    VisitChangeFloat64ToInt64(this,param_1);
    break;
  case 0x1be:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,4,iVar4);
    VisitChangeFloat64ToUint32(this,param_1);
    break;
  case 0x1bf:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,5,iVar4);
    VisitChangeFloat64ToUint64(this,param_1);
    break;
  case 0x1c0:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xc,iVar4);
    pNVar8 = param_1 + 0x20;
    pNVar9 = pNVar8;
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar9 = (Node *)(*(long *)pNVar8 + 0x10);
    }
    if ((*(ushort *)(**(long **)pNVar9 + 0x10) != 0x16d) &&
       (1 < *(ushort *)(**(long **)pNVar9 + 0x10) - 0x16b)) {
      VisitFloat64SilenceNaN(this,param_1);
      break;
    }
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) goto LAB_0163cb90;
    goto LAB_0163cb98;
  case 0x1c1:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,5,iVar4);
    VisitTruncateFloat64ToInt64(this,param_1);
    break;
  case 0x1c2:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,4,iVar4);
    VisitTruncateFloat64ToUint32(this,param_1);
    break;
  case 0x1c3:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,4,iVar4);
    VisitTruncateFloat32ToInt32(this,param_1);
    break;
  case 0x1c4:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,4,iVar4);
    VisitTruncateFloat32ToUint32(this,param_1);
    break;
  case 0x1c5:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,5,iVar4);
    VisitTryTruncateFloat32ToInt64(this,param_1);
    break;
  case 0x1c6:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,5,iVar4);
    VisitTryTruncateFloat64ToInt64(this,param_1);
    break;
  case 0x1c7:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,5,iVar4);
    VisitTryTruncateFloat32ToUint64(this,param_1);
    break;
  case 0x1c8:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,5,iVar4);
    VisitTryTruncateFloat64ToUint64(this,param_1);
    break;
  case 0x1c9:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xc,iVar4);
    VisitChangeInt32ToFloat64(this,param_1);
    break;
  case 0x1ca:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,5,iVar4);
    VisitBitcastWord32ToWord64((Node *)this);
    break;
  case 0x1cb:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,5,iVar4);
    VisitChangeInt32ToInt64(this,param_1);
    break;
  case 0x1cc:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xc,iVar4);
    VisitChangeInt64ToFloat64(this,param_1);
    break;
  case 0x1cd:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xc,iVar4);
    VisitChangeUint32ToFloat64(this,param_1);
    break;
  case 0x1ce:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,5,iVar4);
    VisitChangeUint32ToUint64(this,param_1);
    break;
  case 0x1cf:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,10,iVar4);
    VisitChangeTaggedToCompressed((Node *)this);
    break;
  case 0x1d0:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xb,iVar4);
    VisitTruncateFloat64ToFloat32(this,param_1);
    break;
  case 0x1d1:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,4,iVar4);
    VisitTruncateInt64ToInt32((Node *)this);
    break;
  case 0x1d2:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,4,iVar4);
    VisitRoundFloat64ToInt32(this,param_1);
    break;
  case 0x1d3:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xb,iVar4);
    VisitRoundInt32ToFloat32(this,param_1);
    break;
  case 0x1d4:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xb,iVar4);
    VisitRoundInt64ToFloat32(this,param_1);
    break;
  case 0x1d5:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xc,iVar4);
    VisitRoundInt64ToFloat64(this,param_1);
    break;
  case 0x1d6:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xb,iVar4);
    VisitRoundUint32ToFloat32(this,param_1);
    break;
  case 0x1d7:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xc,iVar4);
    VisitRoundUint64ToFloat32(this,param_1);
    break;
  case 0x1d8:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xc,iVar4);
    VisitRoundUint64ToFloat64(this,param_1);
    break;
  case 0x1d9:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,4,iVar4);
    VisitBitcastFloat32ToInt32(this,param_1);
    break;
  case 0x1da:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,5,iVar4);
    VisitBitcastFloat64ToInt64(this,param_1);
    break;
  case 0x1db:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xb,iVar4);
    VisitBitcastInt32ToFloat32(this,param_1);
    break;
  case 0x1dc:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xc,iVar4);
    VisitBitcastInt64ToFloat64(this,param_1);
    break;
  case 0x1dd:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,4,iVar4);
    VisitFloat64ExtractLowWord32(this,param_1);
    break;
  case 0x1de:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,4,iVar4);
    VisitFloat64ExtractHighWord32(this,param_1);
    break;
  case 0x1df:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xc,iVar4);
    VisitFloat64InsertLowWord32(this,param_1);
    break;
  case 0x1e0:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xc,iVar4);
    VisitFloat64InsertHighWord32(this,param_1);
    break;
  case 0x1e1:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    uVar7 = 8;
    goto LAB_0163cdcc;
  case 0x1e2:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    uVar7 = 4;
    goto LAB_0163cdcc;
  case 0x1e3:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    uVar7 = 5;
LAB_0163cdcc:
    InstructionSequence::MarkAsRepresentation(pIVar13,uVar7,iVar4);
    EmitWordPoisonOnSpeculation(this,param_1);
    break;
  case 0x1e4:
    VisitLoadStackCheckOffset(this,param_1);
    break;
  case 0x1e5:
    VisitLoadFramePointer(this,param_1);
    break;
  case 0x1e6:
    VisitLoadParentFramePointer(this,param_1);
    break;
  case 0x1e7:
    uVar3 = LoadRepresentationOf(this_00);
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,uVar3,iVar4);
    VisitUnalignedLoad((Node *)this);
    break;
  case 0x1e8:
    VisitUnalignedStore((Node *)this);
    break;
  case 0x1ef:
    uVar3 = LoadRepresentationOf(this_00);
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,uVar3,iVar4);
    VisitProtectedLoad((Node *)this);
    break;
  case 0x1f0:
    VisitProtectedStore((Node *)this);
    break;
  case 0x1f1:
    VisitMemoryBarrier((Node *)this);
    break;
  case 0x1f2:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,4,iVar4);
    VisitSignExtendWord8ToInt32(this,param_1);
    break;
  case 499:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,4,iVar4);
    VisitSignExtendWord16ToInt32(this,param_1);
    break;
  case 500:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,5,iVar4);
    VisitSignExtendWord8ToInt64(this,param_1);
    break;
  case 0x1f5:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,5,iVar4);
    VisitSignExtendWord16ToInt64(this,param_1);
    break;
  case 0x1f6:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,5,iVar4);
    VisitSignExtendWord32ToInt64(this,param_1);
    break;
  case 0x1f8:
    local_78 = 0;
    local_70 = 0xffffffff;
    local_88[0] = 0x900000005;
    local_68 = param_1;
    VisitStackPointerGreaterThan(this,param_1,(FlagsContinuation *)local_88);
    break;
  case 0x1f9:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitF64x2Splat(this,param_1);
    break;
  case 0x1fa:
  case 0x1fb:
  case 0x227:
  case 0x22a:
  case 0x231:
  case 0x232:
  case 0x238:
  case 0x239:
    MarkAsSimd128(this,param_1);
    goto switchD_016377b4_caseD_196;
  case 0x1fc:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xc,iVar4);
    VisitF64x2ExtractLane(this,param_1);
    break;
  case 0x1fd:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitF64x2ReplaceLane(this,param_1);
    break;
  case 0x1fe:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitF64x2Abs(this,param_1);
    break;
  case 0x1ff:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitF64x2Neg(this,param_1);
    break;
  case 0x200:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitF64x2Sqrt(this,param_1);
    break;
  case 0x201:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitF64x2Add(this,param_1);
    break;
  case 0x202:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitF64x2Sub(this,param_1);
    break;
  case 0x203:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitF64x2Mul(this,param_1);
    break;
  case 0x204:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitF64x2Div(this,param_1);
    break;
  case 0x205:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitF64x2Min(this,param_1);
    break;
  case 0x206:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitF64x2Max(this,param_1);
    break;
  case 0x207:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitF64x2Eq(this,param_1);
    break;
  case 0x208:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitF64x2Ne(this,param_1);
    break;
  case 0x209:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitF64x2Lt(this,param_1);
    break;
  case 0x20a:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitF64x2Le(this,param_1);
    break;
  case 0x20b:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitF64x2Qfma(this,param_1);
    break;
  case 0x20c:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitF64x2Qfms(this,param_1);
    break;
  case 0x20d:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitF32x4Splat(this,param_1);
    break;
  case 0x20e:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xb,iVar4);
    VisitF32x4ExtractLane(this,param_1);
    break;
  case 0x20f:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitF32x4ReplaceLane(this,param_1);
    break;
  case 0x210:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitF32x4SConvertI32x4(this,param_1);
    break;
  case 0x211:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitF32x4UConvertI32x4(this,param_1);
    break;
  case 0x212:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitF32x4Abs(this,param_1);
    break;
  case 0x213:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitF32x4Neg(this,param_1);
    break;
  case 0x214:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitF32x4Sqrt(this,param_1);
    break;
  case 0x215:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitF32x4RecipApprox(this,param_1);
    break;
  case 0x216:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitF32x4RecipSqrtApprox(this,param_1);
    break;
  case 0x217:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitF32x4Add(this,param_1);
    break;
  case 0x218:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitF32x4AddHoriz(this,param_1);
    break;
  case 0x219:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitF32x4Sub(this,param_1);
    break;
  case 0x21a:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitF32x4Mul(this,param_1);
    break;
  case 0x21b:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitF32x4Div(this,param_1);
    break;
  case 0x21c:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitF32x4Min(this,param_1);
    break;
  case 0x21d:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitF32x4Max(this,param_1);
    break;
  case 0x21e:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitF32x4Eq(this,param_1);
    break;
  case 0x21f:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitF32x4Ne(this,param_1);
    break;
  case 0x220:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitF32x4Lt(this,param_1);
    break;
  case 0x221:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitF32x4Le(this,param_1);
    break;
  case 0x224:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitF32x4Qfma(this,param_1);
    break;
  case 0x225:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitF32x4Qfms(this,param_1);
    break;
  case 0x226:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI64x2Splat(this,param_1);
    break;
  case 0x228:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,5,iVar4);
    VisitI64x2ExtractLane(this,param_1);
    break;
  case 0x229:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI64x2ReplaceLane(this,param_1);
    break;
  case 0x22b:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI64x2Neg(this,param_1);
    break;
  case 0x22c:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI64x2Shl(this,param_1);
    break;
  case 0x22d:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI64x2ShrS(this,param_1);
    break;
  case 0x22e:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI64x2Add(this,param_1);
    break;
  case 0x22f:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI64x2Sub(this,param_1);
    break;
  case 0x230:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI64x2Mul(this,param_1);
    break;
  case 0x233:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI64x2Eq(this,param_1);
    break;
  case 0x234:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI64x2Ne(this,param_1);
    break;
  case 0x235:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI64x2GtS(this,param_1);
    break;
  case 0x236:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI64x2GeS(this,param_1);
    break;
  case 0x237:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI64x2ShrU(this,param_1);
    break;
  case 0x23a:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI64x2GtU(this,param_1);
    break;
  case 0x23b:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI64x2GeU(this,param_1);
    break;
  case 0x23c:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI32x4Splat(this,param_1);
    break;
  case 0x23d:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,4,iVar4);
    VisitI32x4ExtractLane(this,param_1);
    break;
  case 0x23e:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI32x4ReplaceLane(this,param_1);
    break;
  case 0x23f:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI32x4SConvertF32x4(this,param_1);
    break;
  case 0x240:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI32x4SConvertI16x8Low(this,param_1);
    break;
  case 0x241:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI32x4SConvertI16x8High(this,param_1);
    break;
  case 0x242:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI32x4Neg(this,param_1);
    break;
  case 0x243:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI32x4Shl(this,param_1);
    break;
  case 0x244:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI32x4ShrS(this,param_1);
    break;
  case 0x245:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI32x4Add(this,param_1);
    break;
  case 0x246:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI32x4AddHoriz(this,param_1);
    break;
  case 0x247:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI32x4Sub(this,param_1);
    break;
  case 0x248:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI32x4Mul(this,param_1);
    break;
  case 0x249:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI32x4MinS(this,param_1);
    break;
  case 0x24a:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI32x4MaxS(this,param_1);
    break;
  case 0x24b:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI32x4Eq(this,param_1);
    break;
  case 0x24c:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI32x4Ne(this,param_1);
    break;
  case 0x24f:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI32x4GtS(this,param_1);
    break;
  case 0x250:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI32x4GeS(this,param_1);
    break;
  case 0x251:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI32x4UConvertF32x4(this,param_1);
    break;
  case 0x252:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI32x4UConvertI16x8Low(this,param_1);
    break;
  case 0x253:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI32x4UConvertI16x8High(this,param_1);
    break;
  case 0x254:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI32x4ShrU(this,param_1);
    break;
  case 0x255:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI32x4MinU(this,param_1);
    break;
  case 0x256:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI32x4MaxU(this,param_1);
    break;
  case 0x259:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI32x4GtU(this,param_1);
    break;
  case 0x25a:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI32x4GeU(this,param_1);
    break;
  case 0x25b:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI16x8Splat(this,param_1);
    break;
  case 0x25c:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,4,iVar4);
    VisitI16x8ExtractLaneU(this,param_1);
    break;
  case 0x25d:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,4,iVar4);
    VisitI16x8ExtractLaneS(this,param_1);
    break;
  case 0x25e:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI16x8ReplaceLane(this,param_1);
    break;
  case 0x25f:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI16x8SConvertI8x16Low(this,param_1);
    break;
  case 0x260:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI16x8SConvertI8x16High(this,param_1);
    break;
  case 0x261:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI16x8Neg(this,param_1);
    break;
  case 0x262:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI16x8Shl(this,param_1);
    break;
  case 0x263:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI16x8ShrS(this,param_1);
    break;
  case 0x264:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI16x8SConvertI32x4(this,param_1);
    break;
  case 0x265:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI16x8Add(this,param_1);
    break;
  case 0x266:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI16x8AddSaturateS(this,param_1);
    break;
  case 0x267:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI16x8AddHoriz(this,param_1);
    break;
  case 0x268:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI16x8Sub(this,param_1);
    break;
  case 0x269:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI16x8SubSaturateS(this,param_1);
    break;
  case 0x26a:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI16x8Mul(this,param_1);
    break;
  case 0x26b:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI16x8MinS(this,param_1);
    break;
  case 0x26c:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI16x8MaxS(this,param_1);
    break;
  case 0x26d:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI16x8Eq(this,param_1);
    break;
  case 0x26e:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI16x8Ne(this,param_1);
    break;
  case 0x271:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI16x8GtS(this,param_1);
    break;
  case 0x272:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI16x8GeS(this,param_1);
    break;
  case 0x273:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI16x8UConvertI8x16Low(this,param_1);
    break;
  case 0x274:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI16x8UConvertI8x16High(this,param_1);
    break;
  case 0x275:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI16x8ShrU(this,param_1);
    break;
  case 0x276:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI16x8UConvertI32x4(this,param_1);
    break;
  case 0x277:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI16x8AddSaturateU(this,param_1);
    break;
  case 0x278:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI16x8SubSaturateU(this,param_1);
    break;
  case 0x279:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI16x8MinU(this,param_1);
    break;
  case 0x27a:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI16x8MaxU(this,param_1);
    break;
  case 0x27d:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI16x8GtU(this,param_1);
    break;
  case 0x27e:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI16x8GeU(this,param_1);
    break;
  case 0x27f:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI8x16Splat(this,param_1);
    break;
  case 0x280:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,4,iVar4);
    VisitI8x16ExtractLaneU(this,param_1);
    break;
  case 0x281:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,4,iVar4);
    VisitI8x16ExtractLaneS(this,param_1);
    break;
  case 0x282:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI8x16ReplaceLane(this,param_1);
    break;
  case 0x283:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI8x16SConvertI16x8(this,param_1);
    break;
  case 0x284:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI8x16Neg(this,param_1);
    break;
  case 0x285:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI8x16Shl(this,param_1);
    break;
  case 0x286:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI8x16ShrS(this,param_1);
    break;
  case 0x287:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI8x16Add(this,param_1);
    break;
  case 0x288:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI8x16AddSaturateS(this,param_1);
    break;
  case 0x289:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI8x16Sub(this,param_1);
    break;
  case 0x28a:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI8x16SubSaturateS(this,param_1);
    break;
  case 0x28b:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI8x16Mul(this,param_1);
    break;
  case 0x28c:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI8x16MinS(this,param_1);
    break;
  case 0x28d:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI8x16MaxS(this,param_1);
    break;
  case 0x28e:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI8x16Eq(this,param_1);
    break;
  case 0x28f:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI8x16Ne(this,param_1);
    break;
  case 0x292:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI8x16GtS(this,param_1);
    break;
  case 0x293:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI8x16GeS(this,param_1);
    break;
  case 0x294:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI8x16UConvertI16x8(this,param_1);
    break;
  case 0x295:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI8x16AddSaturateU(this,param_1);
    break;
  case 0x296:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI8x16SubSaturateU(this,param_1);
    break;
  case 0x297:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI8x16ShrU(this,param_1);
    break;
  case 0x298:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI8x16MinU(this,param_1);
    break;
  case 0x299:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI8x16MaxU(this,param_1);
    break;
  case 0x29c:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI8x16GtU(this,param_1);
    break;
  case 0x29d:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitI8x16GeU(this,param_1);
    break;
  case 0x2a0:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitS128Zero(this,param_1);
    break;
  case 0x2a1:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitS128Not(this,param_1);
    break;
  case 0x2a2:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitS128And(this,param_1);
    break;
  case 0x2a3:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitS128Or(this,param_1);
    break;
  case 0x2a4:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitS128Xor(this,param_1);
    break;
  case 0x2a5:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitS128Select(this,param_1);
    break;
  case 0x2a6:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitS8x16Swizzle(this,param_1);
    break;
  case 0x2a7:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitS8x16Shuffle(this,param_1);
    break;
  case 0x2a8:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,4,iVar4);
    VisitS1x2AnyTrue(this,param_1);
    break;
  case 0x2a9:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,4,iVar4);
    VisitS1x2AllTrue(this,param_1);
    break;
  case 0x2aa:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,4,iVar4);
    VisitS1x4AnyTrue(this,param_1);
    break;
  case 0x2ab:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,4,iVar4);
    VisitS1x4AllTrue(this,param_1);
    break;
  case 0x2ac:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,4,iVar4);
    VisitS1x8AnyTrue(this,param_1);
    break;
  case 0x2ad:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,4,iVar4);
    VisitS1x8AllTrue(this,param_1);
    break;
  case 0x2ae:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,4,iVar4);
    VisitS1x16AnyTrue(this,param_1);
    break;
  case 0x2af:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,4,iVar4);
    VisitS1x16AllTrue(this,param_1);
    break;
  case 0x2b0:
    uVar11 = *(uint *)(param_1 + 0x14);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    iVar4 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4);
    if (iVar4 == -1) {
      iVar4 = InstructionSequence::NextVirtualRegister(pIVar13);
      *(int *)(*(long *)(this + 0x118) + ((ulong)uVar11 & 0xffffff) * 4) = iVar4;
    }
    InstructionSequence::MarkAsRepresentation(pIVar13,0xd,iVar4);
    VisitLoadTransform(this,param_1);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
switchD_016377b4_caseD_196:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unimplemented code");
}

