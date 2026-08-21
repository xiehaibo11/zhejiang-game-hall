
/* v8::internal::SafepointTable::PrintBits(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, unsigned char, int) */

void v8::internal::SafepointTable::PrintBits(basic_ostream *param_1,uchar param_2,int param_3)

{
  char *pcVar1;
  uint uVar2;
  
  if (0 < param_3) {
    uVar2 = 0;
    do {
      pcVar1 = "0";
      if ((param_2 >> (ulong)(uVar2 & 0x1f) & 1) != 0) {
        pcVar1 = "1";
      }
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar1,1);
      uVar2 = uVar2 + 1;
    } while (param_3 != uVar2);
  }
  return;
}

