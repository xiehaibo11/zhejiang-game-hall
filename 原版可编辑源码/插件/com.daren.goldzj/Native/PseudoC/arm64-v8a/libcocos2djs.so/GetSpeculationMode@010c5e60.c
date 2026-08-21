
/* v8::internal::FeedbackNexus::GetSpeculationMode() */

uint __thiscall v8::internal::FeedbackNexus::GetSpeculationMode(FeedbackNexus *this)

{
  FeedbackNexus *pFVar1;
  uint uVar2;
  
  pFVar1 = this + 8;
  if (*(FeedbackNexus **)this != (FeedbackNexus *)0x0) {
    pFVar1 = *(FeedbackNexus **)this;
  }
  uVar2 = *(uint *)(*(long *)pFVar1 + (long)(*(int *)(this + 0x10) * 4 + 4) + 0x1f);
  if ((uVar2 & 1) == 0) {
    return uVar2 >> 1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","call_count.IsSmi()");
}

