
/* v8::internal::FeedbackNexus::SetSpeculationMode(v8::internal::SpeculationMode) */

void __thiscall v8::internal::FeedbackNexus::SetSpeculationMode(FeedbackNexus *this,int param_2)

{
  FeedbackNexus *pFVar1;
  uint uVar2;
  long lVar3;
  
  pFVar1 = this + 8;
  if (*(FeedbackNexus **)this != (FeedbackNexus *)0x0) {
    pFVar1 = *(FeedbackNexus **)this;
  }
  lVar3 = (long)(*(int *)(this + 0x10) * 4 + 4);
  uVar2 = *(uint *)(*(long *)pFVar1 + 0x1f + lVar3);
  if ((uVar2 & 1) == 0) {
    *(uint *)(lVar3 + *(long *)pFVar1 + 0x1f) = uVar2 & 0xfffffffc | param_2 << 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","call_count.IsSmi()");
}

