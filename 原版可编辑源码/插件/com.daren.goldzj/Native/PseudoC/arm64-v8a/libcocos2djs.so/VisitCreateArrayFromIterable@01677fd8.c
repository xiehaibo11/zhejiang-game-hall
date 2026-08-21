
/* v8::internal::compiler::BytecodeGraphBuilder::VisitCreateArrayFromIterable() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitCreateArrayFromIterable
          (BytecodeGraphBuilder *this)

{
  int iVar1;
  Operator *pOVar2;
  Node *pNVar3;
  ulong uVar4;
  undefined8 uVar5;
  Node *pNVar6;
  long lVar7;
  long *plVar8;
  Node *local_38;
  
  pOVar2 = (Operator *)
           JSOperatorBuilder::CreateArrayFromIterable
                     (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
  lVar7 = *(long *)(this + 0xa8);
  if ((ulong)(long)*(int *)(lVar7 + 0x5c) <
      (ulong)(*(long *)(lVar7 + 0x30) - *(long *)(lVar7 + 0x28) >> 3)) {
    local_38 = *(Node **)(*(long *)(lVar7 + 0x28) + (long)*(int *)(lVar7 + 0x5c) * 8);
    pNVar3 = (Node *)MakeNode(this,pOVar2,1,&local_38,false);
    plVar8 = *(long **)(this + 0xa8);
    lVar7 = *plVar8;
    uVar4 = OperatorProperties::HasFrameStateInput(*(Operator **)pNVar3);
    if ((uVar4 & 1) != 0) {
      iVar1 = *(int *)(lVar7 + 0x90);
      uVar5 = BytecodeAnalysis::GetOutLivenessFor(*(BytecodeAnalysis **)(lVar7 + 0xa0),iVar1);
      pNVar6 = (Node *)Environment::Checkpoint(*(Environment **)(lVar7 + 0xa8),iVar1,0,uVar5);
      NodeProperties::ReplaceFrameStateInput(pNVar3,pNVar6);
    }
    if ((ulong)(long)*(int *)((long)plVar8 + 0x5c) < (ulong)(plVar8[6] - plVar8[5] >> 3)) {
      *(Node **)(plVar8[5] + (long)*(int *)((long)plVar8 + 0x5c) * 8) = pNVar3;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

