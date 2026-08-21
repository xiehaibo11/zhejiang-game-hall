
/* virtual thunk to std::__ndk1::basic_istringstream<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >::~basic_istringstream() */

void __thiscall
std::__ndk1::basic_istringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
~basic_istringstream
          (basic_istringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
           *this)

{
  basic_istringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar1;
  
  pbVar1 = this + *(long *)(*(long *)this + -0x18);
  *(undefined ***)pbVar1 = &PTR__basic_istringstream_01c68380;
  *(undefined ***)(pbVar1 + 0x78) = &PTR__basic_istringstream_01c683a8;
  *(undefined ***)(pbVar1 + 0x10) = &PTR__basic_stringbuf_01c67100;
  if (((byte)pbVar1[0x50] & 1) != 0) {
    operator_delete(*(void **)(pbVar1 + 0x60));
  }
  *(undefined ***)(pbVar1 + 0x10) = &PTR__basic_streambuf_01c671a8;
  locale::~locale((locale *)(pbVar1 + 0x18));
  ios_base::~ios_base((ios_base *)(pbVar1 + 0x78));
  return;
}

