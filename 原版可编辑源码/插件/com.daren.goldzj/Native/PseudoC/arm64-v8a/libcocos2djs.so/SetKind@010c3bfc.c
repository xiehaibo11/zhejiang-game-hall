
/* v8::internal::FeedbackMetadata::SetKind(v8::internal::FeedbackSlot,
   v8::internal::FeedbackSlotKind) */

void __thiscall
v8::internal::FeedbackMetadata::SetKind(FeedbackMetadata *this,int param_2,int param_3)

{
  long lVar1;
  uint uVar2;
  
  lVar1 = *(long *)this + (long)((param_2 / 6) * 4);
  uVar2 = (param_2 % 6) * 5;
  *(uint *)(lVar1 + 0xb) =
       *(uint *)(lVar1 + 0xb) & (0x1f << (ulong)(uVar2 & 0x1f) ^ 0xffffffffU) |
       param_3 << (ulong)(uVar2 & 0x1f);
  return;
}

