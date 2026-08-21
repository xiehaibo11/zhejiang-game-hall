
/* v8::internal::compiler::BytecodeGraphBuilder::PrepareEagerCheckpoint() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::PrepareEagerCheckpoint(BytecodeGraphBuilder *this)

{
  int iVar1;
  Operator *pOVar2;
  Node *pNVar3;
  undefined8 uVar4;
  Node *pNVar5;
  
  if (this[0x160] != (BytecodeGraphBuilder)0x0) {
    this[0x160] = (BytecodeGraphBuilder)0x0;
    pOVar2 = (Operator *)
             CommonOperatorBuilder::Checkpoint
                       (*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8));
    pNVar3 = (Node *)MakeNode(this,pOVar2,0,(Node **)0x0,false);
    iVar1 = *(int *)(this + 0x90);
    uVar4 = BytecodeAnalysis::GetInLivenessFor(*(BytecodeAnalysis **)(this + 0xa0),iVar1);
    pNVar5 = (Node *)Environment::Checkpoint
                               (*(Environment **)(this + 0xa8),iVar1,0xffffffffffffffff,uVar4);
    NodeProperties::ReplaceFrameStateInput(pNVar3,pNVar5);
    return;
  }
  return;
}

