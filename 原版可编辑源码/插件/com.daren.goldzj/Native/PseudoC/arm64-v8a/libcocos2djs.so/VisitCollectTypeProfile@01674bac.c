
/* v8::internal::compiler::BytecodeGraphBuilder::VisitCollectTypeProfile() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitCollectTypeProfile(BytecodeGraphBuilder *this)

{
  int iVar1;
  Node *pNVar2;
  undefined8 uVar3;
  Operator *pOVar4;
  ulong uVar5;
  Node *pNVar6;
  long lVar7;
  JSGraph *this_00;
  undefined8 uVar8;
  Node *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  PrepareEagerCheckpoint(this);
  this_00 = *(JSGraph **)(this + 0x10);
  iVar1 = interpreter::BytecodeArrayAccessor::GetImmediateOperand
                    ((BytecodeArrayAccessor *)(this + 0x88),0);
  pNVar2 = (Node *)JSGraph::Constant(this_00,(double)iVar1);
  lVar7 = *(long *)(this + 0xa8);
  if ((ulong)(long)*(int *)(lVar7 + 0x5c) <
      (ulong)(*(long *)(lVar7 + 0x30) - *(long *)(lVar7 + 0x28) >> 3)) {
    uVar8 = *(undefined8 *)(*(long *)(lVar7 + 0x28) + (long)*(int *)(lVar7 + 0x5c) * 8);
    uVar3 = JSGraph::Constant(*(JSGraph **)(this + 0x10),(ObjectRef *)(this + 0x38));
    pOVar4 = (Operator *)
             JSOperatorBuilder::CallRuntime
                       (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170),0xd2);
    local_48 = pNVar2;
    uStack_40 = uVar8;
    local_38 = uVar3;
    pNVar2 = (Node *)MakeNode(this,pOVar4,3,&local_48,false);
    lVar7 = **(long **)(this + 0xa8);
    uVar5 = OperatorProperties::HasFrameStateInput(*(Operator **)pNVar2);
    if ((uVar5 & 1) != 0) {
      iVar1 = *(int *)(lVar7 + 0x90);
      uVar3 = BytecodeAnalysis::GetOutLivenessFor(*(BytecodeAnalysis **)(lVar7 + 0xa0),iVar1);
      pNVar6 = (Node *)Environment::Checkpoint
                                 (*(Environment **)(lVar7 + 0xa8),iVar1,0xffffffffffffffff,uVar3);
      NodeProperties::ReplaceFrameStateInput(pNVar2,pNVar6);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

