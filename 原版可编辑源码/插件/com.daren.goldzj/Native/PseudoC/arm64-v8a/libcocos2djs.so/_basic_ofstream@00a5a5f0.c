
/* std::__ndk1::basic_ofstream<char, std::__ndk1::char_traits<char> >::~basic_ofstream() */

void __thiscall
std::__ndk1::basic_ofstream<char,std::__ndk1::char_traits<char>>::~basic_ofstream
          (basic_ofstream<char,std::__ndk1::char_traits<char>> *this)

{
                    /* catch() { ... } // from try @ 00a5a4b4 with catch @ 00a5a604 */
                    /* catch() { ... } // from try @ 00a5a488 with catch @ 00a5a608 */
  *(undefined ***)this = &PTR__basic_ofstream_01c6e5b8;
  *(undefined ***)(this + 0xb0) = &PTR__basic_ofstream_01c6e5e0;
  basic_filebuf<char,std::__ndk1::char_traits<char>>::~basic_filebuf
            ((basic_filebuf<char,std::__ndk1::char_traits<char>> *)(this + 8));
  ios_base::~ios_base((ios_base *)(this + 0xb0));
  return;
}

