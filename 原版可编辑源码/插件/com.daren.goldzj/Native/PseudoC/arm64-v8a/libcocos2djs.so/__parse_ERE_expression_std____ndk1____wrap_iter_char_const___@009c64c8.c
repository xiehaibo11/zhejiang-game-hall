
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
      *puVar4 = &PTR____owns_one_state_01c66b90;
      puVar4[1] = uVar6;
      *(undefined8 **)(lVar5 + 8) = puVar4;
                    /* try { // try from 009c65a4 to 00ac6677 has its CatchHandler @ 009c6394 */
      *(undefined8 *)(this + 0x38) = *(undefined8 *)(*(long *)(this + 0x38) + 8);
    }
  }
  if ((pcVar3 != param_2) || (pcVar3 == param_3)) goto joined_r0x009c6640;
  cVar2 = *param_2;
  if (cVar2 == '$') {
    puVar4 = operator_new(0x10);
                    /* catch() { ... } // from try @ 009c63e8 with catch @ 009c6610 */
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
                    /* catch() { ... } // from try @ 009c6414 with catch @ 009c65f0 */
        *puVar4 = &PTR____owns_one_state_01c66998;
        puVar4[1] = uVar6;
                    /* catch() { ... } // from try @ 009c6408 with catch @ 009c65f4 */
        *(undefined8 **)(lVar5 + 8) = puVar4;
                    /* catch() { ... } // from try @ 009c6460 with catch @ 009c65f8
                       catch() { ... } // from try @ 009c6560 with catch @ 009c65f8 */
        *(undefined8 *)(this + 0x38) = *(undefined8 *)(*(long *)(this + 0x38) + 8);
      }
      else {
        iVar9 = *(int *)(this + 0x1c);
      }
                    /* try { // try from 009c6678 to 00ac66d3 has its CatchHandler @ 009c6678
                       catch() { ... } // from try @ 009c6678 with catch @ 009c6678
                       catch() { ... } // from try @ 009c6878 with catch @ 009c6678 */
      *(int *)(this + 0x24) = *(int *)(this + 0x24) + 1;
      pcVar3 = (char *)__parse_extended_reg_exp<std::__ndk1::__wrap_iter<char_const*>>
                                 (this,param_2 + 1,param_3);
      if ((pcVar3 == param_3) || (*pcVar3 != ')')) {
                    /* WARNING: Subroutine does not return */
        FUN_008640f8();
      }
      if (((byte)this[0x18] >> 1 & 1) == 0) {
        puVar4 = operator_new(0x18);
        lVar5 = *(long *)(this + 0x38);
        uVar6 = *(undefined8 *)(lVar5 + 8);
        *(int *)(puVar4 + 2) = iVar9;
        *puVar4 = &PTR____owns_one_state_01c669e0;
        puVar4[1] = uVar6;
        *(undefined8 **)(lVar5 + 8) = puVar4;
                    /* try { // try from 009c66d4 to 00ac66eb has its CatchHandler @ 009c68fc */
        *(undefined8 *)(this + 0x38) = *(undefined8 *)(*(long *)(this + 0x38) + 8);
      }
      pcVar3 = pcVar3 + 1;
      *(int *)(this + 0x24) = *(int *)(this + 0x24) + -1;
      goto joined_r0x009c6640;
    }
    if (cVar2 != '^') goto joined_r0x009c6640;
    puVar4 = operator_new(0x10);
    lVar5 = *(long *)(this + 0x38);
    uVar6 = *(undefined8 *)(lVar5 + 8);
                    /* try { // try from 009c6560 to 00ac65a3 has its CatchHandler @ 009c65f8 */
    puVar7 = &__l_anchor<char>::vtable;
  }
                    /* catch() { ... } // from try @ 009c6420 with catch @ 009c6620
                       catch() { ... } // from try @ 009c64a8 with catch @ 009c6620 */
  *puVar4 = puVar7 + 0x10;
  puVar4[1] = uVar6;
  *(undefined8 **)(lVar5 + 8) = puVar4;
  pcVar3 = param_2 + 1;
  *(undefined8 *)(this + 0x38) = *(undefined8 *)(*(long *)(this + 0x38) + 8);
joined_r0x009c6640:
  if (pcVar3 == param_2) {
    return pcVar3;
  }
                    /* try { // try from 009c66f4 to 00ac66ff has its CatchHandler @ 009c68f8 */
                    /* try { // try from 009c6700 to 00ac670b has its CatchHandler @ 009c68f4 */
                    /* try { // try from 009c670c to 00ac6877 has its CatchHandler @ 009c690c */
  pcVar3 = (char *)__parse_ERE_dupl_symbol<std::__ndk1::__wrap_iter<char_const*>>
                             (this,pcVar3,param_3,uVar8,iVar1 + 1,*(int *)(this + 0x1c) + 1);
  return pcVar3;
}

