
/* v8::internal::HeapNumber::HeapNumberShortPrint(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall
v8::internal::HeapNumber::HeapNumberShortPrint(HeapNumber *this,basic_ostream *param_1)

{
  basic_ostream *pbVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = *(double *)(*(long *)this + 3);
  if (NAN(dVar2)) {
    dVar3 = 0.0;
  }
  else {
    dVar3 = dVar2;
    if (((dVar2 != 0.0) && (ABS(dVar2) != INFINITY)) && (!NAN(ABS(dVar2)))) {
      dVar3 = (double)(long)dVar2;
      if (dVar2 < 0.0) {
        dVar3 = (double)(long)dVar2;
      }
    }
  }
  if (((dVar2 <= 9007199254740991.0) && (-9007199254740992.0 <= dVar2)) && (dVar2 == dVar3)) {
    pbVar1 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,(long)dVar2);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,".0",2);
    return;
  }
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,dVar2);
  return;
}

