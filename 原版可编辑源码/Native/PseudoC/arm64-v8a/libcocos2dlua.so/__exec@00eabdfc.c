
/* std::__ndk1::__match_char_collate<char, std::__ndk1::regex_traits<char>
   >::__exec(std::__ndk1::__state<char>&) const */

void __thiscall
std::__ndk1::__match_char_collate<char,std::__ndk1::regex_traits<char>>::__exec
          (__match_char_collate<char,std::__ndk1::regex_traits<char>> *this,__state *param_1)

{
  __match_char_collate<char,std::__ndk1::regex_traits<char>> *p_Var1;
  
  p_Var1 = *(__match_char_collate<char,std::__ndk1::regex_traits<char>> **)(param_1 + 0x10);
  if ((p_Var1 != *(__match_char_collate<char,std::__ndk1::regex_traits<char>> **)(param_1 + 0x18))
     && (*p_Var1 == this[0x28])) {
    *(undefined4 *)param_1 = 0xfffffc1d;
    *(__match_char_collate<char,std::__ndk1::regex_traits<char>> **)(param_1 + 0x10) = p_Var1 + 1;
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(this + 8);
    return;
  }
  *(undefined4 *)param_1 = 0xfffffc1f;
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}

