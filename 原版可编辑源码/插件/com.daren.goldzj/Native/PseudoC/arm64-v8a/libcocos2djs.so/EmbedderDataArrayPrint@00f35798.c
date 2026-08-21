
/* v8::internal::EmbedderDataArray::EmbedderDataArrayPrint(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall
v8::internal::EmbedderDataArray::EmbedderDataArrayPrint
          (EmbedderDataArray *this,basic_ostream *param_1)

{
  uint *puVar1;
  uint uVar2;
  basic_ostream *pbVar3;
  long lVar4;
  void *pvVar5;
  ulong local_48;
  
  HeapObject::PrintHeader((HeapObject *)this,param_1,"EmbedderDataArray");
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - length: ",0xc);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,
             *(int *)(*(long *)this + 3) >> 1);
  lVar4 = *(long *)this;
  uVar2 = *(uint *)(lVar4 + 3);
  for (puVar1 = (uint *)(lVar4 + 7);
      puVar1 < (uint *)(lVar4 + (int)((uVar2 & 0x3ffffffe) * 4 + 8) + -1); puVar1 = puVar1 + 2) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\n    ",5);
    local_48 = (ulong)puVar1 & 0xffffffff00000000 | (ulong)*puVar1;
    internal::operator<<(param_1,(Brief *)&local_48);
    pvVar5 = *(void **)puVar1;
    if (((ulong)pvVar5 & 1) == 0) {
      pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,", aligned pointer: ",0x13);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,pvVar5);
    }
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\n",1);
  return;
}

