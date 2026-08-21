
/* std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >::~basic_stringstream() */

void __thiscall
std::__ndk1::basic_stringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
~basic_stringstream(basic_stringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                    *this)

{
  *(undefined ***)this = &PTR__basic_stringstream_01c66f88;
  *(undefined ***)(this + 0x80) = &PTR__basic_stringstream_01c66fd8;
  *(undefined ***)(this + 0x10) = &PTR__basic_stringstream_01c66fb0;
  *(undefined ***)(this + 0x18) = &PTR__basic_stringbuf_01c67100;
  if (((byte)this[0x58] & 1) != 0) {
    operator_delete(*(void **)(this + 0x68));
  }
  *(undefined ***)(this + 0x18) = &PTR__basic_streambuf_01c671a8;
  locale::~locale((locale *)(this + 0x20));
  ios_base::~ios_base((ios_base *)(this + 0x80));
  return;
}

