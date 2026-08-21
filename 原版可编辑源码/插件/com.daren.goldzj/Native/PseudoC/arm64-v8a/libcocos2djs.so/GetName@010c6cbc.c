
/* v8::internal::FeedbackNexus::GetName() const */

ulong __thiscall v8::internal::FeedbackNexus::GetName(FeedbackNexus *this)

{
  FeedbackNexus *pFVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  
  uVar2 = *(uint *)(this + 0x14);
  if (uVar2 < 0x12) {
    if ((1 << (ulong)(uVar2 & 0x1f) & 0x2308U) == 0) {
      if (uVar2 != 0x11) {
        return 0;
      }
      pFVar1 = this + 8;
      if (*(FeedbackNexus **)this != (FeedbackNexus *)0x0) {
        pFVar1 = *(FeedbackNexus **)this;
      }
      uVar5 = *(ulong *)pFVar1;
      iVar4 = *(int *)(this + 0x10) * 4 + 4;
    }
    else {
      pFVar1 = this + 8;
      if (*(FeedbackNexus **)this != (FeedbackNexus *)0x0) {
        pFVar1 = *(FeedbackNexus **)this;
      }
      uVar5 = *(ulong *)pFVar1;
      iVar4 = *(int *)(this + 0x10) << 2;
    }
    uVar2 = *(uint *)(uVar5 + (long)iVar4 + 0x1f);
    if (((ulong)uVar2 & 3) == 1) {
      uVar5 = uVar5 & 0xffffffff00000000;
      uVar3 = uVar5 | uVar2;
      if ((*(ushort *)((uVar5 | 7) + (ulong)*(uint *)(uVar3 - 1)) < 0x40) ||
         (((*(short *)((uVar5 | 7) + (ulong)*(uint *)(uVar3 - 1)) == 0x40 &&
           (uVar2 != *(uint *)(uVar5 + 0xc08))) && (uVar2 != *(uint *)(uVar5 + 0xb88))))) {
        return uVar3;
      }
    }
  }
  return 0;
}

