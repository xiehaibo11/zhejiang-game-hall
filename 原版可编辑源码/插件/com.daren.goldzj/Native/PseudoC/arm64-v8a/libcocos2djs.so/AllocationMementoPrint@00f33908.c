
/* v8::internal::AllocationMemento::AllocationMementoPrint(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall
v8::internal::AllocationMemento::AllocationMementoPrint
          (AllocationMemento *this,basic_ostream *param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong local_28;
  
  HeapObject::PrintHeader((HeapObject *)this,param_1,"AllocationMemento");
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (param_1,"\n - allocation site: ",0x15);
  uVar1 = *(uint *)(*(ulong *)this + 3);
  if ((((uVar1 & 1) != 0) &&
      (uVar2 = *(ulong *)this & 0xffffffff00000000, local_28 = uVar2 | uVar1,
      *(short *)((uVar2 | 7) + (ulong)*(uint *)(local_28 - 1)) == 0x55)) &&
     ((*(uint *)(local_28 + 0xf) & 0x1c000000) != 0x10000000)) {
    AllocationSite::AllocationSitePrint((AllocationSite *)&local_28,param_1);
    return;
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (param_1,"<invalid>\n",10);
  return;
}

