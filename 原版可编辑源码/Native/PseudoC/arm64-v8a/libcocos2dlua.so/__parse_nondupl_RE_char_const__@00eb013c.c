
/* char const* std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char>
   >::__parse_nondupl_RE<char const*>(char const*, char const*) */

char * __thiscall
std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::__parse_nondupl_RE<char_const*>
          (basic_regex<char,std::__ndk1::regex_traits<char>> *this,char *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  char *pcVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined8 uVar7;
  long lVar8;
  __owns_one_state *p_Var9;
  
  pcVar4 = __parse_one_char_or_coll_elem_RE<char_const*>(this,param_1,param_2);
  if ((((pcVar4 == param_1) && (pcVar4 != param_2)) && (pcVar4 = param_1, param_1 + 1 != param_2))
     && (*param_1 == '\\')) {
    pcVar6 = param_1 + 2;
    if (param_1[1] != '(') {
      pcVar6 = param_1;
    }
    if (pcVar6 != param_1) {
      if (((byte)this[0x18] >> 1 & 1) == 0) {
        puVar5 = operator_new(0x18);
        lVar8 = *(long *)(this + 0x38);
        iVar1 = *(int *)(this + 0x1c) + 1;
        *(int *)(this + 0x1c) = iVar1;
        uVar7 = *(undefined8 *)(lVar8 + 8);
        *(int *)(puVar5 + 2) = iVar1;
        *puVar5 = &PTR____owns_one_state_016f51e8;
        puVar5[1] = uVar7;
        *(undefined8 **)(lVar8 + 8) = puVar5;
        *(undefined8 *)(this + 0x38) = *(undefined8 *)(*(long *)(this + 0x38) + 8);
      }
      else {
        iVar1 = *(int *)(this + 0x1c);
      }
      do {
        pcVar4 = pcVar6;
        if (pcVar4 == param_2) goto LAB_00eb0338;
        p_Var9 = *(__owns_one_state **)(this + 0x38);
        iVar2 = *(int *)(this + 0x1c);
        pcVar6 = __parse_nondupl_RE<char_const*>(this,pcVar4,param_2);
      } while ((pcVar6 != pcVar4) &&
              (pcVar6 = __parse_RE_dupl_symbol<char_const*>
                                  (this,pcVar6,param_2,p_Var9,iVar2 + 1,*(int *)(this + 0x1c) + 1),
              pcVar6 != pcVar4));
                    /* catch() { ... } // from try @ 00eb02f0 with catch @ 00eb02c4 */
      if ((pcVar4 != param_2) && ((pcVar4 + 1 != param_2 && (*pcVar4 == '\\')))) {
                    /* try { // try from 00eb02e8 to 00fb02ef has its CatchHandler @ 00eb0334 */
        pcVar6 = pcVar4 + 2;
        if (pcVar4[1] != ')') {
          pcVar6 = pcVar4;
        }
                    /* try { // try from 00eb02f0 to 00fb034f has its CatchHandler @ 00eb02c4 */
        if (pcVar6 != pcVar4) {
          if (((byte)this[0x18] >> 1 & 1) != 0) {
            return pcVar6;
          }
          puVar5 = operator_new(0x18);
          lVar8 = *(long *)(this + 0x38);
          uVar7 = *(undefined8 *)(lVar8 + 8);
          *(int *)(puVar5 + 2) = iVar1;
          *puVar5 = &PTR____owns_one_state_016f5230;
          puVar5[1] = uVar7;
          *(undefined8 **)(lVar8 + 8) = puVar5;
          *(undefined8 *)(this + 0x38) = *(undefined8 *)(*(long *)(this + 0x38) + 8);
          return pcVar6;
                    /* catch() { ... } // from try @ 00eb02e8 with catch @ 00eb0334 */
        }
      }
LAB_00eb0338:
                    /* WARNING: Subroutine does not return */
      FUN_00ea9db4();
    }
    if (*param_1 == '\\') {
      bVar3 = param_1[1];
      if ((bVar3 - 0x31 < 9) && ((bVar3 & 0xf8) == 0x30 || (bVar3 & 0xfe) == 0x38)) {
        __push_back_ref(this,bVar3 - 0x30);
        pcVar4 = param_1 + 2;
      }
    }
  }
  return pcVar4;
}

