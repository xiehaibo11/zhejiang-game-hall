
uint * FUN_0109b484(long param_1,undefined8 param_2,uint param_3)

{
  byte *pbVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  ulong uVar4;
  byte bVar5;
  uint5 uVar6;
  uint5 uVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  long lVar11;
  undefined8 *puVar12;
  uint *puVar13;
  byte *pbVar14;
  uint uVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  long lVar21;
  uint uVar22;
  ulong uVar23;
  long lVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  undefined8 uVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int local_4c;
  int local_48;
  int local_44;
  
  lVar11 = *(long *)(param_1 + 0x18);
  uVar15 = 0;
  uVar20 = (*(uint *)(lVar11 + 6) & 0xff00ff00) >> 8 | (*(uint *)(lVar11 + 6) & 0xff00ff) << 8;
  uVar20 = uVar20 >> 0x10 | uVar20 << 0x10;
  do {
    uVar18 = uVar20;
    if (uVar18 <= uVar15) {
      return (uint *)0x0;
    }
    uVar20 = uVar15 + uVar18 >> 1;
    pbVar3 = (byte *)(lVar11 + 10 + (ulong)(uVar20 * 0xb));
    uVar10 = (uint)*pbVar3 << 0x10 | (uint)pbVar3[1] << 8 | (uint)pbVar3[2];
  } while ((param_3 < uVar10) || (uVar15 = uVar20 + 1, uVar20 = uVar18, uVar10 < param_3));
                    /* try { // try from 0109b534 to 0119b633 has its CatchHandler @ 0109b534
                       catch() { ... } // from try @ 0109b534 with catch @ 0109b534
                       catch() { ... } // from try @ 0109b670 with catch @ 0109b534 */
  uVar23 = (ulong)pbVar3[3] << 0x18 | (ulong)pbVar3[4] << 0x10 | (ulong)pbVar3[5] << 8 |
           (ulong)pbVar3[6];
  uVar16 = (ulong)pbVar3[7] << 0x18 | (ulong)pbVar3[8] << 0x10 | (ulong)pbVar3[9] << 8 |
           (ulong)pbVar3[10];
  if (uVar16 == 0 && uVar23 == 0) {
    return (uint *)0x0;
  }
  if (uVar23 == 0) {
    uVar15 = *(uint *)(lVar11 + uVar16);
                    /* try { // try from 0109b644 to 0119b64f has its CatchHandler @ 0109b6ec */
    local_48 = 0;
    uVar15 = (uVar15 & 0xff00ff00) >> 8 | (uVar15 & 0xff00ff) << 8;
    uVar20 = uVar15 >> 0x10 | uVar15 << 0x10;
    uVar15 = uVar20 + 1;
    if (*(uint *)(param_1 + 0x30) < uVar15) {
                    /* try { // try from 0109b664 to 0119b66f has its CatchHandler @ 0109b700 */
      *(undefined8 *)(param_1 + 0x40) = param_2;
                    /* try { // try from 0109b670 to 0119b747 has its CatchHandler @ 0109b534 */
      puVar9 = (uint *)ft_mem_realloc(param_2,4,*(uint *)(param_1 + 0x30),uVar15,
                                      *(undefined8 *)(param_1 + 0x38),&local_48);
      *(uint **)(param_1 + 0x38) = puVar9;
      if (local_48 != 0) {
        return (uint *)0x0;
      }
      *(uint *)(param_1 + 0x30) = uVar15;
    }
    else {
      puVar9 = *(uint **)(param_1 + 0x38);
    }
    if (uVar20 == 0) {
      *puVar9 = 0;
      return puVar9;
    }
    uVar23 = (ulong)uVar20;
    puVar13 = (uint *)(lVar11 + uVar16) + 1;
    puVar8 = puVar9;
    uVar16 = uVar23;
    do {
      uVar16 = uVar16 - 1;
      *puVar8 = (uint)(byte)*puVar13 << 0x10 | (uint)*(byte *)((long)puVar13 + 1) << 8 |
                (uint)*(byte *)((long)puVar13 + 2);
      puVar13 = (uint *)((long)puVar13 + 5);
      puVar8 = puVar8 + 1;
    } while (uVar16 != 0);
    goto LAB_0109ba40;
  }
  if (uVar16 == 0) goto LAB_0109b760;
  puVar9 = (uint *)(lVar11 + uVar16);
  pbVar3 = (byte *)(lVar11 + uVar23);
  puVar13 = puVar9 + 1;
  bVar5 = pbVar3[3];
  uVar15 = (uint)*pbVar3 << 0x18 | (uint)pbVar3[1] << 0x10 | (uint)pbVar3[2] << 8 | (uint)bVar5;
  uVar20 = (*puVar9 & 0xff00ff00) >> 8 | (*puVar9 & 0xff00ff) << 8;
  uVar20 = uVar20 >> 0x10 | uVar20 << 0x10;
  if (uVar15 == 0) {
    iVar27 = 0;
  }
  else {
    uVar16 = (ulong)(uVar15 - 1) + 1;
    pbVar17 = pbVar3 + 7;
    if (uVar16 < 4) {
LAB_0109b6e4:
      iVar27 = 0;
      uVar18 = uVar15;
    }
    else {
      uVar4 = 4;
      if ((bVar5 & 3) != 0) {
        uVar4 = (ulong)(bVar5 & 3);
      }
      lVar21 = uVar16 - uVar4;
      if (lVar21 == 0) goto LAB_0109b6e4;
      iVar31 = (int)lVar21;
      lVar24 = lVar21 * 4;
      iVar27 = 0;
      iVar28 = 0;
      puVar12 = (undefined8 *)(lVar11 + uVar23 + 0xf);
      iVar29 = 0;
      iVar30 = 0;
      do {
        puVar2 = puVar12 + -1;
        uVar32 = *puVar12;
        lVar21 = lVar21 + -4;
        puVar12 = puVar12 + 2;
        uVar6 = (uint5)uVar32 & 0xff000000ff;
        uVar7 = (uint5)*puVar2 & 0xff000000ff;
        iVar27 = iVar27 + (int)uVar7 + 1;
        iVar28 = iVar28 + (uint)(byte)(uVar7 >> 0x20) + 1;
        iVar29 = iVar29 + (int)uVar6 + 1;
        iVar30 = iVar30 + (uint)(byte)(uVar6 >> 0x20) + 1;
      } while (lVar21 != 0);
      iVar27 = iVar29 + iVar27 + iVar30 + iVar28;
      pbVar17 = pbVar17 + lVar24;
      uVar18 = uVar15 - iVar31;
      if (uVar4 == 0) goto joined_r0x0109b754;
    }
    do {
                    /* catch() { ... } // from try @ 0109b644 with catch @ 0109b6ec */
      uVar18 = uVar18 - 1;
      iVar27 = iVar27 + (uint)*pbVar17 + 1;
                    /* catch() { ... } // from try @ 0109b634 with catch @ 0109b6fc */
      pbVar17 = pbVar17 + 4;
    } while (uVar18 != 0);
  }
joined_r0x0109b754:
  if (uVar20 == 0) {
LAB_0109b760:
    puVar9 = (uint *)FUN_0109c9c0(param_1,lVar11 + uVar23,param_2);
    return puVar9;
  }
  uVar18 = uVar20 + 1;
  if (iVar27 != 0) {
    uVar18 = uVar18 + iVar27;
    local_4c = 0;
    if (*(uint *)(param_1 + 0x30) < uVar18) {
      *(undefined8 *)(param_1 + 0x40) = param_2;
      puVar8 = (uint *)ft_mem_realloc(param_2,4,*(uint *)(param_1 + 0x30),uVar18,
                                      *(undefined8 *)(param_1 + 0x38),&local_4c);
      *(uint **)(param_1 + 0x38) = puVar8;
      if (local_4c != 0) {
        return (uint *)0x0;
      }
      *(uint *)(param_1 + 0x30) = uVar18;
    }
    else {
      puVar8 = *(uint **)(param_1 + 0x38);
    }
    uVar19 = (uint)pbVar3[7];
    uVar16 = 0;
    pbVar17 = (byte *)((long)puVar9 + 9);
    uVar10 = 1;
    uVar22 = (uint)(byte)*puVar13 << 0x10 | (uint)*(byte *)((long)puVar9 + 5) << 8 |
             (uint)*(byte *)((long)puVar9 + 6);
    pbVar14 = pbVar3 + 8;
    uVar25 = (uint)pbVar3[4] << 0x10 | (uint)pbVar3[5] << 8 | (uint)pbVar3[6];
    uVar18 = 1;
    while( true ) {
      uVar26 = (uint)uVar16;
      if (uVar19 + uVar25 < uVar22) {
        do {
          iVar27 = (int)uVar16;
          lVar11 = 0;
          do {
            puVar8[iVar27 + lVar11] = uVar25 + (int)lVar11;
            lVar11 = lVar11 + 1;
            uVar26 = (uint)lVar11;
          } while (uVar26 <= uVar19);
          uVar10 = uVar10 + 1;
          if (uVar15 < uVar10) {
            uVar26 = iVar27 + uVar26;
            uVar16 = (ulong)uVar26;
            goto joined_r0x0109b8f4;
          }
          uVar19 = (uint)pbVar14[3];
          uVar25 = (uint)*pbVar14 << 0x10 | (uint)pbVar14[1] << 8 | (uint)pbVar14[2];
          pbVar14 = pbVar14 + 4;
          uVar16 = lVar11 + (uVar16 & 0xffffffff);
        } while (uVar25 + uVar19 < uVar22);
        uVar26 = iVar27 + uVar26;
        uVar16 = (ulong)uVar26;
      }
      if (uVar22 < uVar25) {
        puVar8[(int)uVar26] = uVar22;
        uVar16 = (ulong)(uVar26 + 1);
      }
      uVar26 = (uint)uVar16;
      uVar18 = uVar18 + 1;
      if (uVar20 < uVar18) break;
      bVar5 = *pbVar17;
      pbVar3 = pbVar17 + 1;
      pbVar1 = pbVar17 + 2;
      pbVar17 = pbVar17 + 5;
      uVar22 = (uint)bVar5 << 0x10 | (uint)*pbVar3 << 8 | (uint)*pbVar1;
    }
joined_r0x0109b8f4:
    if (uVar20 < uVar18) {
      if (uVar10 <= uVar15) {
        lVar11 = 0;
        do {
          puVar8[(int)uVar16 + lVar11] = uVar25 + (int)lVar11;
          lVar11 = lVar11 + 1;
        } while ((uint)lVar11 <= uVar19);
        if (uVar10 < uVar15) {
          uVar16 = (int)uVar16 + lVar11;
          do {
            bVar5 = pbVar14[3];
            uVar23 = (ulong)bVar5 + 1;
            uVar20 = (uint)*pbVar14 << 0x10 | (uint)pbVar14[1] << 8 | (uint)pbVar14[2];
            lVar21 = (long)(int)uVar16;
            lVar11 = lVar21;
            if (uVar23 < 8) {
              lVar24 = 0;
LAB_0109b9c4:
              iVar27 = (bVar5 + 1) - (int)lVar24;
              uVar20 = (int)lVar24 + uVar20;
              puVar9 = puVar8 + lVar11;
              do {
                *puVar9 = uVar20;
                iVar27 = iVar27 + -1;
                uVar20 = uVar20 + 1;
                puVar9 = puVar9 + 1;
              } while (iVar27 != 0);
            }
            else {
              uVar18 = bVar5 + 1 & 7;
              lVar24 = uVar23 - uVar18;
              if (lVar24 == 0) goto LAB_0109b9c4;
              puVar9 = puVar8 + lVar21 + 4;
              lVar11 = lVar24;
              iVar27 = 0;
              iVar31 = 1;
              iVar28 = 2;
              iVar29 = 3;
              do {
                iVar30 = iVar27 + uVar20;
                iVar33 = iVar31 + uVar20;
                iVar34 = iVar28 + uVar20;
                iVar35 = iVar29 + uVar20;
                iVar27 = iVar27 + 8;
                iVar31 = iVar31 + 8;
                iVar28 = iVar28 + 8;
                iVar29 = iVar29 + 8;
                lVar11 = lVar11 + -8;
                *(ulong *)(puVar9 + -2) = CONCAT44(iVar35,iVar34);
                *(ulong *)(puVar9 + -4) = CONCAT44(iVar33,iVar30);
                *(ulong *)(puVar9 + 2) = CONCAT44(iVar35 + 4,iVar34 + 4);
                *(ulong *)puVar9 = CONCAT44(iVar33 + 4,iVar30 + 4);
                puVar9 = puVar9 + 8;
              } while (lVar11 != 0);
              lVar11 = lVar21 + lVar24;
              if (uVar18 != 0) goto LAB_0109b9c4;
            }
            uVar10 = uVar10 + 1;
            pbVar14 = pbVar14 + 4;
            uVar16 = lVar21 + (ulong)bVar5 + 1;
          } while (uVar10 != uVar15);
        }
        else {
          uVar16 = lVar11 + uVar16;
        }
      }
    }
    else {
      puVar8[(int)uVar26] = uVar22;
      uVar16 = (long)(int)uVar26 + 1;
      if (uVar18 < uVar20) {
        lVar11 = 0;
        iVar27 = uVar20 - uVar18;
        puVar9 = puVar8 + uVar16;
        do {
          pbVar3 = pbVar17 + lVar11;
          iVar27 = iVar27 + -1;
          *puVar9 = (uint)*pbVar3 << 0x10 | (uint)pbVar3[1] << 8 | (uint)pbVar3[2];
          lVar11 = lVar11 + 5;
          puVar9 = puVar9 + 1;
        } while (iVar27 != 0);
        uVar16 = (ulong)((int)uVar16 + (uVar20 - uVar18));
      }
    }
    puVar8[(int)uVar16] = 0;
    return puVar8;
  }
  local_44 = 0;
  if (*(uint *)(param_1 + 0x30) < uVar18) {
    *(undefined8 *)(param_1 + 0x40) = param_2;
    puVar9 = (uint *)ft_mem_realloc(param_2,4,*(uint *)(param_1 + 0x30),uVar18,
                                    *(undefined8 *)(param_1 + 0x38),&local_44);
    *(uint **)(param_1 + 0x38) = puVar9;
    if (local_44 != 0) {
      return (uint *)0x0;
    }
    *(uint *)(param_1 + 0x30) = uVar18;
  }
  else {
    puVar9 = *(uint **)(param_1 + 0x38);
  }
  uVar16 = 0;
  uVar23 = (ulong)uVar20;
  do {
    uVar15 = *puVar13;
    pbVar3 = (byte *)((long)puVar13 + 1);
    pbVar17 = (byte *)((long)puVar13 + 2);
    puVar13 = (uint *)((long)puVar13 + 5);
    puVar9[uVar16] = (uint)(byte)uVar15 << 0x10 | (uint)*pbVar3 << 8 | (uint)*pbVar17;
    uVar16 = uVar16 + 1;
  } while (uVar23 != uVar16);
LAB_0109ba40:
  puVar9[uVar23] = 0;
  return puVar9;
}

