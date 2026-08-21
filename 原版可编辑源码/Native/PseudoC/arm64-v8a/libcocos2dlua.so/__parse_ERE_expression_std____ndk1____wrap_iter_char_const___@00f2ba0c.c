
/* std::__ndk1::__wrap_iter<char const*> std::__ndk1::basic_regex<char,
   std::__ndk1::regex_traits<char> >::__parse_ERE_expression<std::__ndk1::__wrap_iter<char const*>
   >(std::__ndk1::__wrap_iter<char const*>, std::__ndk1::__wrap_iter<char const*>) */

char * __thiscall
std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::
__parse_ERE_expression<std::__ndk1::__wrap_iter<char_const*>>
          (basic_regex<char,std::__ndk1::regex_traits<char>> *this,char *param_2,char *param_3)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  int iVar9;
  
  uVar8 = *(undefined8 *)(this + 0x38);
  iVar1 = *(int *)(this + 0x1c);
  pcVar3 = (char *)__parse_ORD_CHAR_ERE<std::__ndk1::__wrap_iter<char_const*>>();
  if ((pcVar3 == param_2) &&
     (pcVar3 = (char *)__parse_QUOTED_CHAR_ERE<std::__ndk1::__wrap_iter<char_const*>>
                                 (this,param_2,param_3), pcVar3 == param_2)) {
    if ((param_2 == param_3) || (*param_2 != '.')) {
      pcVar3 = (char *)__parse_bracket_expression<std::__ndk1::__wrap_iter<char_const*>>
                                 (this,param_2,param_3);
    }
    else {
      puVar4 = operator_new(0x10);
      lVar5 = *(long *)(this + 0x38);
      pcVar3 = param_2 + 1;
      uVar6 = *(undefined8 *)(lVar5 + 8);
      *puVar4 = &PTR____owns_one_state_016f53e0;
      puVar4[1] = uVar6;
      *(undefined8 **)(lVar5 + 8) = puVar4;
      *(undefined8 *)(this + 0x38) = *(undefined8 *)(*(long *)(this + 0x38) + 8);
    }
  }
  if ((pcVar3 != param_2) || (pcVar3 == param_3)) goto joined_r0x00f2bb84;
  cVar2 = *param_2;
  if (cVar2 == '$') {
    puVar4 = operator_new(0x10);
    lVar5 = *(long *)(this + 0x38);
    uVar6 = *(undefined8 *)(lVar5 + 8);
    puVar7 = &__r_anchor<char>::vtable;
  }
  else {
    if (cVar2 == '(') {
      if (((byte)this[0x18] >> 1 & 1) == 0) {
        puVar4 = operator_new(0x18);
        lVar5 = *(long *)(this + 0x38);
        iVar9 = *(int *)(this + 0x1c) + 1;
        *(int *)(this + 0x1c) = iVar9;
        uVar6 = *(undefined8 *)(lVar5 + 8);
        *(int *)(puVar4 + 2) = iVar9;
        *puVar4 = &PTR____owns_one_state_016f51e8;
        puVar4[1] = uVar6;
        *(undefined8 **)(lVar5 + 8) = puVar4;
        *(undefined8 *)(this + 0x38) = *(undefined8 *)(*(long *)(this + 0x38) + 8);
      }
      else {
        iVar9 = *(int *)(this + 0x1c);
      }
      *(int *)(this + 0x24) = *(int *)(this + 0x24) + 1;
      pcVar3 = (char *)__parse_extended_reg_exp<std::__ndk1::__wrap_iter<char_const*>>
                                 (this,param_2 + 1,param_3);
      if ((pcVar3 == param_3) || (*pcVar3 != ')')) {
                    /* WARNING: Subroutine does not return */
        FUN_00ea9db4();
      }
      if (((byte)this[0x18] >> 1 & 1) == 0) {
        puVar4 = operator_new(0x18);
        lVar5 = *(long *)(this + 0x38);
        uVar6 = *(undefined8 *)(lVar5 + 8);
        *(int *)(puVar4 + 2) = iVar9;
        *puVar4 = &PTR____owns_one_state_016f5230;
        puVar4[1] = uVar6;
        *(undefined8 **)(lVar5 + 8) = puVar4;
        *(undefined8 *)(this + 0x38) = *(undefined8 *)(*(long *)(this + 0x38) + 8);
      }
      pcVar3 = pcVar3 + 1;
      *(int *)(this + 0x24) = *(int *)(this + 0x24) + -1;
      goto joined_r0x00f2bb84;
    }
    if (cVar2 != '^') goto joined_r0x00f2bb84;
    puVar4 = operator_new(0x10);
    lVar5 = *(long *)(this + 0x38);
    uVar6 = *(undefined8 *)(lVar5 + 8);
    puVar7 = &__l_anchor<char>::vtable;
  }
  *puVar4 = puVar7 + 0x10;
  puVar4[1] = uVar6;
  *(undefined8 **)(lVar5 + 8) = puVar4;
  pcVar3 = param_2 + 1;
  *(undefined8 *)(this + 0x38) = *(undefined8 *)(*(long *)(this + 0x38) + 8);
joined_r0x00f2bb84:
  if (pcVar3 == param_2) {
    return pcVar3;
  }
  pcVar3 = (char *)__parse_ERE_dupl_symbol<std::__ndk1::__wrap_iter<char_const*>>
                             (this,pcVar3,param_3,uVar8,iVar1 + 1,*(int *)(this + 0x1c) + 1);
  return pcVar3;
}

