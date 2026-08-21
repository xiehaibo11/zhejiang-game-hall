
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::Node const&) */

basic_ostream * v8::internal::compiler::operator<<(basic_ostream *param_1,Node *param_2)

{
  Node *pNVar1;
  uint uVar2;
  basic_ostream *pbVar3;
  uint uVar4;
  Node *pNVar5;
  long lVar6;
  
  pbVar3 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,
                      *(uint *)(param_2 + 0x14) & 0xffffff);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,": ",2)
  ;
  operator<<(pbVar3,*(Operator **)param_2);
  if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
    if (*(int *)(*(long *)(param_2 + 0x20) + 8) < 1) {
      return param_1;
    }
  }
  else if ((*(uint *)(param_2 + 0x14) >> 0x18 & 0xf) == 0) {
    return param_1;
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"(",1);
  lVar6 = 0;
  pNVar1 = param_2 + 0x20;
  while( true ) {
    uVar4 = *(uint *)(param_2 + 0x14);
    if ((~uVar4 & 0xf000000) == 0) {
      uVar2 = *(uint *)(*(long *)pNVar1 + 8);
    }
    else {
      uVar2 = uVar4 >> 0x18 & 0xf;
    }
    if ((int)uVar2 <= lVar6) break;
    if (lVar6 != 0) {
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,", ",2);
      uVar4 = *(uint *)(param_2 + 0x14);
    }
    pNVar5 = pNVar1;
    if ((uVar4 & 0xf000000) == 0xf000000) {
      pNVar5 = (Node *)(*(long *)pNVar1 + 0x10);
    }
    if (*(long *)(pNVar5 + lVar6 * 8) == 0) {
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"null",4);
      lVar6 = lVar6 + 1;
    }
    else {
      pNVar5 = pNVar1;
      if ((uVar4 & 0xf000000) == 0xf000000) {
        pNVar5 = (Node *)(*(long *)pNVar1 + 0x10);
      }
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,
                 *(uint *)(*(long *)(pNVar5 + lVar6 * 8) + 0x14) & 0xffffff);
      lVar6 = lVar6 + 1;
    }
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,")",1);
  return param_1;
}

