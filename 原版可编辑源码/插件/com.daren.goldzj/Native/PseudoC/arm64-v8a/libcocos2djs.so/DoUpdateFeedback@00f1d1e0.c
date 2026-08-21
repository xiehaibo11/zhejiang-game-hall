
/* v8::internal::TranslatedState::DoUpdateFeedback() */

undefined4 __thiscall v8::internal::TranslatedState::DoUpdateFeedback(TranslatedState *this)

{
  undefined4 uVar1;
  undefined8 *local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_8;
  
  if (*(long *)(this + 0x60) == 0) {
    uVar1 = 0;
  }
  else {
    if (*(int *)(this + 0x70) == -1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","!feedback_slot_.IsInvalid()");
    }
    Isolate::CountUsage(*(undefined8 *)(this + 0x18),0x2f);
    local_38 = *(undefined8 **)(this + 0x60);
    local_28 = *(undefined4 *)(this + 0x70);
    uStack_30 = 0;
    if (local_38 == (undefined8 *)0x0) {
      local_24 = 0;
    }
    else {
      local_8 = *local_38;
      local_24 = FeedbackVector::GetKind((FeedbackVector *)&local_8);
    }
    uVar1 = 1;
    FeedbackNexus::SetSpeculationMode((FeedbackNexus *)&local_38,1);
  }
  return uVar1;
}

