
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
  byte bVar1;
  ulong uVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  
  if (param_2 == param_3) {
    return param_2;
  }
  if (*param_2 == 0x2a) {
                    /* try { // try from 009c60cc to 00ac6123 has its CatchHandler @ 009c60cc
                       catch() { ... } // from try @ 009c60cc with catch @ 009c60cc
                       catch() { ... } // from try @ 009c62ac with catch @ 009c60cc */
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
  pbVar6 = param_2 + 2;
                    /* try { // try from 009c6124 to 00ac613b has its CatchHandler @ 009c632c */
  if ((pbVar6 == param_3) ||
     (((bVar1 = *pbVar6, (bVar1 & 0xf8) != 0x30 && ((bVar1 & 0xfe) != 0x38)) ||
      (iVar3 = bVar1 - 0x30, iVar3 == -1)))) {
    iVar3 = 0;
    pbVar5 = pbVar6;
  }
  else {
    pbVar4 = param_2 + 3;
    pbVar5 = pbVar4;
                    /* try { // try from 009c6144 to 00ac614f has its CatchHandler @ 009c6328 */
                    /* try { // try from 009c6150 to 00ac615b has its CatchHandler @ 009c6324 */
                    /* try { // try from 009c615c to 00ac62ab has its CatchHandler @ 009c633c */
    if (((pbVar4 != param_3) &&
        ((bVar1 = *pbVar4, (bVar1 & 0xf8) == 0x30 || ((bVar1 & 0xfe) == 0x38)))) &&
       (iVar7 = bVar1 - 0x30, iVar7 != -1)) {
      param_2 = param_2 + 4;
      do {
        if (0xccccccb < iVar3) goto LAB_009c6384;
        iVar3 = iVar7 + iVar3 * 10;
        pbVar5 = param_3;
        if ((param_3 == param_2) ||
           ((bVar1 = *param_2, (bVar1 & 0xf8) != 0x30 && (pbVar5 = param_2, (bVar1 & 0xfe) != 0x38))
           )) break;
        iVar7 = bVar1 - 0x30;
        pbVar4 = pbVar4 + 1;
        param_2 = param_2 + 1;
        pbVar5 = pbVar4;
      } while (iVar7 != -1);
    }
  }
  if (pbVar6 != pbVar5) {
    if (pbVar5 == param_3) goto LAB_009c63a4;
    pbVar6 = pbVar5 + 1;
    if (*pbVar5 != 0x2c) {
      if (((pbVar6 != param_3) && (*pbVar5 == 0x5c)) && (*pbVar6 == 0x7d)) {
        uVar2 = (ulong)iVar3;
        goto LAB_009c6360;
      }
      goto LAB_009c63a4;
    }
    if ((pbVar6 == param_3) ||
       ((bVar1 = *pbVar6, (bVar1 & 0xf8) != 0x30 && ((bVar1 & 0xfe) != 0x38)))) {
      iVar7 = -1;
    }
    else {
      iVar7 = bVar1 - 0x30;
      if (iVar7 == -1) {
        iVar7 = -1;
      }
      else {
        pbVar4 = pbVar5 + 2;
        pbVar6 = pbVar4;
        if (((pbVar4 != param_3) &&
            ((bVar1 = *pbVar4, (bVar1 & 0xf8) == 0x30 || ((bVar1 & 0xfe) == 0x38)))) &&
           (iVar8 = bVar1 - 0x30, iVar8 != -1)) {
          pbVar5 = pbVar5 + 3;
          do {
                    /* try { // try from 009c62ac to 00ac6393 has its CatchHandler @ 009c60cc */
            if (0xccccccb < iVar7) goto LAB_009c6384;
            iVar7 = iVar8 + iVar7 * 10;
            if (param_3 == pbVar5) goto LAB_009c63a4;
            bVar1 = *pbVar5;
            if (((bVar1 & 0xf8) != 0x30) && (pbVar6 = pbVar5, (bVar1 & 0xfe) != 0x38)) break;
            iVar8 = bVar1 - 0x30;
            pbVar4 = pbVar4 + 1;
            pbVar5 = pbVar5 + 1;
            pbVar6 = pbVar4;
          } while (iVar8 != -1);
        }
      }
    }
    pbVar5 = pbVar6;
    if ((((pbVar5 == param_3) || (pbVar5 + 1 == param_3)) || (*pbVar5 != 0x5c)) ||
       (pbVar5[1] != 0x7d)) goto LAB_009c63a4;
                    /* catch() { ... } // from try @ 009c6150 with catch @ 009c6324 */
                    /* catch() { ... } // from try @ 009c6124 with catch @ 009c632c */
                    /* catch() { ... } // from try @ 009c6144 with catch @ 009c6328 */
    if (iVar7 == -1) {
      uVar2 = 0xffffffffffffffff;
LAB_009c6360:
      __push_loop(this,(long)iVar3,uVar2,param_4,param_5 & 0xffffffff,param_6 & 0xffffffff,true);
      return pbVar5 + 2;
    }
    if (iVar3 <= iVar7) {
                    /* catch() { ... } // from try @ 009c615c with catch @ 009c633c */
      uVar2 = (ulong)iVar7;
      goto LAB_009c6360;
    }
  }
LAB_009c6384:
  FUN_00869504();
LAB_009c63a4:
                    /* WARNING: Subroutine does not return */
  FUN_00869510();
}

