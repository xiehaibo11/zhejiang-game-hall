
/* char const* std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char>
   >::__parse_RE_dupl_symbol<char const*>(char const*, char const*,
   std::__ndk1::__owns_one_state<char>*, unsigned int, unsigned int) */

char * __thiscall
std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::__parse_RE_dupl_symbol<char_const*>
          (basic_regex<char,std::__ndk1::regex_traits<char>> *this,char *param_1,char *param_2,
          __owns_one_state *param_3,uint param_4,uint param_5)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  if (param_1 == param_2) {
    return param_1;
  }
  if (*param_1 == '*') {
    __push_loop(this,0,0xffffffffffffffff,param_3,(ulong)param_4,(ulong)param_5,true);
    return param_1 + 1;
  }
  if (param_1 + 1 == param_2) {
    return param_1;
  }
  if (*param_1 != '\\') {
    return param_1;
  }
  pbVar4 = (byte *)(param_1 + 2);
  if (param_1[1] != '{') {
    pbVar4 = (byte *)param_1;
  }
  if (pbVar4 == (byte *)param_1) {
    return param_1;
  }
  if ((pbVar4 != (byte *)param_2) &&
     (((bVar1 = param_1[(ulong)(param_1[1] == '{') * 2], (bVar1 & 0xf8) == 0x30 ||
       ((bVar1 & 0xfe) == 0x38)) && (iVar2 = bVar1 - 0x30, pbVar7 = pbVar4, iVar2 != -1)))) {
    while ((pbVar7 = pbVar7 + 1, pbVar6 = (byte *)param_2, pbVar7 != (byte *)param_2 &&
           (((bVar1 = *pbVar7, pbVar6 = pbVar7, (bVar1 & 0xf8) == 0x30 || ((bVar1 & 0xfe) == 0x38))
            && (bVar1 - 0x30 != -1))))) {
      if (0xccccccb < iVar2) goto LAB_00eb05b4;
      iVar2 = (bVar1 - 0x30) + iVar2 * 10;
    }
    if (pbVar6 != pbVar4) {
      if (pbVar6 == (byte *)param_2) goto LAB_00eb05b8;
      pbVar4 = pbVar6 + 1;
      if (*pbVar6 != 0x2c) {
        if ((*pbVar6 == 0x5c) && (pbVar4 != (byte *)param_2)) {
          pbVar7 = pbVar6 + 2;
          if (pbVar6[1] != 0x7d) {
            pbVar7 = pbVar6;
          }
          if (pbVar7 != pbVar6) {
            uVar3 = (ulong)iVar2;
            goto LAB_00eb05a0;
          }
        }
        goto LAB_00eb05b8;
      }
      if (pbVar4 == (byte *)param_2) goto LAB_00eb05b8;
      bVar1 = *pbVar4;
      if ((((bVar1 & 0xf8) == 0x30) || ((bVar1 & 0xfe) == 0x38)) &&
         (iVar5 = bVar1 - 0x30, iVar5 != -1)) {
        for (pbVar4 = pbVar6 + 2; pbVar4 != (byte *)param_2; pbVar4 = pbVar4 + 1) {
          bVar1 = *pbVar4;
          if ((((bVar1 & 0xf8) != 0x30) && ((bVar1 & 0xfe) != 0x38)) || (bVar1 - 0x30 == -1))
          goto LAB_00eb0530;
          if (0xccccccb < iVar5) goto LAB_00eb05b4;
          iVar5 = (bVar1 - 0x30) + iVar5 * 10;
        }
        goto LAB_00eb05b8;
      }
      iVar5 = -1;
LAB_00eb0530:
      if (((pbVar4 == (byte *)param_2) || (pbVar4 + 1 == (byte *)param_2)) || (*pbVar4 != 0x5c))
      goto LAB_00eb05b8;
      pbVar7 = pbVar4 + 2;
      if (pbVar4[1] != 0x7d) {
        pbVar7 = pbVar4;
      }
      if (pbVar7 == pbVar4) goto LAB_00eb05b8;
      if (iVar5 == -1) {
        uVar3 = 0xffffffffffffffff;
LAB_00eb05a0:
        __push_loop(this,(long)iVar2,uVar3,param_3,(ulong)param_4,(ulong)param_5,true);
        return (char *)pbVar7;
      }
      if (iVar2 <= iVar5) {
        uVar3 = (ulong)iVar5;
        goto LAB_00eb05a0;
      }
    }
  }
LAB_00eb05b4:
  FUN_00eafb98();
LAB_00eb05b8:
                    /* WARNING: Subroutine does not return */
  FUN_00eafbe4();
}

