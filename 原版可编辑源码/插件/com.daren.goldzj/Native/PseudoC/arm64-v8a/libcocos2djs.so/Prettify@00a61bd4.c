
/* rapidjson::internal::Prettify(char*, int, int, int) */

char * rapidjson::internal::Prettify(char *param_1,int param_2,int param_3,int param_4)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  uint uVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  iVar2 = param_3 + param_2;
                    /* try { // try from 00a61c00 to 00b61d07 has its CatchHandler @ 00a61a08 */
  if ((-1 < param_3) && (iVar2 < 0x16)) {
    if (0 < param_3) {
      iVar3 = iVar2;
      if (iVar2 <= param_2 + 1) {
        iVar3 = param_2 + 1;
      }
      memset(param_1 + param_2,0x30,(ulong)(uint)(iVar3 + ~param_2) + 1);
    }
    pcVar1 = param_1 + iVar2;
    pcVar1[0] = '.';
    pcVar1[1] = '0';
    return pcVar1 + 2;
  }
  uVar5 = iVar2 - 1;
  if (uVar5 < 0x15) {
    lVar10 = (long)iVar2;
    lVar8 = lVar10 + 1;
    memmove(param_1 + lVar8,param_1 + lVar10,(long)-param_3);
                    /* catch() { ... } // from try @ 00a61ac8 with catch @ 00a61c7c */
    param_1[lVar10] = '.';
                    /* catch() { ... } // from try @ 00a61a74 with catch @ 00a61c80 */
    if (-1 < param_4 + param_3) {
                    /* catch() { ... } // from try @ 00a61a6c with catch @ 00a61c88 */
      return param_1 + (long)param_2 + 1;
    }
    if ((int)lVar8 < iVar2 + param_4) {
                    /* try { // try from 00a61d5c to 00b61d67 has its CatchHandler @ 00a61e8c */
      lVar9 = (long)(param_4 + param_3 + param_2);
      lVar7 = (lVar9 << 0x20) + 0x100000000;
                    /* try { // try from 00a61d68 to 00b61d6f has its CatchHandler @ 00a61e88 */
      do {
                    /* try { // try from 00a61d70 to 00b61e4f has its CatchHandler @ 00a61e94 */
        if (param_1[lVar9] != '0') goto LAB_00a61dc4;
        lVar9 = lVar9 + -1;
        lVar7 = lVar7 + -0x100000000;
      } while (lVar8 < lVar9);
    }
    return param_1 + lVar10 + 2;
  }
                    /* catch() { ... } // from try @ 00a61a60 with catch @ 00a61c90 */
                    /* catch() { ... } // from try @ 00a61a8c with catch @ 00a61c98 */
  if (iVar2 + 5U < 6) {
    iVar3 = 2 - iVar2;
                    /* catch() { ... } // from try @ 00a61ad8 with catch @ 00a61ca8 */
    memmove(param_1 + iVar3,param_1,(long)param_2);
    param_1[0] = '0';
    param_1[1] = '.';
    if (iVar2 < 0) {
      iVar2 = iVar3;
      if (iVar3 < 4) {
        iVar2 = 3;
      }
      memset(param_1 + 2,0x30,(ulong)(iVar2 - 2));
    }
    if (-param_3 <= param_4) {
      return param_1 + (long)iVar3 + (long)param_2;
    }
    if (1 < param_4) {
      lVar8 = (long)(param_4 + 1);
      lVar7 = (lVar8 << 0x20) + 0x100000000;
      do {
                    /* try { // try from 00a61d08 to 00b61d5b has its CatchHandler @ 00a61d08
                       catch() { ... } // from try @ 00a61d08 with catch @ 00a61d08
                       catch() { ... } // from try @ 00a61e50 with catch @ 00a61d08 */
        if (param_1[lVar8] != '0') {
LAB_00a61dc4:
          return param_1 + (lVar7 >> 0x20);
        }
        lVar8 = lVar8 + -1;
        lVar7 = lVar7 + -0x100000000;
      } while (2 < lVar8);
    }
LAB_00a61d44:
                    /* catch() { ... } // from try @ 00a61d68 with catch @ 00a61e88 */
                    /* catch() { ... } // from try @ 00a61d5c with catch @ 00a61e8c */
                    /* catch() { ... } // from try @ 00a61d70 with catch @ 00a61e94 */
    return param_1 + 3;
  }
  if (iVar2 < -param_4) {
    param_1[0] = '0';
    param_1[1] = '.';
    param_1[2] = '0';
    goto LAB_00a61d44;
  }
  if (param_2 + -1 == 0) {
    param_1[1] = 'e';
    if (-1 < (int)uVar5) {
      pcVar6 = param_1 + 2;
      goto joined_r0x00a61e20;
    }
    param_1[2] = '-';
    pcVar1 = param_1;
  }
  else {
    pcVar1 = param_1 + param_2;
    memmove(param_1 + 2,param_1 + 1,(long)(param_2 + -1));
    pcVar6 = pcVar1 + 2;
    param_1[1] = '.';
    pcVar1[1] = 'e';
    if (-1 < (int)uVar5) goto joined_r0x00a61e20;
    *pcVar6 = '-';
  }
  pcVar6 = pcVar1 + 3;
  uVar5 = 1 - iVar2;
joined_r0x00a61e20:
  if (99 < (int)uVar5) {
    uVar4 = *(undefined2 *)(&GetDigitsLut()::cDigitsLut + (ulong)(uVar5 % 100) * 2);
    *pcVar6 = (char)(uVar5 / 100) + '0';
                    /* try { // try from 00a61e50 to 00b61eaf has its CatchHandler @ 00a61d08 */
    *(undefined2 *)(pcVar6 + 1) = uVar4;
    return pcVar6 + 3;
  }
  if (9 < (int)uVar5) {
    *(undefined2 *)pcVar6 = *(undefined2 *)(&GetDigitsLut()::cDigitsLut + (long)(int)uVar5 * 2);
    return pcVar6 + 2;
  }
  *pcVar6 = (char)uVar5 + '0';
  return pcVar6 + 1;
}

