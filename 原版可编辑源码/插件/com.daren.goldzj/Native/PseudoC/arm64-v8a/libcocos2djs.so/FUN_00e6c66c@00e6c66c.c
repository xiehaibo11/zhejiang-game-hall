
undefined8 FUN_00e6c66c(uint *param_1,char param_2)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  short sVar4;
  char cVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  ulong **ppuVar16;
  ulong **ppuVar17;
  ulong *puVar18;
  long lVar19;
  ulong *puVar20;
  ulong *puVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  ulong **ppuVar25;
  ulong *puVar26;
  long lVar27;
  ulong *puVar28;
  long lVar29;
  ulong uVar30;
  long *plVar31;
  ulong uVar32;
  long lVar33;
  long lVar34;
  ushort uVar35;
  int iVar36;
  long lVar37;
  long *plVar38;
  long lVar39;
  uint uVar40;
  byte *pbVar41;
  byte *pbVar42;
  ulong *puVar43;
  long lVar44;
  short sVar45;
  ulong *puVar46;
  ulong *local_80;
  ulong *local_78;
  ulong *local_70;
  short local_68 [2];
  ushort local_64 [2];
  
  uVar6 = param_1[0x1de];
joined_r0x00e6c690:
  do {
    if ((int)uVar6 < 0) {
      return 0;
    }
    uVar40 = param_1[(long)(int)uVar6 + 0x1ce];
    sVar45 = *(short *)((long)param_1 + (long)(int)uVar6 * 4 + 0x73a);
    *(undefined2 *)((long)param_1 + 0x7a) = 0;
    uVar32 = *(ulong *)(param_1 + 6);
    *(long *)(param_1 + 0x1c) = (long)(int)param_1[1] * (long)sVar45;
    *(long *)(param_1 + 0x1a) = (long)(int)param_1[1] * (long)(short)uVar40;
    uVar22 = *(long *)(param_1 + 8) - 0x40;
    *(ulong *)(param_1 + 0xc) = uVar32;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *(ulong *)(param_1 + 0x20) = uVar32;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    *(ulong *)(param_1 + 10) = uVar22;
    *(ulong *)(uVar32 + 0x10) = uVar32;
    *(undefined2 *)(param_1 + 0x1e) = 0;
    if ((short)param_1[0x32] < 1) {
LAB_00e6cf68:
      puVar20 = (ulong *)0x0;
      param_1[0x22] = 0;
      param_1[0x23] = 0;
    }
    else {
      lVar19 = *(long *)(param_1 + 0x38);
      uVar6 = param_1[2];
      lVar7 = 0;
      uVar35 = 0;
      do {
        param_1[0x26] = 0;
        param_1[0x24] = 0;
        param_1[0x25] = 0;
        uVar32 = (ulong)*(ushort *)(lVar19 + lVar7 * 2);
        lVar19 = -(long)(int)uVar6;
        lVar23 = (long)(int)param_1[3];
        plVar31 = (long *)(*(long *)(param_1 + 0x34) + (ulong)uVar35 * 0x10);
        pbVar42 = (byte *)(*(long *)(param_1 + 0x36) + (ulong)uVar35);
        plVar14 = (long *)(*(long *)(param_1 + 0x34) + uVar32 * 0x10);
        lVar39 = lVar19 + *plVar31 * lVar23;
        bVar2 = *pbVar42;
        lVar34 = lVar19 + plVar31[1] * lVar23;
        lVar37 = lVar19 + *plVar14 * lVar23;
        lVar19 = lVar19 + plVar14[1] * lVar23;
        lVar23 = lVar37;
        lVar44 = lVar39;
        if (param_2 == '\0') {
          lVar23 = lVar19;
          lVar19 = lVar37;
          lVar44 = lVar34;
          lVar34 = lVar39;
        }
        if ((bVar2 >> 2 & 1) != 0) {
          *(byte *)(param_1 + 0x48) = bVar2 >> 5;
          bVar2 = *pbVar42;
        }
        if ((bVar2 & 3) == 0) {
          if ((*(byte *)(*(long *)(param_1 + 0x36) + uVar32) & 3) == 1) {
            plVar14 = plVar14 + -2;
            lVar44 = lVar23;
            lVar34 = lVar19;
          }
          else {
            lVar19 = lVar19 + lVar34;
            lVar23 = lVar23 + lVar44;
            if (lVar19 < 0) {
              lVar19 = lVar19 + 1;
            }
            if (lVar23 < 0) {
              lVar23 = lVar23 + 1;
            }
            lVar34 = lVar19 >> 1;
            lVar44 = lVar23 >> 1;
          }
          plVar31 = plVar31 + -2;
          pbVar42 = pbVar42 + -1;
          *(long *)(param_1 + 0x16) = lVar34;
          *(long *)(param_1 + 0x18) = lVar44;
          if (plVar31 < plVar14) {
LAB_00e6c7f0:
            do {
              while( true ) {
                pbVar41 = pbVar42 + 1;
                plVar38 = plVar31 + 2;
                if ((*pbVar41 & 3) == 0) break;
                if ((*pbVar41 & 3) == 1) {
                  lVar37 = -(long)(int)param_1[2] + plVar31[2] * (long)(int)param_1[3];
                  lVar23 = -(long)(int)param_1[2] + plVar31[3] * (long)(int)param_1[3];
                  lVar19 = lVar37;
                  if (param_2 == '\0') {
                    lVar19 = lVar23;
                    lVar23 = lVar37;
                  }
                  cVar5 = FUN_00e6d96c(param_1,lVar23,lVar19);
                  plVar31 = plVar38;
                  if (cVar5 != '\0') goto LAB_00e6d6a4;
                }
                else {
                  if ((plVar14 < plVar31 + 4) || ((pbVar42[2] & 3) != 2)) goto LAB_00e6d714;
                  lVar23 = (long)(int)param_1[3];
                  lVar24 = -(long)(int)param_1[2];
                  lVar27 = lVar24 + plVar31[2] * lVar23;
                  lVar29 = lVar24 + plVar31[3] * lVar23;
                  lVar33 = lVar24 + plVar31[4] * lVar23;
                  lVar37 = lVar24 + plVar31[5] * lVar23;
                  lVar19 = lVar33;
                  lVar39 = lVar27;
                  if (param_2 == '\0') {
                    lVar19 = lVar37;
                    lVar37 = lVar33;
                    lVar39 = lVar29;
                    lVar29 = lVar27;
                  }
                  if (plVar14 < plVar31 + 6) {
                    cVar5 = FUN_00e6e148(param_1,lVar29,lVar39,lVar37,lVar19,lVar34,lVar44);
                    iVar36 = 0x12;
                  }
                  else {
                    lVar27 = lVar24 + plVar31[6] * lVar23;
                    lVar24 = lVar24 + plVar31[7] * lVar23;
                    lVar23 = lVar27;
                    if (param_2 == '\0') {
                      lVar23 = lVar24;
                      lVar24 = lVar27;
                    }
                    cVar5 = FUN_00e6e148(param_1,lVar29,lVar39,lVar37,lVar19,lVar24,lVar23);
                    iVar36 = 7;
                  }
                  if (cVar5 != '\0') {
                    iVar36 = 0xc;
                  }
                  if (iVar36 != 7) {
                    if (iVar36 != 6) goto LAB_00e6cb4c;
                    goto LAB_00e6d714;
                  }
                  pbVar41 = pbVar42 + 3;
                  plVar31 = plVar31 + 6;
                }
                pbVar42 = pbVar41;
                if (plVar14 <= plVar31) goto LAB_00e6caf4;
              }
              lVar19 = -(long)(int)param_1[2] + plVar31[2] * (long)(int)param_1[3];
              lVar23 = -(long)(int)param_1[2] + plVar31[3] * (long)(int)param_1[3];
              lVar37 = lVar23;
              if (param_2 == '\0') {
                do {
                  while( true ) {
                    lVar23 = lVar19;
                    if (plVar14 <= plVar38) goto LAB_00e6cb20;
                    plVar31 = plVar38 + 2;
                    pbVar41 = pbVar41 + 1;
                    lVar19 = -(long)(int)param_1[2] + *plVar31 * (long)(int)param_1[3];
                    lVar39 = -(long)(int)param_1[2] + plVar38[3] * (long)(int)param_1[3];
                    if ((*pbVar41 & 3) == 0) break;
                    if ((*pbVar41 & 3) != 1) goto LAB_00e6d714;
                    cVar5 = FUN_00e6ddc4(param_1,lVar23,lVar37,lVar19,lVar39);
                    iVar36 = 7;
                    if (cVar5 != '\0') {
                      iVar36 = 0xc;
                    }
                    plVar38 = plVar38 + 2;
                    lVar19 = lVar23;
                    if (iVar36 != 0xf) goto LAB_00e6c9fc;
                  }
                  lVar29 = lVar19 + lVar23;
                  lVar24 = lVar39 + lVar37;
                  if (lVar29 < 0) {
                    lVar29 = lVar29 + 1;
                  }
                  if (lVar24 < 0) {
                    lVar24 = lVar24 + 1;
                  }
                  cVar5 = FUN_00e6ddc4(param_1,lVar23,lVar37,lVar29 >> 1,lVar24 >> 1);
                  iVar36 = 0xf;
                  if (cVar5 != '\0') {
                    iVar36 = 0xc;
                    lVar39 = lVar37;
                    lVar19 = lVar23;
                  }
                  plVar38 = plVar38 + 2;
                  lVar37 = lVar39;
                } while (iVar36 == 0xf);
              }
              else {
                do {
                  while( true ) {
                    lVar37 = lVar19;
                    if (plVar14 <= plVar38) goto LAB_00e6cb20;
                    plVar31 = plVar38 + 2;
                    pbVar41 = pbVar41 + 1;
                    lVar19 = -(long)(int)param_1[2] + *plVar31 * (long)(int)param_1[3];
                    lVar39 = -(long)(int)param_1[2] + plVar38[3] * (long)(int)param_1[3];
                    if ((*pbVar41 & 3) == 1) break;
                    if ((*pbVar41 & 3) != 0) goto LAB_00e6d714;
                    lVar29 = lVar39 + lVar23;
                    lVar24 = lVar19 + lVar37;
                    if (lVar29 < 0) {
                      lVar29 = lVar29 + 1;
                    }
                    if (lVar24 < 0) {
                      lVar24 = lVar24 + 1;
                    }
                    cVar5 = FUN_00e6ddc4(param_1,lVar23,lVar37,lVar29 >> 1,lVar24 >> 1);
                    iVar36 = 0xf;
                    if (cVar5 != '\0') {
                      iVar36 = 0xc;
                      lVar19 = lVar37;
                      lVar39 = lVar23;
                    }
                    lVar23 = lVar39;
                    plVar38 = plVar38 + 2;
                    if (iVar36 != 0xf) goto LAB_00e6c9fc;
                  }
                  cVar5 = FUN_00e6ddc4(param_1,lVar23,lVar37,lVar39,lVar19);
                  iVar36 = 7;
                  if (cVar5 != '\0') {
                    iVar36 = 0xc;
                  }
                  plVar38 = plVar38 + 2;
                  lVar19 = lVar37;
                } while (iVar36 == 0xf);
              }
LAB_00e6c9fc:
              if (iVar36 == 6) goto LAB_00e6d714;
              if (iVar36 != 7) {
LAB_00e6cb4c:
                if (iVar36 != 0xc) goto LAB_00e6cb58;
                goto LAB_00e6d6a4;
              }
              pbVar42 = pbVar41;
            } while (plVar31 < plVar14);
          }
        }
        else {
          if ((bVar2 & 3) == 2) {
LAB_00e6d714:
            uVar6 = 0x14;
            goto LAB_00e6d718;
          }
          *(long *)(param_1 + 0x16) = lVar34;
          *(long *)(param_1 + 0x18) = lVar44;
          if (plVar31 < plVar14) goto LAB_00e6c7f0;
        }
LAB_00e6caf4:
        cVar5 = FUN_00e6d96c(param_1,lVar34,lVar44);
joined_r0x00e6cb3c:
        if (cVar5 != '\0') goto LAB_00e6d6a4;
LAB_00e6cb58:
        lVar19 = *(long *)(param_1 + 0x38);
        uVar6 = param_1[1];
        uVar30 = *(ulong *)(param_1 + 0x18);
        sVar45 = *(short *)(lVar19 + lVar7 * 2);
        uVar22 = uVar30 & (long)(int)(uVar6 - 1);
        if ((((uVar22 == 0) && (*(long *)(param_1 + 0x1a) <= (long)uVar30)) &&
            ((long)uVar30 <= *(long *)(param_1 + 0x1c))) &&
           ((*(long *)(param_1 + 0x24) != 0 &&
            (((*(ushort *)(*(long *)(param_1 + 0x20) + 0x18) ^
              *(ushort *)(*(long *)(param_1 + 0x24) + 0x18)) >> 3 & 1) == 0)))) {
          *(long *)(param_1 + 0xc) = *(long *)(param_1 + 0xc) + -8;
        }
        lVar23 = *(long *)(param_1 + 0x20);
        uVar32 = *(ulong *)(param_1 + 0xc);
        if ((uVar32 == *(ulong *)(lVar23 + 0x10)) || ((*(byte *)(lVar23 + 0x18) >> 3 & 1) == 0)) {
          uVar22 = ((uVar30 + (long)(int)uVar6) - 1 & (long)(int)-uVar6) - uVar30;
        }
        lVar44 = uVar32 - *(ulong *)(lVar23 + 0x10);
        if (lVar44 < 0) {
          uVar6 = 99;
LAB_00e6d718:
          param_1[0xe] = uVar6;
          return 1;
        }
        uVar6 = param_1[2];
        if (lVar44 == 0) {
          uVar22 = *(ulong *)(param_1 + 10);
          if (uVar22 <= uVar32) goto LAB_00e6cca0;
        }
        else {
          *(long *)(lVar23 + 0x20) = lVar44 >> 3;
          if ((long)(int)uVar6 <= (long)uVar22) {
            uVar35 = 0x20;
            if ((*(ushort *)(lVar23 + 0x18) & 8) != 0) {
              uVar35 = 0x10;
            }
            *(ushort *)(lVar23 + 0x18) = *(ushort *)(lVar23 + 0x18) | uVar35;
          }
          uVar30 = uVar32 + 0x40;
          *(ulong *)(param_1 + 0x20) = uVar32;
          *(ulong *)(param_1 + 0xc) = uVar30;
          *(undefined8 *)(uVar32 + 0x20) = 0;
          *(ulong *)(uVar32 + 0x10) = uVar30;
          *(ulong *)(lVar23 + 0x38) = uVar32;
          *(short *)(param_1 + 0x1e) = (short)param_1[0x1e] + 1;
          uVar22 = *(ulong *)(param_1 + 10);
          uVar32 = uVar30;
          if (uVar22 <= uVar30) goto LAB_00e6cca0;
        }
        uVar35 = sVar45 + 1;
        *(undefined1 *)((long)param_1 + 0x7b) = 0;
        if (*(long *)(param_1 + 0x24) != 0) {
          *(long *)(lVar23 + 0x38) = *(long *)(param_1 + 0x24);
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 < (short)param_1[0x32]);
      uVar35 = (ushort)param_1[0x1e];
      if ((uVar35 < 2) || (puVar20 = *(ulong **)(param_1 + 0x22), puVar20 == (ulong *)0x0))
      goto LAB_00e6cf68;
      plVar31 = *(long **)(param_1 + 8);
      puVar28 = puVar20;
      do {
        if (uVar35 < 2) {
          puVar46 = (ulong *)0x0;
          puVar28[1] = 0;
          uVar30 = puVar28[5];
          iVar36 = (int)uVar30;
          if (((byte)puVar28[3] >> 3 & 1) == 0) goto LAB_00e6cd24;
LAB_00e6ccf4:
          uVar12 = (ulong)(int)uVar30;
          uVar9 = uVar30 & 0xffffffff;
          iVar36 = (int)uVar30 + (int)puVar28[4] + -1;
        }
        else {
          puVar46 = (ulong *)(puVar28[2] + puVar28[4] * 8);
          puVar28[1] = (ulong)puVar46;
          uVar30 = puVar28[5];
          iVar36 = (int)uVar30;
          if (((byte)puVar28[3] >> 3 & 1) != 0) goto LAB_00e6ccf4;
LAB_00e6cd24:
          uVar6 = (iVar36 - (int)puVar28[4]) + 1;
          uVar9 = (ulong)uVar6;
          uVar12 = (ulong)(int)uVar6;
          puVar28[5] = uVar12;
          puVar28[2] = (puVar28[2] + puVar28[4] * 8) - 8;
        }
        iVar8 = (int)uVar9;
        uVar6 = param_1[0xf];
        uVar30 = (ulong)(int)uVar6;
        plVar38 = plVar31 + -(long)(int)uVar6;
        lVar7 = (ulong)uVar6 << 0x20;
        uVar10 = uVar30;
        plVar14 = plVar31;
        uVar40 = uVar6;
        do {
          uVar40 = uVar40 - 1;
          plVar14 = plVar14 + -1;
          uVar11 = uVar10 - 1;
          if ((long)uVar10 < 1) goto LAB_00e6ce28;
          lVar7 = lVar7 + -0x100000000;
          uVar10 = uVar11;
        } while ((long)uVar12 < *plVar14);
        if (*plVar14 < (long)uVar12) {
          uVar10 = lVar7 >> 0x20;
          uVar12 = (1 - (uVar10 & lVar7 >> 0x3f)) + uVar10;
          if (1 < uVar12) {
            uVar15 = (ulong)(int)uVar40;
            plVar14 = plVar31 + ((long)(int)uVar40 - uVar30);
            uVar13 = 0xffffffffffffffff;
            if ((long)uVar15 < 0) {
              uVar13 = ~uVar15;
            }
            uVar11 = uVar10 - (uVar12 & 0xfffffffffffffffe);
            uVar10 = uVar13 + uVar15 + 2 & 0xfffffffffffffffe;
            do {
              uVar13 = plVar14[-1];
              iVar8 = (int)uVar13;
              uVar10 = uVar10 - 2;
              plVar14[-1] = (long)(int)*plVar14;
              *plVar14 = (long)(int)uVar9;
              plVar14 = plVar14 + -2;
              uVar9 = uVar13 & 0xffffffff;
            } while (uVar10 != 0);
            uVar9 = uVar13 & 0xffffffff;
            uVar10 = uVar11;
            if (uVar12 == (uVar12 & 0xfffffffffffffffe)) goto LAB_00e6ce28;
          }
          do {
            uVar12 = plVar38[uVar10];
            iVar8 = (int)uVar12;
            plVar38[uVar10] = (long)(int)uVar9;
            uVar11 = uVar10 - 1;
            uVar9 = uVar12 & 0xffffffff;
            bVar1 = 0 < (long)uVar10;
            uVar10 = uVar11;
          } while (bVar1);
        }
LAB_00e6ce28:
        if ((int)uVar11 < 0) {
          uVar22 = uVar22 - 8;
          *(ulong *)(param_1 + 10) = uVar22;
          if (uVar22 <= uVar32) goto LAB_00e6cca0;
          uVar30 = uVar30 + 1;
          uVar40 = ~uVar6;
          uVar6 = (uint)uVar30;
          param_1[0xf] = uVar6;
          plVar31[(int)uVar40] = (long)iVar8;
          plVar38 = plVar31 + -uVar30;
        }
        iVar36 = iVar36 + 1;
        lVar7 = uVar30 << 0x20;
        do {
          uVar9 = uVar30 - 1;
          if ((long)uVar30 < 1) goto LAB_00e6cf2c;
          lVar7 = lVar7 + -0x100000000;
          uVar30 = uVar9;
        } while ((long)iVar36 < plVar38[uVar9]);
        if (plVar38[uVar9] < (long)iVar36) {
          uVar12 = lVar7 >> 0x20;
          uVar30 = (1 - (uVar12 & lVar7 >> 0x3f)) + uVar12;
          if (1 < uVar30) {
            uVar11 = (ulong)(int)uVar9;
            plVar14 = plVar38 + (int)uVar9;
            uVar10 = 0xffffffffffffffff;
            if ((long)uVar11 < 0) {
              uVar10 = ~uVar11;
            }
            uVar9 = uVar12 - (uVar30 & 0xfffffffffffffffe);
            uVar12 = uVar10 + uVar11 + 2 & 0xfffffffffffffffe;
            do {
              lVar7 = plVar14[-1];
              uVar12 = uVar12 - 2;
              plVar14[-1] = (long)(int)*plVar14;
              *plVar14 = (long)iVar36;
              plVar14 = plVar14 + -2;
              iVar36 = (int)lVar7;
            } while (uVar12 != 0);
            uVar12 = uVar9;
            if (uVar30 == (uVar30 & 0xfffffffffffffffe)) goto LAB_00e6cf2c;
          }
          do {
            lVar7 = plVar38[uVar12];
            plVar38[uVar12] = (long)iVar36;
            uVar9 = uVar12 - 1;
            iVar36 = (int)lVar7;
            bVar1 = 0 < (long)uVar12;
            uVar12 = uVar9;
          } while (bVar1);
        }
LAB_00e6cf2c:
        if ((int)uVar9 < 0) {
          uVar22 = uVar22 - 8;
          *(ulong *)(param_1 + 10) = uVar22;
          if (uVar22 <= uVar32) goto LAB_00e6cca0;
          param_1[0xf] = uVar6 + 1;
          plVar31[(int)~uVar6] = (long)iVar36;
        }
        uVar35 = uVar35 - 1;
        puVar28 = puVar46;
      } while (uVar35 != 0);
    }
    if (uVar22 <= uVar32) {
LAB_00e6d6a4:
      if (param_1[0xe] != 0x62) {
        return 1;
      }
      goto LAB_00e6d6b0;
    }
    if (puVar20 != (ulong *)0x0) {
      local_78 = (ulong *)0x0;
      local_70 = (ulong *)0x0;
      local_80 = (ulong *)0x0;
      uVar32 = *(long *)(param_1 + 0x1a) >> ((ulong)*param_1 & 0x3f);
      uVar22 = *(long *)(param_1 + 0x1c) >> ((ulong)*param_1 & 0x3f);
      local_68[0] = (short)uVar32;
      local_64[0] = (ushort)uVar22;
      do {
        while( true ) {
          puVar28 = puVar20;
          puVar20 = (ulong *)puVar28[1];
          uVar35 = (ushort)(int)puVar28[5];
          sVar45 = (short)(int)puVar28[4] + uVar35 + -1;
          uVar6 = (uint)sVar45;
          if ((int)(short)uVar22 <= (int)(short)uVar35) break;
          uVar22 = (ulong)(uint)(int)(short)uVar35;
          local_64[0] = uVar35;
          if ((int)uVar6 <= (int)(short)uVar32) goto LAB_00e6cfd4;
LAB_00e6d034:
          uVar32 = (ulong)uVar6;
          *puVar28 = 0;
          local_68[0] = sVar45;
          if (local_70 == (ulong *)0x0) goto LAB_00e6d048;
LAB_00e6cfe0:
          puVar46 = local_70;
          if ((long)*local_70 < 1) {
            do {
              puVar26 = puVar46;
              puVar46 = (ulong *)puVar26[1];
              if (puVar46 == (ulong *)0x0) break;
            } while ((long)*puVar46 < 1);
            puVar28[1] = (ulong)puVar46;
            puVar26[1] = (ulong)puVar28;
          }
          else {
            puVar28[1] = (ulong)local_70;
            local_70 = puVar28;
          }
          if (puVar20 == (ulong *)0x0) goto LAB_00e6d058;
        }
        if ((int)(short)uVar32 < (int)uVar6) goto LAB_00e6d034;
LAB_00e6cfd4:
        *puVar28 = 0;
        if (local_70 != (ulong *)0x0) goto LAB_00e6cfe0;
LAB_00e6d048:
        puVar28[1] = (ulong)local_70;
        local_70 = puVar28;
      } while (puVar20 != (ulong *)0x0);
LAB_00e6d058:
      if (param_1[0xf] == 0) goto LAB_00e6d74c;
      (**(code **)(param_1 + 0x40))(param_1,local_64,local_68);
      uVar6 = (uint)local_64[0];
      for (puVar20 = local_70; puVar20 != (ulong *)0x0; puVar20 = (ulong *)puVar20[1]) {
        *(int *)(puVar20 + 6) = (int)puVar20[5] - (int)(short)local_64[0];
      }
      uVar40 = param_1[0xf];
      uVar3 = uVar40 - 1;
      if ((0 < (int)uVar40) &&
         ((*(long *)(*(long *)(param_1 + 8) + (long)(int)-uVar40 * 8) != (long)(short)local_64[0] ||
          (param_1[0xf] = uVar3, uVar40 = uVar3, 0 < (int)uVar3)))) {
        iVar36 = 0;
        uVar3 = uVar6;
        do {
          if (local_70 != (ulong *)0x0) {
            puVar20 = local_70;
            do {
              while( true ) {
                puVar28 = (ulong *)puVar20[1];
                iVar8 = (int)puVar20[6] - (int)(short)iVar36;
                *(int *)(puVar20 + 6) = iVar8;
                if (iVar8 == 0) break;
joined_r0x00e6d194:
                puVar20 = puVar28;
                if (puVar28 == (ulong *)0x0) goto LAB_00e6d210;
              }
              ppuVar16 = &local_70;
              do {
                ppuVar25 = ppuVar16;
                puVar46 = *ppuVar25;
                if (puVar46 == (ulong *)0x0) goto LAB_00e6d11c;
                ppuVar16 = (ulong **)(puVar46 + 1);
              } while (puVar46 != puVar20);
              *ppuVar25 = (ulong *)puVar46[1];
LAB_00e6d11c:
              uVar32 = *puVar20;
              if (((byte)puVar20[3] >> 3 & 1) != 0) {
                if (local_78 == (ulong *)0x0) {
                  puVar20[1] = 0;
                  local_78 = puVar20;
                }
                else {
                  puVar46 = local_78;
                  if ((long)*local_78 <= (long)uVar32) {
                    do {
                      puVar26 = puVar46;
                      puVar46 = (ulong *)puVar26[1];
                      if (puVar46 == (ulong *)0x0) break;
                    } while ((long)*puVar46 <= (long)uVar32);
                    goto LAB_00e6d1b4;
                  }
                  puVar20[1] = (ulong)local_78;
                  local_78 = puVar20;
                }
                goto joined_r0x00e6d194;
              }
              if (local_80 == (ulong *)0x0) {
                puVar20[1] = 0;
                local_80 = puVar20;
                goto joined_r0x00e6d194;
              }
              puVar46 = local_80;
              if ((long)*local_80 <= (long)uVar32) {
                do {
                  puVar26 = puVar46;
                  puVar46 = (ulong *)puVar26[1];
                  if (puVar46 == (ulong *)0x0) break;
                } while ((long)*puVar46 <= (long)uVar32);
LAB_00e6d1b4:
                puVar20[1] = (ulong)puVar46;
                puVar26[1] = (ulong)puVar20;
                goto joined_r0x00e6d194;
              }
              puVar20[1] = (ulong)local_80;
              local_80 = puVar20;
              puVar20 = puVar28;
            } while (puVar28 != (ulong *)0x0);
          }
LAB_00e6d210:
          puVar28 = local_78;
          puVar20 = local_78;
          if (local_78 != (ulong *)0x0) {
            do {
              uVar32 = *(ulong *)puVar28[2];
              lVar7 = 8;
              if ((puVar28[3] & 8) == 0) {
                lVar7 = -8;
              }
              puVar28[4] = puVar28[4] - 1;
              puVar28[2] = (long)puVar28[2] + lVar7;
              *puVar28 = uVar32;
              puVar46 = puVar28 + 1;
              puVar28 = (ulong *)*puVar46;
            } while ((ulong *)*puVar46 != (ulong *)0x0);
            ppuVar16 = (ulong **)(local_78 + 1);
            puVar28 = *ppuVar16;
            if (puVar28 != (ulong *)0x0) {
              ppuVar25 = &local_78;
              puVar46 = local_78;
              do {
                ppuVar17 = ppuVar16;
                puVar26 = puVar28;
                if ((long)*puVar28 < (long)*puVar46) {
                  *ppuVar25 = puVar28;
                  *ppuVar16 = (ulong *)puVar28[1];
                  puVar28[1] = (ulong)puVar46;
                  ppuVar17 = &local_78;
                  puVar26 = local_78;
                  puVar20 = local_78;
                }
                ppuVar16 = (ulong **)(puVar26 + 1);
                puVar28 = *ppuVar16;
                ppuVar25 = ppuVar17;
                puVar46 = puVar26;
              } while (puVar28 != (ulong *)0x0);
            }
          }
          puVar28 = local_80;
          puVar46 = local_80;
          if (local_80 != (ulong *)0x0) {
            do {
              uVar32 = *(ulong *)puVar28[2];
              lVar7 = 8;
              if ((puVar28[3] & 8) == 0) {
                lVar7 = -8;
              }
              puVar28[4] = puVar28[4] - 1;
              puVar28[2] = (long)puVar28[2] + lVar7;
              *puVar28 = uVar32;
              puVar26 = puVar28 + 1;
              puVar28 = (ulong *)*puVar26;
            } while ((ulong *)*puVar26 != (ulong *)0x0);
            ppuVar16 = (ulong **)(local_80 + 1);
            puVar28 = *ppuVar16;
            if (puVar28 != (ulong *)0x0) {
              ppuVar25 = &local_80;
              puVar26 = local_80;
              do {
                ppuVar17 = ppuVar16;
                puVar43 = puVar28;
                if ((long)*puVar28 < (long)*puVar26) {
                  *ppuVar25 = puVar28;
                  *ppuVar16 = (ulong *)puVar28[1];
                  puVar28[1] = (ulong)puVar26;
                  ppuVar17 = &local_80;
                  puVar43 = local_80;
                  puVar46 = local_80;
                }
                ppuVar16 = (ulong **)(puVar43 + 1);
                puVar28 = *ppuVar16;
                ppuVar25 = ppuVar17;
                puVar26 = puVar43;
              } while (puVar28 != (ulong *)0x0);
            }
          }
          param_1[0xf] = uVar40 - 1;
          iVar36 = (int)(short)*(undefined8 *)(*(long *)(param_1 + 8) + (long)(int)-uVar40 * 8);
          puVar26 = puVar20;
          puVar28 = puVar20;
          uVar6 = uVar3;
          if ((short)uVar3 < iVar36) {
LAB_00e6d4b0:
            if (puVar20 != (ulong *)0x0) {
              sVar45 = 0;
              puVar21 = puVar46;
              puVar43 = puVar20;
              do {
                uVar30 = *puVar43;
                uVar22 = *puVar21;
                lVar7 = (long)(int)param_1[1];
                uVar32 = uVar30;
                if ((long)uVar30 <= (long)uVar22) {
                  uVar32 = uVar22;
                  uVar22 = uVar30;
                }
                if (lVar7 < (long)(uVar32 - uVar22)) {
LAB_00e6d524:
                  (**(code **)(param_1 + 0x42))(param_1,uVar6,uVar22,uVar32,puVar43,puVar21);
LAB_00e6d53c:
                  puVar43 = (ulong *)puVar43[1];
                }
                else {
                  uVar30 = uVar22 & -lVar7;
                  if (((uVar30 == uVar22) ||
                      (uVar9 = (lVar7 + uVar32) - 1 & -lVar7, uVar9 == uVar32)) ||
                     (((long)uVar30 <= (long)uVar9 && (uVar9 != uVar30 + lVar7))))
                  goto LAB_00e6d524;
                  if ((puVar43[3] & 7) == 2) goto LAB_00e6d53c;
                  *puVar43 = uVar22;
                  *puVar21 = uVar32;
                  *(undefined4 *)(puVar43 + 6) = 1;
                  sVar45 = sVar45 + 1;
                  puVar43 = (ulong *)puVar43[1];
                }
                if (puVar43 == (ulong *)0x0) goto LAB_00e6d574;
                puVar21 = (ulong *)puVar21[1];
              } while( true );
            }
            goto LAB_00e6d5c0;
          }
joined_r0x00e6d5dc:
          puVar28 = puVar20;
          if (puVar28 != (ulong *)0x0) {
            puVar20 = (ulong *)puVar28[1];
            if (puVar28[4] == 0) {
              ppuVar16 = &local_78;
              do {
                ppuVar25 = ppuVar16;
                puVar26 = *ppuVar25;
                if (puVar26 == (ulong *)0x0) goto joined_r0x00e6d5dc;
                ppuVar16 = (ulong **)(puVar26 + 1);
              } while (puVar26 != puVar28);
              *ppuVar25 = (ulong *)puVar26[1];
            }
            goto joined_r0x00e6d5dc;
          }
joined_r0x00e6d618:
          puVar20 = puVar46;
          if (puVar20 != (ulong *)0x0) {
            puVar46 = (ulong *)puVar20[1];
            if (puVar20[4] == 0) {
              ppuVar16 = &local_80;
              do {
                ppuVar25 = ppuVar16;
                puVar28 = *ppuVar25;
                if (puVar28 == (ulong *)0x0) goto joined_r0x00e6d618;
                ppuVar16 = (ulong **)(puVar28 + 1);
              } while (puVar28 != puVar20);
              *ppuVar25 = (ulong *)puVar28[1];
            }
            goto joined_r0x00e6d618;
          }
          uVar40 = param_1[0xf];
          if ((int)uVar40 < 1) break;
          iVar36 = iVar36 - uVar3;
          uVar3 = uVar6;
        } while( true );
      }
      if ((short)uVar6 <= local_68[0]) {
        do {
          (**(code **)(param_1 + 0x46))(param_1);
          uVar6 = (uint)(short)((short)uVar6 + 1);
        } while ((int)uVar6 <= (int)local_68[0]);
      }
    }
    uVar6 = param_1[0x1de] - 1;
    param_1[0x1de] = uVar6;
  } while( true );
LAB_00e6cb20:
  cVar5 = FUN_00e6ddc4(param_1,lVar23,lVar37,lVar34,lVar44);
  goto joined_r0x00e6cb3c;
LAB_00e6cca0:
  param_1[0xe] = 0x62;
LAB_00e6d6b0:
  uVar40 = param_1[0x1de];
  param_1[0xe] = 0;
  sVar45 = *(short *)((long)param_1 + (long)(int)uVar40 * 4 + 0x73a);
  iVar36 = (int)sVar45 + (int)(short)param_1[(long)(int)uVar40 + 0x1ce];
  if (iVar36 < 0) {
    iVar36 = iVar36 + 1;
  }
  if ((6 < (int)uVar40) || (iVar36 >> 1 < (int)(short)param_1[(long)(int)uVar40 + 0x1ce])) {
    param_1[0x1de] = 0;
LAB_00e6d74c:
    param_1[0xe] = 0x14;
    return 0x14;
  }
  uVar6 = uVar40 + 1;
  sVar4 = (short)(iVar36 >> 1);
  *(short *)(param_1 + (long)(int)uVar6 + 0x1ce) = sVar4;
  *(short *)((long)param_1 + (long)(int)uVar6 * 4 + 0x73a) = sVar45;
  *(short *)((long)param_1 + (long)(int)uVar40 * 4 + 0x73a) = sVar4 + -1;
  param_1[0x1de] = uVar6;
  goto joined_r0x00e6c690;
LAB_00e6d574:
  puVar43 = puVar46;
  if (0 < sVar45) {
    while( true ) {
      if ((int)puVar20[6] != 0) {
        *(undefined4 *)(puVar20 + 6) = 0;
        (**(code **)(param_1 + 0x44))(param_1,uVar6,*puVar20,*puVar43,puVar20,puVar43);
      }
      puVar20 = (ulong *)puVar20[1];
      if (puVar20 == (ulong *)0x0) break;
      puVar43 = (ulong *)puVar43[1];
    }
  }
LAB_00e6d5c0:
  (**(code **)(param_1 + 0x46))(param_1);
  uVar6 = uVar6 + 1;
  puVar20 = puVar28;
  if ((short)uVar6 < iVar36) {
    puVar20 = puVar26;
    puVar43 = puVar26;
    if (puVar26 == (ulong *)0x0) {
      puVar20 = (ulong *)0x0;
    }
    else {
      do {
        uVar32 = *(ulong *)puVar20[2];
        lVar7 = 8;
        if ((puVar20[3] & 8) == 0) {
          lVar7 = -8;
        }
        puVar20[4] = puVar20[4] - 1;
        puVar20[2] = (long)puVar20[2] + lVar7;
        *puVar20 = uVar32;
        puVar21 = puVar20 + 1;
        puVar20 = (ulong *)*puVar21;
      } while ((ulong *)*puVar21 != (ulong *)0x0);
      ppuVar16 = (ulong **)(puVar26 + 1);
      puVar21 = *ppuVar16;
      puVar20 = puVar26;
      if (puVar21 != (ulong *)0x0) {
        ppuVar25 = &local_78;
        puVar18 = puVar26;
        do {
          ppuVar17 = ppuVar16;
          puVar20 = puVar21;
          if ((long)*puVar21 < (long)*puVar18) {
            *ppuVar25 = puVar21;
            *ppuVar16 = (ulong *)puVar21[1];
            puVar21[1] = (ulong)puVar18;
            ppuVar17 = &local_78;
            puVar20 = local_78;
            puVar26 = local_78;
            puVar43 = local_78;
            puVar28 = local_78;
          }
          ppuVar16 = (ulong **)(puVar20 + 1);
          puVar21 = *ppuVar16;
          ppuVar25 = ppuVar17;
          puVar18 = puVar20;
          puVar20 = puVar26;
        } while (puVar21 != (ulong *)0x0);
      }
    }
    puVar21 = puVar46;
    puVar26 = puVar43;
    if (puVar46 != (ulong *)0x0) {
      do {
        uVar32 = *(ulong *)puVar21[2];
        lVar7 = 8;
        if ((puVar21[3] & 8) == 0) {
          lVar7 = -8;
        }
        puVar21[4] = puVar21[4] - 1;
        puVar21[2] = (long)puVar21[2] + lVar7;
        *puVar21 = uVar32;
        puVar43 = puVar21 + 1;
        puVar21 = (ulong *)*puVar43;
      } while ((ulong *)*puVar43 != (ulong *)0x0);
      puVar43 = (ulong *)puVar46[1];
      if (puVar43 != (ulong *)0x0) {
        ppuVar16 = (ulong **)(puVar46 + 1);
        ppuVar25 = &local_80;
        puVar21 = puVar46;
        do {
          puVar18 = puVar43;
          ppuVar17 = ppuVar16;
          if ((long)*puVar43 < (long)*puVar21) {
            *ppuVar25 = puVar43;
            *ppuVar16 = (ulong *)puVar43[1];
            puVar43[1] = (ulong)puVar21;
            ppuVar17 = &local_80;
            puVar18 = local_80;
            puVar46 = local_80;
          }
          ppuVar16 = (ulong **)(puVar18 + 1);
          puVar43 = *ppuVar16;
          ppuVar25 = ppuVar17;
          puVar21 = puVar18;
        } while (puVar43 != (ulong *)0x0);
      }
    }
    goto LAB_00e6d4b0;
  }
  goto joined_r0x00e6d5dc;
}

