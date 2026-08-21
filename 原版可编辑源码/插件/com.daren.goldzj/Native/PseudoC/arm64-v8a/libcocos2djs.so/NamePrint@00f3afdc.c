
/* v8::internal::Name::NamePrint(std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >&)
    */

void __thiscall v8::internal::Name::NamePrint(Name *this,basic_ostream *param_1)

{
  ulong local_18;
  
  local_18 = *(ulong *)this;
  if (*(ushort *)((local_18 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_18 - 1)) < 0x40) {
    String::StringPrint((String *)&local_18,param_1);
  }
  else {
    internal::operator<<(param_1,(Brief *)&local_18);
  }
  return;
}

