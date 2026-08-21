
/* v8::internal::FeedbackMetadata::HasTypeProfileSlot() const */

bool __thiscall v8::internal::FeedbackMetadata::HasTypeProfileSlot(FeedbackMetadata *this)

{
  if (0 < *(int *)(*(long *)this + 3)) {
    return (*(uint *)(*(long *)this + 0xb) & 0x1f) == 0x12;
  }
  return false;
}

