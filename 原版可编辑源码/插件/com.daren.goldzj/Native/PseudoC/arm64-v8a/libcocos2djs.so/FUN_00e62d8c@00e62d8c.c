
void FUN_00e62d8c(undefined8 *param_1,uint param_2)

{
  ulong *puVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  ushort uVar7;
  short sVar8;
  char cVar9;
  char cVar10;
  byte bVar11;
  short sVar12;
  long lVar13;
  bool bVar14;
  bool bVar15;
  int iVar16;
  void *__dest;
  uint uVar17;
  undefined8 uVar18;
  ushort *puVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  int iVar28;
  long lVar29;
  long lVar30;
  undefined8 *puVar31;
  uint uVar32;
  uint uVar33;
  long lVar34;
  long lVar35;
  byte *pbVar36;
  ushort *puVar37;
  byte *pbVar38;
  int *piVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  int iVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  long local_e8;
  long local_e0;
  undefined8 local_d8;
  long local_d0;
  long local_c8;
  int local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined7 uStack_88;
  undefined1 local_81;
  undefined7 uStack_80;
  undefined8 uStack_79;
  long local_70;
  
  lVar13 = tpidr_el0;
  local_70 = *(long *)(lVar13 + 0x28);
  uVar18 = *param_1;
  puVar31 = (undefined8 *)param_1[8];
  uVar17 = *(uint *)(param_1[0x284] + 0x48);
  iVar43 = *(int *)((long)param_1 + 0x3c);
  uStack_79 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  local_81 = 0;
  uStack_90 = 0;
  piVar39 = (int *)(param_1 + (ulong)param_2 * 0x13d + 9);
  *piVar39 = 0;
  iVar28 = *(int *)(param_1 + (ulong)param_2 * 0x13d + 0xd);
  uVar21 = param_1[6];
  iVar20 = *(int *)((long)param_1 + 0x2c);
  iVar16 = -iVar28;
  if (-1 < iVar28) {
    iVar16 = iVar28;
  }
  uVar24 = uVar21 + (long)iVar20 * 0x50;
  if (param_2 == 0) {
    if (0 < iVar20) {
      do {
        *(long *)(uVar21 + 0x38) = (long)*(short *)(uVar21 + 0x1a);
        *(long *)(uVar21 + 0x30) = (long)*(short *)(uVar21 + 0x18);
        uVar21 = uVar21 + 0x50;
      } while (uVar21 < uVar24);
    }
  }
  else if (0 < iVar20) {
    do {
      uVar44 = NEON_rev64((ulong)CONCAT24(*(undefined2 *)(uVar21 + 0x1a),
                                          (uint)*(ushort *)(uVar21 + 0x18)),4);
      *(long *)(uVar21 + 0x38) = (long)(short)((ulong)uVar44 >> 0x20);
      *(long *)(uVar21 + 0x30) = (long)(short)uVar44;
      uVar21 = uVar21 + 0x50;
    } while (uVar21 < uVar24);
  }
  if (0 < iVar43) {
    puVar4 = puVar31 + iVar43;
    pbVar38 = (byte *)0x0;
    uVar21 = (ulong)(uVar17 >> 1) / 7;
    puVar1 = param_1 + (ulong)param_2 * 0x13d + 10;
    piVar2 = (int *)((long)param_1 + (ulong)param_2 * 0x9e8 + 0x4c);
    param_1 = param_1 + (ulong)param_2 * 0x13d + 0xe;
    iVar28 = iVar16;
LAB_00e62ecc:
    puVar37 = (ushort *)*puVar31;
    puVar19 = *(ushort **)(puVar37 + 0x24);
    cVar9 = *(char *)((long)puVar19 + 3);
    iVar43 = -(int)cVar9;
    if (-1 < cVar9) {
      iVar43 = (int)cVar9;
    }
    if (iVar43 == iVar16) {
      cVar10 = *(char *)((long)puVar37 + 3);
      iVar43 = -(int)cVar10;
      if (-1 < cVar10) {
        iVar43 = (int)cVar10;
      }
      if (iVar43 == iVar16) {
        while( true ) {
          iVar20 = (int)cVar9;
          iVar43 = -iVar20;
          if (-1 < iVar20) {
            iVar43 = iVar20;
          }
          if (iVar43 != iVar16) break;
          if (puVar19 == puVar37) goto LAB_00e62f2c;
          puVar19 = *(ushort **)(puVar19 + 0x24);
          cVar9 = *(char *)((long)puVar19 + 3);
        }
        puVar37 = *(ushort **)(puVar19 + 0x20);
      }
    }
LAB_00e62f2c:
    local_c8 = 32000;
    local_d8 = 0;
    local_d0 = -32000;
    bVar15 = false;
    uVar17 = 0;
    bVar14 = false;
    pbVar36 = (byte *)0x0;
    lVar22 = 32000;
    lVar25 = 32000;
    lVar40 = 32000;
    lVar41 = -32000;
    local_e0 = 32000;
    local_e8 = -32000;
    lVar27 = 32000;
    lVar23 = -32000;
    lVar30 = -32000;
    lVar35 = -32000;
    puVar19 = puVar37;
    uVar33 = 0;
    uVar44 = local_d8;
joined_r0x00e63458:
    if (puVar19 == puVar37) {
      if (bVar14) goto LAB_00e63468;
      bVar14 = true;
    }
    iVar43 = iVar28;
    if (!bVar15) {
      bVar11 = *(byte *)((long)puVar19 + 3);
      iVar43 = (int)(char)bVar11;
      iVar20 = -(int)(char)bVar11;
      if (-1 < (char)bVar11) {
        iVar20 = (int)(char)bVar11;
      }
      if ((iVar20 == iVar16) || (puVar19 == *(ushort **)(puVar19 + 0x24))) {
        local_a4 = 0;
        iVar28 = *piVar39;
        if (iVar28 < 0x12) {
          if (*puVar1 == 0) {
            *puVar1 = (ulong)param_1;
            *piVar2 = 0x12;
          }
        }
        else {
          iVar20 = *piVar2;
          if (iVar20 <= iVar28) {
            if (iVar20 < 0x1999999) {
              iVar28 = (iVar20 >> 2) + 4;
              iVar3 = iVar28 + iVar20;
              iVar5 = 0x1999999;
              if (iVar3 < 0x199999a && -1 < iVar28) {
                iVar5 = iVar3;
              }
              if ((undefined8 *)*puVar1 == param_1) {
                __dest = (void *)FUN_00e13bcc(uVar18,0x50,0,(long)iVar5,0,&local_a4);
                *puVar1 = (ulong)__dest;
                if (local_a4 == 0) {
                  memcpy(__dest,param_1,0x5a0);
                  goto LAB_00e6329c;
                }
              }
              else {
                uVar24 = FUN_00e13bcc(uVar18,0x50,(long)iVar20,(long)iVar5,(undefined8 *)*puVar1,
                                      &local_a4);
                *puVar1 = uVar24;
                if (local_a4 == 0) {
LAB_00e6329c:
                  *piVar2 = iVar5;
                  iVar28 = *piVar39;
                  goto LAB_00e632d0;
                }
              }
            }
            else {
              local_a4 = 0x40;
            }
            iVar16 = local_a4;
            if (*(long *)(lVar13 + 0x28) == local_70) {
              return;
            }
            goto LAB_00e63584;
          }
        }
LAB_00e632d0:
        uVar24 = *puVar1;
        *piVar39 = iVar28 + 1;
        pbVar38 = (byte *)(uVar24 + (long)iVar28 * 0x50);
        *pbVar38 = 0;
        pbVar38[0x30] = 0;
        pbVar38[0x31] = 0x7d;
        pbVar38[0x32] = 0;
        pbVar38[0x33] = 0;
        pbVar38[0x34] = 0;
        pbVar38[0x35] = 0;
        pbVar38[0x36] = 0;
        pbVar38[0x37] = 0;
        bVar15 = pbVar36 != (byte *)0x0;
        *(undefined8 *)(pbVar38 + 0x28) = uStack_79;
        *(ulong *)(pbVar38 + 0x20) = CONCAT71(uStack_80,local_81);
        *(ulong *)(pbVar38 + 0x19) = CONCAT17(local_81,uStack_88);
        *(undefined8 *)(pbVar38 + 0x11) = uStack_90;
        *(undefined8 *)(pbVar38 + 9) = uStack_98;
        *(undefined8 *)(pbVar38 + 1) = local_a0;
        pbVar38[1] = bVar11;
        pbVar36 = (byte *)0x0;
        if (bVar15) {
          pbVar36 = pbVar38 + -0x50;
        }
        pbVar38[0x40] = 0;
        pbVar38[0x41] = 0;
        pbVar38[0x42] = 0;
        pbVar38[0x43] = 0;
        pbVar38[0x44] = 0;
        pbVar38[0x45] = 0;
        pbVar38[0x46] = 0;
        pbVar38[0x47] = 0;
        pbVar38[0x38] = 0;
        pbVar38[0x39] = 0;
        pbVar38[0x3a] = 0;
        pbVar38[0x3b] = 0;
        pbVar38[0x3c] = 0;
        pbVar38[0x3d] = 0;
        pbVar38[0x3e] = 0;
        pbVar38[0x3f] = 0;
        *(ushort **)(pbVar38 + 0x40) = puVar19;
        *(ushort **)(pbVar38 + 0x48) = puVar19;
        uVar7 = *puVar19;
        uVar17 = (uint)uVar7;
        lVar27 = *(long *)(puVar19 + 0x18);
        lVar22 = *(long *)(puVar19 + 0x1c);
        lVar23 = lVar22;
        lVar25 = lVar22;
        if ((uVar7 & 3) != 0) {
          lVar25 = 32000;
          lVar23 = -32000;
        }
        lVar30 = lVar27;
        lVar35 = lVar22;
        uVar33 = uVar17;
        if (puVar19 == *(ushort **)(puVar19 + 0x24)) {
          *(short *)(uVar24 + (long)iVar28 * 0x50 + 2) = (short)lVar27;
          if ((uVar7 & 3) != 0) {
            *pbVar38 = 1;
          }
          pbVar38 = (byte *)0x0;
          bVar15 = false;
          lVar29 = uVar24 + (long)iVar28 * 0x50;
          *(short *)(lVar29 + 6) = (short)lVar22;
          *(short *)(lVar29 + 8) = (short)lVar22;
          *(undefined2 *)(lVar29 + 10) = 0;
        }
        else {
          bVar15 = true;
        }
      }
      else {
        bVar15 = false;
        iVar43 = iVar28;
      }
    }
    puVar19 = *(ushort **)(puVar19 + 0x20);
    iVar28 = iVar43;
    if (bVar15) {
      lVar42 = *(long *)(puVar19 + 0x18);
      lVar6 = *(long *)(puVar19 + 0x1c);
      lVar29 = lVar42;
      if (lVar27 <= lVar42) {
        lVar29 = lVar27;
      }
      if (lVar42 <= lVar30) {
        lVar42 = lVar30;
      }
      if (lVar6 < lVar22) {
        uVar17 = (uint)*puVar19;
        lVar22 = lVar6;
      }
      lVar34 = lVar6;
      if (lVar6 <= lVar35) {
        lVar34 = lVar35;
      }
      uVar32 = (uint)*puVar19;
      if (lVar6 <= lVar35) {
        uVar32 = uVar33;
      }
      lVar26 = lVar23;
      if ((*puVar19 & 3) == 0) {
        lVar27 = lVar6;
        if (lVar25 <= lVar6) {
          lVar27 = lVar25;
        }
        lVar26 = lVar6;
        lVar25 = lVar27;
        if (lVar6 <= lVar23) {
          lVar26 = lVar23;
        }
      }
      lVar30 = lVar42;
      lVar27 = lVar29;
      if ((puVar19 == puVar37) ||
         (lVar23 = lVar26, lVar35 = lVar34, uVar33 = uVar32, iVar43 != *(char *)((long)puVar19 + 3))
         ) {
        sVar8 = (short)lVar22;
        sVar12 = (short)lVar34;
        if ((pbVar36 == (byte *)0x0) || (*(long *)(pbVar38 + 0x40) != *(long *)(pbVar36 + 0x48))) {
          *(ushort **)(pbVar38 + 0x48) = puVar19;
          *(short *)(pbVar38 + 2) = (short)((uint)((int)lVar29 + (int)lVar42) >> 1);
          *(short *)(pbVar38 + 4) = (short)((uint)((int)lVar42 - (int)lVar29) >> 1);
          if ((((uVar32 | uVar17) & 3) != 0) && (lVar26 - lVar25 < (long)uVar21)) {
            *pbVar38 = *pbVar38 | 1;
          }
          *(short *)(pbVar38 + 6) = sVar8;
          *(short *)(pbVar38 + 8) = sVar12;
          *(short *)(pbVar38 + 10) = sVar12 - sVar8;
          local_d8 = CONCAT44(uVar17,uVar32);
          local_d0 = lVar34;
          pbVar36 = pbVar38;
          local_c8 = lVar22;
          local_e8 = lVar26;
          local_e0 = lVar25;
        }
        else {
          local_d8 = uVar44;
          if (*(char *)(*(long *)(pbVar38 + 0x40) + 2) == (char)puVar19[1]) {
            *(ushort **)(pbVar36 + 0x48) = puVar19;
            lVar27 = lVar40;
            if (lVar29 <= lVar40) {
              lVar27 = lVar29;
            }
            lVar30 = lVar41;
            if (lVar41 <= lVar42) {
              lVar30 = lVar42;
            }
            lVar23 = local_c8;
            if (lVar22 <= local_c8) {
              lVar23 = lVar22;
            }
            local_d8._4_4_ = (uint)((ulong)uVar44 >> 0x20);
            *(short *)(pbVar36 + 6) = (short)lVar23;
            if (lVar22 <= local_c8) {
              local_d8._4_4_ = uVar17;
            }
            lVar35 = local_d0;
            if (local_d0 <= lVar34) {
              lVar35 = lVar34;
            }
            local_d8._0_4_ = (uint)uVar44;
            *(short *)(pbVar36 + 2) = (short)((uint)((int)lVar27 + (int)lVar30) >> 1);
            if (local_d0 <= lVar34) {
              local_d8._0_4_ = uVar32;
            }
            *(short *)(pbVar36 + 4) = (short)((uint)((int)lVar30 - (int)lVar27) >> 1);
            lVar29 = local_e0;
            if (lVar25 <= local_e0) {
              lVar29 = lVar25;
            }
            *(short *)(pbVar36 + 8) = (short)lVar35;
            lVar42 = local_e8;
            if (local_e8 <= lVar26) {
              lVar42 = lVar26;
            }
            bVar11 = *pbVar36 | 1;
            if ((long)uVar21 <= lVar42 - lVar29 || (((uint)local_d8 | local_d8._4_4_) & 3) == 0) {
              bVar11 = *pbVar36 & 0xfe;
            }
            *pbVar36 = bVar11;
            *(short *)(pbVar36 + 10) = (short)lVar35 - (short)lVar23;
            lVar22 = lVar23;
            lVar25 = lVar29;
            lVar26 = lVar42;
            lVar34 = lVar35;
            lVar29 = lVar40;
            lVar42 = lVar41;
            uVar17 = local_d8._4_4_;
            uVar32 = (uint)local_d8;
          }
          else {
            lVar35 = local_d0 - local_c8;
            lVar23 = -lVar35;
            if (-1 < lVar35) {
              lVar23 = lVar35;
            }
            lVar6 = lVar34 - lVar22;
            lVar35 = -lVar6;
            if (-1 < lVar6) {
              lVar35 = lVar6;
            }
            if (lVar35 < lVar23) {
              if (lVar40 <= lVar29) {
                lVar29 = lVar40;
              }
              if (lVar42 <= lVar41) {
                lVar42 = lVar41;
              }
              *(ushort **)(pbVar36 + 0x48) = puVar19;
              *(short *)(pbVar36 + 2) = (short)((uint)((int)lVar29 + (int)lVar42) >> 1);
              *(short *)(pbVar36 + 4) = (short)((uint)((int)lVar42 - (int)lVar29) >> 1);
            }
            else {
              lVar27 = lVar40;
              if (lVar29 <= lVar40) {
                lVar27 = lVar29;
              }
              lVar30 = lVar41;
              if (lVar41 <= lVar42) {
                lVar30 = lVar42;
              }
              *(ushort **)(pbVar38 + 0x48) = puVar19;
              *(short *)(pbVar38 + 2) = (short)((uint)((int)lVar27 + (int)lVar30) >> 1);
              *(short *)(pbVar38 + 4) = (short)((uint)((int)lVar30 - (int)lVar27) >> 1);
              if ((((uVar32 | uVar17) & 3) != 0) && (lVar26 - lVar25 < (long)uVar21)) {
                *pbVar38 = *pbVar38 | 1;
              }
              uVar44 = *(undefined8 *)(pbVar38 + 0x30);
              uVar46 = *(undefined8 *)(pbVar38 + 0x48);
              uVar45 = *(undefined8 *)(pbVar38 + 0x40);
              uVar48 = *(undefined8 *)(pbVar38 + 0x18);
              uVar47 = *(undefined8 *)(pbVar38 + 0x10);
              uVar50 = *(undefined8 *)(pbVar38 + 0x28);
              uVar49 = *(undefined8 *)(pbVar38 + 0x20);
              *(short *)(pbVar38 + 6) = sVar8;
              *(short *)(pbVar38 + 8) = sVar12;
              *(short *)(pbVar38 + 10) = sVar12 - sVar8;
              *(undefined8 *)(pbVar36 + 0x38) = *(undefined8 *)(pbVar38 + 0x38);
              *(undefined8 *)(pbVar36 + 0x30) = uVar44;
              *(undefined8 *)(pbVar36 + 0x48) = uVar46;
              *(undefined8 *)(pbVar36 + 0x40) = uVar45;
              *(undefined8 *)(pbVar36 + 0x18) = uVar48;
              *(undefined8 *)(pbVar36 + 0x10) = uVar47;
              *(undefined8 *)(pbVar36 + 0x28) = uVar50;
              *(undefined8 *)(pbVar36 + 0x20) = uVar49;
              uVar44 = *(undefined8 *)pbVar38;
              *(undefined8 *)(pbVar36 + 8) = *(undefined8 *)(pbVar38 + 8);
              *(undefined8 *)pbVar36 = uVar44;
              local_d8 = CONCAT44(uVar17,uVar32);
              lVar29 = lVar27;
              lVar42 = lVar30;
              local_e8 = lVar26;
              local_e0 = lVar25;
              local_d0 = lVar34;
              local_c8 = lVar22;
            }
          }
          *piVar39 = *piVar39 + -1;
        }
        bVar15 = false;
        pbVar38 = (byte *)0x0;
        lVar23 = lVar26;
        lVar35 = lVar34;
        lVar40 = lVar29;
        lVar41 = lVar42;
        uVar33 = uVar32;
        uVar44 = local_d8;
      }
    }
    goto joined_r0x00e63458;
  }
  goto LAB_00e63570;
LAB_00e63468:
  puVar31 = puVar31 + 1;
  if (puVar4 <= puVar31) goto code_r0x00e6347c;
  goto LAB_00e62ecc;
code_r0x00e6347c:
  if (0 < *piVar39) {
    uVar21 = *puVar1;
    uVar24 = uVar21 + (long)*piVar39 * 0x50;
    do {
      lVar25 = *(long *)(uVar21 + 0x48);
      lVar27 = *(long *)(*(long *)(uVar21 + 0x40) + 0x38);
      lVar23 = *(long *)(lVar25 + 0x38);
      lVar30 = *(long *)(*(long *)(*(long *)(uVar21 + 0x40) + 0x48) + 0x38);
      if (lVar27 < lVar23) {
        if (lVar30 < lVar27) {
          *(short *)(uVar21 + 10) =
               *(short *)(uVar21 + 10) + (short)((uint)((int)lVar27 - (int)lVar30) >> 1);
        }
        lVar25 = *(long *)(*(long *)(lVar25 + 0x40) + 0x38);
        if (lVar23 < lVar25) {
          sVar8 = *(short *)(uVar21 + 10);
          uVar17 = (int)lVar25 - (int)lVar23;
LAB_00e63518:
          *(short *)(uVar21 + 10) = sVar8 + (short)(uVar17 >> 1);
        }
      }
      else {
        if (lVar27 < lVar30) {
          *(short *)(uVar21 + 10) =
               *(short *)(uVar21 + 10) + (short)((uint)((int)lVar30 - (int)lVar27) >> 1);
        }
        lVar25 = *(long *)(*(long *)(lVar25 + 0x40) + 0x38);
        if (lVar25 < lVar23) {
          sVar8 = *(short *)(uVar21 + 10);
          uVar17 = (int)lVar23 - (int)lVar25;
          goto LAB_00e63518;
        }
      }
      uVar21 = uVar21 + 0x50;
    } while (uVar21 < uVar24);
  }
LAB_00e63570:
  iVar16 = 0;
  if (*(long *)(lVar13 + 0x28) == local_70) {
    return;
  }
LAB_00e63584:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar16);
}

