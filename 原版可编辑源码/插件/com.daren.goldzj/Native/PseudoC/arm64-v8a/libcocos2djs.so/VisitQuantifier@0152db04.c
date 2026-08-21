
/* v8::internal::RegExpUnparser::VisitQuantifier(v8::internal::RegExpQuantifier*, void*) */

undefined8 __thiscall
v8::internal::RegExpUnparser::VisitQuantifier
          (RegExpUnparser *this,RegExpQuantifier *param_1,void *param_2)

{
  char *pcVar1;
  basic_ostream *pbVar2;
  char *pcVar3;
  ulong uVar4;
  
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (*(basic_ostream **)(this + 8),"(# ",3);
  pbVar2 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,
                      *(int *)(param_1 + 0x10));
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2," ",1);
  pbVar2 = *(basic_ostream **)(this + 8);
  if (*(int *)(param_1 + 0x14) == 0x7fffffff) {
    pcVar3 = "- ";
    uVar4 = 2;
  }
  else {
    pbVar2 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,
                        *(int *)(param_1 + 0x14));
    pcVar3 = " ";
    uVar4 = 1;
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,pcVar3,uVar4);
  pcVar3 = "p ";
  if (*(int *)(param_1 + 0x20) != 2) {
    pcVar3 = "n ";
  }
  pcVar1 = "g ";
  if (*(int *)(param_1 + 0x20) != 0) {
    pcVar1 = pcVar3;
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (*(basic_ostream **)(this + 8),pcVar1,2);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))(*(long **)(param_1 + 8),this,param_2);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (*(basic_ostream **)(this + 8),")",1);
  return 0;
}

