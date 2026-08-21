
/* v8::internal::compiler::BytecodeGraphBuilder::VisitConstruct() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitConstruct(BytecodeGraphBuilder *this)

{
  uint uVar1;
  BytecodeArrayAccessor *this_00;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  Environment *pEVar7;
  Node *pNVar8;
  ProcessedFeedback *this_01;
  long lVar9;
  Operator *pOVar10;
  undefined8 uVar11;
  Node **ppNVar12;
  ulong uVar13;
  Zone *this_02;
  long *plVar14;
  Node *pNVar15;
  Node **ppNVar16;
  float local_b0 [2];
  FeedbackSource local_a8 [8];
  Node *local_a0;
  int local_98 [2];
  Node *local_90;
  undefined8 uStack_88;
  Node *local_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  PrepareEagerCheckpoint(this);
  this_00 = (BytecodeArrayAccessor *)(this + 0x88);
  uVar3 = interpreter::BytecodeArrayAccessor::GetRegisterOperand(this_00,0);
  iVar4 = interpreter::BytecodeArrayAccessor::GetRegisterOperand(this_00,1);
  uVar5 = interpreter::BytecodeArrayAccessor::GetRegisterCountOperand(this_00,2);
  uVar6 = interpreter::BytecodeArrayAccessor::GetIndexOperand(this_00,3);
  FeedbackSource::FeedbackSource
            ((FeedbackSource *)local_98,*(undefined8 *)(this + 0x38),*(undefined8 *)(this + 0x40),
             uVar6);
  local_a0 = local_90;
  pEVar7 = *(Environment **)(this + 0xa8);
  if ((ulong)(*(long *)(pEVar7 + 0x30) - *(long *)(pEVar7 + 0x28) >> 3) <=
      (ulong)(long)*(int *)(pEVar7 + 0x5c)) goto LAB_01676ad0;
  pNVar15 = *(Node **)(*(long *)(pEVar7 + 0x28) + (long)*(int *)(pEVar7 + 0x5c) * 8);
  pNVar8 = (Node *)Environment::LookupRegister(pEVar7,uVar3);
  if (NAN(*(float *)(this + 0x48))) {
    local_b0[0] = NAN;
  }
  else {
    FeedbackSource::FeedbackSource
              ((FeedbackSource *)local_98,*(undefined8 *)(this + 0x38),*(undefined8 *)(this + 0x40),
               uVar6);
    this_01 = (ProcessedFeedback *)
              JSHeapBroker::GetFeedbackForCall(*(JSHeapBroker **)this,(FeedbackSource *)local_98);
    local_b0[0] = 0.0;
    if (*(int *)this_01 != 0) {
      lVar9 = ProcessedFeedback::AsCall(this_01);
      local_b0[0] = 0.0;
      if (*(float *)(lVar9 + 0x20) != 0.0) {
        local_b0[0] = *(float *)(lVar9 + 0x20) * *(float *)(this + 0x48);
      }
    }
  }
  uVar1 = uVar5 + 2;
  pOVar10 = (Operator *)
            JSOperatorBuilder::Construct
                      (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170),uVar1,
                       (CallFrequency *)local_b0,local_a8);
  this_02 = *(Zone **)(this + 8);
  uVar13 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
  ppNVar12 = *(Node ***)(this_02 + 0x10);
  if ((ulong)(*(long *)(this_02 + 0x18) - (long)ppNVar12) < uVar13) {
    ppNVar12 = (Node **)Zone::NewExpand(this_02,uVar13);
  }
  else {
    *(ulong *)(this_02 + 0x10) = (long)ppNVar12 + uVar13;
  }
  *ppNVar12 = pNVar8;
  if (0 < (int)uVar5) {
    uVar13 = (ulong)uVar5;
    ppNVar16 = ppNVar12;
    do {
      ppNVar16 = ppNVar16 + 1;
      pNVar8 = (Node *)Environment::LookupRegister(*(Environment **)(this + 0xa8),iVar4);
      *ppNVar16 = pNVar8;
      uVar13 = uVar13 - 1;
      iVar4 = iVar4 + 1;
    } while (uVar13 != 0);
  }
  ppNVar12[(int)(uVar5 + 1)] = pNVar15;
  JSTypeHintLowering::ReduceConstructOperation
            (local_98,this + 0x50,pOVar10,ppNVar12,uVar5,
             *(undefined8 *)(*(long *)(this + 0xa8) + 0x20),
             *(undefined8 *)(*(long *)(this + 0xa8) + 0x18),(ulong)local_a0 & 0xffffffff);
  if (local_98[0] == 2) {
    MergeControlToLeaveFunction(this,local_80);
    if (local_98[0] == 2) goto LAB_01676a80;
    pNVar8 = local_90;
    if (local_98[0] != 1) goto LAB_01676a04;
  }
  else if (local_98[0] == 1) {
    *(undefined8 *)(*(long *)(this + 0xa8) + 0x20) = uStack_88;
    *(Node **)(*(long *)(this + 0xa8) + 0x18) = local_80;
    pNVar8 = local_90;
  }
  else {
LAB_01676a04:
    pNVar8 = (Node *)MakeNode(this,pOVar10,uVar1,ppNVar12,false);
  }
  plVar14 = *(long **)(this + 0xa8);
  lVar9 = *plVar14;
  uVar13 = OperatorProperties::HasFrameStateInput(*(Operator **)pNVar8);
  if ((uVar13 & 1) != 0) {
    iVar4 = *(int *)(lVar9 + 0x90);
    uVar11 = BytecodeAnalysis::GetOutLivenessFor(*(BytecodeAnalysis **)(lVar9 + 0xa0),iVar4);
    pNVar15 = (Node *)Environment::Checkpoint(*(Environment **)(lVar9 + 0xa8),iVar4,0,uVar11);
    NodeProperties::ReplaceFrameStateInput(pNVar8,pNVar15);
  }
  if ((ulong)(long)*(int *)((long)plVar14 + 0x5c) < (ulong)(plVar14[6] - plVar14[5] >> 3)) {
    *(Node **)(plVar14[5] + (long)*(int *)((long)plVar14 + 0x5c) * 8) = pNVar8;
LAB_01676a80:
    if (*(long *)(lVar2 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
LAB_01676ad0:
                    /* WARNING: Subroutine does not return */
  abort();
}

