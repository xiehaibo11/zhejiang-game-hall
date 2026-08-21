
/* std::__ndk1::__wrap_iter<char const*> std::__ndk1::basic_regex<char,
   std::__ndk1::regex_traits<char> >::__parse_egrep<std::__ndk1::__wrap_iter<char const*>
   >(std::__ndk1::__wrap_iter<char const*>, std::__ndk1::__wrap_iter<char const*>) */

char * __thiscall
std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::
__parse_egrep<std::__ndk1::__wrap_iter<char_const*>>
          (basic_regex<char,std::__ndk1::regex_traits<char>> *this,char *param_2,char *param_3)

{
  char *pcVar1;
  char cVar2;
  undefined8 *puVar3;
  char *pcVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = *(long *)(this + 0x38);
  pcVar6 = param_2;
  if ((param_2 != param_3) && (*param_2 != '\n')) {
    do {
      pcVar6 = pcVar6 + 1;
      if (param_3 == pcVar6) {
        pcVar6 = param_3;
        if (param_3 == param_2) goto LAB_00f289fc;
        goto LAB_00f28a50;
      }
    } while (*pcVar6 != '\n');
    if (pcVar6 != param_2) {
LAB_00f28a50:
                    /* try { // try from 00f28a54 to 01028a5f has its CatchHandler @ 00f28abc */
      __parse_extended_reg_exp<std::__ndk1::__wrap_iter<char_const*>>(this,param_2,pcVar6);
      goto LAB_00f28a60;
    }
  }
LAB_00f289fc:
  puVar3 = operator_new(0x10);
  uVar5 = *(undefined8 *)(lVar8 + 8);
  *puVar3 = &PTR____owns_one_state_016f4de0;
  puVar3[1] = uVar5;
  *(undefined8 **)(lVar8 + 8) = puVar3;
  *(undefined8 *)(this + 0x38) = *(undefined8 *)(*(long *)(this + 0x38) + 8);
LAB_00f28a60:
  if (pcVar6 != param_3) {
    pcVar6 = pcVar6 + 1;
  }
  if (pcVar6 != param_3) {
                    /* try { // try from 00f28a74 to 01028a7f has its CatchHandler @ 00f28ac0 */
    pcVar4 = pcVar6;
    do {
      cVar2 = *pcVar4;
      for (pcVar1 = pcVar4;
          (pcVar6 = pcVar1, cVar2 != '\n' && (pcVar6 = param_3, param_3 + -1 != pcVar1));
          pcVar1 = pcVar1 + 1) {
        cVar2 = pcVar1[1];
                    /* try { // try from 00f28b4c to 01028b53 has its CatchHandler @ 00f28b7c */
      }
                    /* try { // try from 00f28b60 to 01028b6b has its CatchHandler @ 00f28b94 */
      lVar9 = *(long *)(this + 0x38);
      if (pcVar4 == pcVar6) {
                    /* try { // try from 00f28a94 to 01028a9f has its CatchHandler @ 00f28abc */
        puVar3 = operator_new(0x10);
        uVar5 = *(undefined8 *)(lVar9 + 8);
                    /* try { // try from 00f28aa0 to 01028adb has its CatchHandler @ 00f28484 */
        *puVar3 = &PTR____owns_one_state_016f4de0;
        puVar3[1] = uVar5;
        *(undefined8 **)(lVar9 + 8) = puVar3;
        *(undefined8 *)(this + 0x38) = *(undefined8 *)(*(long *)(this + 0x38) + 8);
      }
      else {
                    /* try { // try from 00f28b6c to 01028ba7 has its CatchHandler @ 00f28b08 */
        __parse_extended_reg_exp<std::__ndk1::__wrap_iter<char_const*>>(this,pcVar4,pcVar6);
      }
      puVar3 = operator_new(0x18);
                    /* catch() { ... } // from try @ 00f28858 with catch @ 00f28abc
                       catch() { ... } // from try @ 00f28a54 with catch @ 00f28abc
                       catch() { ... } // from try @ 00f28a94 with catch @ 00f28abc */
      uVar5 = *(undefined8 *)(lVar8 + 8);
                    /* catch() { ... } // from try @ 00f2877c with catch @ 00f28ac0
                       catch() { ... } // from try @ 00f2897c with catch @ 00f28ac0
                       catch() { ... } // from try @ 00f28a74 with catch @ 00f28ac0 */
      uVar7 = *(undefined8 *)(lVar9 + 8);
      *puVar3 = &PTR____owns_two_states_016f5350;
      puVar3[1] = uVar5;
      puVar3[2] = uVar7;
      *(undefined8 **)(lVar8 + 8) = puVar3;
      *(undefined8 *)(lVar9 + 8) = 0;
      puVar3 = operator_new(0x10);
      uVar5 = *(undefined8 *)(*(long *)(this + 0x38) + 8);
      *puVar3 = &PTR____owns_one_state_016f4de0;
      puVar3[1] = uVar5;
      *(undefined8 **)(lVar9 + 8) = puVar3;
      *(undefined8 *)(*(long *)(this + 0x38) + 8) = 0;
      puVar3 = operator_new(0x10);
      uVar5 = *(undefined8 *)(lVar9 + 8);
                    /* try { // try from 00f28b08 to 01028b4b has its CatchHandler @ 00f28b08
                       catch() { ... } // from try @ 00f28b08 with catch @ 00f28b08
                       catch() { ... } // from try @ 00f28b6c with catch @ 00f28b08 */
      if (pcVar6 != param_3) {
        pcVar6 = pcVar6 + 1;
      }
      *puVar3 = &PTR_FUN_016f5398;
      puVar3[1] = uVar5;
      *(undefined8 **)(*(long *)(this + 0x38) + 8) = puVar3;
      *(undefined8 *)(this + 0x38) = *(undefined8 *)(lVar9 + 8);
      pcVar4 = pcVar6;
    } while (pcVar6 != param_3);
  }
                    /* catch() { ... } // from try @ 00f28b4c with catch @ 00f28b7c */
                    /* catch() { ... } // from try @ 00f28b60 with catch @ 00f28b94 */
  return pcVar6;
}

