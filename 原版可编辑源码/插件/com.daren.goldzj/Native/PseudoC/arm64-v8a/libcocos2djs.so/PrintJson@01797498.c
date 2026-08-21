
/* v8::internal::compiler::NodeOrigin::PrintJson(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) const */

void __thiscall
v8::internal::compiler::NodeOrigin::PrintJson(NodeOrigin *this,basic_ostream *param_1)

{
  basic_ostream *pbVar1;
  size_t sVar2;
  ulong uVar3;
  char *pcVar4;
  
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"{ ",2);
  if (*(int *)(this + 0x10) == 0) {
    pcVar4 = "\"bytecodePosition\" : ";
    uVar3 = 0x15;
  }
  else {
    if (*(int *)(this + 0x10) != 1) goto LAB_017974f8;
    pcVar4 = "\"nodeId\" : ";
    uVar3 = 0xb;
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar4,uVar3);
LAB_017974f8:
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,*(long *)(this + 0x18));
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,", \"reducer\" : \"",0xf);
  pcVar4 = *(char **)(this + 8);
  sVar2 = strlen(pcVar4);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar1,pcVar4,sVar2);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,"\"",1);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,", \"phase\" : \"",0xd);
  pcVar4 = *(char **)this;
  sVar2 = strlen(pcVar4);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar1,pcVar4,sVar2);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,"\"",1);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"}",1);
  return;
}

