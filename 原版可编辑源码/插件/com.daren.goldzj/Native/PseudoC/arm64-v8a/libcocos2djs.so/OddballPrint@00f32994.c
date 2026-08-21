
/* v8::internal::Oddball::OddballPrint(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall v8::internal::Oddball::OddballPrint(Oddball *this,basic_ostream *param_1)

{
  ulong local_18;
  
  local_18 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0xb);
  Object::Print((Object *)&local_18,param_1);
  return;
}

