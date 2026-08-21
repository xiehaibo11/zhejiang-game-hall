
/* v8::internal::RegExpUnparser::VisitText(v8::internal::RegExpText*, void*) */

undefined8 __thiscall
v8::internal::RegExpUnparser::VisitText(RegExpUnparser *this,RegExpText *param_1,void *param_2)

{
  basic_ostream *pbVar1;
  long lVar2;
  long lVar3;
  
  if (*(int *)(param_1 + 0x14) == 1) {
    (**(code **)(**(long **)(*(long *)(param_1 + 8) + 8) + 0x10))
              (*(long **)(*(long *)(param_1 + 8) + 8),this,param_2);
  }
  else {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (*(basic_ostream **)(this + 8),"(!",2);
    pbVar1 = *(basic_ostream **)(this + 8);
    if (0 < *(int *)(param_1 + 0x14)) {
      lVar2 = 0;
      lVar3 = 8;
      do {
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1," ",1);
        (**(code **)(**(long **)(*(long *)(param_1 + 8) + lVar3) + 0x10))
                  (*(long **)(*(long *)(param_1 + 8) + lVar3),this,param_2);
        pbVar1 = *(basic_ostream **)(this + 8);
        lVar2 = lVar2 + 1;
        lVar3 = lVar3 + 0x10;
      } while (lVar2 < *(int *)(param_1 + 0x14));
    }
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,")",1);
  }
  return 0;
}

