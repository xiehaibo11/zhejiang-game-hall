
/* v8::internal::compiler::BytecodeGraphBuilder::VisitCallRuntime() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitCallRuntime(BytecodeGraphBuilder *this)

{
  BytecodeArrayAccessor *this_00;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  Operator *pOVar4;
  Node *pNVar5;
  undefined8 uVar6;
  Node *pNVar7;
  Node **ppNVar8;
  ulong uVar9;
  Zone *this_01;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  Node **ppNVar13;
  
  PrepareEagerCheckpoint(this);
  this_00 = (BytecodeArrayAccessor *)(this + 0x88);
  uVar1 = interpreter::BytecodeArrayAccessor::GetRuntimeIdOperand(this_00,0);
  iVar2 = interpreter::BytecodeArrayAccessor::GetRegisterOperand(this_00,1);
  uVar3 = interpreter::BytecodeArrayAccessor::GetRegisterCountOperand(this_00,2);
  uVar10 = (ulong)uVar3;
  pOVar4 = (Operator *)
           JSOperatorBuilder::CallRuntime
                     (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170),uVar1,uVar10);
  this_01 = *(Zone **)(this + 8);
  uVar9 = -(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | uVar10 << 3;
  ppNVar8 = *(Node ***)(this_01 + 0x10);
  if ((ulong)(*(long *)(this_01 + 0x18) - (long)ppNVar8) < uVar9) {
    ppNVar8 = (Node **)Zone::NewExpand(this_01,uVar9);
  }
  else {
    *(ulong *)(this_01 + 0x10) = (long)ppNVar8 + uVar9;
  }
  ppNVar13 = ppNVar8;
  if (0 < (int)uVar3) {
    do {
      pNVar5 = (Node *)Environment::LookupRegister(*(Environment **)(this + 0xa8),iVar2);
      *ppNVar13 = pNVar5;
      uVar10 = uVar10 - 1;
      iVar2 = iVar2 + 1;
      ppNVar13 = ppNVar13 + 1;
    } while (uVar10 != 0);
  }
  pNVar5 = (Node *)MakeNode(this,pOVar4,uVar3,ppNVar8,false);
  plVar11 = *(long **)(this + 0xa8);
  lVar12 = *plVar11;
  uVar10 = OperatorProperties::HasFrameStateInput(*(Operator **)pNVar5);
  if ((uVar10 & 1) != 0) {
    iVar2 = *(int *)(lVar12 + 0x90);
    uVar6 = BytecodeAnalysis::GetOutLivenessFor(*(BytecodeAnalysis **)(lVar12 + 0xa0),iVar2);
    pNVar7 = (Node *)Environment::Checkpoint(*(Environment **)(lVar12 + 0xa8),iVar2,0,uVar6);
    NodeProperties::ReplaceFrameStateInput(pNVar5,pNVar7);
  }
  if ((ulong)(long)*(int *)((long)plVar11 + 0x5c) < (ulong)(plVar11[6] - plVar11[5] >> 3)) {
    *(Node **)(plVar11[5] + (long)*(int *)((long)plVar11 + 0x5c) * 8) = pNVar5;
    uVar10 = Runtime::IsNonReturning(uVar1);
    if ((uVar10 & 1) != 0) {
      pOVar4 = (Operator *)
               CommonOperatorBuilder::Throw(*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8))
      ;
      pNVar5 = (Node *)MakeNode(this,pOVar4,0,(Node **)0x0,false);
      MergeControlToLeaveFunction(this,pNVar5);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

