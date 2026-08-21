
int FT_Bitmap_Convert(undefined8 *param_1,uint *param_2,uint *param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  byte *pbVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  byte *pbVar12;
  ulong uVar13;
  byte *pbVar14;
  uint uVar15;
  long lVar16;
  byte *__src;
  byte *__dest;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  undefined8 uVar26;
  byte bVar33;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  undefined8 uVar34;
  byte bVar39;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  undefined8 uVar40;
  byte bVar47;
  int local_44;
  
  local_44 = 0;
  if (param_1 == (undefined8 *)0x0) {
    iVar10 = 0x21;
  }
  else {
    iVar10 = 6;
    if ((param_2 != (uint *)0x0) && (param_3 != (uint *)0x0)) {
      if (*(byte *)((long)param_2 + 0x1a) - 1 < 7) {
        uVar4 = *param_1;
        *(undefined1 *)((long)param_3 + 0x1a) = 2;
        uVar6 = *param_2;
        uVar15 = *param_3;
        uVar5 = param_3[2];
        *param_3 = uVar6;
        param_3[1] = param_2[1];
        uVar7 = param_2[1];
        uVar11 = -uVar5;
        if (-1 < (int)uVar5) {
          uVar11 = uVar5;
        }
        if ((int)param_4 < 1) {
          iVar10 = 0;
        }
        else {
          uVar2 = 0;
          if (param_4 != 0) {
            uVar2 = uVar7 / param_4;
          }
          iVar9 = uVar7 - uVar2 * param_4;
          iVar10 = 0;
          if (iVar9 != 0) {
            iVar10 = param_4 - iVar9;
          }
        }
        uVar7 = uVar7 + iVar10;
        if (0 < (int)uVar7) {
          uVar13 = 0;
          if ((long)(int)uVar7 != 0) {
            uVar13 = 0xffffffffffffffff / (ulong)(long)(int)uVar7;
          }
          if (uVar13 < uVar6) {
            return 6;
          }
        }
        if (uVar11 * uVar15 < uVar6 * uVar7) {
          uVar4 = ft_mem_qrealloc(uVar4,1,uVar11 * uVar15,uVar6 * uVar7,*(undefined8 *)(param_3 + 4)
                                  ,&local_44);
          *(undefined8 *)(param_3 + 4) = uVar4;
          if (local_44 != 0) {
            return local_44;
          }
          uVar5 = param_3[2];
        }
        uVar11 = -uVar7;
        if (-1 < (int)uVar5) {
          uVar11 = uVar7;
        }
        param_3[2] = uVar11;
      }
      else {
        local_44 = 6;
      }
      __src = *(byte **)(param_2 + 4);
      uVar7 = param_2[2];
      __dest = *(byte **)(param_3 + 4);
      if ((int)uVar7 < 0) {
        __src = __src + -(ulong)((*param_2 - 1) * uVar7);
        uVar11 = param_3[2];
      }
      else {
        uVar11 = param_3[2];
      }
      if ((int)uVar11 < 0) {
        __dest = __dest + -(ulong)((*param_3 - 1) * uVar11);
      }
      iVar10 = local_44;
      switch(*(undefined1 *)((long)param_2 + 0x1a)) {
      case 1:
        *(undefined2 *)(param_3 + 6) = 2;
        for (uVar7 = *param_2; uVar7 != 0; uVar7 = uVar7 - 1) {
          uVar11 = param_2[1];
          uVar6 = uVar11 >> 3;
          pbVar8 = __src;
          pbVar3 = __dest;
          if (uVar6 != 0) {
            iVar9 = -uVar6;
            pbVar8 = __dest;
            pbVar3 = __src;
            do {
              bVar17 = *pbVar3;
              iVar9 = iVar9 + 1;
              *pbVar8 = bVar17 >> 7;
              pbVar8[1] = bVar17 >> 6 & 1;
              pbVar8[2] = bVar17 >> 5 & 1;
              pbVar8[3] = bVar17 >> 4 & 1;
              pbVar8[4] = bVar17 >> 3 & 1;
              pbVar8[5] = bVar17 >> 2 & 1;
              pbVar8[6] = bVar17 >> 1 & 1;
              pbVar8[7] = bVar17 & 1;
              pbVar8 = pbVar8 + 8;
              pbVar3 = pbVar3 + 1;
            } while (iVar9 != 0);
            uVar11 = param_2[1];
            pbVar8 = __src + (ulong)(uVar6 - 1) + 1;
            pbVar3 = __dest + (ulong)(uVar6 - 1) * 8 + 8;
          }
          if ((uVar11 & 7) != 0) {
            uVar6 = (uint)*pbVar8;
            iVar9 = -(uVar11 & 7);
            do {
              iVar9 = iVar9 + 1;
              *pbVar3 = (byte)(uVar6 >> 7) & 1;
              uVar6 = uVar6 << 1;
              pbVar3 = pbVar3 + 1;
            } while (iVar9 != 0);
          }
          __src = __src + (int)param_2[2];
          __dest = __dest + (int)param_3[2];
        }
        break;
      case 2:
      case 5:
      case 6:
        uVar11 = param_2[1];
        *(undefined2 *)(param_3 + 6) = 0x100;
        for (uVar7 = *param_2; iVar10 = local_44, uVar7 != 0; uVar7 = uVar7 - 1) {
          memcpy(__dest,__src,(long)(int)uVar11);
          __src = __src + (int)param_2[2];
          __dest = __dest + (int)param_3[2];
        }
        break;
      case 3:
        *(undefined2 *)(param_3 + 6) = 4;
        for (uVar7 = *param_2; uVar7 != 0; uVar7 = uVar7 - 1) {
          uVar11 = param_2[1];
          uVar6 = uVar11 >> 2;
          pbVar8 = __src;
          pbVar3 = __dest;
          if (uVar6 != 0) {
            uVar13 = (ulong)(uVar6 - 1);
            pbVar8 = __dest;
            pbVar3 = __src;
            if (uVar13 + 1 < 0x10) goto LAB_010bc24c;
            uVar11 = uVar11 >> 2 & 0xf;
            lVar16 = (uVar13 + 1) - (ulong)uVar11;
            if (lVar16 == 0) goto LAB_010bc24c;
            if ((__dest < __src + uVar13 + 1) && (__src < __dest + uVar13 * 4 + 4))
            goto LAB_010bc24c;
            uVar6 = uVar6 - (int)lVar16;
            pbVar8 = __dest + lVar16 * 4;
            pbVar12 = __src + lVar16;
            pbVar3 = __dest;
            pbVar14 = __src;
            do {
              uVar26 = *(undefined8 *)(pbVar14 + 8);
              uVar4 = *(undefined8 *)pbVar14;
              lVar16 = lVar16 + -0x10;
              bVar17 = (byte)uVar4;
              bVar18 = (byte)((ulong)uVar4 >> 8);
              bVar19 = (byte)((ulong)uVar4 >> 0x10);
              bVar20 = (byte)((ulong)uVar4 >> 0x18);
              bVar21 = (byte)((ulong)uVar4 >> 0x20);
              bVar22 = (byte)((ulong)uVar4 >> 0x28);
              bVar23 = (byte)((ulong)uVar4 >> 0x30);
              bVar24 = (byte)((ulong)uVar4 >> 0x38);
              bVar25 = (byte)uVar26;
              bVar27 = (byte)((ulong)uVar26 >> 8);
              bVar28 = (byte)((ulong)uVar26 >> 0x10);
              bVar29 = (byte)((ulong)uVar26 >> 0x18);
              bVar30 = (byte)((ulong)uVar26 >> 0x20);
              bVar31 = (byte)((ulong)uVar26 >> 0x28);
              bVar32 = (byte)((ulong)uVar26 >> 0x30);
              bVar33 = (byte)((ulong)uVar26 >> 0x38);
              *pbVar3 = bVar17 >> 6;
              pbVar3[1] = bVar17 >> 4 & 3;
              pbVar3[2] = bVar17 >> 2 & 3;
              pbVar3[3] = bVar17 & 3;
              pbVar3[4] = bVar18 >> 6;
              pbVar3[5] = bVar18 >> 4 & 3;
              pbVar3[6] = bVar18 >> 2 & 3;
              pbVar3[7] = bVar18 & 3;
              pbVar3[8] = bVar19 >> 6;
              pbVar3[9] = bVar19 >> 4 & 3;
              pbVar3[10] = bVar19 >> 2 & 3;
              pbVar3[0xb] = bVar19 & 3;
              pbVar3[0xc] = bVar20 >> 6;
              pbVar3[0xd] = bVar20 >> 4 & 3;
              pbVar3[0xe] = bVar20 >> 2 & 3;
              pbVar3[0xf] = bVar20 & 3;
              pbVar3[0x10] = bVar21 >> 6;
              pbVar3[0x11] = bVar21 >> 4 & 3;
              pbVar3[0x12] = bVar21 >> 2 & 3;
              pbVar3[0x13] = bVar21 & 3;
              pbVar3[0x14] = bVar22 >> 6;
              pbVar3[0x15] = bVar22 >> 4 & 3;
              pbVar3[0x16] = bVar22 >> 2 & 3;
              pbVar3[0x17] = bVar22 & 3;
              pbVar3[0x18] = bVar23 >> 6;
              pbVar3[0x19] = bVar23 >> 4 & 3;
              pbVar3[0x1a] = bVar23 >> 2 & 3;
              pbVar3[0x1b] = bVar23 & 3;
              pbVar3[0x1c] = bVar24 >> 6;
              pbVar3[0x1d] = bVar24 >> 4 & 3;
              pbVar3[0x1e] = bVar24 >> 2 & 3;
              pbVar3[0x1f] = bVar24 & 3;
              pbVar3[0x20] = bVar25 >> 6;
              pbVar3[0x21] = bVar25 >> 4 & 3;
              pbVar3[0x22] = bVar25 >> 2 & 3;
              pbVar3[0x23] = bVar25 & 3;
              pbVar3[0x24] = bVar27 >> 6;
              pbVar3[0x25] = bVar27 >> 4 & 3;
              pbVar3[0x26] = bVar27 >> 2 & 3;
              pbVar3[0x27] = bVar27 & 3;
              pbVar3[0x28] = bVar28 >> 6;
              pbVar3[0x29] = bVar28 >> 4 & 3;
              pbVar3[0x2a] = bVar28 >> 2 & 3;
              pbVar3[0x2b] = bVar28 & 3;
              pbVar3[0x2c] = bVar29 >> 6;
              pbVar3[0x2d] = bVar29 >> 4 & 3;
              pbVar3[0x2e] = bVar29 >> 2 & 3;
              pbVar3[0x2f] = bVar29 & 3;
              pbVar3[0x30] = bVar30 >> 6;
              pbVar3[0x31] = bVar30 >> 4 & 3;
              pbVar3[0x32] = bVar30 >> 2 & 3;
              pbVar3[0x33] = bVar30 & 3;
              pbVar3[0x34] = bVar31 >> 6;
              pbVar3[0x35] = bVar31 >> 4 & 3;
              pbVar3[0x36] = bVar31 >> 2 & 3;
              pbVar3[0x37] = bVar31 & 3;
              pbVar3[0x38] = bVar32 >> 6;
              pbVar3[0x39] = bVar32 >> 4 & 3;
              pbVar3[0x3a] = bVar32 >> 2 & 3;
              pbVar3[0x3b] = bVar32 & 3;
              pbVar3[0x3c] = bVar33 >> 6;
              pbVar3[0x3d] = bVar33 >> 4 & 3;
              pbVar3[0x3e] = bVar33 >> 2 & 3;
              pbVar3[0x3f] = bVar33 & 3;
              pbVar3 = pbVar3 + 0x40;
              pbVar14 = pbVar14 + 0x10;
            } while (lVar16 != 0);
            while (pbVar3 = pbVar12, uVar11 != 0) {
LAB_010bc24c:
              pbVar12 = pbVar3 + 1;
              bVar17 = *pbVar3;
              *pbVar8 = bVar17 >> 6;
              pbVar8[1] = bVar17 >> 4 & 3;
              pbVar8[2] = bVar17 >> 2 & 3;
              pbVar8[3] = bVar17 & 3;
              pbVar8 = pbVar8 + 4;
              uVar6 = uVar6 - 1;
              uVar11 = uVar6;
            }
            uVar11 = param_2[1];
            pbVar8 = __src + uVar13 + 1;
            pbVar3 = __dest + uVar13 * 4 + 4;
          }
          if ((uVar11 & 3) != 0) {
            uVar6 = (uint)*pbVar8;
            iVar9 = -(uVar11 & 3);
            do {
              iVar9 = iVar9 + 1;
              *pbVar3 = (byte)(uVar6 >> 6) & 3;
              uVar6 = uVar6 << 2;
              pbVar3 = pbVar3 + 1;
            } while (iVar9 != 0);
          }
          __src = __src + (int)param_2[2];
          __dest = __dest + (int)param_3[2];
        }
        break;
      case 4:
        *(undefined2 *)(param_3 + 6) = 0x10;
        for (uVar7 = *param_2; uVar7 != 0; uVar7 = uVar7 - 1) {
          uVar11 = param_2[1];
          uVar6 = uVar11 >> 1;
          pbVar8 = __src;
          pbVar3 = __dest;
          if (uVar6 != 0) {
            uVar13 = (ulong)(uVar6 - 1);
            pbVar8 = __dest;
            pbVar3 = __src;
            if (uVar13 + 1 < 0x20) goto LAB_010bc3b4;
            uVar11 = uVar11 >> 1 & 0x1f;
            lVar16 = (uVar13 + 1) - (ulong)uVar11;
            if (lVar16 == 0) goto LAB_010bc3b4;
            if ((__dest < __src + uVar13 + 1) && (__src < __dest + uVar13 * 2 + 2))
            goto LAB_010bc3b4;
            uVar6 = uVar6 - (int)lVar16;
            pbVar8 = __dest + lVar16 * 2;
            pbVar14 = __src + lVar16;
            pbVar3 = __src + 0x10;
            pbVar12 = __dest + 0x20;
            do {
              uVar26 = *(undefined8 *)(pbVar3 + -8);
              uVar4 = *(undefined8 *)(pbVar3 + -0x10);
              uVar40 = *(undefined8 *)(pbVar3 + 8);
              uVar34 = *(undefined8 *)pbVar3;
              pbVar3 = pbVar3 + 0x20;
              lVar16 = lVar16 + -0x20;
              bVar17 = (byte)((ulong)uVar4 >> 8);
              bVar18 = (byte)((ulong)uVar4 >> 0x10);
              bVar19 = (byte)((ulong)uVar4 >> 0x18);
              bVar20 = (byte)((ulong)uVar4 >> 0x20);
              bVar21 = (byte)((ulong)uVar4 >> 0x28);
              bVar22 = (byte)((ulong)uVar4 >> 0x30);
              bVar23 = (byte)((ulong)uVar4 >> 0x38);
              bVar24 = (byte)((ulong)uVar26 >> 8);
              bVar25 = (byte)((ulong)uVar26 >> 0x10);
              bVar27 = (byte)((ulong)uVar26 >> 0x18);
              bVar28 = (byte)((ulong)uVar26 >> 0x20);
              bVar29 = (byte)((ulong)uVar26 >> 0x28);
              bVar30 = (byte)((ulong)uVar26 >> 0x30);
              bVar31 = (byte)((ulong)uVar26 >> 0x38);
              bVar32 = (byte)((ulong)uVar34 >> 8);
              bVar33 = (byte)((ulong)uVar34 >> 0x10);
              bVar35 = (byte)((ulong)uVar34 >> 0x18);
              bVar36 = (byte)((ulong)uVar34 >> 0x20);
              bVar37 = (byte)((ulong)uVar34 >> 0x28);
              bVar38 = (byte)((ulong)uVar34 >> 0x30);
              bVar39 = (byte)((ulong)uVar34 >> 0x38);
              bVar41 = (byte)((ulong)uVar40 >> 8);
              bVar42 = (byte)((ulong)uVar40 >> 0x10);
              bVar43 = (byte)((ulong)uVar40 >> 0x18);
              bVar44 = (byte)((ulong)uVar40 >> 0x20);
              bVar45 = (byte)((ulong)uVar40 >> 0x28);
              bVar46 = (byte)((ulong)uVar40 >> 0x30);
              bVar47 = (byte)((ulong)uVar40 >> 0x38);
              pbVar12[-0x20] = (byte)uVar4 >> 4;
              pbVar12[-0x1f] = (byte)uVar4 & 0xf;
              pbVar12[-0x1e] = bVar17 >> 4;
              pbVar12[-0x1d] = bVar17 & 0xf;
              pbVar12[-0x1c] = bVar18 >> 4;
              pbVar12[-0x1b] = bVar18 & 0xf;
              pbVar12[-0x1a] = bVar19 >> 4;
              pbVar12[-0x19] = bVar19 & 0xf;
              pbVar12[-0x18] = bVar20 >> 4;
              pbVar12[-0x17] = bVar20 & 0xf;
              pbVar12[-0x16] = bVar21 >> 4;
              pbVar12[-0x15] = bVar21 & 0xf;
              pbVar12[-0x14] = bVar22 >> 4;
              pbVar12[-0x13] = bVar22 & 0xf;
              pbVar12[-0x12] = bVar23 >> 4;
              pbVar12[-0x11] = bVar23 & 0xf;
              pbVar12[-0x10] = (byte)uVar26 >> 4;
              pbVar12[-0xf] = (byte)uVar26 & 0xf;
              pbVar12[-0xe] = bVar24 >> 4;
              pbVar12[-0xd] = bVar24 & 0xf;
              pbVar12[-0xc] = bVar25 >> 4;
              pbVar12[-0xb] = bVar25 & 0xf;
              pbVar12[-10] = bVar27 >> 4;
              pbVar12[-9] = bVar27 & 0xf;
              pbVar12[-8] = bVar28 >> 4;
              pbVar12[-7] = bVar28 & 0xf;
              pbVar12[-6] = bVar29 >> 4;
              pbVar12[-5] = bVar29 & 0xf;
              pbVar12[-4] = bVar30 >> 4;
              pbVar12[-3] = bVar30 & 0xf;
              pbVar12[-2] = bVar31 >> 4;
              pbVar12[-1] = bVar31 & 0xf;
              *pbVar12 = (byte)uVar34 >> 4;
              pbVar12[1] = (byte)uVar34 & 0xf;
              pbVar12[2] = bVar32 >> 4;
              pbVar12[3] = bVar32 & 0xf;
              pbVar12[4] = bVar33 >> 4;
              pbVar12[5] = bVar33 & 0xf;
              pbVar12[6] = bVar35 >> 4;
              pbVar12[7] = bVar35 & 0xf;
              pbVar12[8] = bVar36 >> 4;
              pbVar12[9] = bVar36 & 0xf;
              pbVar12[10] = bVar37 >> 4;
              pbVar12[0xb] = bVar37 & 0xf;
              pbVar12[0xc] = bVar38 >> 4;
              pbVar12[0xd] = bVar38 & 0xf;
              pbVar12[0xe] = bVar39 >> 4;
              pbVar12[0xf] = bVar39 & 0xf;
              pbVar12[0x10] = (byte)uVar40 >> 4;
              pbVar12[0x11] = (byte)uVar40 & 0xf;
              pbVar12[0x12] = bVar41 >> 4;
              pbVar12[0x13] = bVar41 & 0xf;
              pbVar12[0x14] = bVar42 >> 4;
              pbVar12[0x15] = bVar42 & 0xf;
              pbVar12[0x16] = bVar43 >> 4;
              pbVar12[0x17] = bVar43 & 0xf;
              pbVar12[0x18] = bVar44 >> 4;
              pbVar12[0x19] = bVar44 & 0xf;
              pbVar12[0x1a] = bVar45 >> 4;
              pbVar12[0x1b] = bVar45 & 0xf;
              pbVar12[0x1c] = bVar46 >> 4;
              pbVar12[0x1d] = bVar46 & 0xf;
              pbVar12[0x1e] = bVar47 >> 4;
              pbVar12[0x1f] = bVar47 & 0xf;
              pbVar12 = pbVar12 + 0x40;
            } while (lVar16 != 0);
            while (pbVar3 = pbVar14, uVar11 != 0) {
LAB_010bc3b4:
              pbVar14 = pbVar3 + 1;
              bVar17 = *pbVar3;
              *pbVar8 = bVar17 >> 4;
              pbVar8[1] = bVar17 & 0xf;
              pbVar8 = pbVar8 + 2;
              uVar6 = uVar6 - 1;
              uVar11 = uVar6;
            }
            uVar11 = param_2[1];
            pbVar8 = __src + uVar13 + 1;
            pbVar3 = __dest + uVar13 * 2 + 2;
          }
          if ((uVar11 & 1) != 0) {
            *pbVar3 = *pbVar8 >> 4;
          }
          __src = __src + (int)param_2[2];
          __dest = __dest + (int)param_3[2];
        }
        break;
      case 7:
        *(undefined2 *)(param_3 + 6) = 0x100;
        for (uVar6 = *param_2; uVar6 != 0; uVar6 = uVar6 - 1) {
          uVar15 = param_2[1];
          if (uVar15 != 0) {
            pbVar8 = __src + 3;
            pbVar3 = __dest;
            do {
              bVar17 = *pbVar8;
              if (bVar17 != 0) {
                cVar1 = '\0';
                if (bVar17 != 0) {
                  cVar1 = (char)((uint)((ulong)pbVar8[-3] * (ulong)pbVar8[-3] * 0x127c +
                                        (ulong)pbVar8[-2] * (ulong)pbVar8[-2] * 0xb717 +
                                        (ulong)pbVar8[-1] * (ulong)pbVar8[-1] * 0x366d >> 0x10) /
                                (uint)bVar17);
                }
                bVar17 = bVar17 - cVar1;
              }
              *pbVar3 = bVar17;
              uVar15 = uVar15 - 1;
              pbVar8 = pbVar8 + 4;
              pbVar3 = pbVar3 + 1;
            } while (uVar15 != 0);
            uVar7 = param_2[2];
            uVar11 = param_3[2];
          }
          __src = __src + (int)uVar7;
          __dest = __dest + (int)uVar11;
        }
      }
    }
  }
  return iVar10;
}

