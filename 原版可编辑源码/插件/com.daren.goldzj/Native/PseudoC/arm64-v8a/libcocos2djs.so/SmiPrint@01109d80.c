
/* v8::internal::Smi::SmiPrint(std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >&)
   const */

void __thiscall v8::internal::Smi::SmiPrint(Smi *this,basic_ostream *param_1)

{
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,*(int *)this >> 1);
  return;
}

