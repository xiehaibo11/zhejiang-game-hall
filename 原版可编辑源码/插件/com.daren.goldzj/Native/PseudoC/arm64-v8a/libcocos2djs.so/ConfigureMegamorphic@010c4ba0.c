
/* v8::internal::FeedbackNexus::ConfigureMegamorphic() */

undefined8 __thiscall v8::internal::FeedbackNexus::ConfigureMegamorphic(FeedbackNexus *this)

{
  long lVar1;
  FeedbackNexus *pFVar2;
  int iVar3;
  
  pFVar2 = this + 8;
  if (*(FeedbackNexus **)this != (FeedbackNexus *)0x0) {
    pFVar2 = *(FeedbackNexus **)this;
  }
  lVar1 = *(ulong *)pFVar2 + 0x1f;
  iVar3 = *(int *)((*(ulong *)pFVar2 & 0xffffffff00000000) + 0xb88);
  if (*(int *)(lVar1 + (*(int *)(this + 0x10) << 2)) == iVar3) {
    return 0;
  }
  *(int *)((*(int *)(this + 0x10) << 2) + lVar1) = iVar3;
  pFVar2 = this + 8;
  if (*(FeedbackNexus **)this != (FeedbackNexus *)0x0) {
    pFVar2 = *(FeedbackNexus **)this;
  }
  *(undefined4 *)(*(long *)pFVar2 + (long)(*(int *)(this + 0x10) * 4 + 4) + 0x1f) = 3;
  return 1;
}

