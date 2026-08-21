
/* v8::internal::compiler::BytecodeGraphBuilder::VisitStaNamedPropertyNoFeedback() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitStaNamedPropertyNoFeedback
          (BytecodeGraphBuilder *this)

{
  BytecodeArrayAccessor *this_00;
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  uint uVar4;
  Node *pNVar5;
  undefined8 uVar6;
  ulong uVar7;
  Operator *pOVar8;
  Node *pNVar9;
  Environment *pEVar10;
  JSOperatorBuilder *pJVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ObjectRef aOStack_68 [16];
  Node *local_58;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  PrepareEagerCheckpoint(this);
  pEVar10 = *(Environment **)(this + 0xa8);
  if ((ulong)(*(long *)(pEVar10 + 0x30) - *(long *)(pEVar10 + 0x28) >> 3) <=
      (ulong)(long)*(int *)(pEVar10 + 0x5c)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar14 = *(undefined8 *)(*(long *)(pEVar10 + 0x28) + (long)*(int *)(pEVar10 + 0x5c) * 8);
  this_00 = (BytecodeArrayAccessor *)(this + 0x88);
  uVar3 = interpreter::BytecodeArrayAccessor::GetRegisterOperand(this_00,0);
  pNVar5 = (Node *)Environment::LookupRegister(pEVar10,uVar3);
  uVar13 = *(undefined8 *)this;
  uVar6 = interpreter::BytecodeArrayAccessor::GetConstantForIndexOperand
                    (this_00,1,*(Isolate **)(*(long *)(this + 0x10) + 0x168));
  ObjectRef::ObjectRef(aOStack_68,uVar13,uVar6,0);
  uVar7 = ObjectRef::IsName(aOStack_68);
  if ((uVar7 & 1) != 0) {
    uVar4 = interpreter::BytecodeArrayAccessor::GetFlagOperand(this_00,2);
    pJVar11 = *(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170);
    uVar6 = NameRef::object((NameRef *)aOStack_68);
    local_58 = (Node *)0x0;
    local_50 = CONCAT44(local_50._4_4_,0xffffffff);
    pOVar8 = (Operator *)JSOperatorBuilder::StoreNamed(pJVar11,uVar4 & 1,uVar6,&local_58);
    local_58 = pNVar5;
    local_50 = uVar14;
    pNVar5 = (Node *)MakeNode(this,pOVar8,2,&local_58,false);
    lVar12 = **(long **)(this + 0xa8);
    uVar7 = OperatorProperties::HasFrameStateInput(*(Operator **)pNVar5);
    if ((uVar7 & 1) != 0) {
      iVar1 = *(int *)(lVar12 + 0x90);
      uVar6 = BytecodeAnalysis::GetOutLivenessFor(*(BytecodeAnalysis **)(lVar12 + 0xa0),iVar1);
      pNVar9 = (Node *)Environment::Checkpoint
                                 (*(Environment **)(lVar12 + 0xa8),iVar1,0xffffffffffffffff,uVar6);
      NodeProperties::ReplaceFrameStateInput(pNVar5,pNVar9);
    }
    if (*(long *)(lVar2 + 0x28) == local_48) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsName()");
}

