
/* v8::internal::compiler::BytecodeGraphBuilder::VisitLdaNamedPropertyNoFeedback() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitLdaNamedPropertyNoFeedback
          (BytecodeGraphBuilder *this)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  Node *pNVar4;
  undefined8 uVar5;
  ulong uVar6;
  Operator *pOVar7;
  Node *pNVar8;
  Environment *pEVar9;
  JSOperatorBuilder *pJVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  ObjectRef aOStack_68 [16];
  Node *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  PrepareEagerCheckpoint(this);
  pEVar9 = *(Environment **)(this + 0xa8);
  uVar3 = interpreter::BytecodeArrayAccessor::GetRegisterOperand
                    ((BytecodeArrayAccessor *)(this + 0x88),0);
  pNVar4 = (Node *)Environment::LookupRegister(pEVar9,uVar3);
  uVar12 = *(undefined8 *)this;
  uVar5 = interpreter::BytecodeArrayAccessor::GetConstantForIndexOperand
                    ((BytecodeArrayAccessor *)(this + 0x88),1,
                     *(Isolate **)(*(long *)(this + 0x10) + 0x168));
  ObjectRef::ObjectRef(aOStack_68,uVar12,uVar5,0);
  uVar6 = ObjectRef::IsName(aOStack_68);
  if ((uVar6 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsName()");
  }
  pJVar10 = *(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170);
  uVar5 = NameRef::object((NameRef *)aOStack_68);
  local_58 = (Node *)0x0;
  local_50 = 0xffffffff;
  pOVar7 = (Operator *)JSOperatorBuilder::LoadNamed(pJVar10,uVar5,&local_58);
  local_58 = pNVar4;
  pNVar4 = (Node *)MakeNode(this,pOVar7,1,&local_58,false);
  plVar11 = *(long **)(this + 0xa8);
  lVar13 = *plVar11;
  uVar6 = OperatorProperties::HasFrameStateInput(*(Operator **)pNVar4);
  if ((uVar6 & 1) != 0) {
    iVar1 = *(int *)(lVar13 + 0x90);
    uVar5 = BytecodeAnalysis::GetOutLivenessFor(*(BytecodeAnalysis **)(lVar13 + 0xa0),iVar1);
    pNVar8 = (Node *)Environment::Checkpoint(*(Environment **)(lVar13 + 0xa8),iVar1,0,uVar5);
    NodeProperties::ReplaceFrameStateInput(pNVar4,pNVar8);
  }
  if ((ulong)(long)*(int *)((long)plVar11 + 0x5c) < (ulong)(plVar11[6] - plVar11[5] >> 3)) {
    *(Node **)(plVar11[5] + (long)*(int *)((long)plVar11 + 0x5c) * 8) = pNVar4;
    if (*(long *)(lVar2 + 0x28) == local_48) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

