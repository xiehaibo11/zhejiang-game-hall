
/* v8::internal::compiler::SerializerForBackgroundCompilation::ProcessForIn(v8::internal::FeedbackSlot)
    */

void __thiscall
v8::internal::compiler::SerializerForBackgroundCompilation::ProcessForIn
          (SerializerForBackgroundCompilation *this,int param_2)

{
  uint uVar1;
  long lVar2;
  int *piVar3;
  long lVar4;
  FeedbackSource aFStack_38 [16];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  if ((param_2 != -1) && (*(long *)(*(long *)(this + 0x28) + 8) != 0)) {
    FeedbackSource::FeedbackSource(aFStack_38,*(long *)(*(long *)(this + 0x28) + 8),param_2);
    piVar3 = (int *)JSHeapBroker::ProcessFeedbackForForIn(*(JSHeapBroker **)this,aFStack_38);
    if ((((byte)this[0x68] & 1) == 0) || ((*(int *)(this + 0x6c) != -1 || (*piVar3 != 0)))) {
      lVar4 = *(long *)(this + 0x28);
      uVar1 = *(int *)(lVar4 + 0x1c) + *(int *)(lVar4 + 0x18);
      if ((-1 < (int)uVar1) &&
         ((ulong)(*(long *)(lVar4 + 0x38) - *(long *)(lVar4 + 0x30) >> 3) <= (ulong)uVar1)) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","accumulator_index() < ephemeral_hints_.size()");
      }
      *(undefined8 *)(*(long *)(lVar4 + 0x30) + (long)(int)uVar1 * 8) = 0;
    }
    else {
      *(undefined8 *)(*(long *)(this + 0x28) + 0x38) =
           *(undefined8 *)(*(long *)(this + 0x28) + 0x30);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

