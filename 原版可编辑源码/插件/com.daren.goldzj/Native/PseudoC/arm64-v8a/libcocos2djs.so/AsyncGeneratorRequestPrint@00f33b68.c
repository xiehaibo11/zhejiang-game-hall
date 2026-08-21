
/* v8::internal::AsyncGeneratorRequest::AsyncGeneratorRequestPrint(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall
v8::internal::AsyncGeneratorRequest::AsyncGeneratorRequestPrint
          (AsyncGeneratorRequest *this,basic_ostream *param_1)

{
  uint uVar1;
  basic_ostream *pbVar2;
  size_t sVar3;
  char *__s;
  ulong local_38;
  
  HeapObject::PrintHeader((HeapObject *)this,param_1,"AsyncGeneratorRequest");
  uVar1 = *(int *)(*(long *)this + 7) >> 1;
  if (uVar1 < 3) {
    __s = (&PTR_s__next___01ca4c00)[(int)uVar1];
  }
  else {
    __s = "Invalid!";
  }
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - resume mode: ",0x11);
  sVar3 = strlen(__s);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,__s,sVar3);
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - value: ",0xb);
  local_38 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0xb);
  internal::operator<<(pbVar2,(Brief *)&local_38);
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - next: ",10);
  local_38 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 3);
  internal::operator<<(pbVar2,(Brief *)&local_38);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\n",1);
  return;
}

