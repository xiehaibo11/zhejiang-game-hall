
/* v8::internal::RegExpUnparser::VisitLookaround(v8::internal::RegExpLookaround*, void*) */

undefined8 __thiscall
v8::internal::RegExpUnparser::VisitLookaround
          (RegExpUnparser *this,RegExpLookaround *param_1,void *param_2)

{
  char *pcVar1;
  
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (*(basic_ostream **)(this + 8),"(",1);
  pcVar1 = "->";
  if (*(int *)(param_1 + 0x1c) != 0) {
    pcVar1 = "<-";
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (*(basic_ostream **)(this + 8),pcVar1,2);
  pcVar1 = " - ";
  if (param_1[0x10] != (RegExpLookaround)0x0) {
    pcVar1 = " + ";
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (*(basic_ostream **)(this + 8),pcVar1,3);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))(*(long **)(param_1 + 8),this,param_2);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (*(basic_ostream **)(this + 8),")",1);
  return 0;
}

