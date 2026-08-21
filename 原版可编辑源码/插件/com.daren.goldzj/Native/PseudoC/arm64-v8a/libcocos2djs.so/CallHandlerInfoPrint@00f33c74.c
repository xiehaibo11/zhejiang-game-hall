
/* v8::internal::CallHandlerInfo::CallHandlerInfoPrint(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall
v8::internal::CallHandlerInfo::CallHandlerInfoPrint(CallHandlerInfo *this,basic_ostream *param_1)

{
  ulong uVar1;
  char *pcVar2;
  bool bVar3;
  basic_ostream *pbVar4;
  ulong local_28;
  
  HeapObject::PrintHeader((HeapObject *)this,param_1,"CallHandlerInfo");
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - callback: ",0xe);
  local_28 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 3);
  internal::operator<<(pbVar4,(Brief *)&local_28);
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - js_callback: ",0x11);
  local_28 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 7);
  internal::operator<<(pbVar4,(Brief *)&local_28);
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - data: ",10);
  local_28 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0xb);
  internal::operator<<(pbVar4,(Brief *)&local_28);
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - side_effect_free: ",0x16);
  bVar3 = *(int *)(*(ulong *)this - 1) != *(int *)((*(ulong *)this & 0xffffffff00000000) + 600);
  pcVar2 = "true";
  if (bVar3) {
    pcVar2 = "false";
  }
  uVar1 = 4;
  if (bVar3) {
    uVar1 = 5;
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar4,pcVar2,uVar1);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\n",1);
  return;
}

