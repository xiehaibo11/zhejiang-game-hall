
/* v8::internal::compiler::BytecodeGraphBuilder::GetBinaryOperationHint(int) */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::GetBinaryOperationHint
          (BytecodeGraphBuilder *this,int param_1)

{
  long lVar1;
  undefined4 uVar2;
  FeedbackSource aFStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = interpreter::BytecodeArrayAccessor::GetSlotOperand
                    ((BytecodeArrayAccessor *)(this + 0x88),param_1);
  FeedbackSource::FeedbackSource
            (aFStack_38,*(undefined8 *)(this + 0x38),*(undefined8 *)(this + 0x40),uVar2);
  JSHeapBroker::GetFeedbackForBinaryOperation(*(JSHeapBroker **)this,aFStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

