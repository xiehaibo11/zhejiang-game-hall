
/* v8::internal::FeedbackNexus::GetKeyType() const */

uint __thiscall v8::internal::FeedbackNexus::GetKeyType(FeedbackNexus *this)

{
  long lVar1;
  FeedbackNexus *pFVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  
  pFVar2 = this + 8;
  if (*(FeedbackNexus **)this != (FeedbackNexus *)0x0) {
    pFVar2 = *(FeedbackNexus **)this;
  }
  iVar3 = *(int *)(this + 0x10) * 4;
  uVar4 = *(ulong *)pFVar2 & 0xffffffff00000000;
  lVar1 = *(ulong *)pFVar2 + 0x1f;
  uVar5 = *(uint *)(lVar1 + iVar3);
  if (uVar5 == *(uint *)(uVar4 + 0xb88)) {
    return *(int *)(lVar1 + (iVar3 + 4)) >> 1;
  }
  if (*(int *)(this + 0x14) == 0x11) {
    uVar5 = *(uint *)(lVar1 + (iVar3 + 4));
  }
  if (((ulong)uVar5 & 3) == 1) {
    uVar6 = uVar4 | uVar5;
    if (*(ushort *)((uVar4 | 7) + (ulong)*(uint *)(uVar6 - 1)) < 0x40) {
      return 1;
    }
    if ((*(short *)((uVar4 | 7) + (ulong)*(uint *)(uVar6 - 1)) == 0x40) &&
       (uVar5 != *(uint *)(uVar4 + 0xc08))) {
      return (uint)(uVar5 != *(uint *)(uVar4 + 0xb88));
    }
  }
  return 0;
}

