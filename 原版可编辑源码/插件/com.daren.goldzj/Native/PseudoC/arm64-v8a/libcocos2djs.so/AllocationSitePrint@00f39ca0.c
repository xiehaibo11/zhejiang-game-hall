
/* v8::internal::AllocationSite::AllocationSitePrint(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall
v8::internal::AllocationSite::AllocationSitePrint(AllocationSite *this,basic_ostream *param_1)

{
  uint uVar1;
  basic_ostream *pbVar2;
  char *pcVar3;
  size_t sVar4;
  ulong uVar5;
  ulong local_18;
  
  HeapObject::PrintHeader((HeapObject *)this,param_1,"AllocationSite");
  if (*(int *)(*(ulong *)this - 1) == *(int *)((*(ulong *)this & 0xffffffff00000000) + 0xdd0)) {
    pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"\n - weak_next: ",0xf);
    local_18 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0x17);
    internal::operator<<(pbVar2,(Brief *)&local_18);
  }
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - dependent code: ",0x14);
  local_18 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0xb);
  internal::operator<<(pbVar2,(Brief *)&local_18);
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - nested site: ",0x11);
  local_18 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 7);
  internal::operator<<(pbVar2,(Brief *)&local_18);
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - memento found count: ",0x19);
  local_18 = (ulong)(uint)(*(int *)(*(long *)this + 0xf) << 1) & 0x7fffffe;
  internal::operator<<(pbVar2,(Brief *)&local_18);
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - memento create count: ",0x1a);
  local_18 = (long)*(int *)(*(long *)this + 0x13) << 1;
  internal::operator<<(pbVar2,(Brief *)&local_18);
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - pretenure decision: ",0x18);
  local_18 = (ulong)(*(uint *)(*(long *)this + 0xf) >> 0x19) & 0xe;
  internal::operator<<(pbVar2,(Brief *)&local_18);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (param_1,"\n - transition_info: ",0x15);
  uVar1 = *(uint *)(*(ulong *)this + 3);
  if ((uVar1 & 1) == 0) {
    pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"Array allocation with ElementsKind ",0x23);
    pcVar3 = (char *)ElementsKindToString(uVar1 >> 1 & 0x1f);
    sVar4 = strlen(pcVar3);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,pcVar3,sVar4);
  }
  else {
    uVar5 = *(ulong *)this & 0xffffffff00000000;
    if (*(short *)((uVar5 | 7) + (ulong)*(uint *)((uVar5 | uVar1) - 1)) == 0x423) {
      pcVar3 = "Array literal with boilerplate ";
      uVar5 = 0x1f;
    }
    else {
      pcVar3 = "Object literal with boilerplate ";
      uVar5 = 0x20;
    }
    pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,pcVar3,uVar5);
    local_18 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 3);
    internal::operator<<(pbVar2,(Brief *)&local_18);
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\n",1);
  return;
}

