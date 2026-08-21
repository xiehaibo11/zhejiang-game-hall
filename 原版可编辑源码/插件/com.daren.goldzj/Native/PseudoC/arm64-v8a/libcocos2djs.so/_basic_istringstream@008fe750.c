
/* std::__ndk1::basic_istringstream<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >::~basic_istringstream() */

void __thiscall
std::__ndk1::basic_istringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
~basic_istringstream
          (basic_istringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
           *this)

{
  *(undefined ***)this = &PTR__basic_istringstream_01c68380;
  *(undefined ***)(this + 0x78) = &PTR__basic_istringstream_01c683a8;
  *(undefined ***)(this + 0x10) = &PTR__basic_stringbuf_01c67100;
  if (((byte)this[0x50] & 1) != 0) {
    operator_delete(*(void **)(this + 0x60));
  }
  *(undefined ***)(this + 0x10) = &PTR__basic_streambuf_01c671a8;
  locale::~locale((locale *)(this + 0x18));
  ios_base::~ios_base((ios_base *)(this + 0x78));
  operator_delete(this);
  return;
}

