
/* v8::internal::HandlerTable::HandlerTableReturnPrint(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall
v8::internal::HandlerTable::HandlerTableReturnPrint(HandlerTable *this,basic_ostream *param_1)

{
  int iVar1;
  uint uVar2;
  basic_ostream *pbVar3;
  long lVar4;
  long lVar5;
  
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (param_1,"  offset   handler\n",0x13);
  if (0 < *(int *)this) {
    lVar4 = 0;
    lVar5 = 0;
    do {
      iVar1 = *(int *)(lVar4 + *(long *)(this + 8));
      uVar2 = ((int *)(lVar4 + *(long *)(this + 8)))[1];
      *(uint *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 8) =
           *(uint *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 8) & 0xffffffb5 | 8;
      pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,"    ",4);
      *(undefined8 *)(pbVar3 + *(long *)(*(long *)pbVar3 + -0x18) + 0x18) = 4;
      pbVar3 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,iVar1);
      pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar3,"  ->  ",6);
      *(undefined8 *)(pbVar3 + *(long *)(*(long *)pbVar3 + -0x18) + 0x18) = 4;
      pbVar3 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,uVar2 >> 3);
      *(uint *)(pbVar3 + *(long *)(*(long *)pbVar3 + -0x18) + 8) =
           *(uint *)(pbVar3 + *(long *)(*(long *)pbVar3 + -0x18) + 8) & 0xffffffb5 | 2;
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,"\n",1);
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 8;
    } while (lVar5 < *(int *)this);
  }
  return;
}

