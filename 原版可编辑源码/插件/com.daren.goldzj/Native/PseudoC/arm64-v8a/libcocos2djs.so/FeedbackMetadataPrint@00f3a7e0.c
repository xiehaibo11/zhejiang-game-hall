
/* v8::internal::FeedbackMetadata::FeedbackMetadataPrint(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall
v8::internal::FeedbackMetadata::FeedbackMetadataPrint(FeedbackMetadata *this,basic_ostream *param_1)

{
  int iVar1;
  basic_ostream *pbVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  long local_58;
  
  HeapObject::PrintHeader((HeapObject *)this,param_1,"FeedbackMetadata");
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - slot_count: ",0x10);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,
             *(int *)(*(long *)this + 3));
  lVar4 = *(long *)this;
  if (0 < *(int *)(lVar4 + 3)) {
    iVar5 = 0;
    do {
      local_58 = lVar4;
      iVar1 = GetKind((FeedbackMetadata *)&local_58,iVar5);
      if (iVar1 - 1U < 0xe) {
switchD_00f3a8e0_caseD_11:
        iVar3 = 2;
      }
      else {
        iVar3 = 1;
        switch(iVar1) {
        case 0:
        case 0x17:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        case 0x11:
        case 0x16:
          goto switchD_00f3a8e0_caseD_11;
        }
      }
      iVar3 = iVar3 + iVar5;
      pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,"\n Slot ",7);
      pbVar2 = (basic_ostream *)internal::operator<<(pbVar2,iVar5);
      pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar2," ",1);
      internal::operator<<(pbVar2,iVar1);
      iVar5 = iVar3;
    } while (iVar3 < *(int *)(lVar4 + 3));
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\n",1);
  return;
}

