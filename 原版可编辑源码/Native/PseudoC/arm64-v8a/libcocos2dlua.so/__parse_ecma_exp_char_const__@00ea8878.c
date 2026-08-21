
/* char const* std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char>
   >::__parse_ecma_exp<char const*>(char const*, char const*) */

char * __thiscall
std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::__parse_ecma_exp<char_const*>
          (basic_regex<char,std::__ndk1::regex_traits<char>> *this,char *param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  undefined8 *puVar3;
  char *pcVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  __owns_one_state *p_Var10;
  long lVar11;
  
  lVar11 = *(long *)(this + 0x38);
  pcVar2 = param_1;
  do {
    pcVar4 = pcVar2;
    pcVar2 = __parse_assertion<char_const*>(this,pcVar4,param_2);
    if (pcVar2 == pcVar4) {
      p_Var10 = *(__owns_one_state **)(this + 0x38);
      iVar1 = *(int *)(this + 0x1c);
      pcVar2 = __parse_atom<char_const*>(this,pcVar4,param_2);
      if (pcVar2 == pcVar4) break;
      pcVar2 = __parse_ERE_dupl_symbol<char_const*>
                         (this,pcVar2,param_2,p_Var10,iVar1 + 1,*(int *)(this + 0x1c) + 1);
    }
  } while (pcVar2 != pcVar4);
  if (pcVar4 == param_1) {
    puVar3 = operator_new(0x10);
    lVar6 = *(long *)(this + 0x38);
    uVar8 = *(undefined8 *)(lVar6 + 8);
    *puVar3 = &PTR____owns_one_state_016f4de0;
    puVar3[1] = uVar8;
    *(undefined8 **)(lVar6 + 8) = puVar3;
    *(undefined8 *)(this + 0x38) = *(undefined8 *)(*(long *)(this + 0x38) + 8);
  }
  do {
    pcVar2 = param_2;
    if ((pcVar4 == param_2) || (pcVar2 = pcVar4, *pcVar4 != '|')) {
      return pcVar2;
    }
    lVar6 = *(long *)(this + 0x38);
    pcVar2 = pcVar4 + 1;
    pcVar5 = pcVar2;
    do {
      pcVar4 = pcVar5;
      pcVar5 = __parse_assertion<char_const*>(this,pcVar4,param_2);
      if (pcVar5 == pcVar4) {
        p_Var10 = *(__owns_one_state **)(this + 0x38);
        iVar1 = *(int *)(this + 0x1c);
        pcVar5 = __parse_atom<char_const*>(this,pcVar4,param_2);
        if (pcVar5 == pcVar4) break;
        pcVar5 = __parse_ERE_dupl_symbol<char_const*>
                           (this,pcVar5,param_2,p_Var10,iVar1 + 1,*(int *)(this + 0x1c) + 1);
      }
    } while (pcVar5 != pcVar4);
    if (pcVar4 == pcVar2) {
      puVar3 = operator_new(0x10);
      lVar7 = *(long *)(this + 0x38);
      uVar8 = *(undefined8 *)(lVar7 + 8);
      *puVar3 = &PTR____owns_one_state_016f4de0;
      puVar3[1] = uVar8;
      *(undefined8 **)(lVar7 + 8) = puVar3;
      *(undefined8 *)(this + 0x38) = *(undefined8 *)(*(long *)(this + 0x38) + 8);
    }
    puVar3 = operator_new(0x18);
    uVar8 = *(undefined8 *)(lVar11 + 8);
    uVar9 = *(undefined8 *)(lVar6 + 8);
    *puVar3 = &PTR____owns_two_states_016f5350;
    puVar3[1] = uVar8;
    puVar3[2] = uVar9;
    *(undefined8 **)(lVar11 + 8) = puVar3;
    *(undefined8 *)(lVar6 + 8) = 0;
    puVar3 = operator_new(0x10);
    uVar8 = *(undefined8 *)(*(long *)(this + 0x38) + 8);
    *puVar3 = &PTR____owns_one_state_016f4de0;
    puVar3[1] = uVar8;
    *(undefined8 **)(lVar6 + 8) = puVar3;
    *(undefined8 *)(*(long *)(this + 0x38) + 8) = 0;
    puVar3 = operator_new(0x10);
    uVar8 = *(undefined8 *)(lVar6 + 8);
    *puVar3 = &PTR_FUN_016f5398;
    puVar3[1] = uVar8;
    *(undefined8 **)(*(long *)(this + 0x38) + 8) = puVar3;
    *(undefined8 *)(this + 0x38) = *(undefined8 *)(lVar6 + 8);
  } while( true );
}

