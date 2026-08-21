
/* v8::internal::compiler::BytecodeGraphBuilder::VisitDebugger() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitDebugger(BytecodeGraphBuilder *this)

{
  int iVar1;
  Operator *pOVar2;
  Node *pNVar3;
  ulong uVar4;
  undefined8 uVar5;
  Node *pNVar6;
  long lVar7;
  
  PrepareEagerCheckpoint(this);
  pOVar2 = (Operator *)
           JSOperatorBuilder::Debugger(*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
  pNVar3 = (Node *)MakeNode(this,pOVar2,0,(Node **)0x0,false);
  lVar7 = **(long **)(this + 0xa8);
  uVar4 = OperatorProperties::HasFrameStateInput(*(Operator **)pNVar3);
  if ((uVar4 & 1) != 0) {
    iVar1 = *(int *)(lVar7 + 0x90);
    uVar5 = BytecodeAnalysis::GetOutLivenessFor(*(BytecodeAnalysis **)(lVar7 + 0xa0),iVar1);
    pNVar6 = (Node *)Environment::Checkpoint
                               (*(Environment **)(lVar7 + 0xa8),iVar1,0xffffffffffffffff,uVar5);
    NodeProperties::ReplaceFrameStateInput(pNVar3,pNVar6);
    return;
  }
  return;
}

