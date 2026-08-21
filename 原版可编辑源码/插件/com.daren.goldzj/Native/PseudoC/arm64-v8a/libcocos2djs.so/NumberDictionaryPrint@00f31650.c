
/* v8::internal::NumberDictionary::NumberDictionaryPrint(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall
v8::internal::NumberDictionary::NumberDictionaryPrint(NumberDictionary *this,basic_ostream *param_1)

{
  uint uVar1;
  basic_ostream *pbVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  
  uVar4 = *(ulong *)this;
  local_68 = uVar4;
  HeapObject::PrintHeader((HeapObject *)&local_68,param_1,"NumberDictionary");
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - length: ",0xc);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,*(int *)(uVar4 + 3) >> 1);
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - elements: ",0xe);
  piVar5 = (int *)(uVar4 + 7);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,*piVar5 >> 1);
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - deleted: ",0xd);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,*(int *)(uVar4 + 0xb) >> 1
            );
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - capacity: ",0xe);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,*(int *)(uVar4 + 0xf) >> 1
            );
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (param_1,"\n - elements: {",0xf);
  uVar1 = *(uint *)(uVar4 + 0xf);
  if ((int)uVar1 >> 1 != 0) {
    lVar3 = 0;
    lVar6 = 0x1400000000;
    lVar7 = 0x1000000000;
    do {
      local_70 = CONCAT71(local_70._1_7_,10);
      pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,(char *)&local_70,1);
      *(undefined8 *)(pbVar2 + *(long *)(*(long *)pbVar2 + -0x18) + 0x18) = 0xc;
      pbVar2 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,(int)lVar3);
      pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar2,": ",2);
      local_70 = uVar4 & 0xffffffff00000000 | (ulong)*(uint *)((long)piVar5 + (lVar7 >> 0x20));
      pbVar2 = (basic_ostream *)internal::operator<<(pbVar2,(Brief *)&local_70);
      pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar2," -> ",4);
      local_78 = uVar4 & 0xffffffff00000000 | (ulong)*(uint *)((long)piVar5 + (lVar6 >> 0x20));
      internal::operator<<(pbVar2,(Brief *)&local_78);
      lVar3 = lVar3 + 1;
      lVar6 = lVar6 + 0xc00000000;
      lVar7 = lVar7 + 0xc00000000;
    } while ((long)((ulong)uVar1 << 0x20) >> 0x21 != lVar3);
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\n }\n",4);
  return;
}

