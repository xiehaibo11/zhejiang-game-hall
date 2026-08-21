
/* std::__ndk1::__wrap_iter<char const*> std::__ndk1::basic_regex<char,
   std::__ndk1::regex_traits<char> >::__parse_RE_dupl_symbol<std::__ndk1::__wrap_iter<char const*>
   >(std::__ndk1::__wrap_iter<char const*>, std::__ndk1::__wrap_iter<char const*>,
   std::__ndk1::__owns_one_state<char>*, unsigned int, unsigned int) */

byte * __thiscall
std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::
__parse_RE_dupl_symbol<std::__ndk1::__wrap_iter<char_const*>>
          (basic_regex<char,std::__ndk1::regex_traits<char>> *this,byte *param_2,byte *param_3,
          __owns_one_state *param_4,ulong param_5,ulong param_6)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  
  if (param_2 == param_3) {
    return param_2;
  }
  if (*param_2 == 0x2a) {
    __push_loop(this,0,0xffffffffffffffff,param_4,param_5 & 0xffffffff,param_6 & 0xffffffff,true);
    return param_2 + 1;
  }
  if (param_2 + 1 == param_3) {
    return param_2;
  }
  if (*param_2 != 0x5c) {
    return param_2;
  }
  if (param_2[1] != 0x7b) {
    return param_2;
  }
  pbVar7 = param_2 + 2;
  if ((pbVar7 == param_3) ||
     (((bVar3 = *pbVar7, (bVar3 & 0xf8) != 0x30 && ((bVar3 & 0xfe) != 0x38)) ||
      (iVar6 = bVar3 - 0x30, iVar6 == -1)))) {
    iVar6 = 0;
    pbVar2 = pbVar7;
  }
  else {
    pbVar1 = param_2 + 3;
    pbVar2 = pbVar1;
    if (((pbVar1 != param_3) &&
        ((bVar3 = *pbVar1, (bVar3 & 0xf8) == 0x30 || ((bVar3 & 0xfe) == 0x38)))) &&
       (iVar8 = bVar3 - 0x30, iVar8 != -1)) {
      param_2 = param_2 + 4;
      do {
        if (0xccccccb < iVar6) goto LAB_00f2b8d8;
        iVar6 = iVar8 + iVar6 * 10;
        pbVar2 = param_3;
        if ((param_3 == param_2) ||
           ((bVar3 = *param_2, (bVar3 & 0xf8) != 0x30 && (pbVar2 = param_2, (bVar3 & 0xfe) != 0x38))
           )) break;
        iVar8 = bVar3 - 0x30;
        pbVar1 = pbVar1 + 1;
        param_2 = param_2 + 1;
        pbVar2 = pbVar1;
      } while (iVar8 != -1);
    }
  }
  if (pbVar7 != pbVar2) {
    if (pbVar2 == param_3) goto LAB_00f2b8e8;
    pbVar7 = pbVar2 + 1;
    if (*pbVar2 != 0x2c) {
      if (((pbVar7 != param_3) && (*pbVar2 == 0x5c)) && (*pbVar7 == 0x7d)) {
        uVar5 = (ulong)iVar6;
        goto LAB_00f2b8c4;
      }
      goto LAB_00f2b8e8;
    }
    if ((pbVar7 == param_3) ||
       ((bVar3 = *pbVar7, (bVar3 & 0xf8) != 0x30 && ((bVar3 & 0xfe) != 0x38)))) {
      iVar8 = -1;
    }
    else {
      iVar8 = bVar3 - 0x30;
      if (iVar8 == -1) {
        iVar8 = -1;
      }
      else {
        pbVar1 = pbVar2 + 2;
        pbVar7 = pbVar1;
        if ((pbVar1 != param_3) &&
           (((bVar3 = *pbVar1, (bVar3 & 0xf8) == 0x30 || ((bVar3 & 0xfe) == 0x38)) &&
            (iVar4 = bVar3 - 0x30, iVar4 != -1)))) {
          pbVar2 = pbVar2 + 3;
          do {
            if (0xccccccb < iVar8) goto LAB_00f2b8d8;
            iVar8 = iVar4 + iVar8 * 10;
            if (param_3 == pbVar2) goto LAB_00f2b8e8;
            bVar3 = *pbVar2;
            if (((bVar3 & 0xf8) != 0x30) && (pbVar7 = pbVar2, (bVar3 & 0xfe) != 0x38)) break;
            iVar4 = bVar3 - 0x30;
            pbVar1 = pbVar1 + 1;
            pbVar2 = pbVar2 + 1;
            pbVar7 = pbVar1;
          } while (iVar4 != -1);
        }
      }
    }
    pbVar2 = pbVar7;
    if (((pbVar2 == param_3) || (pbVar2 + 1 == param_3)) ||
       ((*pbVar2 != 0x5c || (pbVar2[1] != 0x7d)))) goto LAB_00f2b8e8;
    if (iVar8 == -1) {
      uVar5 = 0xffffffffffffffff;
LAB_00f2b8c4:
      __push_loop(this,(long)iVar6,uVar5,param_4,param_5 & 0xffffffff,param_6 & 0xffffffff,true);
      return pbVar2 + 2;
    }
    if (iVar6 <= iVar8) {
      uVar5 = (ulong)iVar8;
      goto LAB_00f2b8c4;
    }
  }
LAB_00f2b8d8:
  FUN_00eafb98();
LAB_00f2b8e8:
                    /* WARNING: Subroutine does not return */
  FUN_00eafbe4();
}

