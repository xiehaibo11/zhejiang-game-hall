
/* std::__ndk1::__wrap_iter<char const*> std::__ndk1::basic_regex<char,
   std::__ndk1::regex_traits<char> >::__parse_basic_reg_exp<std::__ndk1::__wrap_iter<char const*>
   >(std::__ndk1::__wrap_iter<char const*>, std::__ndk1::__wrap_iter<char const*>) */

char * __thiscall
std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::
__parse_basic_reg_exp<std::__ndk1::__wrap_iter<char_const*>>
          (basic_regex<char,std::__ndk1::regex_traits<char>> *this,char *param_2,char *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  char *pcVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (param_2 != param_3) {
    if (*param_2 == '^') {
      puVar2 = operator_new(0x10);
      lVar4 = *(long *)(this + 0x38);
      param_2 = param_2 + 1;
      uVar5 = *(undefined8 *)(lVar4 + 8);
      *puVar2 = &PTR____owns_one_state_016f4e88;
      puVar2[1] = uVar5;
      *(undefined8 **)(lVar4 + 8) = puVar2;
      *(undefined8 *)(this + 0x38) = *(undefined8 *)(*(long *)(this + 0x38) + 8);
    }
    pcVar3 = param_2;
    if (param_2 != param_3) {
      do {
        param_2 = pcVar3;
        if (param_2 == param_3) goto LAB_00f285b8;
        uVar5 = *(undefined8 *)(this + 0x38);
        iVar1 = *(int *)(this + 0x1c);
        pcVar3 = (char *)__parse_nondupl_RE<std::__ndk1::__wrap_iter<char_const*>>
                                   (this,param_2,param_3);
      } while ((pcVar3 != param_2) &&
              (pcVar3 = (char *)__parse_RE_dupl_symbol<std::__ndk1::__wrap_iter<char_const*>>
                                          (this,pcVar3,param_3,uVar5,iVar1 + 1,
                                           *(int *)(this + 0x1c) + 1), pcVar3 != param_2));
      if ((param_2 + 1 == param_3) && (*param_2 == '$')) {
        puVar2 = operator_new(0x10);
        lVar4 = *(long *)(this + 0x38);
        uVar5 = *(undefined8 *)(lVar4 + 8);
        *puVar2 = &PTR____owns_one_state_016f4ed0;
        puVar2[1] = uVar5;
        *(undefined8 **)(lVar4 + 8) = puVar2;
        *(undefined8 *)(this + 0x38) = *(undefined8 *)(*(long *)(this + 0x38) + 8);
        param_2 = param_2 + 1;
      }
    }
LAB_00f285b8:
    if (param_2 != param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_00eb00f0();
    }
  }
  return param_2;
}

