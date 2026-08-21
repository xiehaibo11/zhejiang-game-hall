
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::CreateClosureParameters const&) */

void v8::internal::compiler::operator<<(basic_ostream *param_1,CreateClosureParameters *param_2)

{
  basic_ostream *pbVar1;
  char *pcVar2;
  ulong uVar3;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  switch(param_2[0x18]) {
  case (CreateClosureParameters)0x0:
    pcVar2 = "Young";
    uVar3 = 5;
    break;
  case (CreateClosureParameters)0x1:
    pcVar2 = "Old";
    goto LAB_0175393c;
  case (CreateClosureParameters)0x2:
    pcVar2 = "Code";
    uVar3 = 4;
    break;
  case (CreateClosureParameters)0x3:
    pcVar2 = "Map";
LAB_0175393c:
    uVar3 = 3;
    break;
  case (CreateClosureParameters)0x4:
    pcVar2 = "ReadOnly";
    uVar3 = 8;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar2,uVar3);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,", ",2)
  ;
  local_28 = **(undefined8 **)param_2;
  pbVar1 = (basic_ostream *)internal::operator<<(pbVar1,(Brief *)&local_28);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,", ",2)
  ;
  local_30 = **(undefined8 **)(param_2 + 8);
  pbVar1 = (basic_ostream *)internal::operator<<(pbVar1,(Brief *)&local_30);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,", ",2)
  ;
  local_38 = **(undefined8 **)(param_2 + 0x10);
  internal::operator<<(pbVar1,(Brief *)&local_38);
  return;
}

