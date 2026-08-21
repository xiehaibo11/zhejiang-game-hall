
/* char const* std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char>
   >::__parse_basic_reg_exp<char const*>(char const*, char const*) */

char * __thiscall
std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::__parse_basic_reg_exp<char_const*>
          (basic_regex<char,std::__ndk1::regex_traits<char>> *this,char *param_1,char *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  char *pcVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  char *pcVar7;
  __owns_one_state *p_Var8;
  
  pcVar6 = param_1;
  if (param_1 != param_2) {
    if (*param_1 == '^') {
      puVar2 = operator_new(0x10);
      lVar4 = *(long *)(this + 0x38);
      param_1 = param_1 + 1;
      uVar5 = *(undefined8 *)(lVar4 + 8);
      *puVar2 = &PTR____owns_one_state_016f4e88;
      puVar2[1] = uVar5;
      *(undefined8 **)(lVar4 + 8) = puVar2;
      *(undefined8 *)(this + 0x38) = *(undefined8 *)(*(long *)(this + 0x38) + 8);
    }
    pcVar6 = param_2;
    if (param_1 != param_2) {
      do {
        pcVar7 = param_1;
        if (pcVar7 == param_2) {
          return param_2;
        }
        p_Var8 = *(__owns_one_state **)(this + 0x38);
        iVar1 = *(int *)(this + 0x1c);
        pcVar3 = __parse_nondupl_RE<char_const*>(this,pcVar7,param_2);
      } while ((pcVar3 != pcVar7) &&
              (param_1 = __parse_RE_dupl_symbol<char_const*>
                                   (this,pcVar3,param_2,p_Var8,iVar1 + 1,*(int *)(this + 0x1c) + 1),
              param_1 != pcVar7));
      if ((pcVar7 + 1 == param_2) && (*pcVar7 == '$')) {
        puVar2 = operator_new(0x10);
        lVar4 = *(long *)(this + 0x38);
        uVar5 = *(undefined8 *)(lVar4 + 8);
        *puVar2 = &PTR____owns_one_state_016f4ed0;
        puVar2[1] = uVar5;
        *(undefined8 **)(lVar4 + 8) = puVar2;
        *(undefined8 *)(this + 0x38) = *(undefined8 *)(*(long *)(this + 0x38) + 8);
      }
      else if (pcVar7 != param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_00eb00f0();
      }
    }
  }
  return pcVar6;
}

