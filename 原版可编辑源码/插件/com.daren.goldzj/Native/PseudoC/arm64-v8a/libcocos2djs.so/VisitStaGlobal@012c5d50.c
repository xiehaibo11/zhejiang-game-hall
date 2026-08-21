
/* v8::internal::compiler::SerializerForBackgroundCompilation::VisitStaGlobal(v8::internal::interpreter::BytecodeArrayIterator*)
    */

void __thiscall
v8::internal::compiler::SerializerForBackgroundCompilation::VisitStaGlobal
          (SerializerForBackgroundCompilation *this,BytecodeArrayIterator *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ObjectRef aOStack_58 [16];
  FeedbackSource aFStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  puVar5 = *(undefined8 **)this;
  uVar3 = interpreter::BytecodeArrayAccessor::GetConstantForIndexOperand
                    ((BytecodeArrayAccessor *)param_1,0,(Isolate *)*puVar5);
  ObjectRef::ObjectRef(aOStack_58,puVar5,uVar3,0);
  uVar4 = ObjectRef::IsName(aOStack_58);
  if ((uVar4 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsName()");
  }
  iVar2 = interpreter::BytecodeArrayAccessor::GetSlotOperand((BytecodeArrayAccessor *)param_1,1);
  if (iVar2 != -1) {
    if (*(long *)(*(long *)(this + 0x28) + 8) != 0) {
      FeedbackSource::FeedbackSource(aFStack_48,*(long *)(*(long *)(this + 0x28) + 8),iVar2);
      JSHeapBroker::ProcessFeedbackForGlobalAccess(*(JSHeapBroker **)this,aFStack_48);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

