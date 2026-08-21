
/* v8::internal::FeedbackNexus::ResetTypeProfile() */

void __thiscall v8::internal::FeedbackNexus::ResetTypeProfile(FeedbackNexus *this)

{
  long lVar1;
  FeedbackNexus *pFVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  pFVar2 = this + 8;
  if (*(FeedbackNexus **)this != (FeedbackNexus *)0x0) {
    pFVar2 = *(FeedbackNexus **)this;
  }
  uVar5 = *(ulong *)pFVar2;
  uVar3 = *(ulong *)((uVar5 & 0xffffffff00000000) + 0xc08);
  lVar1 = uVar5 + (long)(*(int *)(this + 0x10) << 2);
  *(int *)(lVar1 + 0x1f) = (int)uVar3;
  if (((int)uVar3 != 3) && ((uVar3 & 1) != 0)) {
    uVar4 = *(ulong *)((uVar3 & 0xfffffffffffc0000) + 8);
    lVar1 = lVar1 + 0x1f;
    if (((uint)uVar4 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar5,lVar1,uVar3 & 0xfffffffffffffffd);
      uVar4 = *(ulong *)(uVar3 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar5 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar5,lVar1,uVar3 & 0xfffffffffffffffd);
      return;
    }
  }
  return;
}

