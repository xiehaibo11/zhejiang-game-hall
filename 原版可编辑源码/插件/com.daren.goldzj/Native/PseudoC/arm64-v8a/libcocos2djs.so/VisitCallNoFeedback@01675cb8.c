
/* v8::internal::compiler::BytecodeGraphBuilder::VisitCallNoFeedback() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitCallNoFeedback(BytecodeGraphBuilder *this)

{
  uint uVar1;
  BytecodeArrayAccessor *this_00;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  Node *pNVar6;
  Operator *pOVar7;
  Node *pNVar8;
  undefined8 uVar9;
  Node **ppNVar10;
  ulong uVar11;
  Zone *this_01;
  Environment *pEVar12;
  long *plVar13;
  long lVar14;
  Node **ppNVar15;
  undefined4 local_80 [2];
  undefined8 local_78;
  undefined4 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  PrepareEagerCheckpoint(this);
  pEVar12 = *(Environment **)(this + 0xa8);
  this_00 = (BytecodeArrayAccessor *)(this + 0x88);
  uVar3 = interpreter::BytecodeArrayAccessor::GetRegisterOperand(this_00,0);
  pNVar6 = (Node *)Environment::LookupRegister(pEVar12,uVar3);
  iVar4 = interpreter::BytecodeArrayAccessor::GetRegisterOperand(this_00,1);
  iVar5 = interpreter::BytecodeArrayAccessor::GetRegisterCountOperand(this_00,2);
  uVar1 = iVar5 + 1;
  local_80[0] = 0xbf800000;
  local_78 = 0;
  local_70 = 0xffffffff;
  pOVar7 = (Operator *)
           JSOperatorBuilder::Call
                     (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170),(long)(int)uVar1,
                      local_80,&local_78,2,1,1);
  pNVar8 = (Node *)Environment::LookupRegister(*(Environment **)(this + 0xa8),iVar4);
  this_01 = *(Zone **)(this + 8);
  uVar11 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
  ppNVar10 = *(Node ***)(this_01 + 0x10);
  if ((ulong)(*(long *)(this_01 + 0x18) - (long)ppNVar10) < uVar11) {
    ppNVar10 = (Node **)Zone::NewExpand(this_01,uVar11);
  }
  else {
    *(ulong *)(this_01 + 0x10) = (long)ppNVar10 + uVar11;
  }
  *ppNVar10 = pNVar6;
  ppNVar10[1] = pNVar8;
  if (0 < (int)(iVar5 - 1U)) {
    uVar11 = (ulong)(iVar5 - 1U);
    ppNVar15 = ppNVar10 + 2;
    do {
      iVar4 = iVar4 + 1;
      pNVar6 = (Node *)Environment::LookupRegister(*(Environment **)(this + 0xa8),iVar4);
      *ppNVar15 = pNVar6;
      uVar11 = uVar11 - 1;
      ppNVar15 = ppNVar15 + 1;
    } while (uVar11 != 0);
  }
  pNVar6 = (Node *)MakeNode(this,pOVar7,uVar1,ppNVar10,false);
  plVar13 = *(long **)(this + 0xa8);
  lVar14 = *plVar13;
  uVar11 = OperatorProperties::HasFrameStateInput(*(Operator **)pNVar6);
  if ((uVar11 & 1) != 0) {
    iVar4 = *(int *)(lVar14 + 0x90);
    uVar9 = BytecodeAnalysis::GetOutLivenessFor(*(BytecodeAnalysis **)(lVar14 + 0xa0),iVar4);
    pNVar8 = (Node *)Environment::Checkpoint(*(Environment **)(lVar14 + 0xa8),iVar4,0,uVar9);
    NodeProperties::ReplaceFrameStateInput(pNVar6,pNVar8);
  }
  if ((ulong)(long)*(int *)((long)plVar13 + 0x5c) < (ulong)(plVar13[6] - plVar13[5] >> 3)) {
    *(Node **)(plVar13[5] + (long)*(int *)((long)plVar13 + 0x5c) * 8) = pNVar6;
    if (*(long *)(lVar2 + 0x28) == local_68) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

