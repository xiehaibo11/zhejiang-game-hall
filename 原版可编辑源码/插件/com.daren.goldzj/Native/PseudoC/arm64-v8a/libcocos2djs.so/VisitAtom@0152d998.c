
/* v8::internal::RegExpUnparser::VisitAtom(v8::internal::RegExpAtom*, void*) */

undefined8 v8::internal::RegExpUnparser::VisitAtom(RegExpAtom *param_1,void *param_2)

{
  basic_ostream *pbVar1;
  undefined2 *puVar2;
  ulong uVar3;
  undefined2 local_18 [4];
  
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (*(basic_ostream **)(param_1 + 8),"\'",1);
  pbVar1 = *(basic_ostream **)(param_1 + 8);
  if (0 < (int)*(ulong *)((long)param_2 + 0x10)) {
    uVar3 = *(ulong *)((long)param_2 + 0x10) & 0xffffffff;
    puVar2 = *(undefined2 **)((long)param_2 + 8);
    do {
      local_18[0] = *puVar2;
      internal::operator<<(pbVar1,(AsUC16 *)local_18);
      pbVar1 = *(basic_ostream **)(param_1 + 8);
      uVar3 = uVar3 - 1;
      puVar2 = puVar2 + 1;
    } while (uVar3 != 0);
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,"\'",1);
  return 0;
}

