
/* v8::internal::FeedbackMetadata::GetKind(v8::internal::FeedbackSlot) const */

uint __thiscall v8::internal::FeedbackMetadata::GetKind(FeedbackMetadata *this,int param_2)

{
  return *(uint *)(*(long *)this + (long)((param_2 / 6) * 4) + 0xb) >>
         (ulong)((param_2 % 6) * 5 & 0x1f) & 0x1f;
}

