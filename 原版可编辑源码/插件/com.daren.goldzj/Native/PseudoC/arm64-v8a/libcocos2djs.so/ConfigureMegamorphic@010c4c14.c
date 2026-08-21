
/* v8::internal::FeedbackNexus::ConfigureMegamorphic(v8::internal::IcCheckType) */

undefined8 __thiscall
v8::internal::FeedbackNexus::ConfigureMegamorphic(FeedbackNexus *this,int param_2)

{
  long lVar1;
  FeedbackNexus *pFVar2;
  int iVar3;
  int iVar4;
  FeedbackNexus *pFVar5;
  long lVar6;
  
  pFVar5 = *(FeedbackNexus **)this;
  pFVar2 = this + 8;
  if (pFVar5 != (FeedbackNexus *)0x0) {
    pFVar2 = pFVar5;
  }
  iVar4 = *(int *)(this + 0x10) * 4;
  lVar1 = *(ulong *)pFVar2 + 0x1f;
  iVar3 = *(int *)((*(ulong *)pFVar2 & 0xffffffff00000000) + 0xb88);
  if (*(int *)(lVar1 + iVar4) == iVar3) {
    lVar6 = (long)(iVar4 + 4);
    param_2 = param_2 * 2;
    if (*(int *)(lVar1 + lVar6) == param_2) {
      return 0;
    }
  }
  else {
    *(int *)(iVar4 + lVar1) = iVar3;
    pFVar5 = *(FeedbackNexus **)this;
    param_2 = param_2 << 1;
    lVar6 = (long)(*(int *)(this + 0x10) * 4 + 4);
  }
  pFVar2 = this + 8;
  if (pFVar5 != (FeedbackNexus *)0x0) {
    pFVar2 = pFVar5;
  }
  *(int *)(*(long *)pFVar2 + lVar6 + 0x1f) = param_2;
  return 1;
}

