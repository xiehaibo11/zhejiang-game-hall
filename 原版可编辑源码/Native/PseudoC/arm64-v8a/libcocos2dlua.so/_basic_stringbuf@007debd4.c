
/* std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::~basic_stringbuf() */

void __thiscall
std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
~basic_stringbuf(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                 *this)

{
  *(undefined ***)this = &PTR__basic_stringbuf_01698960;
  if (((byte)this[0x40] & 1) != 0) {
    operator_delete(*(void **)(this + 0x50));
  }
  *(undefined ***)this = &PTR__basic_streambuf_01698a08;
  locale::~locale((locale *)(this + 8));
  return;
}

