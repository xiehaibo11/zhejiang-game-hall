
/* v8::internal::RegExpUnparser::VisitAlternative(v8::internal::RegExpAlternative*, void*) */

undefined8 __thiscall
v8::internal::RegExpUnparser::VisitAlternative
          (RegExpUnparser *this,RegExpAlternative *param_1,void *param_2)

{
  basic_ostream *pbVar1;
  long *plVar2;
  long lVar3;
  
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (*(basic_ostream **)(this + 8),"(:",2);
  pbVar1 = *(basic_ostream **)(this + 8);
  if (0 < *(int *)(*(long *)(param_1 + 8) + 0xc)) {
    lVar3 = 0;
    do {
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1," ",1);
      plVar2 = *(long **)(**(long **)(param_1 + 8) + lVar3 * 8);
      (**(code **)(*plVar2 + 0x10))(plVar2,this,param_2);
      pbVar1 = *(basic_ostream **)(this + 8);
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(*(long *)(param_1 + 8) + 0xc));
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,")",1);
  return 0;
}

