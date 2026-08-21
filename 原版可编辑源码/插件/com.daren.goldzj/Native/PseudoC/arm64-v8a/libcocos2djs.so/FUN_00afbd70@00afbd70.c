
undefined8 FUN_00afbd70(undefined8 *param_1,long *param_2,long param_3)

{
  int num;
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong *rp;
  long lVar12;
  ulong *puVar13;
  int iVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  
  num = *(int *)(param_3 + 0x28);
  if (num == 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    return 1;
  }
  iVar14 = num * 2;
  lVar1 = bn_wexpand(param_2,iVar14);
  if (lVar1 == 0) {
    return 0;
  }
  puVar11 = (ulong *)*param_2;
  *(uint *)(param_2 + 2) = *(uint *)(param_2 + 2) ^ *(uint *)(param_3 + 0x30);
  puVar13 = *(ulong **)(param_3 + 0x20);
  uVar4 = iVar14 - (int)param_2[1];
  if (uVar4 != 0) {
    memset(puVar11 + (int)param_2[1],0,
           -(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar4 << 3);
  }
  lVar1 = (long)num;
  uVar15 = 0;
  *(int *)(param_2 + 1) = iVar14;
  if (0 < num) {
    lVar12 = *(long *)(param_3 + 0x50);
    iVar14 = num;
    do {
      uVar2 = bn_mul_add_words(puVar11,puVar13,num,*puVar11 * lVar12);
      uVar5 = puVar11[lVar1];
      uVar3 = uVar2 + uVar15 + uVar5;
      puVar11[lVar1] = uVar3;
      iVar14 = iVar14 + -1;
      uVar15 = (ulong)((uint)uVar15 | (uint)(uVar2 + uVar15 != 0)) & (ulong)(uVar3 <= uVar5);
      puVar11 = puVar11 + 1;
    } while (iVar14 != 0);
  }
  lVar12 = bn_wexpand(param_1,num);
  if (lVar12 == 0) {
    return 0;
  }
  *(int *)(param_1 + 1) = num;
  rp = (ulong *)*param_1;
  *(int *)(param_1 + 2) = (int)param_2[2];
  lVar12 = *param_2;
  puVar11 = (ulong *)(lVar12 + lVar1 * 8);
  uVar3 = bn_sub_words(rp,puVar11,puVar13,num);
  puVar13 = (ulong *)((ulong)rp & (uVar15 - uVar3 ^ 0xffffffffffffffff) |
                     uVar15 - uVar3 & (ulong)puVar11);
  if (num < 5) {
    uVar4 = 0;
    if (num < 1) goto LAB_00afc110;
  }
  else {
    lVar6 = lVar1 + -4;
    lVar7 = lVar6;
    if (lVar6 < 5) {
      lVar7 = 4;
    }
                    /* try { // try from 00afbec0 to 00bfbecb has its CatchHandler @ 00afbf0c */
    uVar15 = (lVar7 - 1U >> 2) + 1;
                    /* try { // try from 00afbecc to 00bfbf0f has its CatchHandler @ 00afbd30 */
    if ((uVar15 < 2) || (uVar3 = uVar15 & 0x7ffffffffffffffe, uVar3 == 0)) {
      lVar7 = 0;
LAB_00afbfa8:
      puVar8 = (undefined8 *)(lVar12 + (lVar7 + lVar1) * 8 + 0x10);
      puVar11 = puVar13 + lVar7 + 2;
      puVar9 = rp + lVar7 + 2;
      do {
        uVar15 = puVar11[-2];
        uVar3 = puVar11[-1];
        uVar2 = *puVar11;
        puVar8[-2] = 0;
        uVar5 = puVar11[1];
        lVar7 = lVar7 + 4;
        puVar8[-1] = 0;
        puVar9[-2] = uVar15;
        *puVar8 = 0;
                    /* try { // try from 00afbfe8 to 00bfc2b7 has its CatchHandler @ 00afbfe8
                       catch() { ... } // from try @ 00afbfe8 with catch @ 00afbfe8
                       catch() { ... } // from try @ 00afc354 with catch @ 00afbfe8 */
        puVar9[-1] = uVar3;
        puVar8[1] = 0;
        puVar8 = puVar8 + 4;
        *puVar9 = uVar2;
        puVar9[1] = uVar5;
        puVar11 = puVar11 + 4;
        puVar9 = puVar9 + 4;
      } while (lVar7 < lVar6);
    }
    else {
      lVar7 = lVar6;
      if (lVar6 < 5) {
        lVar7 = 4;
      }
      uVar2 = lVar7 - 1U & 0xfffffffffffffffc;
      puVar9 = (ulong *)(lVar12 + (uVar2 + lVar1) * 8 + 0x20);
                    /* catch() { ... } // from try @ 00afbec0 with catch @ 00afbf0c */
      lVar7 = 0;
      if (((puVar11 < rp + uVar2 + 4 && rp < puVar9) ||
          (puVar11 < puVar13 + uVar2 + 4 && puVar13 < puVar9)) ||
         (rp < puVar13 + uVar2 + 4 && puVar13 < rp + uVar2 + 4)) goto LAB_00afbfa8;
      lVar7 = uVar3 << 2;
      uVar2 = uVar3;
      puVar9 = rp;
      puVar10 = puVar13;
      do {
        uVar5 = *puVar10;
        uVar17 = puVar10[1];
        uVar19 = puVar10[2];
        uVar21 = puVar10[3];
        uVar16 = puVar10[4];
        uVar18 = puVar10[5];
        uVar20 = puVar10[6];
        uVar22 = puVar10[7];
        puVar10 = puVar10 + 8;
        puVar11[5] = 0;
        puVar11[4] = 0;
        puVar11[7] = 0;
        puVar11[6] = 0;
        puVar11[1] = 0;
        *puVar11 = 0;
        puVar11[3] = 0;
        puVar11[2] = 0;
        uVar2 = uVar2 - 2;
        *puVar9 = uVar5;
        puVar9[1] = uVar17;
        puVar9[2] = uVar19;
        puVar9[3] = uVar21;
        puVar9[4] = uVar16;
        puVar9[5] = uVar18;
        puVar9[6] = uVar20;
        puVar9[7] = uVar22;
        puVar9 = puVar9 + 8;
        puVar11 = puVar11 + 8;
      } while (uVar2 != 0);
      if (uVar15 != uVar3) goto LAB_00afbfa8;
    }
    uVar4 = num - 1U & 0xfffffffc;
    if (num <= (int)uVar4) goto LAB_00afc110;
  }
  lVar6 = (long)(int)uVar4;
  uVar15 = lVar1 - lVar6;
  lVar7 = lVar6;
  if ((3 < uVar15) && (uVar3 = uVar15 & 0xfffffffffffffffc, uVar3 != 0)) {
    puVar11 = (ulong *)(lVar12 + lVar1 * 0x10);
    puVar9 = (ulong *)(lVar12 + (lVar6 + lVar1) * 8);
    if ((puVar11 <= rp + lVar6 || rp + lVar1 <= puVar9) &&
       ((puVar13 + lVar1 <= rp + lVar6 || rp + lVar1 <= puVar13 + lVar6 &&
        (puVar13 + lVar1 <= puVar9 || puVar11 <= puVar13 + lVar6)))) {
      lVar7 = uVar3 + lVar6;
      puVar11 = puVar13 + lVar6 + 2;
      puVar9 = rp + lVar6 + 2;
      puVar8 = (undefined8 *)(lVar12 + (lVar6 + lVar1) * 8 + 0x10);
      uVar2 = uVar3;
      do {
        puVar10 = puVar11 + -1;
        uVar5 = puVar11[-2];
        uVar17 = puVar11[1];
        uVar16 = *puVar11;
        uVar2 = uVar2 - 4;
        puVar11 = puVar11 + 4;
        puVar9[-1] = *puVar10;
        puVar9[-2] = uVar5;
        puVar9[1] = uVar17;
        *puVar9 = uVar16;
        puVar8[-1] = 0;
        puVar8[-2] = 0;
        puVar8[1] = 0;
        *puVar8 = 0;
        puVar8 = puVar8 + 4;
        puVar9 = puVar9 + 4;
      } while (uVar2 != 0);
      if (uVar15 == uVar3) goto LAB_00afc110;
    }
  }
  lVar6 = lVar1 - lVar7;
  puVar11 = puVar13 + lVar7;
  puVar13 = rp + lVar7;
  puVar8 = (undefined8 *)(lVar12 + (lVar7 + lVar1) * 8);
  do {
    lVar6 = lVar6 + -1;
    *puVar13 = *puVar11;
    *puVar8 = 0;
    puVar11 = puVar11 + 1;
    puVar13 = puVar13 + 1;
    puVar8 = puVar8 + 1;
  } while (lVar6 != 0);
LAB_00afc110:
  bn_correct_top(param_2);
  bn_correct_top(param_1);
  return 1;
}

