
/* v8::internal::compiler::FeedbackVectorRef::Serialize() */

void __thiscall v8::internal::compiler::FeedbackVectorRef::Serialize(FeedbackVectorRef *this)

{
  FeedbackVectorData *this_00;
  
  this_00 = (FeedbackVectorData *)ObjectRef::data((ObjectRef *)this);
  if (*(int *)(this_00 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
  }
  if (*(short *)(*(long *)(this_00 + 0x10) + 0x18) == 0x9f) {
    FeedbackVectorData::Serialize(this_00,*(JSHeapBroker **)(this + 8));
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsFeedbackVector()");
}

