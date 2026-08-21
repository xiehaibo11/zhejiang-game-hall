
/* v8::internal::compiler::SerializerForBackgroundCompilation::VisitCreateEmptyArrayLiteral(v8::internal::interpreter::BytecodeArrayIterator*)
    */

void __thiscall
v8::internal::compiler::SerializerForBackgroundCompilation::VisitCreateEmptyArrayLiteral
          (SerializerForBackgroundCompilation *this,BytecodeArrayIterator *param_1)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  FeedbackSource aFStack_38 [16];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar3 = interpreter::BytecodeArrayAccessor::GetSlotOperand((BytecodeArrayAccessor *)param_1,0);
  FeedbackSource::FeedbackSource(aFStack_38,*(undefined8 *)(*(long *)(this + 0x28) + 8),uVar3);
  JSHeapBroker::ProcessFeedbackForArrayOrObjectLiteral(*(JSHeapBroker **)this,aFStack_38);
  lVar4 = *(long *)(this + 0x28);
  uVar1 = *(int *)(lVar4 + 0x1c) + *(int *)(lVar4 + 0x18);
  if ((-1 < (int)uVar1) &&
     ((ulong)(*(long *)(lVar4 + 0x38) - *(long *)(lVar4 + 0x30) >> 3) <= (ulong)uVar1)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","accumulator_index() < ephemeral_hints_.size()");
  }
  *(undefined8 *)(*(long *)(lVar4 + 0x30) + (long)(int)uVar1 * 8) = 0;
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

