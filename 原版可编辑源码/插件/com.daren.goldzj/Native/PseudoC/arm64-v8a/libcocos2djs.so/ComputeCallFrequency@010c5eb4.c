
/* v8::internal::FeedbackNexus::ComputeCallFrequency() */

float __thiscall v8::internal::FeedbackNexus::ComputeCallFrequency(FeedbackNexus *this)

{
  FeedbackNexus *pFVar1;
  int iVar2;
  uint uVar3;
  
  pFVar1 = this + 8;
  if (*(FeedbackNexus **)this != (FeedbackNexus *)0x0) {
    pFVar1 = *(FeedbackNexus **)this;
  }
  iVar2 = *(int *)(*(long *)pFVar1 + 0x13);
  uVar3 = *(uint *)(*(long *)pFVar1 + (long)(*(int *)(this + 0x10) * 4 + 4) + 0x1f);
  if ((uVar3 & 1) == 0) {
    if (iVar2 != 0) {
      return (float)((uint)((int)uVar3 >> 1) >> 1) / (float)iVar2;
    }
    return 0.0;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","call_count.IsSmi()");
}

