
/* v8::internal::compiler::BytecodeGraphBuilder::VisitForInNext() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitForInNext(BytecodeGraphBuilder *this)

{
  BytecodeArrayAccessor *this_00;
  Graph *this_01;
  CommonOperatorBuilder *pCVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  Node *pNVar6;
  Node *pNVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  Operator *pOVar10;
  undefined8 uVar11;
  ulong uVar12;
  Environment *pEVar13;
  long *plVar14;
  long lVar15;
  JSOperatorBuilder *pJVar16;
  int local_a8 [4];
  undefined8 local_98;
  Node *local_90;
  Node *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  PrepareEagerCheckpoint(this);
  pEVar13 = *(Environment **)(this + 0xa8);
  this_00 = (BytecodeArrayAccessor *)(this + 0x88);
  uVar3 = interpreter::BytecodeArrayAccessor::GetRegisterOperand(this_00,0);
  pNVar6 = (Node *)Environment::LookupRegister(pEVar13,uVar3);
  pEVar13 = *(Environment **)(this + 0xa8);
  uVar3 = interpreter::BytecodeArrayAccessor::GetRegisterOperand(this_00,1);
  pNVar7 = (Node *)Environment::LookupRegister(pEVar13,uVar3);
  iVar4 = interpreter::BytecodeArrayAccessor::GetRegisterOperand(this_00,2);
  uVar8 = Environment::LookupRegister(*(Environment **)(this + 0xa8),iVar4);
  uVar9 = Environment::LookupRegister(*(Environment **)(this + 0xa8),iVar4 + 1);
  this_01 = (Graph *)**(undefined8 **)(this + 0x10);
  pCVar1 = (CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1];
  uVar5 = BitsetType::UnsignedSmall();
  pOVar10 = (Operator *)CommonOperatorBuilder::TypeGuard(pCVar1,uVar5 | 1);
  local_78 = *(undefined8 *)(*(long *)(this + 0xa8) + 0x18);
  uStack_80 = *(undefined8 *)(*(long *)(this + 0xa8) + 0x20);
  local_88 = pNVar7;
  uVar11 = Graph::NewNode(this_01,pOVar10,3,&local_88,false);
  *(undefined8 *)(*(long *)(this + 0xa8) + 0x20) = uVar11;
  uVar3 = interpreter::BytecodeArrayAccessor::GetSlotOperand(this_00,3);
  JSTypeHintLowering::ReduceForInNextOperation
            (local_a8,this + 0x50,pNVar6,uVar9,uVar8,uVar11,
             *(undefined8 *)(*(long *)(this + 0xa8) + 0x20),
             *(undefined8 *)(*(long *)(this + 0xa8) + 0x18),uVar3);
  if (local_a8[0] == 2) {
    MergeControlToLeaveFunction(this,local_90);
    if (local_a8[0] == 2) goto LAB_01679b30;
  }
  else if (local_a8[0] == 1) {
    *(undefined8 *)(*(long *)(this + 0xa8) + 0x20) = local_98;
    *(Node **)(*(long *)(this + 0xa8) + 0x18) = local_90;
  }
  pJVar16 = *(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170);
  uVar3 = interpreter::BytecodeArrayAccessor::GetSlotOperand(this_00,3);
  FeedbackSource::FeedbackSource
            ((FeedbackSource *)&local_88,*(undefined8 *)(this + 0x38),*(undefined8 *)(this + 0x40),
             uVar3);
  uVar5 = JSHeapBroker::GetFeedbackForForIn(*(JSHeapBroker **)this,(FeedbackSource *)&local_88);
  if (3 < (uVar5 & 0xff)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  pOVar10 = (Operator *)JSOperatorBuilder::ForInNext(pJVar16,0x2010000 >> (ulong)((uVar5 & 3) << 3))
  ;
  local_88 = pNVar6;
  uStack_80 = uVar9;
  local_78 = uVar8;
  uStack_70 = uVar11;
  pNVar6 = (Node *)MakeNode(this,pOVar10,4,&local_88,false);
  plVar14 = *(long **)(this + 0xa8);
  lVar15 = *plVar14;
  uVar12 = OperatorProperties::HasFrameStateInput(*(Operator **)pNVar6);
  if ((uVar12 & 1) != 0) {
    iVar4 = *(int *)(lVar15 + 0x90);
    uVar8 = BytecodeAnalysis::GetOutLivenessFor(*(BytecodeAnalysis **)(lVar15 + 0xa0),iVar4);
    pNVar7 = (Node *)Environment::Checkpoint(*(Environment **)(lVar15 + 0xa8),iVar4,0,uVar8);
    NodeProperties::ReplaceFrameStateInput(pNVar6,pNVar7);
  }
  if ((ulong)(plVar14[6] - plVar14[5] >> 3) <= (ulong)(long)*(int *)((long)plVar14 + 0x5c)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(Node **)(plVar14[5] + (long)*(int *)((long)plVar14 + 0x5c) * 8) = pNVar6;
LAB_01679b30:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

