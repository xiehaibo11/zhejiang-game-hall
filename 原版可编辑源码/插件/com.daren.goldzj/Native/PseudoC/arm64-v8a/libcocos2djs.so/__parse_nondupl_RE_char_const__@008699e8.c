
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
  long lVar7;
  undefined8 uVar8;
  __owns_one_state *p_Var9;
  basic_regex<char,std::__ndk1::regex_traits<char>> *pbVar10;
  
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
        pbVar10 = this + 0x38;
        lVar7 = *(long *)pbVar10;
        iVar1 = *(int *)(this + 0x1c) + 1;
        *(int *)(this + 0x1c) = iVar1;
        uVar8 = *(undefined8 *)(lVar7 + 8);
        *(int *)(puVar5 + 2) = iVar1;
        *puVar5 = &PTR____owns_one_state_01c66998;
        puVar5[1] = uVar8;
        *(undefined8 **)(lVar7 + 8) = puVar5;
        *(undefined8 *)pbVar10 = *(undefined8 *)(*(long *)pbVar10 + 8);
      }
      else {
        iVar1 = *(int *)(this + 0x1c);
      }
      do {
        pcVar4 = pcVar6;
        if (pcVar4 == param_2) goto LAB_00869bf4;
        pbVar10 = this + 0x38;
        p_Var9 = *(__owns_one_state **)pbVar10;
        iVar2 = *(int *)(this + 0x1c);
        pcVar6 = __parse_nondupl_RE<char_const*>(this,pcVar4,param_2);
      } while ((pcVar6 != pcVar4) &&
              (pcVar6 = __parse_RE_dupl_symbol<char_const*>
                                  (this,pcVar6,param_2,p_Var9,iVar2 + 1,*(int *)(this + 0x1c) + 1),
              pcVar6 != pcVar4));
      if ((pcVar4 != param_2) && ((pcVar4 + 1 != param_2 && (*pcVar4 == '\\')))) {
        pcVar6 = pcVar4 + 2;
        if (pcVar4[1] != ')') {
          pcVar6 = pcVar4;
        }
        if (pcVar6 != pcVar4) {
          if (((byte)this[0x18] >> 1 & 1) != 0) {
            return pcVar6;
          }
          puVar5 = operator_new(0x18);
          lVar7 = *(long *)pbVar10;
          uVar8 = *(undefined8 *)(lVar7 + 8);
          *(int *)(puVar5 + 2) = iVar1;
          *puVar5 = &PTR____owns_one_state_01c669e0;
          puVar5[1] = uVar8;
          *(undefined8 **)(lVar7 + 8) = puVar5;
          *(undefined8 *)pbVar10 = *(undefined8 *)(*(long *)pbVar10 + 8);
          return pcVar6;
        }
      }
LAB_00869bf4:
                    /* WARNING: Subroutine does not return */
      FUN_008640f8();
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

