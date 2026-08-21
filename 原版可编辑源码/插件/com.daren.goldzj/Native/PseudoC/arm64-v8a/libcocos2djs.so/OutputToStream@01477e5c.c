
/* v8::base::debug::StackTrace::OutputToStream(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >*) const */

void __thiscall v8::base::debug::StackTrace::OutputToStream(StackTrace *this,basic_ostream *param_1)

{
  basic_ostream *pbVar1;
  basic_ostream<char,std::__ndk1::char_traits<char>> *this_00;
  ulong uVar2;
  
  if (*(long *)(this + 0x1f0) != 0) {
    uVar2 = 0;
    do {
      pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,"#",1);
      *(undefined8 *)(pbVar1 + *(long *)(*(long *)pbVar1 + -0x18) + 0x18) = 2;
      this_00 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
                std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                          ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar1,uVar2);
      pbVar1 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         (this_00,*(void **)(this + uVar2 * 8));
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,"\n",1);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(ulong *)(this + 0x1f0));
  }
  return;
}

