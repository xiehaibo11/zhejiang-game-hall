
/* std::__ndk1::basic_ofstream<char, std::__ndk1::char_traits<char> >::~basic_ofstream() */

void __thiscall
std::__ndk1::basic_ofstream<char,std::__ndk1::char_traits<char>>::~basic_ofstream
          (basic_ofstream<char,std::__ndk1::char_traits<char>> *this)

{
  *(undefined ***)this = &PTR__basic_ofstream_016cddd0;
  *(undefined ***)(this + 0xb0) = &PTR__basic_ofstream_016cddf8;
  basic_filebuf<char,std::__ndk1::char_traits<char>>::~basic_filebuf
            ((basic_filebuf<char,std::__ndk1::char_traits<char>> *)(this + 8));
  ios_base::~ios_base((ios_base *)(this + 0xb0));
  operator_delete(this);
  return;
}

