
/* v8::internal::BigInt::BigIntShortPrint(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall v8::internal::BigInt::BigIntShortPrint(BigInt *this,basic_ostream *param_1)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = *(long *)this;
  if ((*(uint *)(lVar2 + 3) & 1) != 0) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"-",1);
    lVar2 = *(long *)this;
  }
  uVar1 = *(uint *)(lVar2 + 3) >> 1 & 0x3fffffff;
  if (uVar1 != 1) {
    if (uVar1 == 0) {
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"0",1);
      return;
    }
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"...",3);
    lVar2 = *(long *)this;
  }
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,*(ulong *)(lVar2 + 7));
  return;
}

