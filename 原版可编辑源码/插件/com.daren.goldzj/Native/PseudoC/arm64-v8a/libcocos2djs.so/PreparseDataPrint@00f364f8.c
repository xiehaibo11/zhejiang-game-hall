
/* v8::internal::PreparseData::PreparseDataPrint(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall
v8::internal::PreparseData::PreparseDataPrint(PreparseData *this,basic_ostream *param_1)

{
  basic_ostream *pbVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  ulong local_48;
  
  HeapObject::PrintHeader((HeapObject *)this,param_1,"PreparseData");
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - data_length: ",0x11);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar1,
             *(int *)(*(long *)this + 3));
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - children_length: ",0x15);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar1,
             *(int *)(*(long *)this + 7));
  lVar2 = *(long *)this;
  if (0 < *(int *)(lVar2 + 3)) {
    pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"\n - data-start: ",0x10);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar1,*(long *)this + 0xb);
    lVar2 = *(long *)this;
  }
  if (0 < *(int *)(lVar2 + 7)) {
    pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"\n - children-start: ",0x14);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar1,
               *(int *)(*(long *)this + 3) + 0xfU & 0xfffffffc);
    if (0 < *(int *)(*(long *)this + 7)) {
      iVar5 = 0;
      iVar4 = 0;
      do {
        pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (param_1,"\n - [",5);
        pbVar1 = (basic_ostream *)
                 std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                           ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar1,iVar4);
        pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar1,"]: ",3);
        uVar3 = *(ulong *)this;
        local_48 = uVar3 & 0xffffffff00000000 |
                   (ulong)*(uint *)(uVar3 + (long)(int)(iVar5 + (*(int *)(uVar3 + 3) + 0xfU &
                                                                0xfffffffc)) + -1);
        internal::operator<<(pbVar1,(Brief *)&local_48);
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 4;
      } while (iVar4 < *(int *)(*(long *)this + 7));
    }
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\n",1);
  return;
}

