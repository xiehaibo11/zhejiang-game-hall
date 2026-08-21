
/* v8::internal::LayoutDescriptor::ShortPrint(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall
v8::internal::LayoutDescriptor::ShortPrint(LayoutDescriptor *this,basic_ostream *param_1)

{
  void *local_18;
  
  local_18 = *(void **)this;
  if (((ulong)local_18 & 1) == 0) {
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,local_18);
    return;
  }
  internal::operator<<(param_1,(Brief *)&local_18);
  return;
}

