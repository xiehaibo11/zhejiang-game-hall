
/* v8::internal::compiler::BytecodeGraphBuilder::GetForInMode(int) */

uint __thiscall
v8::internal::compiler::BytecodeGraphBuilder::GetForInMode(BytecodeGraphBuilder *this,int param_1)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  FeedbackSource aFStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = interpreter::BytecodeArrayAccessor::GetSlotOperand
                    ((BytecodeArrayAccessor *)(this + 0x88),param_1);
  FeedbackSource::FeedbackSource
            (aFStack_38,*(undefined8 *)(this + 0x38),*(undefined8 *)(this + 0x40),uVar2);
  uVar3 = JSHeapBroker::GetFeedbackForForIn(*(JSHeapBroker **)this,aFStack_38);
  if (3 < (uVar3 & 0xff)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 0x2010000 >> (ulong)((uVar3 & 3) << 3);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

