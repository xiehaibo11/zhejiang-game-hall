
/* virtual thunk to std::__ndk1::basic_istringstream<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >::~basic_istringstream() */

void __thiscall
std::__ndk1::basic_istringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
~basic_istringstream
          (basic_istringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
           *this)

{
  basic_istringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar1;
  
                    /* try { // try from 00915570 to 00a155ab has its CatchHandler @ 0091569c */
  pbVar1 = this + *(long *)(*(long *)this + -0x18);
  *(undefined ***)pbVar1 = &PTR__basic_istringstream_0169c3d0;
  *(undefined ***)(pbVar1 + 0x78) = &PTR__basic_istringstream_0169c3f8;
  *(undefined ***)(pbVar1 + 0x10) = &PTR__basic_stringbuf_01698960;
                    /* try { // try from 009155b4 to 00a155c7 has its CatchHandler @ 00915668 */
  if (((byte)pbVar1[0x50] & 1) != 0) {
    operator_delete(*(void **)(pbVar1 + 0x60));
  }
                    /* try { // try from 009155c8 to 00a155f3 has its CatchHandler @ 009154b4 */
  *(undefined ***)(pbVar1 + 0x10) = &PTR__basic_streambuf_01698a08;
  locale::~locale((locale *)(pbVar1 + 0x18));
  ios_base::~ios_base((ios_base *)(pbVar1 + 0x78));
  operator_delete(pbVar1);
  return;
}

