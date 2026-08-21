
/* v8::internal::FeedbackNexus::GetBinaryOperationFeedback() const */

undefined8 __thiscall v8::internal::FeedbackNexus::GetBinaryOperationFeedback(FeedbackNexus *this)

{
  FeedbackNexus *pFVar1;
  undefined8 uVar2;
  
  pFVar1 = this + 8;
  if (*(FeedbackNexus **)this != (FeedbackNexus *)0x0) {
    pFVar1 = *(FeedbackNexus **)this;
  }
  uVar2 = 0;
  switch(*(int *)(*(long *)pFVar1 + (long)(*(int *)(this + 0x10) << 2) + 0x1f) >> 1) {
  case 0:
    goto switchD_010c5288_caseD_0;
  case 1:
    return 1;
  default:
    uVar2 = 8;
switchD_010c5288_caseD_0:
    return uVar2;
  case 3:
    return 2;
  case 7:
    return 4;
  case 0xf:
    return 5;
  case 0x10:
    return 6;
  case 0x20:
    return 7;
  }
}

