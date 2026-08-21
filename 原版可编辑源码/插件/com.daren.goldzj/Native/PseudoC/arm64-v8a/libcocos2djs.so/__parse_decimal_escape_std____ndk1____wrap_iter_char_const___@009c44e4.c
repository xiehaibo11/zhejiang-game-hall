
/* std::__ndk1::__wrap_iter<char const*> std::__ndk1::basic_regex<char,
   std::__ndk1::regex_traits<char> >::__parse_decimal_escape<std::__ndk1::__wrap_iter<char const*>
   >(std::__ndk1::__wrap_iter<char const*>, std::__ndk1::__wrap_iter<char const*>) */

byte * __thiscall
std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::
__parse_decimal_escape<std::__ndk1::__wrap_iter<char_const*>>
          (basic_regex<char,std::__ndk1::regex_traits<char>> *this,byte *param_2,byte *param_3)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  
  pbVar5 = param_2;
  if (param_2 != param_3) {
    uVar2 = (int)(char)*param_2 - 0x30;
    if (uVar2 == 0) {
      __push_char(this,'\0');
      return param_2 + 1;
    }
    if (8 < (int)(char)*param_2 - 0x31U) {
      return param_2;
    }
    pbVar5 = param_2 + 1;
    if (pbVar5 != param_3) {
      uVar4 = (uint)*pbVar5;
      if (*pbVar5 - 0x30 < 10) {
                    /* try { // try from 009c4540 to 00ac4593 has its CatchHandler @ 009c4540
                       catch() { ... } // from try @ 009c4540 with catch @ 009c4540
                       catch() { ... } // from try @ 009c46ec with catch @ 009c4540 */
        pbVar1 = param_2 + 2;
        do {
          pbVar3 = pbVar1;
          if (0x19999998 < uVar2) goto LAB_009c45bc;
          uVar2 = (uVar2 * 10 + (int)(char)uVar4) - 0x30;
          pbVar5 = param_3;
          if (param_3 == pbVar3) break;
          uVar4 = (uint)*pbVar3;
          pbVar1 = pbVar3 + 1;
          pbVar5 = pbVar3;
        } while (uVar4 - 0x30 < 10);
      }
      if (uVar2 == 0) goto LAB_009c45bc;
    }
    if (*(uint *)(this + 0x1c) < uVar2) {
LAB_009c45bc:
                    /* WARNING: Subroutine does not return */
      FUN_00865b64();
    }
    __push_back_ref(this,uVar2);
  }
                    /* try { // try from 009c45b4 to 00ac45bf has its CatchHandler @ 009c4764 */
  return pbVar5;
}

