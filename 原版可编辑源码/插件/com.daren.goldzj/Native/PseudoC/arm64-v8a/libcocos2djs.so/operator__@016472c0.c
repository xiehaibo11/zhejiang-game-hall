
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::Constant const&) */

void v8::internal::compiler::operator<<(basic_ostream *param_1,Constant *param_2)

{
  ulong uVar1;
  basic_ostream *pbVar2;
  int iVar3;
  char *pcVar4;
  undefined8 local_28;
  
  switch(*(undefined4 *)param_2) {
  case 0:
    iVar3 = *(int *)(param_2 + 8);
    break;
  case 1:
    pbVar2 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,
                        *(long *)(param_2 + 8));
    pcVar4 = "l";
    goto LAB_016473a4;
  case 2:
    pbVar2 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,
                        *(float *)(param_2 + 8));
    pcVar4 = "f";
LAB_016473a4:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,pcVar4,1);
    return;
  case 3:
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,
               *(double *)(param_2 + 8));
    return;
  case 4:
    uVar1 = ExternalReference::FromRawAddress(*(ulong *)(param_2 + 8));
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,uVar1);
    return;
  case 5:
  case 6:
    local_28 = **(undefined8 **)(param_2 + 8);
    internal::operator<<(param_1,(Brief *)&local_28);
    return;
  case 7:
    param_1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        (param_1,"RPO",3);
    iVar3 = *(int *)(param_2 + 8);
    break;
  case 8:
    pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"DelayedStringConstant: ",0x17);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,*(void **)(param_2 + 8))
    ;
    return;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,iVar3);
  return;
}

