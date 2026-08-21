
/* v8::internal::FeedbackNexus::Print(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall v8::internal::FeedbackNexus::Print(FeedbackNexus *this,basic_ostream *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  size_t sVar3;
  basic_ostream *pbVar4;
  char *__s;
  
  if (*(int *)(this + 0x14) - 1U < 0xe) {
switchD_00f3e708_caseD_11:
    uVar1 = ic_state(this);
    if (uVar1 < 7) {
      __s = (&PTR_s_NOFEEDBACK_01ca4df0)[(int)uVar1];
      sVar3 = strlen(__s);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,__s,sVar3);
      return;
    }
    goto switchD_00f3e708_caseD_0;
  }
  switch(*(int *)(this + 0x14)) {
  case 0:
  case 0x17:
switchD_00f3e708_caseD_0:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  default:
    return;
  case 0xf:
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"BinaryOp:",9);
    uVar2 = GetBinaryOperationFeedback(this);
    internal::operator<<(pbVar4,uVar2);
    return;
  case 0x10:
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"CompareOp:",10);
    uVar2 = GetCompareOperationFeedback(this);
    internal::operator<<(pbVar4,uVar2);
    return;
  case 0x11:
  case 0x15:
  case 0x16:
    goto switchD_00f3e708_caseD_11;
  case 0x14:
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"ForIn:",6);
    uVar2 = GetForInFeedback(this);
    internal::operator<<(pbVar4,uVar2);
    return;
  }
}

