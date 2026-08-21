
/* v8::internal::Object::Print(std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >&)
   const */

void __thiscall v8::internal::Object::Print(Object *this,basic_ostream *param_1)

{
  basic_ostream *pbVar1;
  ulong local_18;
  
  local_18 = *(ulong *)this;
  if ((local_18 & 1) == 0) {
    pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"Smi: ",5);
    *(uint *)(pbVar1 + *(long *)(*(long *)pbVar1 + -0x18) + 8) =
         *(uint *)(pbVar1 + *(long *)(*(long *)pbVar1 + -0x18) + 8) & 0xffffffb5 | 8;
    pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar1,"0x",2);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar1,*(int *)this >> 1);
    *(uint *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 8) =
         *(uint *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 8) & 0xffffffb5 | 2;
    pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1," (",2);
    pbVar1 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar1,
                        *(int *)this >> 1);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,")\n",2);
    return;
  }
  HeapObject::HeapObjectPrint((HeapObject *)&local_18,param_1);
  return;
}

