
/* std::__ndk1::__wrap_iter<char const*> std::__ndk1::basic_regex<char,
   std::__ndk1::regex_traits<char> >::__parse_nondupl_RE<std::__ndk1::__wrap_iter<char const*>
   >(std::__ndk1::__wrap_iter<char const*>, std::__ndk1::__wrap_iter<char const*>) */

byte * __thiscall
std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::
__parse_nondupl_RE<std::__ndk1::__wrap_iter<char_const*>>
          (basic_regex<char,std::__ndk1::regex_traits<char>> *this,byte *param_2,byte *param_3)

{
  int iVar1;
  basic_regex<char,std::__ndk1::regex_traits<char>> bVar2;
  byte bVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  long lVar6;
  byte *pbVar7;
  undefined8 uVar8;
  basic_regex<char,std::__ndk1::regex_traits<char>> *pbVar9;
  int iVar10;
  
  pbVar4 = (byte *)__parse_one_char_or_coll_elem_RE<std::__ndk1::__wrap_iter<char_const*>>();
  if (param_2 != pbVar4) {
                    /* try { // try from 009c5eb4 to 00ac5edf has its CatchHandler @ 009c604c */
    return pbVar4;
  }
  if ((((param_2 == param_3) || (param_2 + 1 == param_3)) || (*param_2 != 0x5c)) ||
     (param_2[1] != 0x28)) {
    if (pbVar4 == param_2) {
      if (param_2 == param_3) {
        return pbVar4;
      }
      if (param_2 + 1 == param_3) {
        return pbVar4;
      }
      if (*param_2 != 0x5c) {
        return pbVar4;
      }
      bVar3 = param_2[1];
      if (8 < bVar3 - 0x31) {
        return pbVar4;
      }
                    /* try { // try from 009c5fb4 to 00ac5ff7 has its CatchHandler @ 009c604c */
      if ((bVar3 & 0xf8) != 0x30 && (bVar3 & 0xfe) != 0x38) {
        return pbVar4;
      }
      __push_back_ref(this,bVar3 - 0x30);
      return param_2 + 2;
    }
    bVar2 = this[0x18];
  }
  else {
    pbVar4 = param_2 + 2;
                    /* try { // try from 009c5efc to 00ac5f7b has its CatchHandler @ 009c6074 */
    bVar2 = this[0x18];
  }
  if (((byte)bVar2 >> 1 & 1) == 0) {
    puVar5 = operator_new(0x18);
    pbVar9 = this + 0x38;
    lVar6 = *(long *)pbVar9;
    iVar10 = *(int *)(this + 0x1c) + 1;
    *(int *)(this + 0x1c) = iVar10;
    uVar8 = *(undefined8 *)(lVar6 + 8);
    *(int *)(puVar5 + 2) = iVar10;
    *puVar5 = &PTR____owns_one_state_01c66998;
    puVar5[1] = uVar8;
    *(undefined8 **)(lVar6 + 8) = puVar5;
    *(undefined8 *)pbVar9 = *(undefined8 *)(*(long *)pbVar9 + 8);
    pbVar7 = pbVar4;
    if (pbVar4 != param_3) goto LAB_009c5fdc;
  }
  else {
    iVar10 = *(int *)(this + 0x1c);
    do {
      pbVar7 = pbVar4;
      if (pbVar4 == param_3) goto LAB_009c6094;
LAB_009c5fdc:
      pbVar9 = this + 0x38;
      uVar8 = *(undefined8 *)pbVar9;
      iVar1 = *(int *)(this + 0x1c);
      pbVar4 = (byte *)__parse_nondupl_RE<std::__ndk1::__wrap_iter<char_const*>>
                                 (this,pbVar7,param_3);
                    /* try { // try from 009c5ff8 to 00ac60cb has its CatchHandler @ 009c5de8 */
    } while ((pbVar4 != pbVar7) &&
            (pbVar4 = (byte *)__parse_RE_dupl_symbol<std::__ndk1::__wrap_iter<char_const*>>
                                        (this,pbVar4,param_3,uVar8,iVar1 + 1,
                                         *(int *)(this + 0x1c) + 1), pbVar4 != pbVar7));
                    /* catch() { ... } // from try @ 009c5e68 with catch @ 009c6044 */
                    /* catch() { ... } // from try @ 009c5e5c with catch @ 009c6048 */
                    /* catch() { ... } // from try @ 009c5eb4 with catch @ 009c604c
                       catch() { ... } // from try @ 009c5fb4 with catch @ 009c604c */
    if ((pbVar7 + 1 != param_3) && ((*pbVar7 == 0x5c && (pbVar7[1] == 0x29)))) {
      if (((byte)this[0x18] >> 1 & 1) != 0) {
        return pbVar7 + 2;
      }
      puVar5 = operator_new(0x18);
                    /* catch() { ... } // from try @ 009c5e3c with catch @ 009c6064 */
      lVar6 = *(long *)pbVar9;
      uVar8 = *(undefined8 *)(lVar6 + 8);
                    /* catch() { ... } // from try @ 009c5e74 with catch @ 009c6074
                       catch() { ... } // from try @ 009c5efc with catch @ 009c6074 */
      *(int *)(puVar5 + 2) = iVar10;
      *puVar5 = &PTR____owns_one_state_01c669e0;
      puVar5[1] = uVar8;
      *(undefined8 **)(lVar6 + 8) = puVar5;
      *(undefined8 *)pbVar9 = *(undefined8 *)(*(long *)pbVar9 + 8);
      return pbVar7 + 2;
    }
  }
LAB_009c6094:
                    /* WARNING: Subroutine does not return */
  FUN_008640f8();
}

