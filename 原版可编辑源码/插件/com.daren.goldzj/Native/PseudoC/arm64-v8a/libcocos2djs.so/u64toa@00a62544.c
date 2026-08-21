
/* rapidjson::internal::u64toa(unsigned long, char*) */

char * rapidjson::internal::u64toa(ulong param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  uint uVar12;
  char *pcVar13;
  int iVar14;
  char *pcVar15;
  char *pcVar16;
  long lVar17;
  char *pcVar18;
  ulong uVar19;
  uint uVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  
  if (99999999 < param_1) {
    if (9999999999999999 < param_1) {
      uVar19 = param_1 / 10000000000000000;
      uVar20 = (uint)uVar19;
      if (uVar20 < 10) {
        pcVar15 = param_2 + 1;
        *param_2 = (char)uVar19 + '0';
                    /* try { // try from 00a62728 to 00b6273f has its CatchHandler @ 00a62880 */
      }
      else {
                    /* try { // try from 00a628e8 to 00b6293b has its CatchHandler @ 00a628e8
                       catch() { ... } // from try @ 00a628e8 with catch @ 00a628e8
                       catch() { ... } // from try @ 00a62bc8 with catch @ 00a628e8 */
        if (uVar20 < 100) {
          cVar2 = (&GetDigitsLut()::cDigitsLut)[(uint)(uVar19 * 2) | 1];
          pcVar15 = param_2 + 2;
          *param_2 = (&GetDigitsLut()::cDigitsLut)[uVar19 * 2];
          param_2[1] = cVar2;
        }
        else if (uVar20 < 1000) {
          cVar2 = (&GetDigitsLut()::cDigitsLut)[(ulong)(uVar20 % 100) * 2];
          cVar3 = (&GetDigitsLut()::cDigitsLut)[(ulong)(uVar20 % 100) << 1 | 1];
          pcVar15 = param_2 + 3;
          *param_2 = (char)(uVar20 / 100) + '0';
          param_2[1] = cVar2;
          param_2[2] = cVar3;
        }
        else {
          lVar17 = (ulong)(uVar20 % 100) * 2;
          cVar2 = (&GetDigitsLut()::cDigitsLut)[uVar19 / 100 << 1 | 1];
          *param_2 = (&GetDigitsLut()::cDigitsLut)[(uVar19 / 100) * 2];
          cVar3 = (&GetDigitsLut()::cDigitsLut)[lVar17];
          cVar4 = (&GetDigitsLut()::cDigitsLut)[(uint)lVar17 | 1];
          pcVar15 = param_2 + 4;
          param_2[1] = cVar2;
          param_2[2] = cVar3;
          param_2[3] = cVar4;
        }
      }
      uVar19 = (param_1 % 10000000000000000) / 100000000;
      uVar25 = (param_1 % 10000000000000000) % 100000000;
      iVar14 = (int)(uVar19 / 10000);
      uVar20 = (int)uVar19 + iVar14 * -10000;
      uVar22 = (ulong)(uint)(iVar14 + (int)(uVar19 / 1000000) * -100);
      uVar19 = uVar19 / 500000 & 0x3ffe;
      iVar14 = (int)(uVar25 / 10000);
      uVar12 = (int)uVar25 + iVar14 * -10000;
      uVar23 = (ulong)(uint)(iVar14 + (int)(uVar25 / 1000000) * -100);
      cVar2 = (&GetDigitsLut()::cDigitsLut)[uVar19 | 1];
      *pcVar15 = (&GetDigitsLut()::cDigitsLut)[uVar19];
      uVar24 = uVar25 / 500000 & 0x3ffe;
      pcVar15[1] = cVar2;
      uVar19 = (ulong)uVar20 / 100;
      cVar2 = (&GetDigitsLut()::cDigitsLut)[uVar24 | 1];
      uVar25 = (ulong)uVar12 / 100;
      lVar21 = (ulong)(uVar20 % 100) * 2;
      cVar3 = (&GetDigitsLut()::cDigitsLut)[uVar22 * 2];
      cVar4 = (&GetDigitsLut()::cDigitsLut)[uVar22 << 1 | 1];
      cVar1 = (&GetDigitsLut()::cDigitsLut)[uVar19 * 2];
      cVar5 = (&GetDigitsLut()::cDigitsLut)[uVar19 << 1 | 1];
      pcVar15[8] = (&GetDigitsLut()::cDigitsLut)[uVar24];
      cVar6 = (&GetDigitsLut()::cDigitsLut)[lVar21];
      lVar17 = (ulong)(uVar12 % 100) * 2;
      cVar7 = (&GetDigitsLut()::cDigitsLut)[uVar23 * 2];
      cVar8 = (&GetDigitsLut()::cDigitsLut)[uVar23 << 1 | 1];
      cVar9 = (&GetDigitsLut()::cDigitsLut)[uVar25 * 2];
      cVar10 = (&GetDigitsLut()::cDigitsLut)[uVar25 << 1 | 1];
      cVar11 = (&GetDigitsLut()::cDigitsLut)[(uint)lVar21 | 1];
      pcVar15[9] = cVar2;
      cVar2 = (&GetDigitsLut()::cDigitsLut)[lVar17];
      pcVar16 = pcVar15 + 0xf;
      pcVar18 = &GetDigitsLut()::cDigitsLut + ((uint)lVar17 | 1);
      pcVar15[0xd] = cVar10;
      pcVar13 = pcVar15 + 0x10;
      pcVar15[2] = cVar3;
      pcVar15[3] = cVar4;
      pcVar15[4] = cVar1;
      pcVar15[5] = cVar5;
      pcVar15[6] = cVar6;
      pcVar15[10] = cVar7;
      pcVar15[0xb] = cVar8;
      pcVar15[0xc] = cVar9;
      pcVar15[7] = cVar11;
      pcVar15[0xe] = cVar2;
      goto LAB_00a62ba4;
    }
    uVar22 = param_1 % 100000000;
    uVar25 = param_1 / 100000000 & 0xffffffff;
                    /* try { // try from 00a625d8 to 00b626d3 has its CatchHandler @ 00a62358 */
    uVar19 = uVar25 / 10000 & 0xffff;
    uVar20 = (int)(param_1 / 100000000) + (int)(uVar25 / 10000) * -10000;
    uVar26 = uVar25 / 500000 & 0x3ffe;
    iVar14 = (int)(uVar22 / 10000);
    uVar12 = (int)uVar22 + iVar14 * -10000;
    uVar24 = ((ulong)uVar20 / 100) * 2;
    uVar25 = uVar22 / 500000 & 0x3ffe;
    lVar21 = (ulong)(uint)((int)uVar19 + (int)(uVar19 / 100) * -100) * 2;
    uVar23 = (ulong)(uVar20 % 100) * 2;
                    /* catch() { ... } // from try @ 00a623e0 with catch @ 00a62664 */
    uVar22 = (ulong)(uint)(iVar14 + (int)(uVar22 / 1000000) * -100) * 2;
                    /* catch() { ... } // from try @ 00a623d4 with catch @ 00a62668 */
    uVar19 = ((ulong)uVar12 / 100) * 2;
                    /* catch() { ... } // from try @ 00a623b4 with catch @ 00a6266c */
    lVar17 = (ulong)(uVar12 % 100) * 2;
    if (param_1 < 1000000000000000) {
      if (99999999999999 < param_1) goto LAB_00a62788;
      pcVar15 = param_2;
      if (9999999999999 < param_1) goto LAB_00a6279c;
                    /* try { // try from 00a6293c to 00b62953 has its CatchHandler @ 00a62c44 */
      if (999999999999 < param_1) goto LAB_00a627ac;
                    /* try { // try from 00a6295c to 00b62967 has its CatchHandler @ 00a62c40 */
      if (99999999999 < param_1) goto LAB_00a627c4;
                    /* try { // try from 00a62968 to 00b62973 has its CatchHandler @ 00a62c3c */
      if (9999999999 < param_1) goto LAB_00a627d4;
                    /* try { // try from 00a62974 to 00b62bc7 has its CatchHandler @ 00a62c54 */
      if (999999999 < param_1) goto LAB_00a627e8;
    }
    else {
                    /* catch() { ... } // from try @ 00a623ec with catch @ 00a6267c */
      *param_2 = (&GetDigitsLut()::cDigitsLut)[uVar26];
      param_2 = param_2 + 1;
LAB_00a62788:
      *param_2 = (&GetDigitsLut()::cDigitsLut)[uVar26 | 1];
      pcVar15 = param_2 + 1;
LAB_00a6279c:
      param_2 = pcVar15 + 1;
      *pcVar15 = (&GetDigitsLut()::cDigitsLut)[lVar21];
LAB_00a627ac:
      *param_2 = (&GetDigitsLut()::cDigitsLut)[(ulong)((uint)lVar21 | 1) & 0xffff];
      pcVar15 = param_2 + 1;
LAB_00a627c4:
      param_2 = pcVar15 + 1;
      *pcVar15 = (&GetDigitsLut()::cDigitsLut)[uVar24];
LAB_00a627d4:
      *param_2 = (&GetDigitsLut()::cDigitsLut)[uVar24 | 1];
      pcVar15 = param_2 + 1;
LAB_00a627e8:
      param_2 = pcVar15 + 1;
      *pcVar15 = (&GetDigitsLut()::cDigitsLut)[uVar23];
    }
    pcVar13 = param_2 + 9;
                    /* try { // try from 00a62804 to 00b628e7 has its CatchHandler @ 00a626d4 */
    cVar2 = (&GetDigitsLut()::cDigitsLut)[uVar25 | 1];
    param_2[1] = (&GetDigitsLut()::cDigitsLut)[uVar25];
    cVar3 = (&GetDigitsLut()::cDigitsLut)[uVar22];
    param_2[2] = cVar2;
    param_2[3] = cVar3;
    cVar2 = (&GetDigitsLut()::cDigitsLut)[uVar19 | 1];
    param_2[5] = (&GetDigitsLut()::cDigitsLut)[uVar19];
    cVar3 = (&GetDigitsLut()::cDigitsLut)[lVar17];
    cVar4 = (&GetDigitsLut()::cDigitsLut)[uVar23 | 1];
    cVar1 = (&GetDigitsLut()::cDigitsLut)[uVar22 & 0xffffffff | 1];
    param_2[6] = cVar2;
    param_2[7] = cVar3;
    *param_2 = cVar4;
    param_2[4] = cVar1;
    pcVar16 = param_2 + 8;
    pcVar18 = &GetDigitsLut()::cDigitsLut + ((uint)lVar17 | 1);
    goto LAB_00a62ba4;
  }
  uVar20 = (uint)param_1;
  if (0x270 < ((uint)(param_1 >> 4) & 0xfffffff)) {
    uVar19 = (param_1 & 0xffffffff) / 10000 & 0xffff;
    uVar20 = uVar20 + (int)((param_1 & 0xffffffff) / 10000) * -10000;
    uVar22 = (param_1 & 0xffffffff) / 500000 & 0x3ffe;
                    /* try { // try from 00a626d4 to 00b62727 has its CatchHandler @ 00a626d4
                       catch() { ... } // from try @ 00a626d4 with catch @ 00a626d4
                       catch() { ... } // from try @ 00a62804 with catch @ 00a626d4 */
    lVar21 = (ulong)(uint)((int)uVar19 + (int)(uVar19 / 100) * -100) * 2;
    uVar19 = ((ulong)uVar20 / 100) * 2;
    lVar17 = (ulong)(uVar20 % 100) * 2;
    if (param_1 < 10000000) {
                    /* catch() { ... } // from try @ 00a62754 with catch @ 00a62878 */
      if (999999 < param_1) goto LAB_00a6287c;
      pcVar15 = param_2;
      if (0xc34 < param_1 >> 5) goto LAB_00a62890;
    }
    else {
      *param_2 = (&GetDigitsLut()::cDigitsLut)[uVar22];
      param_2 = param_2 + 1;
LAB_00a6287c:
                    /* catch() { ... } // from try @ 00a62748 with catch @ 00a6287c */
                    /* catch() { ... } // from try @ 00a62728 with catch @ 00a62880 */
      *param_2 = (&GetDigitsLut()::cDigitsLut)[uVar22 | 1];
      pcVar15 = param_2 + 1;
LAB_00a62890:
                    /* catch() { ... } // from try @ 00a62760 with catch @ 00a62890 */
      param_2 = pcVar15 + 1;
      *pcVar15 = (&GetDigitsLut()::cDigitsLut)[lVar21];
    }
    pcVar13 = param_2 + 5;
    cVar2 = (&GetDigitsLut()::cDigitsLut)[uVar19 | 1];
    param_2[1] = (&GetDigitsLut()::cDigitsLut)[uVar19];
    cVar3 = (&GetDigitsLut()::cDigitsLut)[lVar17];
    cVar4 = (&GetDigitsLut()::cDigitsLut)[(ulong)((uint)lVar21 | 1) & 0xffff];
    param_2[2] = cVar2;
    param_2[3] = cVar3;
    pcVar16 = param_2 + 4;
    *param_2 = cVar4;
    pcVar18 = &GetDigitsLut()::cDigitsLut + ((uint)lVar17 | 1);
    goto LAB_00a62ba4;
  }
  uVar19 = ((ulong)(uVar20 & 0xffff) / 100) * 2;
  lVar17 = ((ulong)(uVar20 + ((uVar20 & 0xffff) / 100) * -100) & 0xffff) * 2;
  if (uVar20 < 1000) {
    pcVar15 = param_2;
    if (99 < uVar20) goto LAB_00a62738;
    pcVar16 = param_2;
    if (9 < uVar20) goto LAB_00a6274c;
  }
  else {
    *param_2 = (&GetDigitsLut()::cDigitsLut)[uVar19];
    pcVar15 = param_2 + 1;
LAB_00a62738:
                    /* try { // try from 00a62748 to 00b62753 has its CatchHandler @ 00a6287c */
    param_2 = pcVar15 + 1;
    *pcVar15 = (&GetDigitsLut()::cDigitsLut)[uVar19 | 1];
LAB_00a6274c:
                    /* try { // try from 00a62754 to 00b6275f has its CatchHandler @ 00a62878 */
    *param_2 = (&GetDigitsLut()::cDigitsLut)[lVar17];
    pcVar16 = param_2 + 1;
  }
                    /* try { // try from 00a62760 to 00b62803 has its CatchHandler @ 00a62890 */
  pcVar13 = pcVar16 + 1;
  pcVar18 = &GetDigitsLut()::cDigitsLut + (ushort)((ushort)lVar17 | 1);
LAB_00a62ba4:
  *pcVar16 = *pcVar18;
  return pcVar13;
}

