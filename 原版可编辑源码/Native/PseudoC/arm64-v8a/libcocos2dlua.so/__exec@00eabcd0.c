
/* std::__ndk1::__match_char_icase<char, std::__ndk1::regex_traits<char>
   >::__exec(std::__ndk1::__state<char>&) const */

void __thiscall
std::__ndk1::__match_char_icase<char,std::__ndk1::regex_traits<char>>::__exec
          (__match_char_icase<char,std::__ndk1::regex_traits<char>> *this,__state *param_1)

{
  __match_char_icase<char,std::__ndk1::regex_traits<char>> _Var1;
  
  if ((*(undefined1 **)(param_1 + 0x10) == *(undefined1 **)(param_1 + 0x18)) ||
     (_Var1 = (__match_char_icase<char,std::__ndk1::regex_traits<char>>)
              (**(code **)(**(long **)(this + 0x18) + 0x28))
                        (*(long **)(this + 0x18),**(undefined1 **)(param_1 + 0x10)),
     this[0x28] != _Var1)) {
    *(undefined4 *)param_1 = 0xfffffc1f;
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  else {
    *(undefined4 *)param_1 = 0xfffffc1d;
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 1;
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(this + 8);
  }
  return;
}

