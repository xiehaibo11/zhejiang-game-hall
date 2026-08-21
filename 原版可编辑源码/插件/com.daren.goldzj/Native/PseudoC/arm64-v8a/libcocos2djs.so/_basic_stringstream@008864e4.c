
/* virtual thunk to std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >::~basic_stringstream() */

void __thiscall
std::__ndk1::basic_stringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
~basic_stringstream(basic_stringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                    *this)

{
  basic_stringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar1;
  
  pbVar1 = this + *(long *)(*(long *)this + -0x18);
  *(undefined ***)pbVar1 = &PTR__basic_stringstream_01c66f88;
  *(undefined ***)(pbVar1 + 0x80) = &PTR__basic_stringstream_01c66fd8;
  *(undefined ***)(pbVar1 + 0x10) = &PTR__basic_stringstream_01c66fb0;
  *(undefined ***)(pbVar1 + 0x18) = &PTR__basic_stringbuf_01c67100;
  if (((byte)pbVar1[0x58] & 1) != 0) {
    operator_delete(*(void **)(pbVar1 + 0x68));
  }
  *(undefined ***)(pbVar1 + 0x18) = &PTR__basic_streambuf_01c671a8;
  locale::~locale((locale *)(pbVar1 + 0x20));
  ios_base::~ios_base((ios_base *)(pbVar1 + 0x80));
  operator_delete(pbVar1);
  return;
}

