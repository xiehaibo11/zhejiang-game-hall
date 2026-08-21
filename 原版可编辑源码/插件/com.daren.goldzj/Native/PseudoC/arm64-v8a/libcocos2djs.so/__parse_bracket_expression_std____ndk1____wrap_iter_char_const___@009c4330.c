
/* std::__ndk1::__wrap_iter<char const*> std::__ndk1::basic_regex<char,
   std::__ndk1::regex_traits<char> >::__parse_bracket_expression<std::__ndk1::__wrap_iter<char
   const*> >(std::__ndk1::__wrap_iter<char const*>, std::__ndk1::__wrap_iter<char const*>) */

char * __thiscall
std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::
__parse_bracket_expression<std::__ndk1::__wrap_iter<char_const*>>
          (basic_regex<char,std::__ndk1::regex_traits<char>> *this,char *param_2,char *param_3)

{
  char cVar1;
  void *pvVar2;
  char *pcVar3;
  char *pcVar4;
  
  if ((param_2 == param_3) || (*param_2 != '[')) {
    return param_2;
  }
  if (param_2 + 1 != param_3) {
    cVar1 = param_2[1];
    pcVar4 = param_2 + 2;
    if (cVar1 != '^') {
      pcVar4 = param_2 + 1;
    }
    pvVar2 = operator_new(0xa8);
    FUN_0086649c(pvVar2,this,*(undefined8 *)(*(long *)(this + 0x38) + 8),cVar1 == '^',
                 *(uint *)(this + 0x18) & 1,*(uint *)(this + 0x18) >> 3 & 1);
    *(void **)(*(long *)(this + 0x38) + 8) = pvVar2;
    *(void **)(this + 0x38) = pvVar2;
    if (pcVar4 != param_3) {
      if (((*(ushort *)(this + 0x18) & 0x1f0) != 0) && (*pcVar4 == ']')) {
        FUN_008662f0(pvVar2,0x5d);
        pcVar4 = pcVar4 + 1;
      }
      pcVar3 = pcVar4;
      if (pcVar4 != param_3) {
        do {
          pcVar4 = pcVar3;
          pcVar3 = (char *)__parse_expression_term<std::__ndk1::__wrap_iter<char_const*>>
                                     (this,pcVar4,param_3,pvVar2);
        } while (pcVar3 != pcVar4);
      }
      if (pcVar4 != param_3) {
        if (*pcVar4 == '-') {
          FUN_008662f0(pvVar2,0x2d);
          pcVar4 = pcVar4 + 1;
        }
        if ((pcVar4 != param_3) && (*pcVar4 == ']')) {
          return pcVar4 + 1;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00867568();
}

