
/* std::__ndk1::ios_base::Init::~Init() */

void __thiscall std::__ndk1::ios_base::Init::~Init(Init *this)

{
  basic_ostream<char,std::__ndk1::char_traits<char>>::flush
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)cout);
  basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::flush
            ((basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *)wcout);
  basic_ostream<char,std::__ndk1::char_traits<char>>::flush
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)clog);
  basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::flush
            ((basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *)wclog);
  return;
}

