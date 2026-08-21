
/* virtual thunk to std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >::~basic_ostringstream() */

void __thiscall
std::__ndk1::basic_ostringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
~basic_ostringstream
          (basic_ostringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
           *this)

{
  basic_ostringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar1;
  
                    /* try { // try from 009ebd3c to 00aebd8f has its CatchHandler @ 009ebd3c
                       catch() { ... } // from try @ 009ebd3c with catch @ 009ebd3c
                       catch() { ... } // from try @ 009ebdf4 with catch @ 009ebd3c
                       catch() { ... } // from try @ 009ebe44 with catch @ 009ebd3c
                       catch() { ... } // from try @ 009ebe9c with catch @ 009ebd3c */
  pbVar1 = this + *(long *)(*(long *)this + -0x18);
  *(undefined8 *)pbVar1 = 0x16a0c38;
  *(undefined8 *)(pbVar1 + 0x70) = 0x16a0c60;
  *(undefined ***)(pbVar1 + 8) = &PTR__basic_stringbuf_01698960;
  if (((byte)pbVar1[0x48] & 1) != 0) {
    operator_delete(*(void **)(pbVar1 + 0x58));
  }
                    /* try { // try from 009ebd90 to 00aebda7 has its CatchHandler @ 009ebef0 */
  *(undefined ***)(pbVar1 + 8) = &PTR__basic_streambuf_01698a08;
  locale::~locale((locale *)(pbVar1 + 0x10));
                    /* try { // try from 009ebdac to 00aebdbb has its CatchHandler @ 009ebef4 */
  ios_base::~ios_base((ios_base *)(pbVar1 + 0x70));
  return;
}

