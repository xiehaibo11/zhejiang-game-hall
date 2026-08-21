
/* v8::internal::compiler::BytecodeGraphBuilder::VisitCallWithSpread() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitCallWithSpread(BytecodeGraphBuilder *this)

{
  uint uVar1;
  BytecodeArrayAccessor *this_00;
  uint uVar2;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  Node *pNVar7;
  Node *pNVar8;
  Zone *this_01;
  ProcessedFeedback *pPVar9;
  long lVar10;
  Operator *pOVar11;
  undefined8 uVar12;
  Node **ppNVar13;
  ulong uVar14;
  Environment *pEVar15;
  long *plVar16;
  Node **ppNVar17;
  float local_a0 [2];
  undefined1 local_98 [8];
  Node *local_90;
  int local_88 [2];
  Node *local_80;
  undefined8 uStack_78;
  Node *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  PrepareEagerCheckpoint(this);
  pEVar15 = *(Environment **)(this + 0xa8);
  this_00 = (BytecodeArrayAccessor *)(this + 0x88);
  uVar4 = interpreter::BytecodeArrayAccessor::GetRegisterOperand(this_00,0);
  pNVar7 = (Node *)Environment::LookupRegister(pEVar15,uVar4);
  iVar5 = interpreter::BytecodeArrayAccessor::GetRegisterOperand(this_00,1);
  pNVar8 = (Node *)Environment::LookupRegister(*(Environment **)(this + 0xa8),iVar5);
  iVar6 = interpreter::BytecodeArrayAccessor::GetRegisterCountOperand(this_00,2);
  this_01 = *(Zone **)(this + 8);
  uVar1 = iVar6 + 1;
  uVar14 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
  uVar2 = iVar6 - 1;
  ppNVar13 = *(Node ***)(this_01 + 0x10);
  if ((ulong)(*(long *)(this_01 + 0x18) - (long)ppNVar13) < uVar14) {
    ppNVar13 = (Node **)Zone::NewExpand(this_01,uVar14);
  }
  else {
    *(ulong *)(this_01 + 0x10) = uVar14 + (long)ppNVar13;
  }
  *ppNVar13 = pNVar7;
  ppNVar13[1] = pNVar8;
  if (0 < (int)uVar2) {
    uVar14 = (ulong)uVar2;
    ppNVar17 = ppNVar13 + 2;
    do {
      iVar5 = iVar5 + 1;
      pNVar7 = (Node *)Environment::LookupRegister(*(Environment **)(this + 0xa8),iVar5);
      *ppNVar17 = pNVar7;
      uVar14 = uVar14 - 1;
      ppNVar17 = ppNVar17 + 1;
    } while (uVar14 != 0);
  }
  uVar4 = interpreter::BytecodeArrayAccessor::GetIndexOperand(this_00,3);
  FeedbackSource::FeedbackSource
            ((FeedbackSource *)local_88,*(undefined8 *)(this + 0x38),*(undefined8 *)(this + 0x40),
             uVar4);
  local_90 = local_80;
  if (NAN(*(float *)(this + 0x48))) {
    local_a0[0] = NAN;
  }
  else {
    FeedbackSource::FeedbackSource
              ((FeedbackSource *)local_88,*(undefined8 *)(this + 0x38),*(undefined8 *)(this + 0x40),
               uVar4);
    pPVar9 = (ProcessedFeedback *)
             JSHeapBroker::GetFeedbackForCall(*(JSHeapBroker **)this,(FeedbackSource *)local_88);
    local_a0[0] = 0.0;
    if (*(int *)pPVar9 != 0) {
      lVar10 = ProcessedFeedback::AsCall(pPVar9);
      local_a0[0] = 0.0;
      if (*(float *)(lVar10 + 0x20) != 0.0) {
        local_a0[0] = *(float *)(lVar10 + 0x20) * *(float *)(this + 0x48);
      }
    }
  }
  FeedbackSource::FeedbackSource
            ((FeedbackSource *)local_88,*(undefined8 *)(this + 0x38),*(undefined8 *)(this + 0x40),
             uVar4);
  pPVar9 = (ProcessedFeedback *)
           JSHeapBroker::GetFeedbackForCall(*(JSHeapBroker **)this,(FeedbackSource *)local_88);
  if (*(int *)pPVar9 == 0) {
    uVar4 = 1;
  }
  else {
    lVar10 = ProcessedFeedback::AsCall(pPVar9);
    uVar4 = *(undefined4 *)(lVar10 + 0x24);
  }
  pOVar11 = (Operator *)
            JSOperatorBuilder::CallWithSpread
                      (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170),(ulong)uVar1,local_a0
                       ,local_98,uVar4,0);
  JSTypeHintLowering::ReduceCallOperation
            (local_88,this + 0x50,pOVar11,ppNVar13,uVar2,
             *(undefined8 *)(*(long *)(this + 0xa8) + 0x20),
             *(undefined8 *)(*(long *)(this + 0xa8) + 0x18),(ulong)local_90 & 0xffffffff);
  if (local_88[0] == 2) {
    MergeControlToLeaveFunction(this,local_70);
    if (local_88[0] == 2) goto LAB_01676144;
    pNVar7 = local_80;
    if (local_88[0] != 1) goto LAB_016760c8;
  }
  else if (local_88[0] == 1) {
    *(undefined8 *)(*(long *)(this + 0xa8) + 0x20) = uStack_78;
    *(Node **)(*(long *)(this + 0xa8) + 0x18) = local_70;
    pNVar7 = local_80;
  }
  else {
LAB_016760c8:
    pNVar7 = (Node *)MakeNode(this,pOVar11,uVar1,ppNVar13,false);
  }
  plVar16 = *(long **)(this + 0xa8);
  lVar10 = *plVar16;
  uVar14 = OperatorProperties::HasFrameStateInput(*(Operator **)pNVar7);
  if ((uVar14 & 1) != 0) {
    iVar5 = *(int *)(lVar10 + 0x90);
    uVar12 = BytecodeAnalysis::GetOutLivenessFor(*(BytecodeAnalysis **)(lVar10 + 0xa0),iVar5);
    pNVar8 = (Node *)Environment::Checkpoint(*(Environment **)(lVar10 + 0xa8),iVar5,0,uVar12);
    NodeProperties::ReplaceFrameStateInput(pNVar7,pNVar8);
  }
  if ((ulong)(plVar16[6] - plVar16[5] >> 3) <= (ulong)(long)*(int *)((long)plVar16 + 0x5c)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(Node **)(plVar16[5] + (long)*(int *)((long)plVar16 + 0x5c) * 8) = pNVar7;
LAB_01676144:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

