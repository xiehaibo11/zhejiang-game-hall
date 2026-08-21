
/* v8::internal::compiler::BytecodeGraphBuilder::VisitStackCheck() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitStackCheck(BytecodeGraphBuilder *this)

{
  int iVar1;
  Operator *pOVar2;
  Node *pNVar3;
  ulong uVar4;
  Node *pNVar5;
  undefined8 uVar6;
  long lVar7;
  
  uVar6 = 1;
  if (this[0xb9] == (BytecodeGraphBuilder)0x0) {
    this[0xb9] = (BytecodeGraphBuilder)0x1;
    if (this[0xb8] != (BytecodeGraphBuilder)0x0) {
      return;
    }
    uVar6 = 0;
  }
  PrepareEagerCheckpoint(this);
  pOVar2 = (Operator *)
           JSOperatorBuilder::StackCheck
                     (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170),uVar6);
  pNVar3 = (Node *)MakeNode(this,pOVar2,0,(Node **)0x0,false);
  lVar7 = **(long **)(this + 0xa8);
  uVar4 = OperatorProperties::HasFrameStateInput(*(Operator **)pNVar3);
  if ((uVar4 & 1) == 0) {
    return;
  }
  iVar1 = *(int *)(lVar7 + 0x90);
  uVar6 = BytecodeAnalysis::GetOutLivenessFor(*(BytecodeAnalysis **)(lVar7 + 0xa0),iVar1);
  pNVar5 = (Node *)Environment::Checkpoint
                             (*(Environment **)(lVar7 + 0xa8),iVar1,0xffffffffffffffff,uVar6);
  NodeProperties::ReplaceFrameStateInput(pNVar3,pNVar5);
  return;
}

