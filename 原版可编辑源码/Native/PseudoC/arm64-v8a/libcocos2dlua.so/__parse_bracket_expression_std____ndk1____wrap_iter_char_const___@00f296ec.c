
/* std::__ndk1::__wrap_iter<char const*> std::__ndk1::basic_regex<char,
   std::__ndk1::regex_traits<char> >::__parse_bracket_expression<std::__ndk1::__wrap_iter<char
   const*> >(std::__ndk1::__wrap_iter<char const*>, std::__ndk1::__wrap_iter<char const*>) */

char * __thiscall
std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::
__parse_bracket_expression<std::__ndk1::__wrap_iter<char_const*>>
          (basic_regex<char,std::__ndk1::regex_traits<char>> *this,char *param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  undefined8 uVar3;
  char *pcVar4;
  void *unaff_x21;
  
  if ((param_2 == param_3) || (*param_2 != '[')) {
    return param_2;
  }
  if (param_2 + 1 != param_3) {
    cVar1 = param_2[1];
    pcVar4 = param_2 + 2;
    if (cVar1 != '^') {
      pcVar4 = param_2 + 1;
    }
    unaff_x21 = operator_new(0xa8);
    FUN_00eac494(unaff_x21,this,*(undefined8 *)(*(long *)(this + 0x38) + 8),cVar1 == '^',
                 *(uint *)(this + 0x18) & 1,*(uint *)(this + 0x18) >> 3 & 1);
    *(void **)(*(long *)(this + 0x38) + 8) = unaff_x21;
    *(void **)(this + 0x38) = unaff_x21;
    if (pcVar4 != param_3) {
      if (((*(ushort *)(this + 0x18) & 0x1f0) != 0) && (*pcVar4 == ']')) {
        FUN_00eac2e0(unaff_x21,0x5d);
        pcVar4 = pcVar4 + 1;
      }
      pcVar2 = pcVar4;
      if (pcVar4 != param_3) {
        do {
          pcVar4 = pcVar2;
          pcVar2 = (char *)__parse_expression_term<std::__ndk1::__wrap_iter<char_const*>>
                                     (this,pcVar4,param_3,unaff_x21);
        } while (pcVar2 != pcVar4);
      }
      if (pcVar4 != param_3) {
        if (*pcVar4 == '-') {
          FUN_00eac2e0(unaff_x21,0x2d);
          pcVar4 = pcVar4 + 1;
        }
        if ((pcVar4 != param_3) && (*pcVar4 == ']')) {
          return pcVar4 + 1;
        }
      }
    }
  }
  uVar3 = FUN_00ead710();
  operator_delete(unaff_x21);
                    /* WARNING: Subroutine does not return */
  _Unwind_Resume(uVar3);
}

