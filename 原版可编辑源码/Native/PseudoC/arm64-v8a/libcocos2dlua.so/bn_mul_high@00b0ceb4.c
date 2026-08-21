
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
  uVar18 = -(ulong)(uVar10 >> 0x1f) & 0xfffffff800000000 | uVar19 << 3;
  puVar11 = (ulong *)((long)param_2 + uVar18);
  uVar13 = (long)((ulong)uVar17 << 0x20) >> 0x21;
  iVar5 = bn_cmp_words(param_2,puVar11,uVar19);
  puVar1 = (ulong *)((long)param_3 + uVar18);
  iVar6 = bn_cmp_words(puVar1,param_3,uVar19);
  switch(iVar5 * 3 + iVar6) {
  case 2:
    bn_sub_words(param_1,param_2,puVar11,uVar10);
    puVar8 = param_3;
    param_3 = puVar1;
LAB_00b0cfd4:
                    /* try { // try from 00b0cfd4 to 00c0cfdb has its CatchHandler @ 00b0d0d0 */
    bn_sub_words(param_1 + uVar13,puVar8,param_3,uVar10);
                    /* try { // try from 00b0cfdc to 00c0cfff has its CatchHandler @ 00b0cf6c */
    bVar4 = true;
    goto LAB_00b0d014;
  case 4:
    bn_sub_words(param_1,param_2,puVar11,uVar10);
                    /* try { // try from 00b0d000 to 00c0d00b has its CatchHandler @ 00b0d0d0 */
    puVar8 = puVar1;
    break;
  case -4:
    bn_sub_words(param_1,puVar11,param_2,uVar10);
    puVar8 = param_3;
    param_3 = puVar1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b0cfdc with catch @ 00b0cf6c
                       catch(type#1 @ 00000000) { ... } // from try @ 00b0d00c with catch @ 00b0cf6c
                       catch(type#1 @ 00000000) { ... } // from try @ 00b0d03c with catch @ 00b0cf6c
                       catch(type#1 @ 00000000) { ... } // from try @ 00b0d064 with catch @ 00b0cf6c
                       catch(type#1 @ 00000000) { ... } // from try @ 00b0d090 with catch @ 00b0cf6c
                        */
    break;
  default:
    bVar4 = false;
    goto LAB_00b0d014;
  case -2:
    bn_sub_words(param_1,puVar11,param_2,uVar10);
    puVar8 = puVar1;
    goto LAB_00b0cfd4;
  }
                    /* try { // try from 00b0d00c to 00c0d033 has its CatchHandler @ 00b0cf6c */
  bn_sub_words(param_1 + uVar13,puVar8,param_3,uVar10);
  bVar4 = false;
LAB_00b0d014:
  puVar8 = param_1 + uVar13;
  if ((param_5 & 0xfffffffe) == 0x10) {
    bn_mul_comba8(param_6,param_1,puVar8);
                    /* try { // try from 00b0d034 to 00c0d03b has its CatchHandler @ 00b0d0cc */
                    /* try { // try from 00b0d03c to 00c0d05b has its CatchHandler @ 00b0cf6c */
    bn_mul_comba8(param_1,puVar11,puVar1);
  }
  else {
                    /* try { // try from 00b0d05c to 00c0d063 has its CatchHandler @ 00b0d0cc */
                    /* try { // try from 00b0d064 to 00c0d083 has its CatchHandler @ 00b0cf6c */
    bn_mul_recursive(param_6,param_1,puVar8,uVar13 & 0xffffffff,0,0,param_6 + (int)param_5);
                    /* try { // try from 00b0d084 to 00c0d08f has its CatchHandler @ 00b0d0cc */
                    /* try { // try from 00b0d090 to 00c0d0d3 has its CatchHandler @ 00b0cf6c */
    bn_mul_recursive(param_1,puVar11,puVar1,uVar13 & 0xffffffff,0,0,param_6 + (int)param_5);
  }
  puVar11 = param_1;
  if (param_4 != (ulong *)0x0) {
    bn_add_words(param_6 + (int)(uVar10 + param_5),param_1,param_4,uVar10);
    puVar11 = param_6 + (int)(uVar10 + param_5);
  }
  puVar1 = param_6 + (int)param_5;
  lVar16 = (long)(int)param_5;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b0d034 with catch @ 00b0d0cc
                       catch(type#1 @ 00000000) { ... } // from try @ 00b0d05c with catch @ 00b0d0cc
                       catch(type#1 @ 00000000) { ... } // from try @ 00b0d084 with catch @ 00b0d0cc
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b0cfd4 with catch @ 00b0d0d0
                       catch(type#1 @ 00000000) { ... } // from try @ 00b0d000 with catch @ 00b0d0d0
                        */
  if (bVar4) {
                    /* catch() { ... } // from try @ 00b0d10c with catch @ 00b0d0d4 */
    bn_sub_words(puVar1,puVar11,param_6,uVar10);
  }
  else {
    bn_add_words(puVar1,puVar11,param_6,uVar10);
  }
  lVar2 = uVar13 + lVar16;
  puVar11 = param_6 + lVar2;
  if (param_4 != (ulong *)0x0) {
    bn_sub_words(puVar11,param_4 + uVar13,puVar1,uVar10);
                    /* try { // try from 00b0d104 to 00c0d10b has its CatchHandler @ 00b0d120 */
                    /* try { // try from 00b0d10c to 00c0d13b has its CatchHandler @ 00b0d0d4 */
    uVar18 = bn_add_words(puVar1,puVar11,param_4,uVar10);
    iVar5 = (int)uVar18;
    puVar9 = puVar1;
    goto LAB_00b0d194;
  }
                    /* catch() { ... } // from try @ 00b0d104 with catch @ 00b0d120 */
  if (1 < (int)param_5) {
    uVar18 = uVar13 & 0xffffffff;
    if (uVar10 < 4) {
LAB_00b0d160:
      lVar14 = 0;
    }
    else {
      lVar14 = uVar18 - (uVar10 & 3);
                    /* catch() { ... } // from try @ 00b0d1a8 with catch @ 00b0d13c */
      if (lVar14 != 0) {
        if ((puVar11 < param_6 + lVar16 + uVar18) && (puVar1 < param_6 + lVar2 + uVar18))
        goto LAB_00b0d160;
                    /* try { // try from 00b0d2dc to 00c0d39f has its CatchHandler @ 00b0d298 */
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
        if ((uVar10 & 3) == 0) goto LAB_00b0d18c;
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
LAB_00b0d18c:
  iVar5 = 0;
  puVar9 = puVar11;
LAB_00b0d194:
                    /* try { // try from 00b0d1a0 to 00c0d1a7 has its CatchHandler @ 00b0d1f8 */
  uVar18 = bn_add_words(puVar1,puVar9,param_1,uVar10);
                    /* try { // try from 00b0d1a8 to 00c0d27f has its CatchHandler @ 00b0d13c */
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
                    /* catch() { ... } // from try @ 00b0d1a0 with catch @ 00b0d1f8 */
  uVar19 = bn_add_words(param_1,param_1,puVar8,uVar10);
  if (bVar4) {
    uVar7 = bn_sub_words(param_1,param_1,param_6 + uVar13,uVar10);
    iVar5 = -(int)uVar7;
  }
  else {
    uVar7 = bn_add_words(param_1,param_1,param_6 + uVar13,uVar10);
    iVar5 = (int)uVar7;
  }
  uVar10 = (int)uVar19 + (int)uVar18 + iVar5;
  if (uVar17 != 0) {
    puVar11 = param_1;
    if ((int)uVar17 < 1) {
      uVar17 = -uVar17;
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
                    /* try { // try from 00b0d2d0 to 00c0d2db has its CatchHandler @ 00b0d37c */
  return;
}

