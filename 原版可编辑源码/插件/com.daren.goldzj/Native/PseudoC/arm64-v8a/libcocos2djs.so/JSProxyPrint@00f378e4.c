
/* v8::internal::JSProxy::JSProxyPrint(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall v8::internal::JSProxy::JSProxyPrint(JSProxy *this,basic_ostream *param_1)

{
  ulong local_28;
  
  HeapObject::PrintHeader((HeapObject *)this,param_1,"JSProxy");
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (param_1,"\n - target: ",0xc);
  local_28 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 7);
  Object::ShortPrint((Object *)&local_28,param_1);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (param_1,"\n - handler: ",0xd);
  local_28 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0xb);
  Object::ShortPrint((Object *)&local_28,param_1);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\n",1);
  return;
}

