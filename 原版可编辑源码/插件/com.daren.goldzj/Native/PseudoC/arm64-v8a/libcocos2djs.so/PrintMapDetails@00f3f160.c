
/* v8::internal::Map::PrintMapDetails(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall v8::internal::Map::PrintMapDetails(Map *this,basic_ostream *param_1)

{
  ulong local_28;
  
  MapPrint(this,param_1);
  local_28 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0x17);
  DescriptorArray::PrintDescriptors((DescriptorArray *)&local_28,param_1);
  return;
}

