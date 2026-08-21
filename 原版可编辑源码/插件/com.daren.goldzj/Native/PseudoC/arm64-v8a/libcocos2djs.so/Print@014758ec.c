
/* v8::base::RegionAllocator::Print(std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char>
   >&) const */

void __thiscall v8::base::RegionAllocator::Print(RegionAllocator *this,basic_ostream *param_1)

{
  undefined4 uVar1;
  bool bVar2;
  basic_ostream *pbVar3;
  RegionAllocator *pRVar4;
  long lVar5;
  Region *pRVar6;
  RegionAllocator *pRVar7;
  
  uVar1 = *(undefined4 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 8);
  *(undefined4 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 8) = 0x208;
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"RegionAllocator: [",0x12);
  pbVar3 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,*(ulong *)this);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,", ",2)
  ;
  pbVar3 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,
                      *(long *)(this + 8) + *(long *)this);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,")",1);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\nsize: ",7);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,*(ulong *)(this + 8));
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\nfree_size: ",0xc);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,*(ulong *)(this + 0x28));
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\npage_size: ",0xc);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,*(ulong *)(this + 0x30));
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (param_1,"\nall regions: ",0xe);
  pRVar7 = *(RegionAllocator **)(this + 0x38);
  while (pRVar7 != this + 0x40) {
    pRVar6 = *(Region **)(pRVar7 + 0x20);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\n  ",3);
    Region::Print(pRVar6,param_1);
    pRVar4 = *(RegionAllocator **)(pRVar7 + 8);
    if (*(RegionAllocator **)(pRVar7 + 8) == (RegionAllocator *)0x0) {
      pRVar4 = pRVar7 + 0x10;
      bVar2 = *(RegionAllocator **)*(RegionAllocator **)pRVar4 != pRVar7;
      pRVar7 = *(RegionAllocator **)pRVar4;
      if (bVar2) {
        do {
          lVar5 = *(long *)pRVar4;
          pRVar4 = (RegionAllocator *)(lVar5 + 0x10);
          pRVar7 = *(RegionAllocator **)pRVar4;
        } while (*(long *)pRVar7 != lVar5);
      }
    }
    else {
      do {
        pRVar7 = pRVar4;
        pRVar4 = *(RegionAllocator **)pRVar7;
      } while (*(RegionAllocator **)pRVar7 != (RegionAllocator *)0x0);
    }
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (param_1,"\nfree regions: ",0xf);
  pRVar7 = *(RegionAllocator **)(this + 0x50);
  while (pRVar7 != this + 0x58) {
    pRVar6 = *(Region **)(pRVar7 + 0x20);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\n  ",3);
    Region::Print(pRVar6,param_1);
    pRVar4 = *(RegionAllocator **)(pRVar7 + 8);
    if (*(RegionAllocator **)(pRVar7 + 8) == (RegionAllocator *)0x0) {
      pRVar4 = pRVar7 + 0x10;
      bVar2 = *(RegionAllocator **)*(RegionAllocator **)pRVar4 != pRVar7;
      pRVar7 = *(RegionAllocator **)pRVar4;
      if (bVar2) {
        do {
          lVar5 = *(long *)pRVar4;
          pRVar4 = (RegionAllocator *)(lVar5 + 0x10);
          pRVar7 = *(RegionAllocator **)pRVar4;
        } while (*(long *)pRVar7 != lVar5);
      }
    }
    else {
      do {
        pRVar7 = pRVar4;
        pRVar4 = *(RegionAllocator **)pRVar7;
      } while (*(RegionAllocator **)pRVar7 != (RegionAllocator *)0x0);
    }
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\n",1);
  *(undefined4 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 8) = uVar1;
  return;
}

