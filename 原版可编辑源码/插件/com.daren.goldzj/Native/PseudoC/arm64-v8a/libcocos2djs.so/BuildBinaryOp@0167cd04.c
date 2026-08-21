
/* v8::internal::compiler::BytecodeGraphBuilder::BuildBinaryOp(v8::internal::compiler::Operator
   const*) */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::BuildBinaryOp
          (BytecodeGraphBuilder *this,Operator *param_1)

{
  int iVar1;
  undefined4 uVar2;
  Node *pNVar3;
  Node *pNVar4;
  ulong uVar5;
  long lVar6;
  Environment *pEVar7;
  long *plVar8;
  undefined8 uVar9;
  int local_70 [2];
  Node *local_68;
  undefined8 uStack_60;
  Node *local_58;
  Node *local_50;
  undefined8 uStack_48;
  
  PrepareEagerCheckpoint(this);
  pEVar7 = *(Environment **)(this + 0xa8);
  uVar2 = interpreter::BytecodeArrayAccessor::GetRegisterOperand
                    ((BytecodeArrayAccessor *)(this + 0x88),0);
  pNVar3 = (Node *)Environment::LookupRegister(pEVar7,uVar2);
  lVar6 = *(long *)(this + 0xa8);
  if ((ulong)(*(long *)(lVar6 + 0x30) - *(long *)(lVar6 + 0x28) >> 3) <=
      (ulong)(long)*(int *)(lVar6 + 0x5c)) goto LAB_0167ce84;
  uVar9 = *(undefined8 *)(*(long *)(lVar6 + 0x28) + (long)*(int *)(lVar6 + 0x5c) * 8);
  uVar2 = interpreter::BytecodeArrayAccessor::GetSlotOperand
                    ((BytecodeArrayAccessor *)(this + 0x88),1);
  JSTypeHintLowering::ReduceBinaryOperation
            (local_70,this + 0x50,param_1,pNVar3,uVar9,
             *(undefined8 *)(*(long *)(this + 0xa8) + 0x20),
             *(undefined8 *)(*(long *)(this + 0xa8) + 0x18),uVar2);
  if (local_70[0] == 2) {
    MergeControlToLeaveFunction(this,local_58);
    if (local_70[0] == 2) {
      return;
    }
    pNVar4 = local_68;
    if (local_70[0] != 1) goto LAB_0167cdec;
  }
  else if (local_70[0] == 1) {
    *(undefined8 *)(*(long *)(this + 0xa8) + 0x20) = uStack_60;
    *(Node **)(*(long *)(this + 0xa8) + 0x18) = local_58;
    pNVar4 = local_68;
  }
  else {
LAB_0167cdec:
    local_50 = pNVar3;
    uStack_48 = uVar9;
    pNVar4 = (Node *)MakeNode(this,param_1,2,&local_50,false);
  }
  plVar8 = *(long **)(this + 0xa8);
  lVar6 = *plVar8;
  uVar5 = OperatorProperties::HasFrameStateInput(*(Operator **)pNVar4);
  if ((uVar5 & 1) != 0) {
    iVar1 = *(int *)(lVar6 + 0x90);
    uVar9 = BytecodeAnalysis::GetOutLivenessFor(*(BytecodeAnalysis **)(lVar6 + 0xa0),iVar1);
    pNVar3 = (Node *)Environment::Checkpoint(*(Environment **)(lVar6 + 0xa8),iVar1,0,uVar9);
    NodeProperties::ReplaceFrameStateInput(pNVar4,pNVar3);
  }
  if ((ulong)(long)*(int *)((long)plVar8 + 0x5c) < (ulong)(plVar8[6] - plVar8[5] >> 3)) {
    *(Node **)(plVar8[5] + (long)*(int *)((long)plVar8 + 0x5c) * 8) = pNVar4;
    return;
  }
LAB_0167ce84:
                    /* WARNING: Subroutine does not return */
  abort();
}

