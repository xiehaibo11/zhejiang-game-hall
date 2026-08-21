
/* v8::internal::FeedbackNexus::GetCompareOperationFeedback() const */

undefined8 __thiscall v8::internal::FeedbackNexus::GetCompareOperationFeedback(FeedbackNexus *this)

{
  int iVar1;
  FeedbackNexus *pFVar2;
  
  pFVar2 = this + 8;
  if (*(FeedbackNexus **)this != (FeedbackNexus *)0x0) {
    pFVar2 = *(FeedbackNexus **)this;
  }
  iVar1 = *(int *)(*(long *)pFVar2 + (long)(*(int *)(this + 0x10) << 2) + 0x1f) >> 1;
  switch(iVar1) {
  case 0:
    return 0;
  case 1:
    return 1;
  case 2:
  case 4:
  case 5:
  case 6:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
    goto switchD_010c530c_caseD_0;
  case 3:
    return 2;
  case 7:
    return 3;
  case 8:
    return 4;
  case 0x18:
    return 5;
  case 0x20:
    return 6;
  case 0x40:
    return 7;
  default:
    if (iVar1 == 0x80) {
      return 8;
    }
    if (iVar1 == 0x180) {
      return 9;
    }
switchD_010c530c_caseD_0:
    return 10;
  }
}

