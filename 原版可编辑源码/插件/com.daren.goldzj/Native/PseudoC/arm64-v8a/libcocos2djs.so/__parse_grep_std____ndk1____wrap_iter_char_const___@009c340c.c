
/* std::__ndk1::__wrap_iter<char const*> std::__ndk1::basic_regex<char,
   std::__ndk1::regex_traits<char> >::__parse_grep<std::__ndk1::__wrap_iter<char const*>
   >(std::__ndk1::__wrap_iter<char const*>, std::__ndk1::__wrap_iter<char const*>) */

char * __thiscall
std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::
__parse_grep<std::__ndk1::__wrap_iter<char_const*>>
          (basic_regex<char,std::__ndk1::regex_traits<char>> *this,char *param_2,char *param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  char *pcVar6;
  long lVar7;
  char *pcVar8;
  long lVar9;
  
  lVar7 = *(long *)(this + 0x38);
  pcVar8 = param_2;
  if ((param_2 != param_3) && (pcVar4 = param_2, *param_2 != '\n')) {
    do {
      pcVar4 = pcVar4 + 1;
      pcVar8 = param_3;
      if (param_3 == pcVar4) break;
      pcVar8 = pcVar4;
    } while (*pcVar4 != '\n');
    if (pcVar8 != param_2) {
      __parse_basic_reg_exp<std::__ndk1::__wrap_iter<char_const*>>(this,param_2,pcVar8);
      goto LAB_009c34bc;
    }
  }
  puVar2 = operator_new(0x10);
  uVar3 = *(undefined8 *)(lVar7 + 8);
  *puVar2 = &PTR____owns_one_state_01c66590;
  puVar2[1] = uVar3;
  *(undefined8 **)(lVar7 + 8) = puVar2;
  *(undefined8 *)(this + 0x38) = *(undefined8 *)(*(long *)(this + 0x38) + 8);
LAB_009c34bc:
                    /* try { // try from 009c34c0 to 00ac353f has its CatchHandler @ 009c2fc8 */
  if (pcVar8 != param_3) {
    pcVar8 = pcVar8 + 1;
  }
  while (pcVar8 != param_3) {
    cVar1 = *pcVar8;
    pcVar4 = pcVar8;
    while ((pcVar6 = pcVar4, cVar1 != '\n' &&
           (pcVar4 = pcVar4 + 1, pcVar6 = param_3, param_3 != pcVar4))) {
      cVar1 = *pcVar4;
    }
    lVar9 = *(long *)(this + 0x38);
    if (pcVar8 == pcVar6) {
      puVar2 = operator_new(0x10);
      uVar3 = *(undefined8 *)(lVar9 + 8);
      *puVar2 = &PTR____owns_one_state_01c66590;
      puVar2[1] = uVar3;
      *(undefined8 **)(lVar9 + 8) = puVar2;
      *(undefined8 *)(this + 0x38) = *(undefined8 *)(*(long *)(this + 0x38) + 8);
    }
    else {
      __parse_basic_reg_exp<std::__ndk1::__wrap_iter<char_const*>>(this,pcVar8,pcVar6);
    }
    puVar2 = operator_new(0x18);
    uVar3 = *(undefined8 *)(lVar7 + 8);
    uVar5 = *(undefined8 *)(lVar9 + 8);
    *puVar2 = &PTR____owns_two_states_01c66b00;
    puVar2[1] = uVar3;
    puVar2[2] = uVar5;
    *(undefined8 **)(lVar7 + 8) = puVar2;
    *(undefined8 *)(lVar9 + 8) = 0;
    puVar2 = operator_new(0x10);
    uVar3 = *(undefined8 *)(*(long *)(this + 0x38) + 8);
    *puVar2 = &PTR____owns_one_state_01c66590;
    puVar2[1] = uVar3;
    *(undefined8 **)(lVar9 + 8) = puVar2;
    *(undefined8 *)(*(long *)(this + 0x38) + 8) = 0;
    puVar2 = operator_new(0x10);
    uVar3 = *(undefined8 *)(lVar9 + 8);
    if (pcVar6 != param_3) {
      pcVar6 = pcVar6 + 1;
    }
    *puVar2 = &PTR_FUN_01c66b48;
    puVar2[1] = uVar3;
    *(undefined8 **)(*(long *)(this + 0x38) + 8) = puVar2;
    *(undefined8 *)(this + 0x38) = *(undefined8 *)(lVar9 + 8);
    pcVar8 = pcVar6;
  }
  return pcVar8;
}

