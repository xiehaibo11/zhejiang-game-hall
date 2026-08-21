
/* v8::internal::EphemeronHashTable::EphemeronHashTablePrint(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall
v8::internal::EphemeronHashTable::EphemeronHashTablePrint
          (EphemeronHashTable *this,basic_ostream *param_1)

{
  uint uVar1;
  basic_ostream *pbVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  undefined8 local_70;
  ulong local_68;
  ulong local_48;
  
  uVar3 = *(ulong *)this;
  local_48 = uVar3;
  HeapObject::PrintHeader((HeapObject *)&local_48,param_1,"EphemeronHashTable");
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - length: ",0xc);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,*(int *)(uVar3 + 3) >> 1);
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - elements: ",0xe);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,*(int *)(uVar3 + 7) >> 1);
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - deleted: ",0xd);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,*(int *)(uVar3 + 0xb) >> 1
            );
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - capacity: ",0xe);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,*(int *)(uVar3 + 0xf) >> 1
            );
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (param_1,"\n - elements: {",0xf);
  uVar1 = *(uint *)(uVar3 + 0xf);
  if ((int)uVar1 >> 1 != 0) {
    lVar4 = 0;
    iVar5 = 0xc;
    do {
      local_68 = CONCAT71(local_68._1_7_,10);
      pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,(char *)&local_68,1);
      *(undefined8 *)(pbVar2 + *(long *)(*(long *)pbVar2 + -0x18) + 0x18) = 0xc;
      pbVar2 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,(int)lVar4);
      pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar2,": ",2);
      local_68 = local_48 & 0xffffffff00000000 | (ulong)*(uint *)(local_48 + (long)iVar5 + 7);
      pbVar2 = (basic_ostream *)internal::operator<<(pbVar2,(Brief *)&local_68);
      pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar2," -> ",4);
      local_70 = ObjectHashTableBase<v8::internal::EphemeronHashTable,v8::internal::EphemeronHashTableShape>
                 ::ValueAt((ObjectHashTableBase<v8::internal::EphemeronHashTable,v8::internal::EphemeronHashTableShape>
                            *)&local_48,lVar4);
      internal::operator<<(pbVar2,(Brief *)&local_70);
      lVar4 = lVar4 + 1;
      iVar5 = iVar5 + 8;
    } while ((long)((ulong)uVar1 << 0x20) >> 0x21 != lVar4);
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\n }\n",4);
  return;
}

