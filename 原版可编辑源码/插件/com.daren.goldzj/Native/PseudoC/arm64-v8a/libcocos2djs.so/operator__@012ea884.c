
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::FieldAccess const&) */

basic_ostream * v8::internal::compiler::operator<<(basic_ostream *param_1,FieldAccess *param_2)

{
  int iVar1;
  basic_ostream *pbVar2;
  char *pcVar3;
  ulong uVar4;
  undefined8 local_18;
  
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"[",1)
  ;
  if (*param_2 == (FieldAccess)0x1) {
    pcVar3 = "tagged base";
    uVar4 = 0xb;
  }
  else {
    if (*param_2 != (FieldAccess)0x0) goto switchD_012ea9b4_default;
    pcVar3 = "untagged base";
    uVar4 = 0xd;
  }
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar2,pcVar3,uVar4);
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,", ",2)
  ;
  pbVar2 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,
                      *(int *)(param_2 + 4));
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,", ",2);
  if (*(undefined8 **)(param_2 + 8) != (undefined8 *)0x0) {
    local_18 = **(undefined8 **)(param_2 + 8);
    Name::NamePrint((Name *)&local_18,param_1);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,", ",2);
  }
  if (*(undefined8 **)(param_2 + 0x10) != (undefined8 *)0x0) {
    local_18 = **(undefined8 **)(param_2 + 0x10);
    pbVar2 = (basic_ostream *)internal::operator<<(param_1,(Brief *)&local_18);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,", ",2);
  }
  pbVar2 = (basic_ostream *)operator<<(param_1,*(undefined8 *)(param_2 + 0x18));
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,", ",2)
  ;
  pbVar2 = (basic_ostream *)internal::operator<<(pbVar2,*(undefined2 *)(param_2 + 0x20));
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,", ",2)
  ;
  switch(param_2[0x22]) {
  case (FieldAccess)0x0:
    pcVar3 = "NoWriteBarrier";
    uVar4 = 0xe;
    break;
  case (FieldAccess)0x1:
    pcVar3 = "AssertNoWriteBarrier";
    uVar4 = 0x14;
    break;
  case (FieldAccess)0x2:
    pcVar3 = "MapWriteBarrier";
    uVar4 = 0xf;
    break;
  case (FieldAccess)0x3:
    pcVar3 = "PointerWriteBarrier";
    uVar4 = 0x13;
    break;
  case (FieldAccess)0x4:
    pcVar3 = "EphemeronKeyWriteBarrier";
    uVar4 = 0x18;
    break;
  case (FieldAccess)0x5:
    pcVar3 = "FullWriteBarrier";
    uVar4 = 0x10;
    break;
  default:
    goto switchD_012ea9b4_default;
  }
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar2,pcVar3,uVar4);
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,", ",2)
  ;
  if (*(long *)(param_2 + 0x28) == 0) {
    pcVar3 = "mutable";
    uVar4 = 7;
  }
  else {
    pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar2,"const (field owner: ",0x14);
    pbVar2 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,
                        *(ulong *)(param_2 + 0x28));
    pcVar3 = ")";
    uVar4 = 1;
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,pcVar3,uVar4);
  if (param_2[0x30] != (FieldAccess)0x0) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1," (store in literal)",0x13);
  }
  if (FLAG_untrusted_code_mitigations != '\0') {
    pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,", ",2);
    iVar1 = *(int *)(param_2 + 0x24);
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
switchD_012ea9b4_default:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      pcVar3 = "Critical";
      uVar4 = 8;
    }
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,pcVar3,uVar4);
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"]",1);
  return param_1;
}

