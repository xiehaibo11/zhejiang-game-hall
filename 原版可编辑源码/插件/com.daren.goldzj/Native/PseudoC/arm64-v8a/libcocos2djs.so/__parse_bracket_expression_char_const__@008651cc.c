
/* char const* std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char>
   >::__parse_bracket_expression<char const*>(char const*, char const*) */

char * __thiscall
std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::
__parse_bracket_expression<char_const*>
          (basic_regex<char,std::__ndk1::regex_traits<char>> *this,char *param_1,char *param_2)

{
  char cVar1;
  __bracket_expression *p_Var2;
  char *pcVar3;
  char *pcVar4;
  
  if ((param_1 == param_2) || (*param_1 != '[')) {
    return param_1;
  }
  if (param_1 + 1 != param_2) {
    cVar1 = param_1[1];
    pcVar3 = param_1 + 2;
    if (cVar1 != '^') {
      pcVar3 = param_1 + 1;
    }
    p_Var2 = operator_new(0xa8);
    FUN_0086649c(p_Var2,this,*(undefined8 *)(*(long *)(this + 0x38) + 8),cVar1 == '^',
                 *(uint *)(this + 0x18) & 1,*(uint *)(this + 0x18) >> 3 & 1);
    *(__bracket_expression **)(*(long *)(this + 0x38) + 8) = p_Var2;
    *(__bracket_expression **)(this + 0x38) = p_Var2;
    if (pcVar3 != param_2) {
      if (((*(ushort *)(this + 0x18) & 0x1f0) != 0) && (*pcVar3 == ']')) {
        FUN_008662f0(p_Var2,0x5d);
        pcVar3 = pcVar3 + 1;
      }
      if (pcVar3 != param_2) {
        do {
          pcVar4 = pcVar3;
          pcVar3 = __parse_expression_term<char_const*>(this,pcVar4,param_2,p_Var2);
        } while (pcVar3 != pcVar4);
        if (pcVar4 != param_2) {
          if (*pcVar4 == '-') {
            FUN_008662f0(p_Var2,0x2d);
            pcVar4 = pcVar4 + 1;
          }
          if ((pcVar4 != param_2) && (*pcVar4 == ']')) {
            return pcVar4 + 1;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00867568();
}

