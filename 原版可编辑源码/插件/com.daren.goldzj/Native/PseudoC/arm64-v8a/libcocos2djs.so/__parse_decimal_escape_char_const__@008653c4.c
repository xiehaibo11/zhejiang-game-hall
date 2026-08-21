
/* char const* std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char>
   >::__parse_decimal_escape<char const*>(char const*, char const*) */

char * __thiscall
std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::__parse_decimal_escape<char_const*>
          (basic_regex<char,std::__ndk1::regex_traits<char>> *this,char *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  
  if (param_1 != param_2) {
    uVar2 = (int)*param_1 - 0x30;
    if (uVar2 == 0) {
      __push_char(this,'\0');
      return param_1 + 1;
    }
    if (8 < (int)*param_1 - 0x31U) {
      return param_1;
    }
    pcVar3 = param_1 + 1;
    param_1 = param_2;
    if (pcVar3 != param_2) {
      do {
        cVar1 = *pcVar3;
        param_1 = pcVar3;
        if (9 < (int)cVar1 - 0x30U) break;
        if (0x19999998 < uVar2) goto LAB_0086547c;
        pcVar3 = pcVar3 + 1;
        uVar2 = ((int)cVar1 + uVar2 * 10) - 0x30;
        param_1 = param_2;
      } while (param_2 != pcVar3);
      if (uVar2 == 0) goto LAB_0086547c;
    }
    if (*(uint *)(this + 0x1c) < uVar2) {
LAB_0086547c:
                    /* WARNING: Subroutine does not return */
      FUN_00865b64();
    }
    __push_back_ref(this,uVar2);
  }
  return param_1;
}

