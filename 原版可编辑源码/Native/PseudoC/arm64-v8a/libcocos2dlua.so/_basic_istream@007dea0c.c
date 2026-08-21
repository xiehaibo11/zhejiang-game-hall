
/* virtual thunk to std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char>
   >::~basic_istream() */

void __thiscall
std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::~basic_istream
          (basic_istream<char,std::__ndk1::char_traits<char>> *this)

{
  ios_base::~ios_base((ios_base *)(this + *(long *)(*(long *)this + -0x18) + 0x10));
  return;
}

