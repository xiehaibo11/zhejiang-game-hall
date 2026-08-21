
/* WARNING: Type propagation algorithm not settling */

uint * FUN_00e556d8(long param_1,undefined8 param_2,uint param_3)

{
  ulong uVar1;
  byte bVar2;
  uint5 uVar3;
  uint5 uVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  byte *pbVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  byte *pbVar15;
  byte *pbVar16;
  uint *puVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  byte *pbVar21;
  uint uVar22;
  long lVar23;
  uint uVar24;
  long lVar25;
  uint uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int local_44;
  
  lVar9 = *(long *)(param_1 + 0x18);
  uVar10 = 0;
  uVar26 = (*(uint *)(lVar9 + 6) & 0xff00ff00) >> 8 | (*(uint *)(lVar9 + 6) & 0xff00ff) << 8;
  uVar26 = uVar26 >> 0x10 | uVar26 << 0x10;
  do {
    uVar20 = uVar26;
    if (uVar20 <= uVar10) {
      return (uint *)0x0;
    }
    uVar26 = uVar10 + uVar20 >> 1;
    pbVar8 = (byte *)(lVar9 + 0xd + (ulong)(uVar26 * 0xb));
    uVar7 = (uint)pbVar8[-3] << 0x10 | (uint)pbVar8[-2] << 8 | (uint)pbVar8[-1];
  } while ((param_3 < uVar7) || (uVar10 = uVar26 + 1, uVar26 = uVar20, uVar7 < param_3));
  uVar11 = (ulong)*pbVar8 << 0x18 | (ulong)pbVar8[1] << 0x10 | (ulong)pbVar8[2] << 8 |
           (ulong)pbVar8[3];
  uVar14 = (ulong)pbVar8[4] << 0x18 | (ulong)pbVar8[5] << 0x10 | (ulong)pbVar8[6] << 8 |
           (ulong)pbVar8[7];
  if (uVar14 == 0 && uVar11 == 0) {
    return (uint *)0x0;
  }
  if (uVar11 == 0) {
    pbVar8 = (byte *)(lVar9 + uVar14);
    uVar11 = (ulong)*pbVar8 << 0x18 | (ulong)pbVar8[1] << 0x10 | (ulong)pbVar8[2] << 8 |
             (ulong)pbVar8[3];
    uVar10 = (int)uVar11 + 1;
    local_44 = 0;
    if (*(uint *)(param_1 + 0x30) < uVar10) {
      *(undefined8 *)(param_1 + 0x40) = param_2;
      puVar5 = (uint *)FUN_00e13bcc(param_2,4,*(uint *)(param_1 + 0x30),uVar10,
                                    *(undefined8 *)(param_1 + 0x38),&local_44);
      *(uint **)(param_1 + 0x38) = puVar5;
      if (local_44 != 0) {
        return (uint *)0x0;
      }
      *(uint *)(param_1 + 0x30) = uVar10;
    }
    else {
      puVar5 = *(uint **)(param_1 + 0x38);
    }
    if ((int)uVar11 == 0) {
      *puVar5 = 0;
      return puVar5;
    }
    pbVar8 = pbVar8 + 4;
    puVar6 = puVar5;
    uVar14 = uVar11;
    do {
      uVar14 = uVar14 - 1;
      *puVar6 = (uint)*pbVar8 << 0x10 | (uint)pbVar8[1] << 8 | (uint)pbVar8[2];
      pbVar8 = pbVar8 + 5;
      puVar6 = puVar6 + 1;
    } while (uVar14 != 0);
    puVar5[uVar11] = 0;
    return puVar5;
  }
  if (uVar14 != 0) {
    pbVar8 = (byte *)(lVar9 + uVar14);
    pbVar16 = (byte *)(lVar9 + uVar11);
    bVar2 = pbVar16[3];
    uVar10 = (uint)*pbVar16 << 0x18 | (uint)pbVar16[1] << 0x10 | (uint)pbVar16[2] << 8 | (uint)bVar2
    ;
    uVar14 = (ulong)*pbVar8 << 0x18 | (ulong)pbVar8[1] << 0x10 | (ulong)pbVar8[2] << 8 |
             (ulong)pbVar8[3];
    uVar26 = (uint)uVar14;
    if (uVar10 == 0) {
      iVar29 = 0;
    }
    else {
      uVar1 = (ulong)(uVar10 - 1) + 1;
      if (uVar1 < 5) {
        iVar29 = 0;
        pbVar21 = pbVar16 + 7;
        uVar20 = uVar10;
      }
      else {
        uVar20 = 4;
        if ((bVar2 & 3) != 0) {
          uVar20 = bVar2 & 3;
        }
        lVar12 = uVar1 - uVar20;
        iVar29 = 0;
        iVar30 = 0;
        puVar13 = (undefined8 *)(lVar9 + uVar11 + 0xf);
        uVar20 = uVar10 - (int)lVar12;
        pbVar21 = pbVar16 + 7 + lVar12 * 4;
        iVar31 = 0;
        iVar32 = 0;
        do {
          lVar12 = lVar12 + -4;
          uVar3 = (uint5)*puVar13 & 0xff000000ff;
          uVar4 = (uint5)puVar13[-1] & 0xff000000ff;
          iVar29 = iVar29 + 1 + (int)uVar4;
          iVar30 = iVar30 + 1 + (uint)(byte)(uVar4 >> 0x20);
          iVar31 = iVar31 + 1 + (int)uVar3;
          iVar32 = iVar32 + 1 + (uint)(byte)(uVar3 >> 0x20);
          puVar13 = puVar13 + 2;
        } while (lVar12 != 0);
        iVar29 = iVar31 + iVar29 + iVar32 + iVar30;
      }
      do {
        uVar20 = uVar20 - 1;
        iVar29 = iVar29 + (uint)*pbVar21 + 1;
        pbVar21 = pbVar21 + 4;
      } while (uVar20 != 0);
    }
    if (uVar26 != 0) {
      pbVar21 = pbVar8 + 4;
      uVar20 = uVar26 + 1;
      if (iVar29 == 0) {
        local_44 = 0;
        if (*(uint *)(param_1 + 0x30) < uVar20) {
          *(undefined8 *)(param_1 + 0x40) = param_2;
          puVar5 = (uint *)FUN_00e13bcc(param_2,4,*(uint *)(param_1 + 0x30),uVar20,
                                        *(undefined8 *)(param_1 + 0x38),&local_44);
          *(uint **)(param_1 + 0x38) = puVar5;
          if (local_44 != 0) {
            return (uint *)0x0;
          }
          *(uint *)(param_1 + 0x30) = uVar20;
        }
        else {
          puVar5 = *(uint **)(param_1 + 0x38);
        }
        uVar11 = 0;
        do {
          bVar2 = *pbVar21;
          pbVar8 = pbVar21 + 1;
          pbVar16 = pbVar21 + 2;
          pbVar21 = pbVar21 + 5;
          puVar5[uVar11] = (uint)bVar2 << 0x10 | (uint)*pbVar8 << 8 | (uint)*pbVar16;
          uVar11 = uVar11 + 1;
        } while (uVar14 != uVar11);
        puVar5[uVar14] = 0;
        return puVar5;
      }
      uVar20 = uVar20 + iVar29;
      local_44 = 0;
      if (*(uint *)(param_1 + 0x30) < uVar20) {
        *(undefined8 *)(param_1 + 0x40) = param_2;
        puVar5 = (uint *)FUN_00e13bcc(param_2,4,*(uint *)(param_1 + 0x30),uVar20,
                                      *(undefined8 *)(param_1 + 0x38),&local_44);
        *(uint **)(param_1 + 0x38) = puVar5;
        if (local_44 != 0) {
          return (uint *)0x0;
        }
        *(uint *)(param_1 + 0x30) = uVar20;
      }
      else {
        puVar5 = *(uint **)(param_1 + 0x38);
      }
      uVar19 = (uint)pbVar16[7];
      uVar11 = 0;
      pbVar15 = pbVar8 + 9;
      uVar7 = 1;
      uVar22 = (uint)*pbVar21 << 0x10 | (uint)pbVar8[5] << 8 | (uint)pbVar8[6];
      pbVar8 = pbVar16 + 8;
      uVar24 = (uint)pbVar16[4] << 0x10 | (uint)pbVar16[5] << 8 | (uint)pbVar16[6];
      uVar20 = 1;
      if (pbVar16[7] + uVar24 < uVar22) goto LAB_00e55b74;
      while( true ) {
        if (uVar22 < uVar24) {
          puVar5[(int)uVar11] = uVar22;
          uVar11 = (ulong)((int)uVar11 + 1);
        }
        iVar29 = (int)uVar11;
        uVar20 = uVar20 + 1;
        if (uVar26 < uVar20) break;
        bVar2 = *pbVar15;
        pbVar16 = pbVar15 + 1;
        pbVar21 = pbVar15 + 2;
        pbVar15 = pbVar15 + 5;
        uVar22 = (uint)bVar2 << 0x10 | (uint)*pbVar16 << 8 | (uint)*pbVar21;
        if (uVar19 + uVar24 < uVar22) {
LAB_00e55b74:
          do {
            lVar9 = 0;
            do {
              puVar5[(int)uVar11 + lVar9] = uVar24 + (int)lVar9;
              lVar9 = lVar9 + 1;
            } while ((uint)lVar9 <= uVar19);
            uVar7 = uVar7 + 1;
            if (uVar10 < uVar7) {
              iVar29 = (int)uVar11 + (uint)lVar9;
              goto LAB_00e55ba4;
            }
            bVar2 = *pbVar8;
            uVar11 = lVar9 + (uVar11 & 0xffffffff);
            pbVar16 = pbVar8 + 1;
            pbVar21 = pbVar8 + 2;
            uVar19 = (uint)pbVar8[3];
            pbVar8 = pbVar8 + 4;
            uVar24 = (uint)bVar2 << 0x10 | (uint)*pbVar16 << 8 | (uint)*pbVar21;
          } while (uVar19 + uVar24 < uVar22);
        }
      }
LAB_00e55ba4:
      if (uVar26 < uVar20) {
        if (uVar7 <= uVar10) {
          lVar9 = 0;
          do {
            puVar5[iVar29 + lVar9] = uVar24 + (int)lVar9;
            lVar9 = lVar9 + 1;
          } while ((uint)lVar9 <= uVar19);
          if (uVar7 < uVar10) {
            lVar9 = iVar29 + lVar9;
            do {
              bVar2 = pbVar8[3];
              uVar11 = (ulong)bVar2 + 1;
              uVar26 = (uint)*pbVar8 << 0x10 | (uint)pbVar8[1] << 8 | (uint)pbVar8[2];
              lVar12 = (long)(int)lVar9;
              if (uVar11 < 8) {
                lVar23 = 0;
                lVar25 = lVar12;
LAB_00e55c70:
                iVar29 = (bVar2 + 1) - (int)lVar23;
                uVar26 = (int)lVar23 + uVar26;
                puVar6 = puVar5 + lVar25;
                do {
                  *puVar6 = uVar26;
                  iVar29 = iVar29 + -1;
                  uVar26 = uVar26 + 1;
                  puVar6 = puVar6 + 1;
                } while (iVar29 != 0);
              }
              else {
                uVar20 = bVar2 + 1 & 7;
                lVar23 = uVar11 - uVar20;
                lVar25 = lVar12 + lVar23;
                puVar6 = puVar5 + (long)(int)lVar9 + 4;
                lVar9 = lVar23;
                iVar29 = 0;
                iVar30 = 1;
                iVar31 = 2;
                iVar32 = 3;
                do {
                  iVar33 = iVar29 + uVar26;
                  iVar34 = iVar30 + uVar26;
                  iVar35 = iVar31 + uVar26;
                  iVar36 = iVar32 + uVar26;
                  iVar29 = iVar29 + 8;
                  iVar30 = iVar30 + 8;
                  iVar31 = iVar31 + 8;
                  iVar32 = iVar32 + 8;
                  lVar9 = lVar9 + -8;
                  *(ulong *)(puVar6 + -2) = CONCAT44(iVar36,iVar35);
                  *(ulong *)(puVar6 + -4) = CONCAT44(iVar34,iVar33);
                  *(ulong *)(puVar6 + 2) = CONCAT44(iVar36 + 4,iVar35 + 4);
                  *(ulong *)puVar6 = CONCAT44(iVar34 + 4,iVar33 + 4);
                  puVar6 = puVar6 + 8;
                } while (lVar9 != 0);
                if (uVar20 != 0) goto LAB_00e55c70;
              }
              uVar7 = uVar7 + 1;
              pbVar8 = pbVar8 + 4;
              lVar9 = lVar12 + (ulong)bVar2 + 1;
              iVar29 = (int)lVar9;
            } while (uVar7 != uVar10);
          }
          else {
            iVar29 = (uint)lVar9 + iVar29;
          }
        }
      }
      else {
        puVar5[iVar29] = uVar22;
        iVar29 = iVar29 + 1;
        if (uVar20 < uVar26) {
          lVar9 = 0;
          iVar30 = uVar26 - uVar20;
          puVar6 = puVar5 + iVar29;
          do {
            pbVar8 = pbVar15 + lVar9;
            iVar30 = iVar30 + -1;
            *puVar6 = (uint)*pbVar8 << 0x10 | (uint)pbVar8[1] << 8 | (uint)pbVar8[2];
            lVar9 = lVar9 + 5;
            puVar6 = puVar6 + 1;
          } while (iVar30 != 0);
          iVar29 = iVar29 + uVar26 + ~uVar20 + 1;
        }
      }
      puVar5[iVar29] = 0;
      return puVar5;
    }
    if (uVar10 == 0) {
      uVar26 = 1;
      uVar20 = 0;
      if (*(int *)(param_1 + 0x30) == 0) goto LAB_00e55f74;
LAB_00e55e54:
      puVar5 = *(uint **)(param_1 + 0x38);
      puVar6 = puVar5;
    }
    else {
      uVar14 = (ulong)(uVar10 - 1) + 1;
      if (uVar14 < 5) {
        iVar29 = 0;
        pbVar8 = pbVar16 + 7;
        uVar26 = uVar10;
      }
      else {
        uVar26 = 4;
        if ((bVar2 & 3) != 0) {
          uVar26 = bVar2 & 3;
        }
        lVar12 = uVar14 - uVar26;
        iVar29 = 0;
        iVar30 = 0;
        puVar13 = (undefined8 *)(lVar9 + uVar11 + 0xf);
        uVar26 = uVar10 - (int)lVar12;
        pbVar8 = pbVar16 + 7 + lVar12 * 4;
        iVar31 = 0;
        iVar32 = 0;
        do {
          lVar12 = lVar12 + -4;
          uVar3 = (uint5)*puVar13 & 0xff000000ff;
          uVar4 = (uint5)puVar13[-1] & 0xff000000ff;
          iVar29 = iVar29 + 1 + (int)uVar4;
          iVar30 = iVar30 + 1 + (uint)(byte)(uVar4 >> 0x20);
          iVar31 = iVar31 + 1 + (int)uVar3;
          iVar32 = iVar32 + 1 + (uint)(byte)(uVar3 >> 0x20);
          puVar13 = puVar13 + 2;
        } while (lVar12 != 0);
        iVar29 = iVar31 + iVar29 + iVar32 + iVar30;
      }
      do {
        uVar26 = uVar26 - 1;
        iVar30 = iVar29 + (uint)*pbVar8;
        iVar29 = iVar30 + 1;
        pbVar8 = pbVar8 + 4;
      } while (uVar26 != 0);
      uVar26 = iVar30 + 2;
      uVar20 = *(uint *)(param_1 + 0x30);
      if (uVar26 <= uVar20) goto LAB_00e55e54;
LAB_00e55f74:
      local_44 = 0;
      *(undefined8 *)(param_1 + 0x40) = param_2;
      puVar5 = (uint *)FUN_00e13bcc(param_2,4,uVar20,uVar26,*(undefined8 *)(param_1 + 0x38),
                                    &local_44);
      *(uint **)(param_1 + 0x38) = puVar5;
      if (local_44 != 0) {
        return (uint *)0x0;
      }
      *(uint *)(param_1 + 0x30) = uVar26;
      puVar6 = puVar5;
    }
    for (; uVar10 != 0; uVar10 = uVar10 - 1) {
      bVar2 = pbVar16[7];
      uVar11 = (ulong)bVar2 + 1;
      uVar20 = (uint)pbVar16[4] << 0x10 | (uint)pbVar16[5] << 8 | (uint)pbVar16[6];
      uVar26 = bVar2 + 1;
      puVar18 = puVar5;
      if (7 < uVar11) {
        uVar7 = bVar2 + 1 & 7;
        lVar9 = uVar11 - uVar7;
        uVar27 = CONCAT44(uVar20 + 1,uVar20);
        uVar28 = CONCAT44(uVar20 + 3,uVar20 + 2);
        uVar26 = uVar26 - (int)lVar9;
        puVar17 = puVar5 + lVar9;
        uVar20 = uVar20 + (int)lVar9;
        puVar18 = puVar5 + 4;
        do {
          iVar29 = (int)((ulong)uVar27 >> 0x20);
          iVar30 = (int)((ulong)uVar28 >> 0x20);
          *(undefined8 *)(puVar18 + -2) = uVar28;
          *(undefined8 *)(puVar18 + -4) = uVar27;
          *(ulong *)(puVar18 + 2) = CONCAT44(iVar30 + 4,(int)uVar28 + 4);
          *(ulong *)puVar18 = CONCAT44(iVar29 + 4,(int)uVar27 + 4);
          uVar27 = CONCAT44(iVar29 + 8,(int)uVar27 + 8);
          uVar28 = CONCAT44(iVar30 + 8,(int)uVar28 + 8);
          lVar9 = lVar9 + -8;
          puVar18 = puVar18 + 8;
          if (lVar9 == 0) goto joined_r0x00e56084;
        } while( true );
      }
      do {
        puVar17 = puVar18 + 1;
        *puVar18 = uVar20;
        uVar26 = uVar26 - 1;
        uVar20 = uVar20 + 1;
        uVar7 = uVar26;
joined_r0x00e56084:
        puVar18 = puVar17;
      } while (uVar7 != 0);
      puVar5 = puVar5 + (ulong)bVar2 + 1;
      pbVar16 = pbVar16 + 4;
    }
    goto LAB_00e560a8;
  }
  pbVar8 = (byte *)(lVar9 + uVar11);
  bVar2 = pbVar8[3];
  uVar10 = (uint)*pbVar8 << 0x18 | (uint)pbVar8[1] << 0x10 | (uint)pbVar8[2] << 8 | (uint)bVar2;
  if (uVar10 == 0) {
    uVar26 = 1;
    uVar20 = 0;
    if (*(int *)(param_1 + 0x30) == 0) goto LAB_00e55d60;
LAB_00e55a8c:
    puVar5 = *(uint **)(param_1 + 0x38);
    puVar6 = puVar5;
  }
  else {
    uVar14 = (ulong)(uVar10 - 1) + 1;
    if (uVar14 < 5) {
      iVar29 = 0;
      pbVar16 = pbVar8 + 7;
      uVar26 = uVar10;
    }
    else {
      uVar26 = 4;
      if ((bVar2 & 3) != 0) {
        uVar26 = bVar2 & 3;
      }
      lVar12 = uVar14 - uVar26;
      iVar29 = 0;
      iVar30 = 0;
      puVar13 = (undefined8 *)(lVar9 + uVar11 + 0xf);
      uVar26 = uVar10 - (int)lVar12;
      pbVar16 = pbVar8 + 7 + lVar12 * 4;
      iVar31 = 0;
      iVar32 = 0;
      do {
        lVar12 = lVar12 + -4;
        uVar3 = (uint5)*puVar13 & 0xff000000ff;
        uVar4 = (uint5)puVar13[-1] & 0xff000000ff;
        iVar29 = iVar29 + 1 + (int)uVar4;
        iVar30 = iVar30 + 1 + (uint)(byte)(uVar4 >> 0x20);
        iVar31 = iVar31 + 1 + (int)uVar3;
        iVar32 = iVar32 + 1 + (uint)(byte)(uVar3 >> 0x20);
        puVar13 = puVar13 + 2;
      } while (lVar12 != 0);
      iVar29 = iVar31 + iVar29 + iVar32 + iVar30;
    }
    do {
      uVar26 = uVar26 - 1;
      iVar30 = iVar29 + (uint)*pbVar16;
      iVar29 = iVar30 + 1;
      pbVar16 = pbVar16 + 4;
    } while (uVar26 != 0);
    uVar26 = iVar30 + 2;
    uVar20 = *(uint *)(param_1 + 0x30);
    if (uVar26 <= uVar20) goto LAB_00e55a8c;
LAB_00e55d60:
    local_44 = 0;
    *(undefined8 *)(param_1 + 0x40) = param_2;
    puVar5 = (uint *)FUN_00e13bcc(param_2,4,uVar20,uVar26,*(undefined8 *)(param_1 + 0x38),&local_44)
    ;
    *(uint **)(param_1 + 0x38) = puVar5;
    if (local_44 != 0) {
      return (uint *)0x0;
    }
    *(uint *)(param_1 + 0x30) = uVar26;
    puVar6 = puVar5;
  }
  for (; uVar10 != 0; uVar10 = uVar10 - 1) {
    bVar2 = pbVar8[7];
    uVar11 = (ulong)bVar2 + 1;
    uVar20 = (uint)pbVar8[4] << 0x10 | (uint)pbVar8[5] << 8 | (uint)pbVar8[6];
    uVar26 = bVar2 + 1;
    puVar18 = puVar5;
    if (7 < uVar11) {
      uVar7 = bVar2 + 1 & 7;
      lVar9 = uVar11 - uVar7;
      uVar27 = CONCAT44(uVar20 + 1,uVar20);
      uVar28 = CONCAT44(uVar20 + 3,uVar20 + 2);
      uVar26 = uVar26 - (int)lVar9;
      puVar17 = puVar5 + lVar9;
      uVar20 = uVar20 + (int)lVar9;
      puVar18 = puVar5 + 4;
      do {
        iVar29 = (int)((ulong)uVar27 >> 0x20);
        iVar30 = (int)((ulong)uVar28 >> 0x20);
        *(undefined8 *)(puVar18 + -2) = uVar28;
        *(undefined8 *)(puVar18 + -4) = uVar27;
        *(ulong *)(puVar18 + 2) = CONCAT44(iVar30 + 4,(int)uVar28 + 4);
        *(ulong *)puVar18 = CONCAT44(iVar29 + 4,(int)uVar27 + 4);
        uVar27 = CONCAT44(iVar29 + 8,(int)uVar27 + 8);
        uVar28 = CONCAT44(iVar30 + 8,(int)uVar28 + 8);
        lVar9 = lVar9 + -8;
        puVar18 = puVar18 + 8;
        if (lVar9 == 0) goto joined_r0x00e55e18;
      } while( true );
    }
    do {
      puVar17 = puVar18 + 1;
      *puVar18 = uVar20;
      uVar26 = uVar26 - 1;
      uVar20 = uVar20 + 1;
      uVar7 = uVar26;
joined_r0x00e55e18:
      puVar18 = puVar17;
    } while (uVar7 != 0);
    puVar5 = puVar5 + (ulong)bVar2 + 1;
    pbVar8 = pbVar8 + 4;
  }
LAB_00e560a8:
  *puVar5 = 0;
  return puVar6;
}

