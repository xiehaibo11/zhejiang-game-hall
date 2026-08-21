
/* v8::internal::compiler::SerializerForBackgroundCompilation::VisitCreateObjectLiteral(v8::internal::interpreter::BytecodeArrayIterator*)
    */

void __thiscall
v8::internal::compiler::SerializerForBackgroundCompilation::VisitCreateObjectLiteral
          (SerializerForBackgroundCompilation *this,BytecodeArrayIterator *param_1)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ObjectRef aOStack_58 [16];
  FeedbackSource aFStack_48 [16];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar4 = interpreter::BytecodeArrayAccessor::GetConstantForIndexOperand
                    ((BytecodeArrayAccessor *)param_1,0,(Isolate *)**(undefined8 **)this);
  ObjectRef::ObjectRef(aOStack_58,*(undefined8 *)this,uVar4,0);
  uVar5 = ObjectRef::IsHeapObject(aOStack_58);
  if ((uVar5 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsHeapObject()");
  }
  uVar3 = interpreter::BytecodeArrayAccessor::GetSlotOperand((BytecodeArrayAccessor *)param_1,1);
  FeedbackSource::FeedbackSource(aFStack_48,*(undefined8 *)(*(long *)(this + 0x28) + 8),uVar3);
  JSHeapBroker::ProcessFeedbackForArrayOrObjectLiteral(*(JSHeapBroker **)this,aFStack_48);
  lVar6 = *(long *)(this + 0x28);
  uVar1 = *(int *)(lVar6 + 0x1c) + *(int *)(lVar6 + 0x18);
  if ((-1 < (int)uVar1) &&
     ((ulong)(*(long *)(lVar6 + 0x38) - *(long *)(lVar6 + 0x30) >> 3) <= (ulong)uVar1)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","accumulator_index() < ephemeral_hints_.size()");
  }
  *(undefined8 *)(*(long *)(lVar6 + 0x30) + (long)(int)uVar1 * 8) = 0;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

