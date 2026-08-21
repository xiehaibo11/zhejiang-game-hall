
/* virtual thunk to std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >::~basic_ostringstream() */

void __thiscall
std::__ndk1::basic_ostringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
~basic_ostringstream
          (basic_ostringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
           *this)

{
  basic_ostringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar1;
  
  pbVar1 = this + *(long *)(*(long *)this + -0x18);
  *(undefined ***)pbVar1 = &PTR__basic_ostringstream_01c6c858;
  *(undefined ***)(pbVar1 + 0x70) = &PTR__basic_ostringstream_01c6c880;
  *(undefined ***)(pbVar1 + 8) = &PTR__basic_stringbuf_01c67100;
  if (((byte)pbVar1[0x48] & 1) != 0) {
    operator_delete(*(void **)(pbVar1 + 0x58));
  }
  *(undefined ***)(pbVar1 + 8) = &PTR__basic_streambuf_01c671a8;
  locale::~locale((locale *)(pbVar1 + 0x10));
  ios_base::~ios_base((ios_base *)(pbVar1 + 0x70));
  operator_delete(pbVar1);
  return;
}

