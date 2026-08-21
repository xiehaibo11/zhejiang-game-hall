
/* v8::internal::compiler::BytecodeGraphBuilder::VisitCreateRegExpLiteral() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitCreateRegExpLiteral(BytecodeGraphBuilder *this)

{
  BytecodeArrayAccessor *this_00;
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  Operator *pOVar5;
  Node *pNVar6;
  Node *pNVar7;
  JSOperatorBuilder *pJVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  ObjectRef aOStack_50 [16];
  FeedbackSource local_40 [16];
  
  uVar9 = *(undefined8 *)this;
  this_00 = (BytecodeArrayAccessor *)(this + 0x88);
  uVar3 = interpreter::BytecodeArrayAccessor::GetConstantForIndexOperand
                    (this_00,0,*(Isolate **)(*(long *)(this + 0x10) + 0x168));
  ObjectRef::ObjectRef(aOStack_50,uVar9,uVar3,0);
  uVar4 = ObjectRef::IsString(aOStack_50);
  if ((uVar4 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsString()");
  }
  uVar2 = interpreter::BytecodeArrayAccessor::GetIndexOperand(this_00,1);
  FeedbackSource::FeedbackSource
            (local_40,*(undefined8 *)(this + 0x38),*(undefined8 *)(this + 0x40),uVar2);
  uVar2 = interpreter::BytecodeArrayAccessor::GetFlagOperand(this_00,2);
  pJVar8 = *(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170);
  uVar3 = StringRef::object((StringRef *)aOStack_50);
  pOVar5 = (Operator *)JSOperatorBuilder::CreateLiteralRegExp(pJVar8,uVar3,local_40,uVar2);
  pNVar6 = (Node *)MakeNode(this,pOVar5,0,(Node **)0x0,false);
  plVar10 = *(long **)(this + 0xa8);
  lVar11 = *plVar10;
  uVar4 = OperatorProperties::HasFrameStateInput(*(Operator **)pNVar6);
  if ((uVar4 & 1) != 0) {
    iVar1 = *(int *)(lVar11 + 0x90);
    uVar3 = BytecodeAnalysis::GetOutLivenessFor(*(BytecodeAnalysis **)(lVar11 + 0xa0),iVar1);
    pNVar7 = (Node *)Environment::Checkpoint(*(Environment **)(lVar11 + 0xa8),iVar1,0,uVar3);
    NodeProperties::ReplaceFrameStateInput(pNVar6,pNVar7);
  }
  if ((ulong)(long)*(int *)((long)plVar10 + 0x5c) < (ulong)(plVar10[6] - plVar10[5] >> 3)) {
    *(Node **)(plVar10[5] + (long)*(int *)((long)plVar10 + 0x5c) * 8) = pNVar6;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

