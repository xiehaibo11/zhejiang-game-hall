
/* rapidjson::internal::Prettify(char*, int, int, int) */

char * rapidjson::internal::Prettify(char *param_1,int param_2,int param_3,int param_4)

{
  char *pcVar1;
  undefined2 uVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  
                    /* try { // try from 00924ea4 to 00a24f3f has its CatchHandler @ 00924d6c */
  iVar5 = param_3 + param_2;
  if ((-1 < param_3) && (iVar5 < 0x16)) {
    if (0 < param_3) {
      iVar9 = iVar5;
      if (iVar5 <= param_2 + 1) {
        iVar9 = param_2 + 1;
      }
      memset(param_1 + param_2,0x30,(ulong)(uint)(iVar9 + ~param_2) + 1);
    }
    pcVar1 = param_1 + iVar5;
                    /* catch() { ... } // from try @ 00924e58 with catch @ 00924ef0 */
                    /* catch() { ... } // from try @ 00924e70 with catch @ 00924ef4 */
    pcVar1[0] = '.';
    pcVar1[1] = '0';
    return pcVar1 + 2;
  }
  uVar3 = iVar5 - 1;
  if (uVar3 < 0x15) {
    lVar10 = (long)iVar5;
    lVar7 = lVar10 + 1;
                    /* catch() { ... } // from try @ 00924e24 with catch @ 00924f24 */
    memmove(param_1 + lVar7,param_1 + lVar10,(long)-param_3);
    param_1[lVar10] = '.';
    if (-1 < param_4 + param_3) {
      return param_1 + (long)param_2 + 1;
    }
    if ((int)lVar7 < iVar5 + param_4) {
      lVar8 = (long)(param_4 + param_3 + param_2);
      lVar6 = (lVar8 << 0x20) + 0x100000000;
      do {
        if (param_1[lVar8] != '0') goto LAB_00925078;
        lVar8 = lVar8 + -1;
        lVar6 = lVar6 + -0x100000000;
      } while (lVar7 < lVar8);
    }
    return param_1 + lVar10 + 2;
  }
  if (iVar5 + 5U < 6) {
    memmove(param_1 + (2 - (long)iVar5),param_1,(long)param_2);
    param_1[0] = '0';
    param_1[1] = '.';
    iVar9 = (int)(2 - (long)iVar5);
    if (iVar5 < 0) {
      iVar5 = iVar9;
      if (iVar9 < 4) {
        iVar5 = 3;
      }
      memset(param_1 + 2,0x30,(ulong)(iVar5 - 2));
    }
    if (-param_3 <= param_4) {
      return param_1 + (long)iVar9 + (long)param_2;
    }
    if (1 < param_4) {
      lVar7 = (long)(param_4 + 1);
      lVar6 = (lVar7 << 0x20) + 0x100000000;
      do {
        if (param_1[lVar7] != '0') {
LAB_00925078:
          return param_1 + (lVar6 >> 0x20);
        }
        lVar7 = lVar7 + -1;
        lVar6 = lVar6 + -0x100000000;
      } while (2 < lVar7);
    }
LAB_00924ff4:
    return param_1 + 3;
  }
  if (iVar5 < -param_4) {
    param_1[0] = '0';
    param_1[1] = '.';
    param_1[2] = '0';
    goto LAB_00924ff4;
  }
  if (param_2 + -1 == 0) {
    param_1[1] = 'e';
    if (-1 < (int)uVar3) {
      pcVar4 = param_1 + 2;
      goto joined_r0x009250d4;
    }
    param_1[2] = '-';
    pcVar1 = param_1;
  }
  else {
    memmove(param_1 + 2,param_1 + 1,(long)(param_2 + -1));
    pcVar1 = param_1 + param_2;
    pcVar4 = pcVar1 + 2;
    param_1[1] = '.';
    pcVar1[1] = 'e';
    if (-1 < (int)uVar3) goto joined_r0x009250d4;
    *pcVar4 = '-';
  }
  pcVar4 = pcVar1 + 3;
  uVar3 = 1 - iVar5;
joined_r0x009250d4:
  if (99 < (int)uVar3) {
    uVar2 = *(undefined2 *)
             (
             ";00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899cc.CSLoader:createTimeline"
             + (ulong)(uVar3 % 100) * 2 + 1);
    *pcVar4 = (char)(uVar3 / 100) + '0';
    *(undefined2 *)(pcVar4 + 1) = uVar2;
    return pcVar4 + 3;
  }
  if (9 < (int)uVar3) {
    *(undefined2 *)pcVar4 =
         *(undefined2 *)
          (
          ";00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899cc.CSLoader:createTimeline"
          + (long)(int)uVar3 * 2 + 1);
    return pcVar4 + 2;
  }
  *pcVar4 = (char)uVar3 + '0';
  return pcVar4 + 1;
}

