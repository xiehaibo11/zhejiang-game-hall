
/* v8::internal::FeedbackVectorSpec::AddSlot(v8::internal::FeedbackSlotKind) */

ulong __thiscall v8::internal::FeedbackVectorSpec::AddSlot(FeedbackVectorSpec *this,ulong param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)this;
  lVar2 = *(long *)(this + 8);
  if ((int)param_2 - 1U < 0xe) {
switchD_010c39b8_caseD_11:
    append(this);
    param_2 = 0;
    goto switchD_010c39b8_caseD_1;
  }
  switch(param_2 & 0xffffffff) {
  case 0:
  case 0x17:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  default:
switchD_010c39b8_caseD_1:
    append(this,param_2);
    return lVar2 - lVar1 & 0xffffffff;
  case 0x11:
  case 0x16:
    goto switchD_010c39b8_caseD_11;
  }
}

