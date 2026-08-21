
/* v8::internal::compiler::BytecodeGraphBuilder::VisitStaLookupSlot() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitStaLookupSlot(BytecodeGraphBuilder *this)

{
  int iVar1;
  undefined8 uVar2;
  Node *pNVar3;
  ulong uVar4;
  Operator *pOVar5;
  Node *pNVar6;
  undefined4 uVar7;
  long lVar8;
  JSGraph *this_00;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  Node *local_50;
  undefined8 uStack_48;
  
  PrepareEagerCheckpoint(this);
  lVar8 = *(long *)(this + 0xa8);
  if ((ulong)(long)*(int *)(lVar8 + 0x5c) <
      (ulong)(*(long *)(lVar8 + 0x30) - *(long *)(lVar8 + 0x28) >> 3)) {
    this_00 = *(JSGraph **)(this + 0x10);
    uVar11 = *(undefined8 *)(*(long *)(lVar8 + 0x28) + (long)*(int *)(lVar8 + 0x5c) * 8);
    uVar9 = *(undefined8 *)this;
    uVar2 = interpreter::BytecodeArrayAccessor::GetConstantForIndexOperand
                      ((BytecodeArrayAccessor *)(this + 0x88),0,*(Isolate **)(this_00 + 0x168));
    ObjectRef::ObjectRef((ObjectRef *)&local_50,uVar9,uVar2,1);
    pNVar3 = (Node *)JSGraph::Constant(this_00,(ObjectRef *)&local_50);
    uVar4 = interpreter::BytecodeArrayAccessor::GetFlagOperand
                      ((BytecodeArrayAccessor *)(this + 0x88),1);
    uVar7 = 0x140;
    if ((uVar4 & 2) != 0) {
      uVar7 = 0x141;
    }
    if ((uVar4 & 1) != 0) {
      uVar7 = 0x142;
    }
    pOVar5 = (Operator *)
             JSOperatorBuilder::CallRuntime
                       (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170),uVar7);
    local_50 = pNVar3;
    uStack_48 = uVar11;
    pNVar3 = (Node *)MakeNode(this,pOVar5,2,&local_50,false);
    plVar10 = *(long **)(this + 0xa8);
    lVar8 = *plVar10;
    uVar4 = OperatorProperties::HasFrameStateInput(*(Operator **)pNVar3);
    if ((uVar4 & 1) != 0) {
      iVar1 = *(int *)(lVar8 + 0x90);
      uVar2 = BytecodeAnalysis::GetOutLivenessFor(*(BytecodeAnalysis **)(lVar8 + 0xa0),iVar1);
      pNVar6 = (Node *)Environment::Checkpoint(*(Environment **)(lVar8 + 0xa8),iVar1,0,uVar2);
      NodeProperties::ReplaceFrameStateInput(pNVar3,pNVar6);
    }
    if ((ulong)(long)*(int *)((long)plVar10 + 0x5c) < (ulong)(plVar10[6] - plVar10[5] >> 3)) {
      *(Node **)(plVar10[5] + (long)*(int *)((long)plVar10 + 0x5c) * 8) = pNVar3;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

