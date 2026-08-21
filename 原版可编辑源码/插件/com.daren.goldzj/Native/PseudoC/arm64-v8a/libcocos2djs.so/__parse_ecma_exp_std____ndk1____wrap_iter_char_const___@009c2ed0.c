
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
  undefined8 uVar8;
  char *pcVar9;
  long lVar10;
  
                    /* try { // try from 009c2ee0 to 00ac2fc7 has its CatchHandler @ 009c2c88 */
  lVar10 = *(long *)(this + 0x38);
  pcVar2 = param_2;
  do {
    while (pcVar9 = pcVar2,
          pcVar2 = (char *)__parse_assertion<std::__ndk1::__wrap_iter<char_const*>>
                                     (this,pcVar9,param_3), pcVar2 == pcVar9) {
      uVar7 = *(undefined8 *)(this + 0x38);
      iVar1 = *(int *)(this + 0x1c);
      pcVar2 = (char *)__parse_atom<std::__ndk1::__wrap_iter<char_const*>>(this,pcVar9,param_3);
                    /* catch() { ... } // from try @ 009c2d0c with catch @ 009c2f58 */
                    /* catch() { ... } // from try @ 009c2d00 with catch @ 009c2f5c */
                    /* catch() { ... } // from try @ 009c2ce0 with catch @ 009c2f60 */
                    /* catch() { ... } // from try @ 009c2d18 with catch @ 009c2f70 */
      if ((pcVar2 == pcVar9) ||
         (pcVar2 = (char *)__parse_ERE_dupl_symbol<std::__ndk1::__wrap_iter<char_const*>>
                                     (this,pcVar2,param_3,uVar7,iVar1 + 1,*(int *)(this + 0x1c) + 1)
         , pcVar2 == pcVar9)) goto LAB_009c2f74;
    }
  } while (pcVar2 != pcVar9);
LAB_009c2f74:
  if (pcVar9 == param_2) {
    puVar3 = operator_new(0x10);
    lVar5 = *(long *)(this + 0x38);
    uVar7 = *(undefined8 *)(lVar5 + 8);
    *puVar3 = &PTR____owns_one_state_01c66590;
    puVar3[1] = uVar7;
    *(undefined8 **)(lVar5 + 8) = puVar3;
    *(undefined8 *)(this + 0x38) = *(undefined8 *)(*(long *)(this + 0x38) + 8);
  }
  if ((pcVar9 != param_3) && (*pcVar9 == '|')) {
    lVar5 = *(long *)(this + 0x38);
                    /* try { // try from 009c2fc8 to 00ac3027 has its CatchHandler @ 009c2fc8
                       catch() { ... } // from try @ 009c2fc8 with catch @ 009c2fc8
                       catch() { ... } // from try @ 009c34c0 with catch @ 009c2fc8 */
    do {
      pcVar2 = pcVar9 + 1;
      pcVar4 = pcVar2;
      do {
        while (pcVar9 = pcVar4,
              pcVar4 = (char *)__parse_assertion<std::__ndk1::__wrap_iter<char_const*>>
                                         (this,pcVar9,param_3), pcVar4 == pcVar9) {
          uVar7 = *(undefined8 *)(this + 0x38);
          iVar1 = *(int *)(this + 0x1c);
                    /* try { // try from 009c3028 to 00ac303f has its CatchHandler @ 009c34d8 */
          pcVar4 = (char *)__parse_atom<std::__ndk1::__wrap_iter<char_const*>>(this,pcVar9,param_3);
                    /* try { // try from 009c3048 to 00ac3053 has its CatchHandler @ 009c34d4 */
                    /* try { // try from 009c3054 to 00ac3063 has its CatchHandler @ 009c34d0 */
          if ((pcVar4 == pcVar9) ||
             (pcVar4 = (char *)__parse_ERE_dupl_symbol<std::__ndk1::__wrap_iter<char_const*>>
                                         (this,pcVar4,param_3,uVar7,iVar1 + 1,
                                          *(int *)(this + 0x1c) + 1), pcVar4 == pcVar9))
          goto LAB_009c3064;
        }
      } while (pcVar4 != pcVar9);
LAB_009c3064:
                    /* try { // try from 009c3064 to 00ac34bf has its CatchHandler @ 009c34e8 */
      if (pcVar2 == pcVar9) {
        puVar3 = operator_new(0x10);
        lVar6 = *(long *)(this + 0x38);
        uVar7 = *(undefined8 *)(lVar6 + 8);
        *puVar3 = &PTR____owns_one_state_01c66590;
        puVar3[1] = uVar7;
        *(undefined8 **)(lVar6 + 8) = puVar3;
        *(undefined8 *)(this + 0x38) = *(undefined8 *)(*(long *)(this + 0x38) + 8);
      }
      puVar3 = operator_new(0x18);
      uVar7 = *(undefined8 *)(lVar10 + 8);
      uVar8 = *(undefined8 *)(lVar5 + 8);
      *puVar3 = &PTR____owns_two_states_01c66b00;
      puVar3[1] = uVar7;
      puVar3[2] = uVar8;
      *(undefined8 **)(lVar10 + 8) = puVar3;
      *(undefined8 *)(lVar5 + 8) = 0;
      puVar3 = operator_new(0x10);
      uVar7 = *(undefined8 *)(*(long *)(this + 0x38) + 8);
      *puVar3 = &PTR____owns_one_state_01c66590;
      puVar3[1] = uVar7;
      *(undefined8 **)(lVar5 + 8) = puVar3;
      *(undefined8 *)(*(long *)(this + 0x38) + 8) = 0;
      puVar3 = operator_new(0x10);
      uVar7 = *(undefined8 *)(lVar5 + 8);
      *puVar3 = &PTR_FUN_01c66b48;
      puVar3[1] = uVar7;
      *(undefined8 **)(*(long *)(this + 0x38) + 8) = puVar3;
      lVar5 = *(long *)(lVar5 + 8);
      *(long *)(this + 0x38) = lVar5;
    } while ((pcVar9 != param_3) && (*pcVar9 == '|'));
  }
  return pcVar9;
}

