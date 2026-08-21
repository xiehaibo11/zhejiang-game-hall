
/* v8::internal::compiler::BytecodeGraphBuilder::VisitAddSmi() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitAddSmi(BytecodeGraphBuilder *this)

{
  long lVar1;
  undefined4 uVar2;
  Operator *pOVar3;
  JSOperatorBuilder *pJVar4;
  FeedbackSource aFStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pJVar4 = *(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170);
  uVar2 = interpreter::BytecodeArrayAccessor::GetSlotOperand
                    ((BytecodeArrayAccessor *)(this + 0x88),1);
  FeedbackSource::FeedbackSource
            (aFStack_48,*(undefined8 *)(this + 0x38),*(undefined8 *)(this + 0x40),uVar2);
  uVar2 = JSHeapBroker::GetFeedbackForBinaryOperation(*(JSHeapBroker **)this,aFStack_48);
  pOVar3 = (Operator *)JSOperatorBuilder::Add(pJVar4,uVar2);
  BuildBinaryOpWithImmediate(this,pOVar3);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

