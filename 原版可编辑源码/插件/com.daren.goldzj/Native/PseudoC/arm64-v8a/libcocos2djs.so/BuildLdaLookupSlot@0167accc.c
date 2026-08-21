
/* v8::internal::compiler::BytecodeGraphBuilder::BuildLdaLookupSlot(v8::internal::TypeofMode) */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::BuildLdaLookupSlot
          (BytecodeGraphBuilder *this,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  Operator *pOVar3;
  Node *pNVar4;
  ulong uVar5;
  Node *pNVar6;
  undefined4 uVar7;
  JSGraph *this_00;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  Node *local_40 [2];
  
  PrepareEagerCheckpoint(this);
  this_00 = *(JSGraph **)(this + 0x10);
  uVar9 = *(undefined8 *)this;
  uVar2 = interpreter::BytecodeArrayAccessor::GetConstantForIndexOperand
                    ((BytecodeArrayAccessor *)(this + 0x88),0,*(Isolate **)(this_00 + 0x168));
  ObjectRef::ObjectRef((ObjectRef *)local_40,uVar9,uVar2,1);
  local_40[0] = (Node *)JSGraph::Constant(this_00,(ObjectRef *)local_40);
  uVar7 = 0x130;
  if (param_2 != 1) {
    uVar7 = 0x131;
  }
  pOVar3 = (Operator *)
           JSOperatorBuilder::CallRuntime
                     (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170),uVar7);
  pNVar4 = (Node *)MakeNode(this,pOVar3,1,local_40,false);
  plVar8 = *(long **)(this + 0xa8);
  lVar10 = *plVar8;
  uVar5 = OperatorProperties::HasFrameStateInput(*(Operator **)pNVar4);
  if ((uVar5 & 1) != 0) {
    iVar1 = *(int *)(lVar10 + 0x90);
    uVar2 = BytecodeAnalysis::GetOutLivenessFor(*(BytecodeAnalysis **)(lVar10 + 0xa0),iVar1);
    pNVar6 = (Node *)Environment::Checkpoint(*(Environment **)(lVar10 + 0xa8),iVar1,0,uVar2);
    NodeProperties::ReplaceFrameStateInput(pNVar4,pNVar6);
  }
  if ((ulong)(long)*(int *)((long)plVar8 + 0x5c) < (ulong)(plVar8[6] - plVar8[5] >> 3)) {
    *(Node **)(plVar8[5] + (long)*(int *)((long)plVar8 + 0x5c) * 8) = pNVar4;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

