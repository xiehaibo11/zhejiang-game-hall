
/* v8::internal::compiler::BytecodeGraphBuilder::BuildCall(v8::internal::ConvertReceiverMode,
   v8::internal::compiler::Node* const*, unsigned long, int) */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::BuildCall
          (BytecodeGraphBuilder *this,undefined4 param_2,Node **param_3,ulong param_4,
          undefined4 param_5)

{
  int iVar1;
  long lVar2;
  ProcessedFeedback *pPVar3;
  long lVar4;
  Operator *pOVar5;
  Node *pNVar6;
  ulong uVar7;
  undefined8 uVar8;
  Node *pNVar9;
  undefined4 uVar10;
  long *plVar11;
  float local_90 [2];
  undefined1 local_88 [8];
  Node *local_80;
  int local_78 [2];
  Node *local_70;
  undefined8 uStack_68;
  Node *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  PrepareEagerCheckpoint(this);
  FeedbackSource::FeedbackSource
            ((FeedbackSource *)local_78,*(undefined8 *)(this + 0x38),*(undefined8 *)(this + 0x40),
             param_5);
  local_80 = local_70;
  if (NAN(*(float *)(this + 0x48))) {
    local_90[0] = NAN;
  }
  else {
    FeedbackSource::FeedbackSource
              ((FeedbackSource *)local_78,*(undefined8 *)(this + 0x38),*(undefined8 *)(this + 0x40),
               param_5);
    pPVar3 = (ProcessedFeedback *)
             JSHeapBroker::GetFeedbackForCall(*(JSHeapBroker **)this,(FeedbackSource *)local_78);
    local_90[0] = 0.0;
    if (*(int *)pPVar3 != 0) {
      lVar4 = ProcessedFeedback::AsCall(pPVar3);
      local_90[0] = 0.0;
      if (*(float *)(lVar4 + 0x20) != 0.0) {
        local_90[0] = *(float *)(lVar4 + 0x20) * *(float *)(this + 0x48);
      }
    }
  }
  FeedbackSource::FeedbackSource
            ((FeedbackSource *)local_78,*(undefined8 *)(this + 0x38),*(undefined8 *)(this + 0x40),
             param_5);
  pPVar3 = (ProcessedFeedback *)
           JSHeapBroker::GetFeedbackForCall(*(JSHeapBroker **)this,(FeedbackSource *)local_78);
  if (*(int *)pPVar3 == 0) {
    uVar10 = 1;
  }
  else {
    lVar4 = ProcessedFeedback::AsCall(pPVar3);
    uVar10 = *(undefined4 *)(lVar4 + 0x24);
  }
  pOVar5 = (Operator *)
           JSOperatorBuilder::Call
                     (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170),param_4,local_90,
                      local_88,param_2,uVar10,0);
  JSTypeHintLowering::ReduceCallOperation
            (local_78,this + 0x50,pOVar5,param_3,param_4 & 0xffffffff,
             *(undefined8 *)(*(long *)(this + 0xa8) + 0x20),
             *(undefined8 *)(*(long *)(this + 0xa8) + 0x18),(ulong)local_80 & 0xffffffff);
  if (local_78[0] == 2) {
    MergeControlToLeaveFunction(this,local_60);
    if (local_78[0] == 2) goto LAB_0167c2e8;
    pNVar6 = local_70;
    if (local_78[0] != 1) goto LAB_0167c26c;
  }
  else if (local_78[0] == 1) {
    *(undefined8 *)(*(long *)(this + 0xa8) + 0x20) = uStack_68;
    *(Node **)(*(long *)(this + 0xa8) + 0x18) = local_60;
    pNVar6 = local_70;
  }
  else {
LAB_0167c26c:
    pNVar6 = (Node *)MakeNode(this,pOVar5,(int)param_4,param_3,false);
  }
  plVar11 = *(long **)(this + 0xa8);
  lVar4 = *plVar11;
  uVar7 = OperatorProperties::HasFrameStateInput(*(Operator **)pNVar6);
  if ((uVar7 & 1) != 0) {
    iVar1 = *(int *)(lVar4 + 0x90);
    uVar8 = BytecodeAnalysis::GetOutLivenessFor(*(BytecodeAnalysis **)(lVar4 + 0xa0),iVar1);
    pNVar9 = (Node *)Environment::Checkpoint(*(Environment **)(lVar4 + 0xa8),iVar1,0,uVar8);
    NodeProperties::ReplaceFrameStateInput(pNVar6,pNVar9);
  }
  if ((ulong)(plVar11[6] - plVar11[5] >> 3) <= (ulong)(long)*(int *)((long)plVar11 + 0x5c)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(Node **)(plVar11[5] + (long)*(int *)((long)plVar11 + 0x5c) * 8) = pNVar6;
LAB_0167c2e8:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

