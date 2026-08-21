
/* virtual thunk to std::__ndk1::basic_ofstream<char, std::__ndk1::char_traits<char>
   >::~basic_ofstream() */

void __thiscall
std::__ndk1::basic_ofstream<char,std::__ndk1::char_traits<char>>::~basic_ofstream
          (basic_ofstream<char,std::__ndk1::char_traits<char>> *this)

{
  basic_ofstream<char,std::__ndk1::char_traits<char>> *pbVar1;
  
  pbVar1 = this + *(long *)(*(long *)this + -0x18);
  *(undefined ***)pbVar1 = &PTR__basic_ofstream_01c6e5b8;
  *(undefined ***)(pbVar1 + 0xb0) = &PTR__basic_ofstream_01c6e5e0;
  basic_filebuf<char,std::__ndk1::char_traits<char>>::~basic_filebuf
            ((basic_filebuf<char,std::__ndk1::char_traits<char>> *)(pbVar1 + 8));
  ios_base::~ios_base((ios_base *)(pbVar1 + 0xb0));
  return;
}

