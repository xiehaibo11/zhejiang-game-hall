
/* v8::internal::compiler::BytecodeGraphBuilder::BuildCreateArguments(v8::internal::CreateArgumentsType)
    */

void v8::internal::compiler::BytecodeGraphBuilder::BuildCreateArguments
               (BytecodeGraphBuilder *param_1)

{
  int iVar1;
  Operator *pOVar2;
  Operator *pOVar3;
  Node *pNVar4;
  ulong uVar5;
  undefined8 uVar6;
  Node *pNVar7;
  long *plVar8;
  long lVar9;
  Node *local_38;
  
  pOVar2 = (Operator *)
           JSOperatorBuilder::CreateArguments
                     (*(JSOperatorBuilder **)(*(long *)(param_1 + 0x10) + 0x170));
  local_38 = *(Node **)(param_1 + 0x168);
  if (local_38 == (Node *)0x0) {
    pOVar3 = (Operator *)
             CommonOperatorBuilder::Parameter
                       (*(CommonOperatorBuilder **)(*(long *)(param_1 + 0x10) + 8),-1,"%closure");
    local_38 = *(Node **)(**(long **)(param_1 + 0x10) + 8);
    local_38 = (Node *)MakeNode(param_1,pOVar3,1,&local_38,false);
    *(Node **)(param_1 + 0x168) = local_38;
  }
  pNVar4 = (Node *)MakeNode(param_1,pOVar2,1,&local_38,false);
  plVar8 = *(long **)(param_1 + 0xa8);
  lVar9 = *plVar8;
  uVar5 = OperatorProperties::HasFrameStateInput(*(Operator **)pNVar4);
  if ((uVar5 & 1) != 0) {
    iVar1 = *(int *)(lVar9 + 0x90);
    uVar6 = BytecodeAnalysis::GetOutLivenessFor(*(BytecodeAnalysis **)(lVar9 + 0xa0),iVar1);
    pNVar7 = (Node *)Environment::Checkpoint(*(Environment **)(lVar9 + 0xa8),iVar1,0,uVar6);
    NodeProperties::ReplaceFrameStateInput(pNVar4,pNVar7);
  }
  if ((ulong)(long)*(int *)((long)plVar8 + 0x5c) < (ulong)(plVar8[6] - plVar8[5] >> 3)) {
    *(Node **)(plVar8[5] + (long)*(int *)((long)plVar8 + 0x5c) * 8) = pNVar4;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

