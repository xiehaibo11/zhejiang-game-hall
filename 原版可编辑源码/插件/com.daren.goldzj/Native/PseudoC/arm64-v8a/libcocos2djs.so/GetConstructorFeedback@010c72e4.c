
/* v8::internal::FeedbackNexus::GetConstructorFeedback() const */

ulong * __thiscall v8::internal::FeedbackNexus::GetConstructorFeedback(FeedbackNexus *this)

{
  FeedbackNexus *pFVar1;
  uint uVar2;
  ulong *puVar3;
  Isolate *pIVar4;
  ulong uVar5;
  
  pFVar1 = this + 8;
  if (*(FeedbackNexus **)this != (FeedbackNexus *)0x0) {
    pFVar1 = *(FeedbackNexus **)this;
  }
  puVar3 = (ulong *)0x0;
  uVar2 = *(uint *)(*(ulong *)pFVar1 + (long)(*(int *)(this + 0x10) << 2) + 0x1f);
  if ((uVar2 != 3) && (((ulong)uVar2 & 3) == 3)) {
    pIVar4 = (Isolate *)(*(ulong *)pFVar1 & 0xffffffff00000000);
    uVar5 = (ulong)uVar2 & 0xfffffffffffffffd | (ulong)pIVar4;
    if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar3 = *(ulong **)(pIVar4 + 0x95a0);
      if (puVar3 == *(ulong **)(pIVar4 + 0x95a8)) {
        puVar3 = (ulong *)HandleScope::Extend(pIVar4);
      }
      *(ulong **)(pIVar4 + 0x95a0) = puVar3 + 1;
      *puVar3 = uVar5;
    }
    else {
      puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar5);
    }
  }
  return puVar3;
}

