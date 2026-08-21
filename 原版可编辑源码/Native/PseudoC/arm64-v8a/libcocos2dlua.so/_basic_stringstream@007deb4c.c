
/* virtual thunk to std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >::~basic_stringstream() */

void __thiscall
std::__ndk1::basic_stringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
~basic_stringstream(basic_stringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                    *this)

{
  basic_stringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar1;
  
  pbVar1 = this + *(long *)(*(long *)this + -0x18);
  *(undefined8 *)pbVar1 = 0x16987e8;
  *(undefined8 *)(pbVar1 + 0x80) = 0x1698838;
  *(undefined8 *)(pbVar1 + 0x10) = 0x1698810;
  *(undefined ***)(pbVar1 + 0x18) = &PTR__basic_stringbuf_01698960;
  if (((byte)pbVar1[0x58] & 1) != 0) {
    operator_delete(*(void **)(pbVar1 + 0x68));
  }
  *(undefined ***)(pbVar1 + 0x18) = &PTR__basic_streambuf_01698a08;
  locale::~locale((locale *)(pbVar1 + 0x20));
  ios_base::~ios_base((ios_base *)(pbVar1 + 0x80));
  operator_delete(pbVar1);
  return;
}

