
/* std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >::~basic_ostringstream() */

void __thiscall
std::__ndk1::basic_ostringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
~basic_ostringstream
          (basic_ostringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
           *this)

{
                    /* try { // try from 009ebe30 to 00aebe43 has its CatchHandler @ 009ebef4 */
                    /* try { // try from 009ebe44 to 00aebe8b has its CatchHandler @ 009ebd3c */
  *(undefined8 *)(this + 0x70) = 0x16a0c60;
  *(undefined8 *)this = 0x16a0c38;
  *(undefined ***)(this + 8) = &PTR__basic_stringbuf_01698960;
  if (((byte)this[0x48] & 1) != 0) {
    operator_delete(*(void **)(this + 0x58));
  }
  *(undefined ***)(this + 8) = &PTR__basic_streambuf_01698a08;
  locale::~locale((locale *)(this + 0x10));
  ios_base::~ios_base((ios_base *)(this + 0x70));
                    /* try { // try from 009ebe8c to 00aebe9b has its CatchHandler @ 009ebef4 */
  operator_delete(this);
  return;
}

