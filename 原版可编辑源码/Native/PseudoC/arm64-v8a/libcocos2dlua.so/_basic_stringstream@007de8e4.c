
/* non-virtual thunk to std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >::~basic_stringstream() */

void __thiscall
std::__ndk1::basic_stringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
~basic_stringstream(basic_stringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                    *this)

{
  *(undefined8 *)(this + -0x10) = 0x16987e8;
  *(undefined8 *)(this + 0x70) = 0x1698838;
  *(undefined8 *)this = 0x1698810;
  *(undefined ***)(this + 8) = &PTR__basic_stringbuf_01698960;
  if (((byte)this[0x48] & 1) != 0) {
    operator_delete(*(void **)(this + 0x58));
  }
  *(undefined ***)(this + 8) = &PTR__basic_streambuf_01698a08;
  locale::~locale((locale *)(this + 0x10));
  ios_base::~ios_base((ios_base *)(this + 0x70));
  return;
}

