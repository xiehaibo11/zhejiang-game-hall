
/* v8::internal::compiler::BytecodeGraphBuilder::VisitLdaNamedProperty() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitLdaNamedProperty(BytecodeGraphBuilder *this)

{
  BytecodeArrayAccessor *this_00;
  int iVar1;
  undefined4 uVar2;
  Node *pNVar3;
  undefined8 uVar4;
  ulong uVar5;
  Operator *pOVar6;
  Node *pNVar7;
  Environment *pEVar8;
  JSOperatorBuilder *pJVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  int local_78 [2];
  Node *local_70;
  undefined8 uStack_68;
  Node *local_60;
  undefined1 local_58 [8];
  Node *local_50;
  ObjectRef aOStack_48 [16];
  Node *local_38;
  
  PrepareEagerCheckpoint(this);
  pEVar8 = *(Environment **)(this + 0xa8);
  this_00 = (BytecodeArrayAccessor *)(this + 0x88);
  uVar2 = interpreter::BytecodeArrayAccessor::GetRegisterOperand(this_00,0);
  pNVar3 = (Node *)Environment::LookupRegister(pEVar8,uVar2);
  uVar11 = *(undefined8 *)this;
  uVar4 = interpreter::BytecodeArrayAccessor::GetConstantForIndexOperand
                    (this_00,1,*(Isolate **)(*(long *)(this + 0x10) + 0x168));
  ObjectRef::ObjectRef(aOStack_48,uVar11,uVar4,0);
  uVar5 = ObjectRef::IsName(aOStack_48);
  if ((uVar5 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsName()");
  }
  uVar2 = interpreter::BytecodeArrayAccessor::GetIndexOperand(this_00,2);
  FeedbackSource::FeedbackSource
            ((FeedbackSource *)local_78,*(undefined8 *)(this + 0x38),*(undefined8 *)(this + 0x40),
             uVar2);
  local_50 = local_70;
  pJVar9 = *(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170);
  uVar4 = NameRef::object((NameRef *)aOStack_48);
  pOVar6 = (Operator *)JSOperatorBuilder::LoadNamed(pJVar9,uVar4,local_58);
  JSTypeHintLowering::ReduceLoadNamedOperation
            (local_78,this + 0x50,pOVar6,pNVar3,*(undefined8 *)(*(long *)(this + 0xa8) + 0x20),
             *(undefined8 *)(*(long *)(this + 0xa8) + 0x18),(ulong)local_50 & 0xffffffff);
  if (local_78[0] == 2) {
    MergeControlToLeaveFunction(this,local_60);
    if (local_78[0] == 2) {
      return;
    }
    pNVar7 = local_70;
    if (local_78[0] == 1) goto LAB_01673f70;
  }
  else if (local_78[0] == 1) {
    *(undefined8 *)(*(long *)(this + 0xa8) + 0x20) = uStack_68;
    *(Node **)(*(long *)(this + 0xa8) + 0x18) = local_60;
    pNVar7 = local_70;
    goto LAB_01673f70;
  }
  local_38 = pNVar3;
  pNVar7 = (Node *)MakeNode(this,pOVar6,1,&local_38,false);
LAB_01673f70:
  plVar10 = *(long **)(this + 0xa8);
  lVar12 = *plVar10;
  uVar5 = OperatorProperties::HasFrameStateInput(*(Operator **)pNVar7);
  if ((uVar5 & 1) != 0) {
    iVar1 = *(int *)(lVar12 + 0x90);
    uVar4 = BytecodeAnalysis::GetOutLivenessFor(*(BytecodeAnalysis **)(lVar12 + 0xa0),iVar1);
    pNVar3 = (Node *)Environment::Checkpoint(*(Environment **)(lVar12 + 0xa8),iVar1,0,uVar4);
    NodeProperties::ReplaceFrameStateInput(pNVar7,pNVar3);
  }
  if ((ulong)(long)*(int *)((long)plVar10 + 0x5c) < (ulong)(plVar10[6] - plVar10[5] >> 3)) {
    *(Node **)(plVar10[5] + (long)*(int *)((long)plVar10 + 0x5c) * 8) = pNVar7;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

