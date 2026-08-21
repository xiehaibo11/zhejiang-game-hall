
/* v8::internal::compiler::BytecodeGraphBuilder::VisitForInPrepare() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitForInPrepare(BytecodeGraphBuilder *this)

{
  BytecodeArrayAccessor *this_00;
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  Operator *pOVar4;
  undefined8 uVar5;
  long lVar6;
  Environment *pEVar7;
  Node *pNVar8;
  JSOperatorBuilder *pJVar9;
  int local_78 [4];
  undefined8 local_68;
  Node *local_60;
  Node *local_58 [2];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  PrepareEagerCheckpoint(this);
  lVar6 = *(long *)(this + 0xa8);
  if ((ulong)(*(long *)(lVar6 + 0x30) - *(long *)(lVar6 + 0x28) >> 3) <=
      (ulong)(long)*(int *)(lVar6 + 0x5c)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  pNVar8 = *(Node **)(*(long *)(lVar6 + 0x28) + (long)*(int *)(lVar6 + 0x5c) * 8);
  this_00 = (BytecodeArrayAccessor *)(this + 0x88);
  uVar2 = interpreter::BytecodeArrayAccessor::GetSlotOperand(this_00,1);
  JSTypeHintLowering::ReduceForInPrepareOperation
            (local_78,this + 0x50,pNVar8,*(undefined8 *)(*(long *)(this + 0xa8) + 0x20),
             *(undefined8 *)(*(long *)(this + 0xa8) + 0x18),uVar2);
  if (local_78[0] == 2) {
    MergeControlToLeaveFunction(this,local_60);
    if (local_78[0] == 2) goto LAB_016797e8;
  }
  else if (local_78[0] == 1) {
    *(undefined8 *)(*(long *)(this + 0xa8) + 0x20) = local_68;
    *(Node **)(*(long *)(this + 0xa8) + 0x18) = local_60;
  }
  pJVar9 = *(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170);
  uVar2 = interpreter::BytecodeArrayAccessor::GetSlotOperand(this_00,1);
  FeedbackSource::FeedbackSource
            ((FeedbackSource *)local_58,*(undefined8 *)(this + 0x38),*(undefined8 *)(this + 0x40),
             uVar2);
  uVar3 = JSHeapBroker::GetFeedbackForForIn(*(JSHeapBroker **)this,(FeedbackSource *)local_58);
  if (3 < (uVar3 & 0xff)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  pOVar4 = (Operator *)
           JSOperatorBuilder::ForInPrepare(pJVar9,0x2010000 >> (ulong)((uVar3 & 3) << 3));
  local_58[0] = pNVar8;
  uVar5 = MakeNode(this,pOVar4,1,local_58,false);
  pEVar7 = *(Environment **)(this + 0xa8);
  uVar2 = interpreter::BytecodeArrayAccessor::GetRegisterOperand(this_00,0);
  Environment::BindRegistersToProjections(pEVar7,uVar2,uVar5,1);
LAB_016797e8:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

