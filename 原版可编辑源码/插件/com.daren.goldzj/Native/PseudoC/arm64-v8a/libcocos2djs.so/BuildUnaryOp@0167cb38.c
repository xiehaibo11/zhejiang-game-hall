
/* v8::internal::compiler::BytecodeGraphBuilder::BuildUnaryOp(v8::internal::compiler::Operator
   const*) */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::BuildUnaryOp
          (BytecodeGraphBuilder *this,Operator *param_1)

{
  int iVar1;
  undefined4 uVar2;
  Node *pNVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  Node *pNVar7;
  long *plVar8;
  int local_58 [2];
  Node *local_50;
  undefined8 uStack_48;
  Node *local_40;
  Node *local_38;
  
  PrepareEagerCheckpoint(this);
  lVar6 = *(long *)(this + 0xa8);
  if ((ulong)(*(long *)(lVar6 + 0x30) - *(long *)(lVar6 + 0x28) >> 3) <=
      (ulong)(long)*(int *)(lVar6 + 0x5c)) goto LAB_0167cc88;
  pNVar7 = *(Node **)(*(long *)(lVar6 + 0x28) + (long)*(int *)(lVar6 + 0x5c) * 8);
  uVar2 = interpreter::BytecodeArrayAccessor::GetSlotOperand
                    ((BytecodeArrayAccessor *)(this + 0x88),0);
  JSTypeHintLowering::ReduceUnaryOperation
            (local_58,this + 0x50,param_1,pNVar7,*(undefined8 *)(*(long *)(this + 0xa8) + 0x20),
             *(undefined8 *)(*(long *)(this + 0xa8) + 0x18),uVar2);
  if (local_58[0] == 2) {
    MergeControlToLeaveFunction(this,local_40);
    if (local_58[0] == 2) {
      return;
    }
    pNVar3 = local_50;
    if (local_58[0] != 1) goto LAB_0167cbf4;
  }
  else if (local_58[0] == 1) {
    *(undefined8 *)(*(long *)(this + 0xa8) + 0x20) = uStack_48;
    *(Node **)(*(long *)(this + 0xa8) + 0x18) = local_40;
    pNVar3 = local_50;
  }
  else {
LAB_0167cbf4:
    local_38 = pNVar7;
    pNVar3 = (Node *)MakeNode(this,param_1,1,&local_38,false);
  }
  plVar8 = *(long **)(this + 0xa8);
  lVar6 = *plVar8;
  uVar4 = OperatorProperties::HasFrameStateInput(*(Operator **)pNVar3);
  if ((uVar4 & 1) != 0) {
    iVar1 = *(int *)(lVar6 + 0x90);
    uVar5 = BytecodeAnalysis::GetOutLivenessFor(*(BytecodeAnalysis **)(lVar6 + 0xa0),iVar1);
    pNVar7 = (Node *)Environment::Checkpoint(*(Environment **)(lVar6 + 0xa8),iVar1,0,uVar5);
    NodeProperties::ReplaceFrameStateInput(pNVar3,pNVar7);
  }
  if ((ulong)(long)*(int *)((long)plVar8 + 0x5c) < (ulong)(plVar8[6] - plVar8[5] >> 3)) {
    *(Node **)(plVar8[5] + (long)*(int *)((long)plVar8 + 0x5c) * 8) = pNVar3;
    return;
  }
LAB_0167cc88:
                    /* WARNING: Subroutine does not return */
  abort();
}

