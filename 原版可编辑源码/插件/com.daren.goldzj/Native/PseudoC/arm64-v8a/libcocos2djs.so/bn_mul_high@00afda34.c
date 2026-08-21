
void bn_mul_high(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4,uint param_5,
                ulong *param_6)

{
  ulong *puVar1;
  long lVar2;
  ulong *puVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  uint uVar10;
  ulong *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong *puVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  
  uVar17 = param_5;
  if ((int)param_5 < 0) {
    uVar17 = param_5 + 1;
  }
  uVar10 = (int)uVar17 >> 1;
  uVar19 = (ulong)uVar10;
                    /* try { // try from 00afda58 to 00bfda5b has its CatchHandler @ 00afdad8 */
  uVar18 = -(ulong)(uVar10 >> 0x1f) & 0xfffffff800000000 | uVar19 << 3;
                    /* try { // try from 00afda60 to 00bfda67 has its CatchHandler @ 00afdaac */
  puVar11 = (ulong *)((long)param_2 + uVar18);
                    /* try { // try from 00afda68 to 00bfdaf3 has its CatchHandler @ 00afd938 */
  uVar13 = (long)((ulong)uVar17 << 0x20) >> 0x21;
  iVar5 = bn_cmp_words(param_2,puVar11,uVar19);
  puVar1 = (ulong *)((long)param_3 + uVar18);
  iVar6 = bn_cmp_words(puVar1,param_3,uVar19);
                    /* catch() { ... } // from try @ 00afda60 with catch @ 00afdaac */
                    /* catch() { ... } // from try @ 00afd98c with catch @ 00afdac4 */
  switch(iVar5 * 3 + iVar6) {
  case 2:
    bn_sub_words(param_1,param_2,puVar11,uVar10);
    puVar8 = param_3;
    param_3 = puVar1;
LAB_00afdb54:
    bn_sub_words(param_1 + uVar13,puVar8,param_3,uVar10);
    bVar4 = true;
    goto LAB_00afdb94;
  case 4:
    bn_sub_words(param_1,param_2,puVar11,uVar10);
    puVar8 = puVar1;
    break;
  case -4:
                    /* catch() { ... } // from try @ 00afd9d4 with catch @ 00afdad8
                       catch() { ... } // from try @ 00afda58 with catch @ 00afdad8 */
    bn_sub_words(param_1,puVar11,param_2,uVar10);
    puVar8 = param_3;
    param_3 = puVar1;
    break;
  default:
    bVar4 = false;
    goto LAB_00afdb94;
  case -2:
    bn_sub_words(param_1,puVar11,param_2,uVar10);
    puVar8 = puVar1;
    goto LAB_00afdb54;
  }
  bn_sub_words(param_1 + uVar13,puVar8,param_3,uVar10);
  bVar4 = false;
LAB_00afdb94:
  puVar8 = param_1 + uVar13;
  if ((param_5 & 0xfffffffe) == 0x10) {
    bn_mul_comba8(param_6,param_1,puVar8);
    bn_mul_comba8(param_1,puVar11,puVar1);
  }
  else {
                    /* catch() { ... } // from try @ 00afdc10 with catch @ 00afdbd4 */
    bn_mul_recursive(param_6,param_1,puVar8,uVar13 & 0xffffffff,0,0,param_6 + (int)param_5);
                    /* try { // try from 00afdc0c to 00bfdc0f has its CatchHandler @ 00afdc2c */
                    /* try { // try from 00afdc10 to 00bfdc47 has its CatchHandler @ 00afdbd4 */
    bn_mul_recursive(param_1,puVar11,puVar1,uVar13 & 0xffffffff,0,0,param_6 + (int)param_5);
  }
  puVar11 = param_1;
  if (param_4 != (ulong *)0x0) {
                    /* catch() { ... } // from try @ 00afdc0c with catch @ 00afdc2c */
    bn_add_words(param_6 + (int)(uVar10 + param_5),param_1,param_4,uVar10);
    puVar11 = param_6 + (int)(uVar10 + param_5);
  }
  puVar1 = param_6 + (int)param_5;
  lVar16 = (long)(int)param_5;
                    /* try { // try from 00afdc48 to 00bfdd0b has its CatchHandler @ 00afdc48
                       catch() { ... } // from try @ 00afdc48 with catch @ 00afdc48
                       catch() { ... } // from try @ 00afde44 with catch @ 00afdc48
                       catch() { ... } // from try @ 00afdeb0 with catch @ 00afdc48
                       catch() { ... } // from try @ 00afdff4 with catch @ 00afdc48 */
  if (bVar4) {
    bn_sub_words(puVar1,puVar11,param_6,uVar10);
  }
  else {
    bn_add_words(puVar1,puVar11,param_6,uVar10);
  }
  lVar2 = uVar13 + lVar16;
  puVar11 = param_6 + lVar2;
  if (param_4 != (ulong *)0x0) {
    bn_sub_words(puVar11,param_4 + uVar13,puVar1,uVar10);
    uVar18 = bn_add_words(puVar1,puVar11,param_4,uVar10);
    iVar5 = (int)uVar18;
    puVar9 = puVar1;
    goto LAB_00afdd14;
  }
  if (1 < (int)param_5) {
    uVar18 = uVar13 & 0xffffffff;
    if (uVar10 < 4) {
LAB_00afdce0:
      lVar14 = 0;
    }
    else {
      lVar14 = uVar18 - (uVar10 & 3);
      if (lVar14 != 0) {
        if ((puVar11 < param_6 + lVar16 + uVar18) && (puVar1 < param_6 + lVar2 + uVar18))
        goto LAB_00afdce0;
        puVar9 = param_6 + lVar16 + 2;
        puVar15 = param_6 + lVar2 + 2;
        lVar12 = lVar14;
        do {
          puVar3 = puVar9 + -1;
          uVar19 = puVar9[-2];
          uVar20 = puVar9[1];
          uVar7 = *puVar9;
          puVar9 = puVar9 + 4;
          lVar12 = lVar12 + -4;
          puVar15[-1] = -*puVar3;
          puVar15[-2] = -uVar19;
          puVar15[1] = -uVar20;
          *puVar15 = -uVar7;
          puVar15 = puVar15 + 4;
        } while (lVar12 != 0);
        if ((uVar10 & 3) == 0) goto LAB_00afdd0c;
      }
    }
    lVar12 = uVar18 - lVar14;
    puVar9 = param_6 + lVar14 + lVar16;
    puVar15 = param_6 + lVar14 + lVar2;
    do {
      lVar12 = lVar12 + -1;
      *puVar15 = -*puVar9;
      puVar9 = puVar9 + 1;
      puVar15 = puVar15 + 1;
    } while (lVar12 != 0);
  }
LAB_00afdd0c:
                    /* try { // try from 00afdd0c to 00bfdd1f has its CatchHandler @ 00afe010 */
  iVar5 = 0;
  puVar9 = puVar11;
LAB_00afdd14:
                    /* try { // try from 00afdd20 to 00bfdd2b has its CatchHandler @ 00afe02c */
  uVar18 = bn_add_words(puVar1,puVar9,param_1,uVar10);
  if (bVar4) {
    uVar19 = bn_sub_words(puVar1,puVar1,param_6,uVar10);
    iVar6 = -(int)uVar19;
  }
  else {
    uVar19 = bn_add_words(puVar1,puVar1,param_6,uVar10);
    iVar6 = (int)uVar19;
  }
  uVar17 = iVar5 + (int)uVar18 + iVar6;
  uVar18 = bn_add_words(param_1,param_1,puVar11,uVar10);
                    /* try { // try from 00afdd6c to 00bfdd7b has its CatchHandler @ 00afe054 */
  uVar19 = bn_add_words(param_1,param_1,puVar8,uVar10);
                    /* try { // try from 00afdd7c to 00bfdd97 has its CatchHandler @ 00afe068 */
  if (bVar4) {
    uVar7 = bn_sub_words(param_1,param_1,param_6 + uVar13,uVar10);
    iVar5 = -(int)uVar7;
  }
  else {
    uVar7 = bn_add_words(param_1,param_1,param_6 + uVar13,uVar10);
    iVar5 = (int)uVar7;
                    /* try { // try from 00afddc8 to 00bfddd7 has its CatchHandler @ 00afe050 */
  }
  uVar10 = (int)uVar19 + (int)uVar18 + iVar5;
  if (uVar17 != 0) {
    puVar11 = param_1;
    if ((int)uVar17 < 1) {
      uVar17 = -uVar17;
                    /* try { // try from 00afddd8 to 00bfdde3 has its CatchHandler @ 00afe064 */
      do {
        uVar19 = *puVar11;
        uVar18 = (ulong)(int)uVar17;
        *puVar11 = uVar19 - uVar18;
        uVar17 = (uint)(uVar19 < uVar18);
        puVar11 = puVar11 + 1;
      } while (uVar19 < uVar18);
    }
    else {
      do {
        uVar19 = *puVar11;
        uVar18 = (ulong)(int)uVar17;
        uVar17 = (uint)CARRY8(uVar19,uVar18);
        *puVar11 = uVar19 + uVar18;
        puVar11 = puVar11 + 1;
      } while (CARRY8(uVar19,uVar18));
    }
  }
  if (uVar10 != 0) {
    if ((int)uVar10 < 1) {
      uVar10 = -uVar10;
      puVar11 = param_1 + uVar13;
      do {
        uVar18 = *puVar11;
        uVar13 = (ulong)(int)uVar10;
        *puVar11 = uVar18 - uVar13;
        uVar10 = (uint)(uVar18 < uVar13);
        puVar11 = puVar11 + 1;
      } while (uVar18 < uVar13);
    }
    else {
      puVar11 = param_1 + uVar13;
      do {
        uVar18 = *puVar11;
        uVar13 = (ulong)(int)uVar10;
        uVar10 = (uint)CARRY8(uVar18,uVar13);
        *puVar11 = uVar18 + uVar13;
        puVar11 = puVar11 + 1;
      } while (CARRY8(uVar18,uVar13));
    }
  }
                    /* try { // try from 00afde3c to 00bfde43 has its CatchHandler @ 00afe028 */
                    /* try { // try from 00afde44 to 00bfdea7 has its CatchHandler @ 00afdc48 */
  return;
}

