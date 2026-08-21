
/* v8::internal::compiler::JSTypeHintLowering::GetBinaryOperationHint(v8::internal::FeedbackSlot)
   const */

void __thiscall
v8::internal::compiler::JSTypeHintLowering::GetBinaryOperationHint
          (JSTypeHintLowering *this,undefined4 param_2)

{
  long lVar1;
  FeedbackSource aFStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FeedbackSource::FeedbackSource
            (aFStack_38,*(undefined8 *)(this + 0x18),*(undefined8 *)(this + 0x20),param_2);
  JSHeapBroker::GetFeedbackForBinaryOperation(*(JSHeapBroker **)this,aFStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

