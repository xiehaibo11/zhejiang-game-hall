
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::ElementAccess const&) */

basic_ostream * v8::internal::compiler::operator<<(basic_ostream *param_1,ElementAccess *param_2)

{
  int iVar1;
  basic_ostream *pbVar2;
  char *pcVar3;
  ulong uVar4;
  
  if (*param_2 == (ElementAccess)0x1) {
    pcVar3 = "tagged base";
    uVar4 = 0xb;
  }
  else {
    if (*param_2 != (ElementAccess)0x0) goto switchD_012eacdc_default;
    pcVar3 = "untagged base";
    uVar4 = 0xd;
  }
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar3,uVar4);
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,", ",2)
  ;
  pbVar2 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,
                      *(int *)(param_2 + 4));
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,", ",2)
  ;
  pbVar2 = (basic_ostream *)operator<<(pbVar2,*(undefined8 *)(param_2 + 8));
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,", ",2)
  ;
  pbVar2 = (basic_ostream *)internal::operator<<(pbVar2,*(undefined2 *)(param_2 + 0x10));
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,", ",2)
  ;
  switch(param_2[0x12]) {
  case (ElementAccess)0x0:
    pcVar3 = "NoWriteBarrier";
    uVar4 = 0xe;
    break;
  case (ElementAccess)0x1:
    pcVar3 = "AssertNoWriteBarrier";
    uVar4 = 0x14;
    break;
  case (ElementAccess)0x2:
    pcVar3 = "MapWriteBarrier";
    uVar4 = 0xf;
    break;
  case (ElementAccess)0x3:
    pcVar3 = "PointerWriteBarrier";
    uVar4 = 0x13;
    break;
  case (ElementAccess)0x4:
    pcVar3 = "EphemeronKeyWriteBarrier";
    uVar4 = 0x18;
    break;
  case (ElementAccess)0x5:
    pcVar3 = "FullWriteBarrier";
    uVar4 = 0x10;
    break;
  default:
    goto switchD_012eacdc_default;
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,pcVar3,uVar4);
  if (FLAG_untrusted_code_mitigations != '\0') {
    pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,", ",2);
    iVar1 = *(int *)(param_2 + 0x14);
    if (iVar1 == 2) {
      pcVar3 = "Safe";
      uVar4 = 4;
    }
    else if (iVar1 == 1) {
      pcVar3 = "Unsafe";
      uVar4 = 6;
    }
    else {
      if (iVar1 != 0) {
switchD_012eacdc_default:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      pcVar3 = "Critical";
      uVar4 = 8;
    }
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,pcVar3,uVar4);
  }
  return param_1;
}

