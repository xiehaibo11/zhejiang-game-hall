
/* v8::internal::compiler::BytecodeGraphBuilder::BuildDelete(v8::internal::LanguageMode) */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::BuildDelete(BytecodeGraphBuilder *this,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  Node *pNVar3;
  undefined8 uVar4;
  Operator *pOVar5;
  ulong uVar6;
  Node *pNVar7;
  Environment *pEVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  Node *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  PrepareEagerCheckpoint(this);
  pEVar8 = *(Environment **)(this + 0xa8);
  if ((ulong)(long)*(int *)(pEVar8 + 0x5c) <
      (ulong)(*(long *)(pEVar8 + 0x30) - *(long *)(pEVar8 + 0x28) >> 3)) {
    uVar10 = *(undefined8 *)(*(long *)(pEVar8 + 0x28) + (long)*(int *)(pEVar8 + 0x5c) * 8);
    uVar2 = interpreter::BytecodeArrayAccessor::GetRegisterOperand
                      ((BytecodeArrayAccessor *)(this + 0x88),0);
    pNVar3 = (Node *)Environment::LookupRegister(pEVar8,uVar2);
    uVar4 = JSGraph::Constant(*(JSGraph **)(this + 0x10),(double)(param_2 & 1));
    pOVar5 = (Operator *)
             JSOperatorBuilder::DeleteProperty
                       (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
    local_48 = pNVar3;
    uStack_40 = uVar10;
    local_38 = uVar4;
    pNVar3 = (Node *)MakeNode(this,pOVar5,3,&local_48,false);
    plVar9 = *(long **)(this + 0xa8);
    lVar11 = *plVar9;
    uVar6 = OperatorProperties::HasFrameStateInput(*(Operator **)pNVar3);
    if ((uVar6 & 1) != 0) {
      iVar1 = *(int *)(lVar11 + 0x90);
      uVar4 = BytecodeAnalysis::GetOutLivenessFor(*(BytecodeAnalysis **)(lVar11 + 0xa0),iVar1);
      pNVar7 = (Node *)Environment::Checkpoint(*(Environment **)(lVar11 + 0xa8),iVar1,0,uVar4);
      NodeProperties::ReplaceFrameStateInput(pNVar3,pNVar7);
    }
    if ((ulong)(long)*(int *)((long)plVar9 + 0x5c) < (ulong)(plVar9[6] - plVar9[5] >> 3)) {
      *(Node **)(plVar9[5] + (long)*(int *)((long)plVar9 + 0x5c) * 8) = pNVar3;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

