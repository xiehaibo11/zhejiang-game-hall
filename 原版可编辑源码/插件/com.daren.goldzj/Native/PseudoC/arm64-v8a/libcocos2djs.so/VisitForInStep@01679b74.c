
/* v8::internal::compiler::BytecodeGraphBuilder::VisitForInStep() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitForInStep(BytecodeGraphBuilder *this)

{
  int iVar1;
  undefined4 uVar2;
  Node *pNVar3;
  Operator *pOVar4;
  ulong uVar5;
  undefined8 uVar6;
  Node *pNVar7;
  Environment *pEVar8;
  long *plVar9;
  long lVar10;
  Node *local_40;
  undefined8 uStack_38;
  
  PrepareEagerCheckpoint(this);
  pEVar8 = *(Environment **)(this + 0xa8);
  uVar2 = interpreter::BytecodeArrayAccessor::GetRegisterOperand
                    ((BytecodeArrayAccessor *)(this + 0x88),0);
  pNVar3 = (Node *)Environment::LookupRegister(pEVar8,uVar2);
  pOVar4 = (Operator *)
           SimplifiedOperatorBuilder::SpeculativeSafeIntegerAdd
                     (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178),0);
  uStack_38 = JSGraph::OneConstant(*(JSGraph **)(this + 0x10));
  local_40 = pNVar3;
  pNVar3 = (Node *)MakeNode(this,pOVar4,2,&local_40,false);
  plVar9 = *(long **)(this + 0xa8);
  lVar10 = *plVar9;
  uVar5 = OperatorProperties::HasFrameStateInput(*(Operator **)pNVar3);
  if ((uVar5 & 1) != 0) {
    iVar1 = *(int *)(lVar10 + 0x90);
    uVar6 = BytecodeAnalysis::GetOutLivenessFor(*(BytecodeAnalysis **)(lVar10 + 0xa0),iVar1);
    pNVar7 = (Node *)Environment::Checkpoint(*(Environment **)(lVar10 + 0xa8),iVar1,0,uVar6);
    NodeProperties::ReplaceFrameStateInput(pNVar3,pNVar7);
  }
  if ((ulong)(long)*(int *)((long)plVar9 + 0x5c) < (ulong)(plVar9[6] - plVar9[5] >> 3)) {
    *(Node **)(plVar9[5] + (long)*(int *)((long)plVar9 + 0x5c) * 8) = pNVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

