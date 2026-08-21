
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
  int iVar9;
  
  pbVar4 = (byte *)__parse_one_char_or_coll_elem_RE<std::__ndk1::__wrap_iter<char_const*>>();
  if (param_2 != pbVar4) {
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
                    /* catch() { ... } // from try @ 00f2b490 with catch @ 00f2b4e4 */
      if (8 < bVar3 - 0x31) {
        return pbVar4;
      }
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
    bVar2 = this[0x18];
  }
  if (((byte)bVar2 >> 1 & 1) == 0) {
    puVar5 = operator_new(0x18);
    lVar6 = *(long *)(this + 0x38);
                    /* catch() { ... } // from try @ 00f2b498 with catch @ 00f2b46c */
    iVar9 = *(int *)(this + 0x1c) + 1;
    *(int *)(this + 0x1c) = iVar9;
    uVar8 = *(undefined8 *)(lVar6 + 8);
    *(int *)(puVar5 + 2) = iVar9;
    *puVar5 = &PTR____owns_one_state_016f51e8;
    puVar5[1] = uVar8;
    *(undefined8 **)(lVar6 + 8) = puVar5;
                    /* try { // try from 00f2b490 to 0102b497 has its CatchHandler @ 00f2b4e4 */
    *(undefined8 *)(this + 0x38) = *(undefined8 *)(*(long *)(this + 0x38) + 8);
    pbVar7 = pbVar4;
                    /* try { // try from 00f2b498 to 0102b4ff has its CatchHandler @ 00f2b46c */
    if (pbVar4 != param_3) goto LAB_00f2b510;
  }
  else {
    iVar9 = *(int *)(this + 0x1c);
    do {
      pbVar7 = pbVar4;
      if (pbVar4 == param_3) goto LAB_00f2b5c8;
LAB_00f2b510:
      uVar8 = *(undefined8 *)(this + 0x38);
      iVar1 = *(int *)(this + 0x1c);
      pbVar4 = (byte *)__parse_nondupl_RE<std::__ndk1::__wrap_iter<char_const*>>
                                 (this,pbVar7,param_3);
    } while ((pbVar4 != pbVar7) &&
            (pbVar4 = (byte *)__parse_RE_dupl_symbol<std::__ndk1::__wrap_iter<char_const*>>
                                        (this,pbVar4,param_3,uVar8,iVar1 + 1,
                                         *(int *)(this + 0x1c) + 1), pbVar4 != pbVar7));
    if ((pbVar7 + 1 != param_3) && ((*pbVar7 == 0x5c && (pbVar7[1] == 0x29)))) {
      if (((byte)this[0x18] >> 1 & 1) != 0) {
        return pbVar7 + 2;
      }
      puVar5 = operator_new(0x18);
      lVar6 = *(long *)(this + 0x38);
      uVar8 = *(undefined8 *)(lVar6 + 8);
      *(int *)(puVar5 + 2) = iVar9;
      *puVar5 = &PTR____owns_one_state_016f5230;
      puVar5[1] = uVar8;
      *(undefined8 **)(lVar6 + 8) = puVar5;
      *(undefined8 *)(this + 0x38) = *(undefined8 *)(*(long *)(this + 0x38) + 8);
      return pbVar7 + 2;
    }
  }
LAB_00f2b5c8:
                    /* WARNING: Subroutine does not return */
  FUN_00ea9db4();
}

