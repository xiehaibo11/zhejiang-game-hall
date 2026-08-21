
/* char const* std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char>
   >::__parse_ERE_expression<char const*>(char const*, char const*) */

char * __thiscall
std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::__parse_ERE_expression<char_const*>
          (basic_regex<char,std::__ndk1::regex_traits<char>> *this,char *param_1,char *param_2)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  __owns_one_state *p_Var8;
  int iVar9;
  
  p_Var8 = *(__owns_one_state **)(this + 0x38);
  iVar1 = *(int *)(this + 0x1c);
  pcVar3 = __parse_ORD_CHAR_ERE<char_const*>(this,param_1,param_2);
  if ((pcVar3 == param_1) &&
     (pcVar3 = __parse_QUOTED_CHAR_ERE<char_const*>(this,param_1,param_2), pcVar3 == param_1)) {
    if ((param_1 == param_2) || (*param_1 != '.')) {
      pcVar3 = __parse_bracket_expression<char_const*>(this,param_1,param_2);
      goto joined_r0x0086a260;
    }
    puVar5 = &__match_any<char>::vtable;
  }
  else {
joined_r0x0086a260:
    if ((pcVar3 != param_1) || (pcVar3 == param_2)) {
LAB_0086a3dc:
      if (pcVar3 == param_1) {
        return param_1;
      }
      goto LAB_0086a3e4;
    }
    cVar2 = *param_1;
    if (cVar2 == '^') {
      puVar5 = &__l_anchor<char>::vtable;
    }
    else {
      if (cVar2 == '(') {
        if (((byte)this[0x18] >> 1 & 1) == 0) {
          puVar4 = operator_new(0x18);
          lVar6 = *(long *)(this + 0x38);
          iVar9 = *(int *)(this + 0x1c) + 1;
          *(int *)(this + 0x1c) = iVar9;
          uVar7 = *(undefined8 *)(lVar6 + 8);
          *(int *)(puVar4 + 2) = iVar9;
          *puVar4 = &PTR____owns_one_state_01c66998;
          puVar4[1] = uVar7;
          *(undefined8 **)(lVar6 + 8) = puVar4;
          *(undefined8 *)(this + 0x38) = *(undefined8 *)(*(long *)(this + 0x38) + 8);
        }
        else {
          iVar9 = *(int *)(this + 0x1c);
        }
        *(int *)(this + 0x24) = *(int *)(this + 0x24) + 1;
        pcVar3 = __parse_extended_reg_exp<char_const*>(this,param_1 + 1,param_2);
        if ((pcVar3 == param_2) || (*pcVar3 != ')')) {
                    /* WARNING: Subroutine does not return */
          FUN_008640f8();
        }
        if (((byte)this[0x18] >> 1 & 1) == 0) {
          puVar4 = operator_new(0x18);
          lVar6 = *(long *)(this + 0x38);
          uVar7 = *(undefined8 *)(lVar6 + 8);
          *(int *)(puVar4 + 2) = iVar9;
          *puVar4 = &PTR____owns_one_state_01c669e0;
          puVar4[1] = uVar7;
          *(undefined8 **)(lVar6 + 8) = puVar4;
          *(undefined8 *)(this + 0x38) = *(undefined8 *)(*(long *)(this + 0x38) + 8);
        }
        pcVar3 = pcVar3 + 1;
        *(int *)(this + 0x24) = *(int *)(this + 0x24) + -1;
        goto LAB_0086a3dc;
      }
      if (cVar2 != '$') {
        return param_1;
      }
      puVar5 = &__r_anchor<char>::vtable;
    }
  }
  puVar4 = operator_new(0x10);
  lVar6 = *(long *)(this + 0x38);
  pcVar3 = param_1 + 1;
  uVar7 = *(undefined8 *)(lVar6 + 8);
  *puVar4 = puVar5 + 0x10;
  puVar4[1] = uVar7;
  *(undefined8 **)(lVar6 + 8) = puVar4;
  *(undefined8 *)(this + 0x38) = *(undefined8 *)(*(long *)(this + 0x38) + 8);
LAB_0086a3e4:
  pcVar3 = __parse_ERE_dupl_symbol<char_const*>
                     (this,pcVar3,param_2,p_Var8,iVar1 + 1,*(int *)(this + 0x1c) + 1);
  return pcVar3;
}

