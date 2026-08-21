
/* v8::internal::FeedbackNexus::GetForInFeedback() const */

uint __thiscall v8::internal::FeedbackNexus::GetForInFeedback(FeedbackNexus *this)

{
  uint uVar1;
  FeedbackNexus *pFVar2;
  
  pFVar2 = this + 8;
  if (*(FeedbackNexus **)this != (FeedbackNexus *)0x0) {
    pFVar2 = *(FeedbackNexus **)this;
  }
  uVar1 = *(int *)(*(long *)pFVar2 + (long)(*(int *)(this + 0x10) << 2) + 0x1f) >> 1;
  if (uVar1 < 4) {
    return 0x2030100 >> (ulong)((uVar1 & 3) << 3);
  }
  return 3;
}

