
/* char const* std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char>
   >::__parse_bracket_expression<char const*>(char const*, char const*) */

char * __thiscall
std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::
__parse_bracket_expression<char_const*>
          (basic_regex<char,std::__ndk1::regex_traits<char>> *this,char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  undefined8 uVar3;
  __bracket_expression *unaff_x21;
  char *pcVar4;
  
  if ((param_1 == param_2) || (*param_1 != '[')) {
    return param_1;
  }
  if (param_1 + 1 != param_2) {
    cVar1 = param_1[1];
    pcVar2 = param_1 + 2;
    if (cVar1 != '^') {
      pcVar2 = param_1 + 1;
    }
    unaff_x21 = operator_new(0xa8);
    FUN_00eac494(unaff_x21,this,*(undefined8 *)(*(long *)(this + 0x38) + 8),cVar1 == '^',
                 *(uint *)(this + 0x18) & 1,*(uint *)(this + 0x18) >> 3 & 1);
    *(__bracket_expression **)(*(long *)(this + 0x38) + 8) = unaff_x21;
    *(__bracket_expression **)(this + 0x38) = unaff_x21;
    if (pcVar2 != param_2) {
      if (((*(ushort *)(this + 0x18) & 0x1f0) != 0) && (*pcVar2 == ']')) {
        FUN_00eac2e0(unaff_x21,0x5d);
        pcVar2 = pcVar2 + 1;
      }
      if (pcVar2 != param_2) {
        do {
          pcVar4 = pcVar2;
          pcVar2 = __parse_expression_term<char_const*>(this,pcVar4,param_2,unaff_x21);
        } while (pcVar2 != pcVar4);
        if (pcVar4 != param_2) {
          if (*pcVar4 == '-') {
            FUN_00eac2e0(unaff_x21,0x2d);
            pcVar4 = pcVar4 + 1;
          }
          if ((pcVar4 != param_2) && (*pcVar4 == ']')) {
            return pcVar4 + 1;
          }
        }
      }
    }
  }
  uVar3 = FUN_00ead710();
  operator_delete(unaff_x21);
                    /* WARNING: Subroutine does not return */
  _Unwind_Resume(uVar3);
}

