
/* v8::internal::compiler::InstructionSelector::VisitTailCall(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::InstructionSelector::VisitTailCall(InstructionSelector *this,Node *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  CallDescriptor *pCVar4;
  CallDescriptor *this_00;
  ulong uVar5;
  undefined8 uVar6;
  Instruction *this_01;
  long lVar7;
  InstructionOperand *pIVar8;
  InstructionOperand *pIVar9;
  uint uVar10;
  InstructionOperand *pIVar11;
  ulong uVar12;
  ulong uVar13;
  CallDescriptor *pCVar14;
  Zone *pZVar15;
  InstructionOperand *pIVar16;
  InstructionSequence *pIVar17;
  InstructionOperand *pIVar18;
  long lVar19;
  CallBuffer aCStack_108 [80];
  InstructionOperand *local_b8;
  InstructionOperand *local_b0;
  InstructionOperand *local_a8;
  Zone *local_a0;
  undefined8 local_78 [3];
  
  pCVar4 = (CallDescriptor *)CallDescriptorOf(*(Operator **)param_1);
  pCVar14 = (CallDescriptor *)**(undefined8 **)(this + 8);
  this_00 = (CallDescriptor *)CallDescriptorOf(*(Operator **)param_1);
  iVar1 = CallDescriptor::GetStackParameterDelta(this_00,pCVar14);
  CallBuffer::CallBuffer(aCStack_108,*(Zone **)this,pCVar4,(FrameStateDescriptor *)0x0);
  uVar5 = IsTailCallAddressImmediate();
  uVar10 = 7;
  if ((uVar5 & 1) == 0) {
    uVar10 = 5;
  }
  InitializeCallBuffer(this,param_1,aCStack_108,*(uint *)(this_00 + 0x48) >> 4 & 8 | uVar10,1,iVar1)
  ;
  iVar2 = *(int *)pCVar4;
  if (*(int *)**(undefined8 **)(this + 8) == 1) {
    if (iVar2 != 0) {
LAB_0163e914:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    pZVar15 = *(Zone **)this;
    iVar2 = GetTempsCountForTailCallFromJSFunction();
    if (iVar2 < 1) {
      pIVar18 = (InstructionOperand *)0x0;
      pIVar11 = (InstructionOperand *)0x0;
      uVar10 = 1;
    }
    else {
      iVar3 = 0;
      pIVar18 = (InstructionOperand *)0x0;
      pIVar16 = (InstructionOperand *)0x0;
      pIVar8 = (InstructionOperand *)0x0;
      do {
        uVar5 = InstructionSequence::NextVirtualRegister(*(InstructionSequence **)(this + 0x10));
        uVar5 = (uVar5 & 0xffffffff) << 3 | 0x5800000001;
        if (pIVar18 < pIVar16) {
          *(ulong *)pIVar18 = uVar5;
          pIVar9 = pIVar18;
          pIVar11 = pIVar8;
        }
        else {
          lVar19 = (long)pIVar18 - (long)pIVar8 >> 3;
          uVar13 = lVar19 + 1;
          if (uVar13 >> 0x1c != 0) goto LAB_0163e910;
          uVar12 = (long)pIVar16 - (long)pIVar8 >> 2;
          if (uVar13 <= uVar12) {
            uVar13 = uVar12;
          }
          if (0x7fffffe < (ulong)((long)pIVar16 - (long)pIVar8 >> 3)) {
            uVar13 = 0xfffffff;
          }
          if (uVar13 == 0) {
            lVar7 = 0;
          }
          else {
            lVar7 = *(long *)(pZVar15 + 0x10);
            uVar12 = uVar13 * 8;
            if (uVar12 < (ulong)(*(long *)(pZVar15 + 0x18) - lVar7) ||
                uVar12 - (*(long *)(pZVar15 + 0x18) - lVar7) == 0) {
              *(ulong *)(pZVar15 + 0x10) = lVar7 + uVar12;
            }
            else {
              lVar7 = Zone::NewExpand(pZVar15,uVar12);
            }
          }
          pIVar9 = (InstructionOperand *)(lVar7 + lVar19 * 8);
          pIVar16 = (InstructionOperand *)(lVar7 + uVar13 * 8);
          *(ulong *)pIVar9 = uVar5;
          pIVar11 = pIVar9;
          while (pIVar18 != pIVar8) {
            pIVar18 = pIVar18 + -8;
            pIVar11 = pIVar11 + -8;
            *(undefined8 *)pIVar11 = *(undefined8 *)pIVar18;
          }
        }
        iVar3 = iVar3 + 1;
        pIVar18 = pIVar9 + 8;
        pIVar8 = pIVar11;
      } while (iVar3 != iVar2);
      uVar10 = 1;
    }
  }
  else if (iVar2 == 0) {
    pIVar18 = (InstructionOperand *)0x0;
    pIVar11 = (InstructionOperand *)0x0;
    uVar10 = 2;
  }
  else if (iVar2 == 4) {
    pIVar18 = (InstructionOperand *)0x0;
    pIVar11 = (InstructionOperand *)0x0;
    uVar10 = 0xb;
  }
  else {
    if (iVar2 != 2) goto LAB_0163e914;
    pIVar18 = (InstructionOperand *)0x0;
    pIVar11 = (InstructionOperand *)0x0;
    uVar10 = 4;
  }
  iVar2 = *(int *)(pCVar4 + 0x48);
  local_78[0] = 0;
  pZVar15 = *(Zone **)(*(long *)(this + 0x10) + 8);
  this_01 = *(Instruction **)(pZVar15 + 0x10);
  if ((ulong)(*(long *)(pZVar15 + 0x18) - (long)this_01) < 0x30) {
    this_01 = (Instruction *)Zone::NewExpand(pZVar15,0x30);
  }
  else {
    *(Instruction **)(pZVar15 + 0x10) = this_01 + 0x30;
  }
  Instruction::Instruction
            (this_01,9,0,(InstructionOperand *)local_78,0,(InstructionOperand *)0x0,0,
             (InstructionOperand *)0x0);
  Emit(this,this_01);
  iVar3 = CallDescriptor::GetFirstUnusedStackSlot(this_00);
  pIVar17 = *(InstructionSequence **)(this + 0x10);
  Constant::Constant((Constant *)local_78,iVar3);
  uVar6 = InstructionSequence::AddImmediate(pIVar17,(Constant *)local_78);
  if (local_b0 < local_a8) {
    *(undefined8 *)local_b0 = uVar6;
    pIVar8 = local_b8;
    pIVar16 = local_b0;
  }
  else {
    lVar19 = (long)local_b0 - (long)local_b8 >> 3;
    uVar5 = lVar19 + 1;
    if (uVar5 >> 0x1c != 0) goto LAB_0163e910;
    uVar13 = (long)local_a8 - (long)local_b8 >> 2;
    if (uVar5 <= uVar13) {
      uVar5 = uVar13;
    }
    if (0x7fffffe < (ulong)((long)local_a8 - (long)local_b8 >> 3)) {
      uVar5 = 0xfffffff;
    }
    if (uVar5 == 0) {
      lVar7 = 0;
    }
    else {
      uVar13 = uVar5 * 8;
      lVar7 = *(long *)(local_a0 + 0x10);
      if (uVar13 < (ulong)(*(long *)(local_a0 + 0x18) - lVar7) ||
          uVar13 - (*(long *)(local_a0 + 0x18) - lVar7) == 0) {
        *(ulong *)(local_a0 + 0x10) = lVar7 + uVar13;
      }
      else {
        lVar7 = Zone::NewExpand(local_a0,uVar13);
      }
    }
    pIVar16 = (InstructionOperand *)(lVar7 + lVar19 * 8);
    *(undefined8 *)pIVar16 = uVar6;
    local_a8 = (InstructionOperand *)(lVar7 + uVar5 * 8);
    pIVar8 = pIVar16;
    while (local_b0 != local_b8) {
      local_b0 = local_b0 + -8;
      pIVar8 = pIVar8 + -8;
      *(undefined8 *)pIVar8 = *(undefined8 *)local_b0;
    }
  }
  local_b8 = pIVar8;
  local_b0 = pIVar16 + 8;
  pIVar17 = *(InstructionSequence **)(this + 0x10);
  Constant::Constant((Constant *)local_78,iVar1);
  uVar6 = InstructionSequence::AddImmediate(pIVar17,(Constant *)local_78);
  if (local_b0 < local_a8) {
    *(undefined8 *)local_b0 = uVar6;
    pIVar16 = local_b0;
    pIVar8 = local_b8;
  }
  else {
    lVar19 = (long)local_b0 - (long)local_b8 >> 3;
    uVar5 = lVar19 + 1;
    if (uVar5 >> 0x1c != 0) {
LAB_0163e910:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar13 = (long)local_a8 - (long)local_b8 >> 2;
    if (uVar5 <= uVar13) {
      uVar5 = uVar13;
    }
    if (0x7fffffe < (ulong)((long)local_a8 - (long)local_b8 >> 3)) {
      uVar5 = 0xfffffff;
    }
    if (uVar5 == 0) {
      lVar7 = 0;
    }
    else {
      uVar13 = uVar5 * 8;
      lVar7 = *(long *)(local_a0 + 0x10);
      if (uVar13 < (ulong)(*(long *)(local_a0 + 0x18) - lVar7) ||
          uVar13 - (*(long *)(local_a0 + 0x18) - lVar7) == 0) {
        *(ulong *)(local_a0 + 0x10) = lVar7 + uVar13;
      }
      else {
        lVar7 = Zone::NewExpand(local_a0,uVar13);
      }
    }
    pIVar16 = (InstructionOperand *)(lVar7 + lVar19 * 8);
    *(undefined8 *)pIVar16 = uVar6;
    local_a8 = (InstructionOperand *)(lVar7 + uVar5 * 8);
    pIVar8 = pIVar16;
    while (local_b0 != local_b8) {
      local_b0 = local_b0 + -8;
      pIVar8 = pIVar8 + -8;
      *(undefined8 *)pIVar8 = *(undefined8 *)local_b0;
    }
  }
  local_b8 = pIVar8;
  local_b0 = pIVar16 + 8;
  pIVar16 = (InstructionOperand *)0x0;
  if ((long)pIVar18 - (long)pIVar11 != 0) {
    pIVar16 = pIVar11;
  }
  Emit(this,uVar10 | iVar2 << 0x16,0,(InstructionOperand *)0x0,(long)local_b0 - (long)local_b8 >> 3,
       local_b8,(long)pIVar18 - (long)pIVar11 >> 3,pIVar16);
  return;
}

