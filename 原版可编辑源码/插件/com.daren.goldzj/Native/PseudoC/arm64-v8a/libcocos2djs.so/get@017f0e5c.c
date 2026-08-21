
/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::get(char&) */

basic_istream<char,std::__ndk1::char_traits<char>> * __thiscall
std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get
          (basic_istream<char,std::__ndk1::char_traits<char>> *this,char *param_1)

{
  int iVar1;
  
  iVar1 = get(this);
  if (iVar1 != -1) {
    *param_1 = (char)iVar1;
  }
  return this;
}

