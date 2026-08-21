
/* v8::internal::compiler::BytecodeGraphBuilder::VisitCallJSRuntime() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitCallJSRuntime(BytecodeGraphBuilder *this)

{
  uint uVar1;
  BytecodeArrayAccessor *this_00;
  long lVar2;
  int iVar3;
  uint uVar4;
  Operator *pOVar5;
  Node *pNVar6;
  Node *pNVar7;
  undefined8 uVar8;
  Node **ppNVar9;
  ulong uVar10;
  Zone *this_01;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  Node **ppNVar14;
  undefined4 local_88 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  PrepareEagerCheckpoint(this);
  this_00 = (BytecodeArrayAccessor *)(this + 0x88);
  iVar3 = interpreter::BytecodeArrayAccessor::GetNativeContextIndexOperand(this_00,0);
  pOVar5 = (Operator *)
           JSOperatorBuilder::LoadContext
                     (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170),0,(long)iVar3,true);
  pNVar6 = (Node *)MakeNode(this,pOVar5,0,(Node **)0x0,false);
  uStack_78 = *(undefined8 *)(this + 0x20);
  local_80 = *(undefined8 *)(this + 0x18);
  pNVar7 = (Node *)JSGraph::Constant(*(JSGraph **)(this + 0x10),(ObjectRef *)&local_80);
  NodeProperties::ReplaceContextInput(pNVar6,pNVar7);
  iVar3 = interpreter::BytecodeArrayAccessor::GetRegisterOperand(this_00,1);
  uVar4 = interpreter::BytecodeArrayAccessor::GetRegisterCountOperand(this_00,2);
  uVar13 = (ulong)uVar4;
  uVar1 = uVar4 + 2;
  local_88[0] = 0x7fc00000;
  local_80 = 0;
  uStack_78 = CONCAT44(uStack_78._4_4_,0xffffffff);
  pOVar5 = (Operator *)
           JSOperatorBuilder::Call
                     (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170),(long)(int)uVar1,
                      local_88,&local_80,2,1,1);
  pNVar7 = (Node *)JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x10));
  this_01 = *(Zone **)(this + 8);
  uVar10 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
  ppNVar9 = *(Node ***)(this_01 + 0x10);
  if ((ulong)(*(long *)(this_01 + 0x18) - (long)ppNVar9) < uVar10) {
    ppNVar9 = (Node **)Zone::NewExpand(this_01,uVar10);
  }
  else {
    *(ulong *)(this_01 + 0x10) = (long)ppNVar9 + uVar10;
  }
  *ppNVar9 = pNVar6;
  ppNVar9[1] = pNVar7;
  if (0 < (int)uVar4) {
    ppNVar14 = ppNVar9 + 2;
    do {
      pNVar6 = (Node *)Environment::LookupRegister(*(Environment **)(this + 0xa8),iVar3);
      *ppNVar14 = pNVar6;
      uVar13 = uVar13 - 1;
      iVar3 = iVar3 + 1;
      ppNVar14 = ppNVar14 + 1;
    } while (uVar13 != 0);
  }
  pNVar6 = (Node *)MakeNode(this,pOVar5,uVar1,ppNVar9,false);
  plVar11 = *(long **)(this + 0xa8);
  lVar12 = *plVar11;
  uVar13 = OperatorProperties::HasFrameStateInput(*(Operator **)pNVar6);
  if ((uVar13 & 1) != 0) {
    iVar3 = *(int *)(lVar12 + 0x90);
    uVar8 = BytecodeAnalysis::GetOutLivenessFor(*(BytecodeAnalysis **)(lVar12 + 0xa0),iVar3);
    pNVar7 = (Node *)Environment::Checkpoint(*(Environment **)(lVar12 + 0xa8),iVar3,0,uVar8);
    NodeProperties::ReplaceFrameStateInput(pNVar6,pNVar7);
  }
  if ((ulong)(long)*(int *)((long)plVar11 + 0x5c) < (ulong)(plVar11[6] - plVar11[5] >> 3)) {
    *(Node **)(plVar11[5] + (long)*(int *)((long)plVar11 + 0x5c) * 8) = pNVar6;
    if (*(long *)(lVar2 + 0x28) == local_68) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

