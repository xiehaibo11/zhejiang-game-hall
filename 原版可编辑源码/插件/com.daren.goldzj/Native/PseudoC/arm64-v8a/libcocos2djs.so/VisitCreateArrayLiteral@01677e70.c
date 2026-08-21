
/* v8::internal::compiler::BytecodeGraphBuilder::VisitCreateArrayLiteral() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitCreateArrayLiteral(BytecodeGraphBuilder *this)

{
  BytecodeArrayAccessor *this_00;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  Operator *pOVar6;
  Node *pNVar7;
  Node *pNVar8;
  undefined8 uVar9;
  JSOperatorBuilder *pJVar10;
  long *plVar11;
  long lVar12;
  ObjectRef aOStack_50 [16];
  FeedbackSource local_40 [16];
  
  uVar9 = *(undefined8 *)this;
  this_00 = (BytecodeArrayAccessor *)(this + 0x88);
  uVar4 = interpreter::BytecodeArrayAccessor::GetConstantForIndexOperand
                    (this_00,0,*(Isolate **)(*(long *)(this + 0x10) + 0x168));
  ObjectRef::ObjectRef(aOStack_50,uVar9,uVar4,0);
  uVar5 = ObjectRef::IsHeapObject(aOStack_50);
  if ((uVar5 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsHeapObject()");
  }
  uVar2 = interpreter::BytecodeArrayAccessor::GetIndexOperand(this_00,1);
  FeedbackSource::FeedbackSource
            (local_40,*(undefined8 *)(this + 0x38),*(undefined8 *)(this + 0x40),uVar2);
  uVar3 = interpreter::BytecodeArrayAccessor::GetFlagOperand(this_00,2);
  uVar2 = ArrayBoilerplateDescriptionRef::constants_elements_length
                    ((ArrayBoilerplateDescriptionRef *)aOStack_50);
  pJVar10 = *(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170);
  uVar4 = ArrayBoilerplateDescriptionRef::object((ArrayBoilerplateDescriptionRef *)aOStack_50);
  pOVar6 = (Operator *)
           JSOperatorBuilder::CreateLiteralArray(pJVar10,uVar4,local_40,uVar3 & 0x1f | 2,uVar2);
  pNVar7 = (Node *)MakeNode(this,pOVar6,0,(Node **)0x0,false);
  plVar11 = *(long **)(this + 0xa8);
  lVar12 = *plVar11;
  uVar5 = OperatorProperties::HasFrameStateInput(*(Operator **)pNVar7);
  if ((uVar5 & 1) != 0) {
    iVar1 = *(int *)(lVar12 + 0x90);
    uVar4 = BytecodeAnalysis::GetOutLivenessFor(*(BytecodeAnalysis **)(lVar12 + 0xa0),iVar1);
    pNVar8 = (Node *)Environment::Checkpoint(*(Environment **)(lVar12 + 0xa8),iVar1,0,uVar4);
    NodeProperties::ReplaceFrameStateInput(pNVar7,pNVar8);
  }
  if ((ulong)(long)*(int *)((long)plVar11 + 0x5c) < (ulong)(plVar11[6] - plVar11[5] >> 3)) {
    *(Node **)(plVar11[5] + (long)*(int *)((long)plVar11 + 0x5c) * 8) = pNVar7;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

