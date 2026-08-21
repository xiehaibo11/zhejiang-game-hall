
/* v8::internal::compiler::BytecodeGraphBuilder::VisitStaGlobal() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitStaGlobal(BytecodeGraphBuilder *this)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  Operator *pOVar5;
  Node *pNVar6;
  long lVar7;
  JSOperatorBuilder *pJVar8;
  undefined8 uVar9;
  Node *pNVar10;
  ObjectRef aOStack_58 [16];
  FeedbackSource local_48 [16];
  Node *local_38;
  
  PrepareEagerCheckpoint(this);
  uVar9 = *(undefined8 *)this;
  uVar3 = interpreter::BytecodeArrayAccessor::GetConstantForIndexOperand
                    ((BytecodeArrayAccessor *)(this + 0x88),0,
                     *(Isolate **)(*(long *)(this + 0x10) + 0x168));
  ObjectRef::ObjectRef(aOStack_58,uVar9,uVar3,0);
  uVar4 = ObjectRef::IsName(aOStack_58);
  if ((uVar4 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsName()");
  }
  uVar1 = interpreter::BytecodeArrayAccessor::GetIndexOperand
                    ((BytecodeArrayAccessor *)(this + 0x88),1);
  FeedbackSource::FeedbackSource
            (local_48,*(undefined8 *)(this + 0x38),*(undefined8 *)(this + 0x40),uVar1);
  lVar7 = *(long *)(this + 0xa8);
  if ((ulong)(long)*(int *)(lVar7 + 0x5c) <
      (ulong)(*(long *)(lVar7 + 0x30) - *(long *)(lVar7 + 0x28) >> 3)) {
    pNVar10 = *(Node **)(*(long *)(lVar7 + 0x28) + (long)*(int *)(lVar7 + 0x5c) * 8);
    iVar2 = JSHeapBroker::GetFeedbackSlotKind(*(JSHeapBroker **)this,local_48);
    pJVar8 = *(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170);
    local_38 = (Node *)NameRef::object((NameRef *)aOStack_58);
    pOVar5 = (Operator *)JSOperatorBuilder::StoreGlobal(pJVar8,3 < iVar2,&local_38,local_48);
    local_38 = pNVar10;
    pNVar10 = (Node *)MakeNode(this,pOVar5,1,&local_38,false);
    lVar7 = **(long **)(this + 0xa8);
    uVar4 = OperatorProperties::HasFrameStateInput(*(Operator **)pNVar10);
    if ((uVar4 & 1) != 0) {
      iVar2 = *(int *)(lVar7 + 0x90);
      uVar3 = BytecodeAnalysis::GetOutLivenessFor(*(BytecodeAnalysis **)(lVar7 + 0xa0),iVar2);
      pNVar6 = (Node *)Environment::Checkpoint
                                 (*(Environment **)(lVar7 + 0xa8),iVar2,0xffffffffffffffff,uVar3);
      NodeProperties::ReplaceFrameStateInput(pNVar10,pNVar6);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

