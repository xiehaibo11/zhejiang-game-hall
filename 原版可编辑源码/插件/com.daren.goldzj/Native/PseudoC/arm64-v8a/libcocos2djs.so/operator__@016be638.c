
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::FrameStateInfo const&) */

basic_ostream * v8::internal::compiler::operator<<(basic_ostream *param_1,FrameStateInfo *param_2)

{
  basic_ostream *pbVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 local_18;
  
  if (*(undefined4 **)(param_2 + 0x10) == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = **(undefined4 **)(param_2 + 0x10);
  }
  pbVar1 = (basic_ostream *)operator<<(param_1,uVar2);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,", ",2)
  ;
  pbVar1 = (basic_ostream *)internal::operator<<(pbVar1,*(undefined4 *)param_2);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,", ",2)
  ;
  uVar5 = *(ulong *)(param_2 + 8);
  if (uVar5 == 0xffffffffffffffff) {
    pcVar3 = "Ignore";
    uVar5 = 6;
  }
  else {
    pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar1,"PokeAt(",7);
    pbVar1 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar1,uVar5);
    pcVar3 = ")";
    uVar5 = 1;
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,pcVar3,uVar5);
  if ((*(long *)(param_2 + 0x10) != 0) &&
     (puVar4 = *(undefined8 **)(*(long *)(param_2 + 0x10) + 0x10), puVar4 != (undefined8 *)0x0)) {
    pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,", ",2);
    local_18 = *puVar4;
    internal::operator<<(pbVar1,(Brief *)&local_18);
  }
  return param_1;
}

