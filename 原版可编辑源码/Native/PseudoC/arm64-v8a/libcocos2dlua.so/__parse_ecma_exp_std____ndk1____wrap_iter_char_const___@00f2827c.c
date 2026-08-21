
/* std::__ndk1::__wrap_iter<char const*> std::__ndk1::basic_regex<char,
   std::__ndk1::regex_traits<char> >::__parse_ecma_exp<std::__ndk1::__wrap_iter<char const*>
   >(std::__ndk1::__wrap_iter<char const*>, std::__ndk1::__wrap_iter<char const*>) */

char * __thiscall
std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::
__parse_ecma_exp<std::__ndk1::__wrap_iter<char_const*>>
          (basic_regex<char,std::__ndk1::regex_traits<char>> *this,char *param_2,char *param_3)

{
  int iVar1;
  char *pcVar2;
  undefined8 *puVar3;
  char *pcVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined8 uVar9;
  long lVar10;
  
  lVar10 = *(long *)(this + 0x38);
  pcVar2 = param_2;
  do {
    pcVar8 = pcVar2;
    pcVar2 = (char *)__parse_assertion<std::__ndk1::__wrap_iter<char_const*>>(this,pcVar8,param_3);
    if (pcVar2 == pcVar8) {
      uVar9 = *(undefined8 *)(this + 0x38);
      iVar1 = *(int *)(this + 0x1c);
      pcVar2 = (char *)__parse_atom<std::__ndk1::__wrap_iter<char_const*>>(this,pcVar8,param_3);
      if (pcVar2 == pcVar8) break;
      pcVar2 = (char *)__parse_ERE_dupl_symbol<std::__ndk1::__wrap_iter<char_const*>>
                                 (this,pcVar2,param_3,uVar9,iVar1 + 1,*(int *)(this + 0x1c) + 1);
    }
  } while (pcVar2 != pcVar8);
  if (pcVar8 == param_2) {
    puVar3 = operator_new(0x10);
    lVar5 = *(long *)(this + 0x38);
    uVar9 = *(undefined8 *)(lVar5 + 8);
    *puVar3 = &PTR____owns_one_state_016f4de0;
    puVar3[1] = uVar9;
    *(undefined8 **)(lVar5 + 8) = puVar3;
    *(undefined8 *)(this + 0x38) = *(undefined8 *)(*(long *)(this + 0x38) + 8);
  }
  if ((pcVar8 != param_3) && (*pcVar8 == '|')) {
    lVar5 = *(long *)(this + 0x38);
    do {
      pcVar2 = pcVar8 + 1;
      pcVar4 = pcVar2;
      do {
        pcVar8 = pcVar4;
                    /* catch() { ... } // from try @ 00f283dc with catch @ 00f283b0 */
        pcVar4 = (char *)__parse_assertion<std::__ndk1::__wrap_iter<char_const*>>
                                   (this,pcVar8,param_3);
        if (pcVar4 == pcVar8) {
          uVar9 = *(undefined8 *)(this + 0x38);
          iVar1 = *(int *)(this + 0x1c);
                    /* try { // try from 00f283d4 to 010283db has its CatchHandler @ 00f2840c */
          pcVar4 = (char *)__parse_atom<std::__ndk1::__wrap_iter<char_const*>>(this,pcVar8,param_3);
                    /* try { // try from 00f283dc to 01028427 has its CatchHandler @ 00f283b0 */
          if (pcVar4 == pcVar8) break;
          pcVar4 = (char *)__parse_ERE_dupl_symbol<std::__ndk1::__wrap_iter<char_const*>>
                                     (this,pcVar4,param_3,uVar9,iVar1 + 1,*(int *)(this + 0x1c) + 1)
          ;
        }
      } while (pcVar4 != pcVar8);
      if (pcVar2 == pcVar8) {
                    /* catch() { ... } // from try @ 00f283d4 with catch @ 00f2840c */
        puVar3 = operator_new(0x10);
        lVar6 = *(long *)(this + 0x38);
        uVar9 = *(undefined8 *)(lVar6 + 8);
        *puVar3 = &PTR____owns_one_state_016f4de0;
        puVar3[1] = uVar9;
        *(undefined8 **)(lVar6 + 8) = puVar3;
        *(undefined8 *)(this + 0x38) = *(undefined8 *)(*(long *)(this + 0x38) + 8);
      }
      puVar3 = operator_new(0x18);
      uVar9 = *(undefined8 *)(lVar10 + 8);
      uVar7 = *(undefined8 *)(lVar5 + 8);
      *puVar3 = &PTR____owns_two_states_016f5350;
      puVar3[1] = uVar9;
      puVar3[2] = uVar7;
      *(undefined8 **)(lVar10 + 8) = puVar3;
      *(undefined8 *)(lVar5 + 8) = 0;
      puVar3 = operator_new(0x10);
      uVar9 = *(undefined8 *)(*(long *)(this + 0x38) + 8);
      *puVar3 = &PTR____owns_one_state_016f4de0;
      puVar3[1] = uVar9;
      *(undefined8 **)(lVar5 + 8) = puVar3;
      *(undefined8 *)(*(long *)(this + 0x38) + 8) = 0;
                    /* try { // try from 00f28484 to 0102877b has its CatchHandler @ 00f28484
                       catch() { ... } // from try @ 00f28484 with catch @ 00f28484
                       catch() { ... } // from try @ 00f28784 with catch @ 00f28484
                       catch() { ... } // from try @ 00f28aa0 with catch @ 00f28484 */
      puVar3 = operator_new(0x10);
      uVar9 = *(undefined8 *)(lVar5 + 8);
      *puVar3 = &PTR_FUN_016f5398;
      puVar3[1] = uVar9;
      *(undefined8 **)(*(long *)(this + 0x38) + 8) = puVar3;
      lVar5 = *(long *)(lVar5 + 8);
      *(long *)(this + 0x38) = lVar5;
    } while ((pcVar8 != param_3) && (*pcVar8 == '|'));
  }
  return pcVar8;
}

