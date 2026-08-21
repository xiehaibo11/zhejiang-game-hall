
/* v8::internal::compiler::BytecodeGraphBuilder::BuildNamedStore(v8::internal::compiler::BytecodeGraphBuilder::StoreMode)
    */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::BuildNamedStore
          (BytecodeGraphBuilder *this,int param_2)

{
  BytecodeArrayAccessor *this_00;
  undefined4 uVar1;
  int iVar2;
  Node *pNVar3;
  undefined8 uVar4;
  ulong uVar5;
  Operator *pOVar6;
  Node *pNVar7;
  undefined8 uVar8;
  Environment *pEVar9;
  long lVar10;
  JSOperatorBuilder *pJVar11;
  undefined8 uVar12;
  int local_90 [2];
  Node *local_88;
  undefined8 uStack_80;
  Node *local_78;
  FeedbackSource local_70 [8];
  Node *local_68;
  ObjectRef aOStack_60 [16];
  Node *local_50;
  undefined8 uStack_48;
  
  PrepareEagerCheckpoint(this);
  pEVar9 = *(Environment **)(this + 0xa8);
  if ((ulong)(*(long *)(pEVar9 + 0x30) - *(long *)(pEVar9 + 0x28) >> 3) <=
      (ulong)(long)*(int *)(pEVar9 + 0x5c)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar8 = *(undefined8 *)(*(long *)(pEVar9 + 0x28) + (long)*(int *)(pEVar9 + 0x5c) * 8);
  this_00 = (BytecodeArrayAccessor *)(this + 0x88);
  uVar1 = interpreter::BytecodeArrayAccessor::GetRegisterOperand(this_00,0);
  pNVar3 = (Node *)Environment::LookupRegister(pEVar9,uVar1);
  uVar12 = *(undefined8 *)this;
  uVar4 = interpreter::BytecodeArrayAccessor::GetConstantForIndexOperand
                    (this_00,1,*(Isolate **)(*(long *)(this + 0x10) + 0x168));
  ObjectRef::ObjectRef(aOStack_60,uVar12,uVar4,0);
  uVar5 = ObjectRef::IsName(aOStack_60);
  if ((uVar5 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsName()");
  }
  uVar1 = interpreter::BytecodeArrayAccessor::GetIndexOperand(this_00,2);
  FeedbackSource::FeedbackSource
            ((FeedbackSource *)local_90,*(undefined8 *)(this + 0x38),*(undefined8 *)(this + 0x40),
             uVar1);
  local_68 = local_88;
  if (param_2 == 1) {
    pJVar11 = *(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170);
    uVar4 = NameRef::object((NameRef *)aOStack_60);
    pOVar6 = (Operator *)JSOperatorBuilder::StoreNamedOwn(pJVar11,uVar4,local_70);
  }
  else {
    iVar2 = JSHeapBroker::GetFeedbackSlotKind(*(JSHeapBroker **)this,local_70);
    pJVar11 = *(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170);
    uVar4 = NameRef::object((NameRef *)aOStack_60);
    pOVar6 = (Operator *)JSOperatorBuilder::StoreNamed(pJVar11,3 < iVar2,uVar4,local_70);
  }
  JSTypeHintLowering::ReduceStoreNamedOperation
            (local_90,this + 0x50,pOVar6,pNVar3,uVar8,*(undefined8 *)(*(long *)(this + 0xa8) + 0x20)
             ,*(undefined8 *)(*(long *)(this + 0xa8) + 0x18),(ulong)local_68 & 0xffffffff);
  if (local_90[0] == 2) {
    MergeControlToLeaveFunction(this,local_78);
    if (local_90[0] == 2) {
      return;
    }
    pNVar7 = local_88;
    if (local_90[0] == 1) goto LAB_0167b9bc;
  }
  else if (local_90[0] == 1) {
    *(undefined8 *)(*(long *)(this + 0xa8) + 0x20) = uStack_80;
    *(Node **)(*(long *)(this + 0xa8) + 0x18) = local_78;
    pNVar7 = local_88;
    goto LAB_0167b9bc;
  }
  local_50 = pNVar3;
  uStack_48 = uVar8;
  pNVar7 = (Node *)MakeNode(this,pOVar6,2,&local_50,false);
LAB_0167b9bc:
  lVar10 = **(long **)(this + 0xa8);
  uVar5 = OperatorProperties::HasFrameStateInput(*(Operator **)pNVar7);
  if ((uVar5 & 1) != 0) {
    iVar2 = *(int *)(lVar10 + 0x90);
    uVar4 = BytecodeAnalysis::GetOutLivenessFor(*(BytecodeAnalysis **)(lVar10 + 0xa0),iVar2);
    pNVar3 = (Node *)Environment::Checkpoint
                               (*(Environment **)(lVar10 + 0xa8),iVar2,0xffffffffffffffff,uVar4);
    NodeProperties::ReplaceFrameStateInput(pNVar7,pNVar3);
  }
  return;
}

