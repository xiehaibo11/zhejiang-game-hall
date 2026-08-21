
/* v8::internal::HeapObject::PrintHeader(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, char const*) */

void __thiscall
v8::internal::HeapObject::PrintHeader(HeapObject *this,basic_ostream *param_1,char *param_2)

{
  basic_ostream *pbVar1;
  size_t sVar2;
  ulong uVar3;
  char *pcVar4;
  ulong local_18;
  
  pbVar1 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,*(void **)this);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,": [",3);
  if (param_2 == (char *)0x0) {
    internal::operator<<
              (param_1,*(undefined2 *)
                        ((*(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this - 1)
                         ) + 7));
  }
  else {
    sVar2 = strlen(param_2);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,param_2,sVar2);
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"]",1);
  uVar3 = ReadOnlyHeap::Contains(*(undefined8 *)this);
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)this;
    if (((uVar3 & 1) == 0) ||
       (*(long *)(uVar3 & 0xffffffff00000000 | 0x8940) !=
        *(long *)(uVar3 & 0xfffffffffffc0000 | 0x58))) goto LAB_00f30fe0;
    pcVar4 = " in OldSpace";
    uVar3 = 0xc;
  }
  else {
    pcVar4 = " in ReadOnlySpace";
    uVar3 = 0x11;
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar4,uVar3);
LAB_00f30fe0:
  if (*(short *)((*(ulong *)this & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*(ulong *)this - 1))
      != 0xa2) {
    pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"\n - map: ",9);
    local_18 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this - 1);
    internal::operator<<(pbVar1,(Brief *)&local_18);
  }
  return;
}

