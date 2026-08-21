
/* v8::internal::DescriptorArray::DescriptorArrayPrint(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall
v8::internal::DescriptorArray::DescriptorArrayPrint(DescriptorArray *this,basic_ostream *param_1)

{
  int iVar1;
  ushort uVar2;
  basic_ostream *pbVar3;
  ulong uVar4;
  ulong local_18;
  
  HeapObject::PrintHeader((HeapObject *)this,param_1,"DescriptorArray");
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (param_1,"\n - enum_cache: ",0x10);
  uVar4 = *(ulong *)this & 0xffffffff00000000;
  iVar1 = *(int *)((uVar4 | *(uint *)((uVar4 | *(uint *)(*(ulong *)this + 0xb)) + 3)) + 3) >> 1;
  if (iVar1 == 0) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"empty",5);
  }
  else {
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,iVar1);
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"\n   - keys: ",0xc);
    local_18 = *(ulong *)this & 0xffffffff00000000;
    local_18 = local_18 | *(uint *)((local_18 | *(uint *)(*(ulong *)this + 0xb)) + 3);
    internal::operator<<(pbVar3,(Brief *)&local_18);
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"\n   - indices: ",0xf);
    local_18 = *(ulong *)this & 0xffffffff00000000;
    local_18 = local_18 | *(uint *)((local_18 | *(uint *)(*(ulong *)this + 0xb)) + 7);
    internal::operator<<(pbVar3,(Brief *)&local_18);
  }
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - nof slack descriptors: ",0x1b);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,
             *(short *)(*(long *)this + 3) - *(short *)(*(long *)this + 5));
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - nof descriptors: ",0x15);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,
             *(short *)(*(long *)this + 5));
  uVar2 = *(ushort *)(*(long *)this + 7);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - raw marked descriptors: mc epoch ",0x25);
  pbVar3 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,uVar2 & 3);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar3,", marked ",9);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,uVar2 >> 2);
  PrintDescriptors(this,param_1);
  return;
}

