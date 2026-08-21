
/* v8::internal::HandlerTable::HandlerTableRangePrint(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall
v8::internal::HandlerTable::HandlerTableRangePrint(HandlerTable *this,basic_ostream *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  basic_ostream *pbVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (param_1,"   from   to       hdlr (prediction,   data)\n",0x2d);
  if (0 < *(int *)this) {
    uVar7 = 0;
    lVar8 = 0;
    do {
      lVar6 = *(long *)(this + 8);
      uVar1 = *(uint *)(lVar6 + (ulong)(uVar7 + 2) * 4);
      iVar2 = *(int *)(lVar6 + (ulong)uVar7 * 4);
      iVar3 = *(int *)(lVar6 + (ulong)(uVar7 + 1) * 4);
      iVar4 = *(int *)(lVar6 + (ulong)(uVar7 + 3) * 4);
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,"  (",3);
      *(undefined8 *)(pbVar5 + *(long *)(*(long *)pbVar5 + -0x18) + 0x18) = 4;
      pbVar5 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,iVar2);
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar5,",",1);
      *(undefined8 *)(pbVar5 + *(long *)(*(long *)pbVar5 + -0x18) + 0x18) = 4;
      pbVar5 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,iVar3);
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar5,")  ->  ",7);
      *(undefined8 *)(pbVar5 + *(long *)(*(long *)pbVar5 + -0x18) + 0x18) = 4;
      pbVar5 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,uVar1 >> 3);
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar5," (prediction=",0xd);
      pbVar5 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,uVar1 & 7);
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar5,", data=",7);
      pbVar5 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,iVar4);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,")\n",2);
      lVar8 = lVar8 + 1;
      uVar7 = uVar7 + 4;
    } while (lVar8 < *(int *)this);
  }
  return;
}

