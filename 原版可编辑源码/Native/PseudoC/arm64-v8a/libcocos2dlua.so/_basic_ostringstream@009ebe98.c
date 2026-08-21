
/* virtual thunk to std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >::~basic_ostringstream() */

void __thiscall
std::__ndk1::basic_ostringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
~basic_ostringstream
          (basic_ostringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
           *this)

{
  basic_ostringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar1;
  
                    /* try { // try from 009ebe9c to 00aebf0f has its CatchHandler @ 009ebd3c */
                    /* catch() { ... } // from try @ 009ebde4 with catch @ 009ebea4 */
  pbVar1 = this + *(long *)(*(long *)this + -0x18);
  *(undefined8 *)pbVar1 = 0x16a0c38;
  *(undefined8 *)(pbVar1 + 0x70) = 0x16a0c60;
  *(undefined ***)(pbVar1 + 8) = &PTR__basic_stringbuf_01698960;
  if (((byte)pbVar1[0x48] & 1) != 0) {
    operator_delete(*(void **)(pbVar1 + 0x58));
  }
                    /* catch() { ... } // from try @ 009ebd90 with catch @ 009ebef0 */
                    /* catch() { ... } // from try @ 009ebdac with catch @ 009ebef4
                       catch() { ... } // from try @ 009ebe30 with catch @ 009ebef4
                       catch() { ... } // from try @ 009ebe8c with catch @ 009ebef4 */
  *(undefined ***)(pbVar1 + 8) = &PTR__basic_streambuf_01698a08;
  locale::~locale((locale *)(pbVar1 + 0x10));
  ios_base::~ios_base((ios_base *)(pbVar1 + 0x70));
                    /* try { // try from 009ebf10 to 00aebf5f has its CatchHandler @ 009ebf10
                       catch() { ... } // from try @ 009ebf10 with catch @ 009ebf10
                       catch() { ... } // from try @ 009ebfb0 with catch @ 009ebf10
                       catch() { ... } // from try @ 009ec01c with catch @ 009ebf10 */
  operator_delete(pbVar1);
  return;
}

