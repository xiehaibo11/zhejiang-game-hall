
/* v8::internal::compiler::BytecodeGraphBuilder::BuildHoleCheckAndThrow(v8::internal::compiler::Node*,
   v8::internal::Runtime::FunctionId, v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::BuildHoleCheckAndThrow
          (BytecodeGraphBuilder *this,Node *param_1,int param_3,Node *param_4)

{
  int iVar1;
  Operator *pOVar2;
  undefined8 uVar3;
  BytecodeLivenessState *pBVar4;
  Node *pNVar5;
  ulong uVar6;
  undefined8 uVar7;
  Node *pNVar8;
  Node **ppNVar9;
  long lVar10;
  undefined8 uVar11;
  Node *local_48;
  
  lVar10 = *(long *)(this + 0xa8);
  if ((ulong)(long)*(int *)(lVar10 + 0x5c) <
      (ulong)(*(long *)(lVar10 + 0x30) - *(long *)(lVar10 + 0x28) >> 3)) {
    uVar11 = *(undefined8 *)(*(long *)(lVar10 + 0x28) + (long)*(int *)(lVar10 + 0x5c) * 8);
    pOVar2 = (Operator *)
             CommonOperatorBuilder::Branch
                       (*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8),2,1);
    local_48 = param_1;
    MakeNode(this,pOVar2,1,&local_48,false);
    uVar3 = Environment::Copy(*(Environment **)(this + 0xa8));
    pOVar2 = (Operator *)
             CommonOperatorBuilder::IfTrue(*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8));
    MakeNode(this,pOVar2,0,(Node **)0x0,false);
    pBVar4 = (BytecodeLivenessState *)
             BytecodeAnalysis::GetInLivenessFor
                       (*(BytecodeAnalysis **)(this + 0xa0),*(int *)(this + 0x90));
    BuildLoopExitsUntilLoop(this,-1,pBVar4);
    pOVar2 = (Operator *)
             JSOperatorBuilder::CallRuntime
                       (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170),param_3);
    if (param_3 != 0xb1) {
      ppNVar9 = (Node **)0x0;
    }
    else {
      ppNVar9 = &local_48;
      local_48 = param_4;
    }
    pNVar5 = (Node *)MakeNode(this,pOVar2,(uint)(param_3 == 0xb1),ppNVar9,false);
    lVar10 = **(long **)(this + 0xa8);
    uVar6 = OperatorProperties::HasFrameStateInput(*(Operator **)pNVar5);
    if ((uVar6 & 1) != 0) {
      iVar1 = *(int *)(lVar10 + 0x90);
      uVar7 = BytecodeAnalysis::GetOutLivenessFor(*(BytecodeAnalysis **)(lVar10 + 0xa0),iVar1);
      pNVar8 = (Node *)Environment::Checkpoint
                                 (*(Environment **)(lVar10 + 0xa8),iVar1,0xffffffffffffffff,uVar7);
      NodeProperties::ReplaceFrameStateInput(pNVar5,pNVar8);
    }
    pOVar2 = (Operator *)
             CommonOperatorBuilder::Throw(*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8));
    pNVar5 = (Node *)MakeNode(this,pOVar2,0,(Node **)0x0,false);
    MergeControlToLeaveFunction(this,pNVar5);
    *(undefined8 *)(this + 0xa8) = uVar3;
    pOVar2 = (Operator *)
             CommonOperatorBuilder::IfFalse(*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8))
    ;
    MakeNode(this,pOVar2,0,(Node **)0x0,false);
    lVar10 = *(long *)(this + 0xa8);
    if ((ulong)(long)*(int *)(lVar10 + 0x5c) <
        (ulong)(*(long *)(lVar10 + 0x30) - *(long *)(lVar10 + 0x28) >> 3)) {
      *(undefined8 *)(*(long *)(lVar10 + 0x28) + (long)*(int *)(lVar10 + 0x5c) * 8) = uVar11;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

