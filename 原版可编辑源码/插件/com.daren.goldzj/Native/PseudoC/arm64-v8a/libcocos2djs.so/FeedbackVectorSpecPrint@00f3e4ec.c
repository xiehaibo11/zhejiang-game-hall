
/* v8::internal::FeedbackVectorSpec::FeedbackVectorSpecPrint(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall
v8::internal::FeedbackVectorSpec::FeedbackVectorSpecPrint
          (FeedbackVectorSpec *this,basic_ostream *param_1)

{
  byte bVar1;
  int iVar2;
  basic_ostream *pbVar3;
  char *pcVar4;
  ulong uVar5;
  uint uVar6;
  int iVar7;
  
  iVar2 = *(int *)(this + 8) - *(int *)this;
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1," - slot_count: ",0xf);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,iVar2);
  if (iVar2 == 0) {
    pcVar4 = " (empty)\n";
    uVar5 = 9;
  }
  else {
    if (0 < iVar2) {
      uVar6 = 0;
      do {
        if ((ulong)(*(long *)(this + 8) - *(long *)this) <= (ulong)uVar6) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        bVar1 = *(byte *)(*(long *)this + (ulong)uVar6);
        if (bVar1 - 1 < 0xe) {
switchD_00f3e5dc_caseD_11:
          iVar7 = 2;
        }
        else {
          iVar7 = 1;
          switch(bVar1) {
          case 0:
          case 0x17:
                    /* WARNING: Subroutine does not return */
            V8_Fatal("unreachable code");
          case 0x11:
          case 0x16:
            goto switchD_00f3e5dc_caseD_11;
          }
        }
        pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (param_1,"\n Slot #",8);
        pbVar3 = (basic_ostream *)
                 std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                           ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,uVar6);
        pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar3," ",1);
        internal::operator<<(pbVar3,bVar1);
        uVar6 = iVar7 + uVar6;
      } while ((int)uVar6 < iVar2);
    }
    pcVar4 = "\n";
    uVar5 = 1;
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar4,uVar5);
  return;
}

