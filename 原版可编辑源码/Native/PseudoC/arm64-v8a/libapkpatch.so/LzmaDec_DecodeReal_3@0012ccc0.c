
undefined4 LzmaDec_DecodeReal_3(byte *param_1,long param_2,byte *param_3)

{
  long lVar1;
  byte *pbVar2;
  ulong uVar3;
  uint uVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  short sVar9;
  uint uVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  uint uVar21;
  undefined4 uVar22;
  uint uVar23;
  uint uVar24;
  long lVar25;
  uint uVar26;
  uint uVar27;
  ushort *puVar28;
  ushort *puVar29;
  int iVar30;
  ulong uVar31;
  byte *pbVar32;
  byte *pbVar33;
  byte *pbVar34;
  byte *pbVar35;
  byte *pbVar36;
  ulong uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  long lVar41;
  uint uVar42;
  
  pbVar2 = *(byte **)(param_1 + 0x18);
  uVar3 = *(ulong *)(param_1 + 0x20);
  pbVar35 = *(byte **)(param_1 + 0x30);
  uVar37 = (ulong)*(uint *)(param_1 + 0x48);
  uVar38 = *(uint *)(param_1 + 0x4c);
  uVar39 = *(uint *)(param_1 + 0x50);
  uVar40 = *(uint *)(param_1 + 0x54);
  pbVar36 = pbVar2 + param_2;
  uVar12 = 0;
  pbVar34 = pbVar2 + *(long *)(param_1 + 0x28);
  uVar8 = (0x20 << (ulong)(param_1[2] & 0x1f)) - 0x20;
  uVar27 = (*param_1 - 0x1ff) + (0x200 << (ulong)((uint)param_1[1] + (uint)*param_1 & 0x1f));
  lVar41 = *(long *)(param_1 + 8);
  uVar4 = *(uint *)(param_1 + 0x44);
  uVar42 = *(uint *)(param_1 + 0x40);
  uVar14 = *(uint *)(param_1 + 0x38);
  uVar23 = *(uint *)(param_1 + 0x3c);
  uVar21 = 0;
  uVar26 = *(int *)(param_1 + 0x58) << 1;
  uVar31 = (ulong)uVar26;
  lVar1 = lVar41 + 0xb00;
  if (uVar4 != 0 || uVar42 != 0) {
    pbVar32 = pbVar34;
    if (pbVar34 == pbVar2) {
      pbVar32 = pbVar2 + uVar3;
    }
    uVar21 = (uint)pbVar32[-1];
  }
  uVar15 = (ulong)(uVar8 & uVar42 << 5);
  lVar25 = lVar1 + uVar31;
  if (uVar26 < 8) goto LAB_0012d048;
  pbVar32 = pbVar34;
  if (uVar26 < 0xe) goto LAB_0012dc88;
  do {
    uVar26 = (uint)uVar31;
    uVar16 = (uint)*(ushort *)(lVar25 + uVar15);
    pbVar33 = pbVar35;
    if ((uVar14 & 0xff000000) == 0) {
      pbVar33 = pbVar35 + 1;
      uVar14 = uVar14 << 8;
      uVar23 = (uint)*pbVar35 | uVar23 << 8;
    }
    uVar17 = (uVar14 >> 0xb) * uVar16;
    pbVar34 = pbVar32;
    if (uVar23 < uVar17) {
      iVar30 = uVar42 * 0x100;
      uVar42 = uVar42 + 1;
      lVar19 = lVar41 + 0xf80 + (ulong)(uVar21 + iVar30 << (ulong)(uVar27 & 0x1f) & uVar27) * 3;
      *(ushort *)(lVar25 + uVar15) =
           *(ushort *)(lVar25 + uVar15) - (short)((int)(uVar16 - 0x7e1) >> 5);
      lVar25 = ((long)pbVar32 - (long)pbVar2) - uVar37;
      if ((ulong)((long)pbVar32 - (long)pbVar2) < uVar37) {
        lVar25 = lVar25 + uVar3;
      }
      bVar11 = uVar26 < 0x14;
      uVar21 = uVar26 - 6;
      uVar26 = uVar26 - 0xc;
      if (bVar11) {
        uVar26 = uVar21;
      }
      uVar31 = (ulong)uVar26;
      uVar14 = (uint)pbVar2[lVar25];
      uVar21 = uVar14 * 4 & 0x200;
      puVar28 = (ushort *)(lVar19 + 0x202 + (ulong)uVar21);
      uVar7 = *puVar28;
      pbVar34 = pbVar33;
      if ((uVar17 & 0xff000000) == 0) {
        pbVar34 = pbVar33 + 1;
        uVar17 = uVar17 * 0x100;
        uVar23 = (uint)*pbVar33 | uVar23 << 8;
      }
      uVar16 = (uVar17 >> 0xb) * (uint)uVar7;
      bVar11 = uVar16 <= uVar23;
      if (!bVar11) {
        uVar21 = uVar21 ^ 0x200;
      }
      uVar13 = uVar16;
      if (bVar11) {
        uVar13 = uVar17 - uVar16;
      }
      uVar17 = uVar14 * 8 & uVar21;
      uVar16 = uVar23 - uVar16;
      uVar24 = (uint)uVar7;
      if (!bVar11) {
        uVar16 = uVar23;
        uVar24 = uVar7 - 0x7e1;
      }
      *puVar28 = uVar7 - (short)((int)uVar24 >> 5);
      uVar23 = bVar11 + 2;
      lVar25 = lVar19 + (ulong)uVar21 + (ulong)uVar17;
      uVar7 = *(ushort *)(lVar25 + (ulong)uVar23 * 2);
      pbVar35 = pbVar34;
      if ((uVar13 & 0xff000000) == 0) {
        pbVar35 = pbVar34 + 1;
        uVar13 = uVar13 << 8;
        uVar16 = (uint)*pbVar34 | uVar16 << 8;
      }
      uVar24 = (uVar13 >> 0xb) * (uint)uVar7;
      bVar11 = uVar24 <= uVar16;
      if (!bVar11) {
        uVar17 = uVar21 ^ uVar17;
      }
      uVar21 = uVar24;
      if (bVar11) {
        uVar21 = uVar13 - uVar24;
      }
      uVar13 = uVar14 * 0x10 & uVar17;
      uVar24 = uVar16 - uVar24;
      uVar10 = (uint)uVar7;
      if (!bVar11) {
        uVar24 = uVar16;
        uVar10 = uVar7 - 0x7e1;
      }
      *(ushort *)(lVar25 + (ulong)uVar23 * 2) = uVar7 - (short)((int)uVar10 >> 5);
      uVar23 = uVar23 * 2 + (uint)bVar11;
      lVar25 = lVar19 + (ulong)uVar17 + (ulong)uVar13;
      uVar7 = *(ushort *)(lVar25 + (ulong)uVar23 * 2);
      pbVar34 = pbVar35;
      if ((uVar21 & 0xff000000) == 0) {
        pbVar34 = pbVar35 + 1;
        uVar21 = uVar21 << 8;
        uVar24 = (uint)*pbVar35 | uVar24 << 8;
      }
      uVar16 = (uVar21 >> 0xb) * (uint)uVar7;
      bVar11 = uVar16 <= uVar24;
      if (!bVar11) {
        uVar13 = uVar17 ^ uVar13;
      }
      uVar17 = uVar16;
      if (bVar11) {
        uVar17 = uVar21 - uVar16;
      }
      uVar21 = uVar14 * 0x20 & uVar13;
      uVar16 = uVar24 - uVar16;
      uVar10 = (uint)uVar7;
      if (!bVar11) {
        uVar16 = uVar24;
        uVar10 = uVar7 - 0x7e1;
      }
      *(ushort *)(lVar25 + (ulong)uVar23 * 2) = uVar7 - (short)((int)uVar10 >> 5);
      uVar23 = uVar23 * 2 + (uint)bVar11;
      lVar25 = lVar19 + (ulong)uVar13 + (ulong)uVar21;
      uVar7 = *(ushort *)(lVar25 + (ulong)uVar23 * 2);
      pbVar35 = pbVar34;
      if ((uVar17 & 0xff000000) == 0) {
        pbVar35 = pbVar34 + 1;
        uVar17 = uVar17 << 8;
        uVar16 = (uint)*pbVar34 | uVar16 << 8;
      }
      uVar24 = (uVar17 >> 0xb) * (uint)uVar7;
      bVar11 = uVar24 <= uVar16;
      if (!bVar11) {
        uVar21 = uVar13 ^ uVar21;
      }
      uVar13 = uVar24;
      if (bVar11) {
        uVar13 = uVar17 - uVar24;
      }
      uVar17 = uVar14 * 0x40 & uVar21;
      uVar24 = uVar16 - uVar24;
      uVar10 = (uint)uVar7;
      if (!bVar11) {
        uVar24 = uVar16;
        uVar10 = uVar7 - 0x7e1;
      }
      *(ushort *)(lVar25 + (ulong)uVar23 * 2) = uVar7 - (short)((int)uVar10 >> 5);
      uVar23 = uVar23 * 2 + (uint)bVar11;
      lVar25 = lVar19 + (ulong)uVar21 + (ulong)uVar17;
      uVar7 = *(ushort *)(lVar25 + (ulong)uVar23 * 2);
      pbVar34 = pbVar35;
      if ((uVar13 & 0xff000000) == 0) {
        pbVar34 = pbVar35 + 1;
        uVar13 = uVar13 << 8;
        uVar24 = (uint)*pbVar35 | uVar24 << 8;
      }
      uVar16 = (uVar13 >> 0xb) * (uint)uVar7;
      bVar11 = uVar16 <= uVar24;
      if (!bVar11) {
        uVar17 = uVar21 ^ uVar17;
      }
      uVar21 = uVar16;
      if (bVar11) {
        uVar21 = uVar13 - uVar16;
      }
      uVar13 = uVar14 * 0x80 & uVar17;
      uVar16 = uVar24 - uVar16;
      uVar10 = (uint)uVar7;
      if (!bVar11) {
        uVar16 = uVar24;
        uVar10 = uVar7 - 0x7e1;
      }
      *(ushort *)(lVar25 + (ulong)uVar23 * 2) = uVar7 - (short)((int)uVar10 >> 5);
      uVar23 = uVar23 * 2 + (uint)bVar11;
      lVar25 = lVar19 + (ulong)uVar17 + (ulong)uVar13;
      uVar7 = *(ushort *)(lVar25 + (ulong)uVar23 * 2);
      pbVar35 = pbVar34;
      if ((uVar21 & 0xff000000) == 0) {
        pbVar35 = pbVar34 + 1;
        uVar21 = uVar21 << 8;
        uVar16 = (uint)*pbVar34 | uVar16 << 8;
      }
      uVar24 = (uVar21 >> 0xb) * (uint)uVar7;
      bVar11 = uVar24 <= uVar16;
      if (!bVar11) {
        uVar13 = uVar17 ^ uVar13;
      }
      uVar17 = uVar24;
      if (bVar11) {
        uVar17 = uVar21 - uVar24;
      }
      uVar21 = uVar14 * 0x100 & uVar13;
      uVar24 = uVar16 - uVar24;
      uVar10 = (uint)uVar7;
      if (!bVar11) {
        uVar24 = uVar16;
        uVar10 = uVar7 - 0x7e1;
      }
      *(ushort *)(lVar25 + (ulong)uVar23 * 2) = uVar7 - (short)((int)uVar10 >> 5);
      uVar23 = uVar23 * 2 + (uint)bVar11;
      lVar25 = lVar19 + (ulong)uVar13 + (ulong)uVar21;
      uVar7 = *(ushort *)(lVar25 + (ulong)uVar23 * 2);
      pbVar34 = pbVar35;
      if ((uVar17 & 0xff000000) == 0) {
        pbVar34 = pbVar35 + 1;
        uVar17 = uVar17 << 8;
        uVar24 = (uint)*pbVar35 | uVar24 << 8;
      }
      uVar16 = (uVar17 >> 0xb) * (uint)uVar7;
      bVar11 = uVar16 <= uVar24;
      if (!bVar11) {
        uVar21 = uVar13 ^ uVar21;
      }
      uVar13 = uVar16;
      if (bVar11) {
        uVar13 = uVar17 - uVar16;
      }
      uVar16 = uVar24 - uVar16;
      uVar17 = (uint)uVar7;
      if (!bVar11) {
        uVar16 = uVar24;
        uVar17 = uVar7 - 0x7e1;
      }
      *(ushort *)(lVar25 + (ulong)uVar23 * 2) = uVar7 - (short)((int)uVar17 >> 5);
      uVar17 = uVar23 * 2 + (uint)bVar11;
      lVar25 = lVar19 + (ulong)uVar21 + (ulong)(uVar14 * 0x200 & uVar21);
      uVar7 = *(ushort *)(lVar25 + (ulong)uVar17 * 2);
      pbVar35 = pbVar34;
      if ((uVar13 & 0xff000000) == 0) {
        pbVar35 = pbVar34 + 1;
        uVar13 = uVar13 << 8;
        uVar16 = (uint)*pbVar34 | uVar16 << 8;
      }
      uVar21 = (uVar13 >> 0xb) * (uint)uVar7;
      bVar11 = uVar21 <= uVar16;
      uVar14 = uVar21;
      if (bVar11) {
        uVar14 = uVar13 - uVar21;
      }
      uVar23 = uVar16 - uVar21;
      uVar21 = (uint)uVar7;
      if (!bVar11) {
        uVar23 = uVar16;
        uVar21 = uVar7 - 0x7e1;
      }
      *(ushort *)(lVar25 + (ulong)uVar17 * 2) = uVar7 - (short)((int)uVar21 >> 5);
      uVar21 = uVar17 * 2 + (uint)bVar11;
      uVar15 = (ulong)(uVar8 & uVar42 * 0x20);
      lVar25 = lVar1 + uVar31;
      pbVar34 = pbVar32 + 1;
      *pbVar32 = (byte)uVar21;
      uVar21 = uVar21 & 0xff;
      if ((param_3 <= pbVar35) || (pbVar36 <= pbVar34)) goto LAB_0012dfc8;
LAB_0012dc88:
      uVar16 = (uint)*(ushort *)(lVar25 + uVar15);
      pbVar33 = pbVar35;
      if ((uVar14 & 0xff000000) == 0) {
        pbVar33 = pbVar35 + 1;
        uVar14 = uVar14 << 8;
        uVar23 = (uint)*pbVar35 | uVar23 << 8;
      }
      uVar17 = (uVar14 >> 0xb) * uVar16;
      if (uVar23 < uVar17) {
        uVar31 = (ulong)(uVar26 - 6);
        pbVar32 = pbVar34;
        while( true ) {
          iVar30 = uVar42 * 0x100;
          uVar42 = uVar42 + 1;
          lVar19 = lVar41 + 0xf80 + (ulong)(uVar21 + iVar30 << (ulong)(uVar27 & 0x1f) & uVar27) * 3;
          *(short *)(lVar25 + uVar15) = (short)uVar16 - (short)((int)(uVar16 - 0x7e1) >> 5);
          uVar7 = *(ushort *)(lVar19 + 2);
          pbVar34 = pbVar33;
          if ((uVar17 & 0xff000000) == 0) {
            pbVar34 = pbVar33 + 1;
            uVar17 = uVar17 << 8;
            uVar23 = (uint)*pbVar33 | uVar23 << 8;
          }
          uVar21 = (uVar17 >> 0xb) * (uint)uVar7;
          bVar11 = uVar21 <= uVar23;
          uVar14 = uVar21;
          if (bVar11) {
            uVar14 = uVar17 - uVar21;
          }
          uVar26 = (uint)uVar7;
          if (!bVar11) {
            uVar26 = uVar7 - 0x7e1;
          }
          uVar6 = *(ushort *)(lVar19 + 4);
          if (bVar11) {
            uVar6 = *(ushort *)(lVar19 + 6);
          }
          uVar16 = (uint)uVar6;
          uVar21 = uVar23 - uVar21;
          if (!bVar11) {
            uVar21 = uVar23;
          }
          *(ushort *)(lVar19 + 2) = uVar7 - (short)((int)uVar26 >> 5);
          lVar25 = lVar19 + 2;
          pbVar35 = pbVar34;
          if ((uVar14 & 0xff000000) == 0) {
            pbVar35 = pbVar34 + 1;
            uVar14 = uVar14 << 8;
            uVar21 = (uint)*pbVar34 | uVar21 << 8;
          }
          uVar26 = (bVar11 + 2) * 2;
          uVar15 = (ulong)uVar26;
          uVar23 = (uVar14 >> 0xb) * uVar16;
          bVar11 = uVar23 <= uVar21;
          uVar14 = uVar14 - uVar23;
          if (!bVar11) {
            uVar16 = uVar16 - 0x7e1;
            uVar14 = uVar23;
          }
          uVar7 = *(ushort *)(lVar19 + uVar15 * 2);
          if (bVar11) {
            uVar7 = *(ushort *)(lVar25 + uVar15 * 2);
          }
          uVar17 = (uint)uVar7;
          uVar23 = uVar21 - uVar23;
          if (!bVar11) {
            uVar23 = uVar21;
          }
          *(ushort *)(lVar19 + uVar15) = uVar6 - (short)((int)uVar16 >> 5);
          pbVar34 = pbVar35;
          if ((uVar14 & 0xff000000) == 0) {
            pbVar34 = pbVar35 + 1;
            uVar14 = uVar14 << 8;
            uVar23 = (uint)*pbVar35 | uVar23 << 8;
          }
          uVar26 = (uVar26 + bVar11) * 2;
          uVar15 = (ulong)uVar26;
          uVar21 = (uVar14 >> 0xb) * uVar17;
          bVar11 = uVar21 <= uVar23;
          uVar14 = uVar14 - uVar21;
          if (!bVar11) {
            uVar17 = uVar17 - 0x7e1;
            uVar14 = uVar21;
          }
          uVar6 = *(ushort *)(lVar19 + uVar15 * 2);
          if (bVar11) {
            uVar6 = *(ushort *)(lVar25 + uVar15 * 2);
          }
          uVar16 = (uint)uVar6;
          uVar21 = uVar23 - uVar21;
          if (!bVar11) {
            uVar21 = uVar23;
          }
          *(ushort *)(lVar19 + uVar15) = uVar7 - (short)((int)uVar17 >> 5);
          pbVar35 = pbVar34;
          if ((uVar14 & 0xff000000) == 0) {
            pbVar35 = pbVar34 + 1;
            uVar14 = uVar14 << 8;
            uVar21 = (uint)*pbVar34 | uVar21 << 8;
          }
          uVar26 = (uVar26 + bVar11) * 2;
          uVar15 = (ulong)uVar26;
          uVar23 = (uVar14 >> 0xb) * uVar16;
          bVar11 = uVar23 <= uVar21;
          uVar14 = uVar14 - uVar23;
          if (!bVar11) {
            uVar16 = uVar16 - 0x7e1;
            uVar14 = uVar23;
          }
          uVar7 = *(ushort *)(lVar19 + uVar15 * 2);
          if (bVar11) {
            uVar7 = *(ushort *)(lVar25 + uVar15 * 2);
          }
          uVar17 = (uint)uVar7;
          uVar23 = uVar21 - uVar23;
          if (!bVar11) {
            uVar23 = uVar21;
          }
          *(ushort *)(lVar19 + uVar15) = uVar6 - (short)((int)uVar16 >> 5);
          pbVar34 = pbVar35;
          if ((uVar14 & 0xff000000) == 0) {
            pbVar34 = pbVar35 + 1;
            uVar14 = uVar14 << 8;
            uVar23 = (uint)*pbVar35 | uVar23 << 8;
          }
          uVar26 = (uVar26 + bVar11) * 2;
          uVar15 = (ulong)uVar26;
          uVar21 = (uVar14 >> 0xb) * uVar17;
          bVar11 = uVar21 <= uVar23;
          uVar14 = uVar14 - uVar21;
          if (!bVar11) {
            uVar17 = uVar17 - 0x7e1;
            uVar14 = uVar21;
          }
          uVar6 = *(ushort *)(lVar19 + uVar15 * 2);
          if (bVar11) {
            uVar6 = *(ushort *)(lVar25 + uVar15 * 2);
          }
          uVar16 = (uint)uVar6;
          uVar21 = uVar23 - uVar21;
          if (!bVar11) {
            uVar21 = uVar23;
          }
          *(ushort *)(lVar19 + uVar15) = uVar7 - (short)((int)uVar17 >> 5);
          pbVar35 = pbVar34;
          if ((uVar14 & 0xff000000) == 0) {
            pbVar35 = pbVar34 + 1;
            uVar14 = uVar14 << 8;
            uVar21 = (uint)*pbVar34 | uVar21 << 8;
          }
          uVar26 = (uVar26 + bVar11) * 2;
          uVar15 = (ulong)uVar26;
          uVar23 = (uVar14 >> 0xb) * uVar16;
          bVar11 = uVar23 <= uVar21;
          uVar14 = uVar14 - uVar23;
          if (!bVar11) {
            uVar16 = uVar16 - 0x7e1;
            uVar14 = uVar23;
          }
          uVar7 = *(ushort *)(lVar19 + uVar15 * 2);
          if (bVar11) {
            uVar7 = *(ushort *)(lVar25 + uVar15 * 2);
          }
          uVar17 = (uint)uVar7;
          uVar23 = uVar21 - uVar23;
          if (!bVar11) {
            uVar23 = uVar21;
          }
          *(ushort *)(lVar19 + uVar15) = uVar6 - (short)((int)uVar16 >> 5);
          pbVar34 = pbVar35;
          if ((uVar14 & 0xff000000) == 0) {
            pbVar34 = pbVar35 + 1;
            uVar14 = uVar14 << 8;
            uVar23 = (uint)*pbVar35 | uVar23 << 8;
          }
          uVar26 = (uVar26 + bVar11) * 2;
          uVar15 = (ulong)uVar26;
          uVar21 = (uVar14 >> 0xb) * uVar17;
          bVar11 = uVar21 <= uVar23;
          uVar14 = uVar14 - uVar21;
          if (!bVar11) {
            uVar17 = uVar17 - 0x7e1;
            uVar14 = uVar21;
          }
          uVar6 = *(ushort *)(lVar19 + uVar15 * 2);
          if (bVar11) {
            uVar6 = *(ushort *)(lVar25 + uVar15 * 2);
          }
          uVar16 = (uint)uVar6;
          uVar13 = uVar23 - uVar21;
          if (!bVar11) {
            uVar13 = uVar23;
          }
          *(ushort *)(lVar19 + uVar15) = uVar7 - (short)((int)uVar17 >> 5);
          pbVar35 = pbVar34;
          if ((uVar14 & 0xff000000) == 0) {
            pbVar35 = pbVar34 + 1;
            uVar14 = uVar14 << 8;
            uVar13 = (uint)*pbVar34 | uVar13 << 8;
          }
          uVar21 = (uVar26 + bVar11) * 2;
          uVar26 = (uVar14 >> 0xb) * uVar16;
          uVar23 = uVar13 - uVar26;
          uVar14 = uVar14 - uVar26;
          if (uVar26 > uVar13) {
            uVar23 = uVar13;
            uVar16 = uVar16 - 0x7e1;
            uVar14 = uVar26;
          }
          *(ushort *)(lVar19 + (ulong)uVar21) = uVar6 - (short)((int)uVar16 >> 5);
          uVar21 = uVar21 + (uVar26 <= uVar13);
          uVar15 = (ulong)(uVar8 & uVar42 * 0x20);
          lVar25 = lVar1 + uVar31;
          pbVar34 = pbVar32 + 1;
          *pbVar32 = (byte)uVar21;
          uVar21 = uVar21 & 0xff;
          if ((param_3 <= pbVar35) || (pbVar36 <= pbVar34)) goto LAB_0012dfc8;
LAB_0012d048:
          uVar26 = (uint)uVar31;
          uVar16 = (uint)*(ushort *)(lVar25 + uVar15);
          pbVar33 = pbVar35;
          if ((uVar14 & 0xff000000) == 0) {
            pbVar33 = pbVar35 + 1;
            uVar14 = uVar14 << 8;
            uVar23 = (uint)*pbVar35 | uVar23 << 8;
          }
          uVar17 = (uVar14 >> 0xb) * uVar16;
          if (uVar17 <= uVar23) break;
          uVar31 = 0;
          pbVar32 = pbVar34;
        }
      }
    }
    uVar23 = uVar23 - uVar17;
    uVar14 = uVar14 - uVar17;
    *(short *)(lVar25 + uVar15) = (short)uVar16 - (short)(uVar16 >> 5);
    uVar7 = *(ushort *)(lVar25 + 0x220);
    pbVar35 = pbVar33;
    if ((uVar14 & 0xff000000) == 0) {
      pbVar35 = pbVar33 + 1;
      uVar14 = uVar14 * 0x100;
      uVar23 = (uint)*pbVar33 | uVar23 * 0x100;
    }
    uVar21 = (uVar14 >> 0xb) * (uint)uVar7;
    uVar16 = uVar38;
    if (uVar23 < uVar21) {
      *(ushort *)(lVar25 + 0x220) = uVar7 - (short)((int)(uVar7 - 0x7e1) >> 5);
      puVar28 = (ushort *)(lVar41 + 0x700);
      uVar31 = (ulong)(uVar26 | 0x20);
      uVar38 = uVar39;
LAB_0012d0c4:
      uVar39 = uVar38;
      uVar38 = uVar16;
      iVar30 = 6;
      uVar7 = *puVar28;
      pbVar32 = pbVar35;
      if ((uVar21 & 0xff000000) == 0) {
        pbVar32 = pbVar35 + 1;
        uVar21 = uVar21 << 8;
        uVar23 = (uint)*pbVar35 | uVar23 << 8;
      }
      uVar12 = (uVar21 >> 0xb) * (uint)uVar7;
      puVar29 = puVar28;
      pbVar35 = pbVar32;
      if (uVar23 < uVar12) {
LAB_0012d1c0:
        *puVar29 = uVar7 - (short)((int)(uVar7 - 0x7e1) >> 5);
        puVar29 = (ushort *)((long)puVar29 + uVar15);
        uVar7 = puVar29[1];
        pbVar32 = pbVar35;
        if ((uVar12 & 0xff000000) == 0) {
          pbVar32 = pbVar35 + 1;
          uVar12 = uVar12 << 8;
          uVar23 = (uint)*pbVar35 | uVar23 << 8;
        }
        uVar26 = (uVar12 >> 0xb) * (uint)uVar7;
        bVar11 = uVar26 <= uVar23;
        uVar21 = uVar26;
        if (bVar11) {
          uVar21 = uVar12 - uVar26;
        }
        uVar12 = (uint)uVar7;
        if (!bVar11) {
          uVar12 = uVar7 - 0x7e1;
        }
        uVar6 = puVar29[2];
        if (bVar11) {
          uVar6 = puVar29[3];
        }
        uVar14 = (uint)uVar6;
        uVar26 = uVar23 - uVar26;
        if (!bVar11) {
          uVar26 = uVar23;
        }
        puVar29[1] = uVar7 - (short)((int)uVar12 >> 5);
        uVar12 = bVar11 + 2;
        puVar28 = puVar29 + 1;
      }
      else {
        uVar23 = uVar23 - uVar12;
        uVar21 = uVar21 - uVar12;
        *puVar28 = uVar7 - (uVar7 >> 5);
        puVar29 = puVar28 + 8;
        iVar30 = -2;
        uVar7 = *puVar29;
        if ((uVar21 & 0xff000000) == 0) {
          pbVar35 = pbVar32 + 1;
          uVar21 = uVar21 * 0x100;
          uVar23 = (uint)*pbVar32 | uVar23 * 0x100;
        }
        uVar12 = (uVar21 >> 0xb) * (uint)uVar7;
        if (uVar23 < uVar12) goto LAB_0012d1c0;
        uVar26 = uVar23 - uVar12;
        uVar21 = uVar21 - uVar12;
        *puVar29 = uVar7 - (uVar7 >> 5);
        puVar29 = puVar28 + 0x100;
        uVar14 = (uint)puVar28[0x101];
        uVar12 = 1;
        puVar28 = puVar28 + 0x101;
        do {
          pbVar32 = pbVar35;
          uVar23 = uVar26;
          if ((uVar21 & 0xff000000) == 0) {
            pbVar32 = pbVar35 + 1;
            uVar21 = uVar21 << 8;
            uVar23 = (uint)*pbVar35 | uVar26 << 8;
          }
          uVar15 = (ulong)(uVar12 * 2);
          uVar26 = (uVar21 >> 0xb) * uVar14;
          bVar11 = uVar26 <= uVar23;
          uVar21 = uVar21 - uVar26;
          uVar16 = uVar14;
          if (!bVar11) {
            uVar16 = uVar14 - 0x7e1;
            uVar21 = uVar26;
          }
          sVar9 = (short)uVar14;
          uVar7 = puVar29[uVar15];
          if (bVar11) {
            uVar7 = puVar28[uVar15];
          }
          uVar14 = (uint)uVar7;
          uVar26 = uVar23 - uVar26;
          if (!bVar11) {
            uVar26 = uVar23;
          }
          *(short *)((long)puVar29 + uVar15) = sVar9 - (short)((int)uVar16 >> 5);
          uVar12 = uVar12 * 2 + (uint)bVar11;
          pbVar35 = pbVar32;
        } while ((uVar12 >> 6 & 1) == 0);
        iVar30 = 0xee;
      }
      pbVar33 = pbVar32;
      if ((uVar21 & 0xff000000) == 0) {
        pbVar33 = pbVar32 + 1;
        uVar21 = uVar21 << 8;
        uVar26 = (uint)*pbVar32 | uVar26 << 8;
      }
      uVar15 = (ulong)(uVar12 * 2);
      uVar16 = (uVar21 >> 0xb) * uVar14;
      bVar11 = uVar16 <= uVar26;
      uVar21 = uVar21 - uVar16;
      uVar23 = uVar14;
      if (!bVar11) {
        uVar23 = uVar14 - 0x7e1;
        uVar21 = uVar16;
      }
      uVar7 = puVar29[uVar15];
      if (bVar11) {
        uVar7 = puVar28[uVar15];
      }
      uVar17 = (uint)uVar7;
      uVar16 = uVar26 - uVar16;
      if (!bVar11) {
        uVar16 = uVar26;
      }
      *(short *)((long)puVar29 + uVar15) = (short)uVar14 - (short)((int)uVar23 >> 5);
      pbVar35 = pbVar33;
      if ((uVar21 & 0xff000000) == 0) {
        pbVar35 = pbVar33 + 1;
        uVar21 = uVar21 << 8;
        uVar16 = (uint)*pbVar33 | uVar16 << 8;
      }
      uVar26 = (uVar12 * 2 + (uint)bVar11) * 2;
      uVar12 = (uVar21 >> 0xb) * uVar17;
      uVar23 = uVar16 - uVar12;
      uVar14 = uVar21 - uVar12;
      if (uVar12 > uVar16) {
        uVar23 = uVar16;
        uVar17 = uVar17 - 0x7e1;
        uVar14 = uVar12;
      }
      *(ushort *)((long)puVar29 + (ulong)uVar26) = uVar7 - (short)((int)uVar17 >> 5);
      uVar12 = (uVar26 + (uVar12 <= uVar16)) - iVar30;
      uVar16 = (uint)uVar31;
      uVar21 = uVar38;
      uVar26 = uVar39;
      if ((uVar16 >> 5 & 1) != 0) {
        uVar21 = uVar12;
        if (4 < uVar12) {
          uVar21 = 5;
        }
        lVar25 = lVar41 + 0xc80 + (ulong)uVar21 * 0x80;
        uVar7 = *(ushort *)(lVar25 + 2);
        pbVar32 = pbVar35;
        if ((uVar14 & 0xff000000) == 0) {
          pbVar32 = pbVar35 + 1;
          uVar14 = uVar14 << 8;
          uVar23 = (uint)*pbVar35 | uVar23 << 8;
        }
        uVar26 = (uVar14 >> 0xb) * (uint)uVar7;
        bVar11 = uVar26 <= uVar23;
        uVar21 = uVar26;
        if (bVar11) {
          uVar21 = uVar14 - uVar26;
        }
        uVar14 = (uint)uVar7;
        if (!bVar11) {
          uVar14 = uVar7 - 0x7e1;
        }
        uVar6 = *(ushort *)(lVar25 + 4);
        if (bVar11) {
          uVar6 = *(ushort *)(lVar25 + 6);
        }
        uVar17 = (uint)uVar6;
        uVar26 = uVar23 - uVar26;
        if (!bVar11) {
          uVar26 = uVar23;
        }
        *(ushort *)(lVar25 + 2) = uVar7 - (short)((int)uVar14 >> 5);
        lVar19 = lVar25 + 2;
        pbVar35 = pbVar32;
        if ((uVar21 & 0xff000000) == 0) {
          pbVar35 = pbVar32 + 1;
          uVar21 = uVar21 << 8;
          uVar26 = (uint)*pbVar32 | uVar26 << 8;
        }
        uVar14 = (bVar11 + 2) * 2;
        uVar31 = (ulong)uVar14;
        uVar23 = (uVar21 >> 0xb) * uVar17;
        bVar11 = uVar23 <= uVar26;
        uVar21 = uVar21 - uVar23;
        if (!bVar11) {
          uVar17 = uVar17 - 0x7e1;
          uVar21 = uVar23;
        }
        uVar7 = *(ushort *)(lVar25 + uVar31 * 2);
        if (bVar11) {
          uVar7 = *(ushort *)(lVar19 + uVar31 * 2);
        }
        uVar13 = (uint)uVar7;
        uVar23 = uVar26 - uVar23;
        if (!bVar11) {
          uVar23 = uVar26;
        }
        *(ushort *)(lVar25 + uVar31) = uVar6 - (short)((int)uVar17 >> 5);
        pbVar32 = pbVar35;
        if ((uVar21 & 0xff000000) == 0) {
          pbVar32 = pbVar35 + 1;
          uVar21 = uVar21 << 8;
          uVar23 = (uint)*pbVar35 | uVar23 << 8;
        }
        uVar14 = (uVar14 + bVar11) * 2;
        uVar31 = (ulong)uVar14;
        uVar26 = (uVar21 >> 0xb) * uVar13;
        bVar11 = uVar26 <= uVar23;
        uVar21 = uVar21 - uVar26;
        if (!bVar11) {
          uVar13 = uVar13 - 0x7e1;
          uVar21 = uVar26;
        }
        uVar6 = *(ushort *)(lVar25 + uVar31 * 2);
        if (bVar11) {
          uVar6 = *(ushort *)(lVar19 + uVar31 * 2);
        }
        uVar17 = (uint)uVar6;
        uVar26 = uVar23 - uVar26;
        if (!bVar11) {
          uVar26 = uVar23;
        }
        *(ushort *)(lVar25 + uVar31) = uVar7 - (short)((int)uVar13 >> 5);
        pbVar35 = pbVar32;
        if ((uVar21 & 0xff000000) == 0) {
          pbVar35 = pbVar32 + 1;
          uVar21 = uVar21 << 8;
          uVar26 = (uint)*pbVar32 | uVar26 << 8;
        }
        uVar14 = (uVar14 + bVar11) * 2;
        uVar31 = (ulong)uVar14;
        uVar23 = (uVar21 >> 0xb) * uVar17;
        bVar11 = uVar23 <= uVar26;
        uVar21 = uVar21 - uVar23;
        if (!bVar11) {
          uVar17 = uVar17 - 0x7e1;
          uVar21 = uVar23;
        }
        uVar7 = *(ushort *)(lVar25 + uVar31 * 2);
        if (bVar11) {
          uVar7 = *(ushort *)(lVar19 + uVar31 * 2);
        }
        uVar13 = (uint)uVar7;
        uVar23 = uVar26 - uVar23;
        if (!bVar11) {
          uVar23 = uVar26;
        }
        *(ushort *)(lVar25 + uVar31) = uVar6 - (short)((int)uVar17 >> 5);
        pbVar32 = pbVar35;
        if ((uVar21 & 0xff000000) == 0) {
          pbVar32 = pbVar35 + 1;
          uVar21 = uVar21 << 8;
          uVar23 = (uint)*pbVar35 | uVar23 << 8;
        }
        uVar26 = (uVar14 + bVar11) * 2;
        uVar31 = (ulong)uVar26;
        uVar14 = (uVar21 >> 0xb) * uVar13;
        bVar11 = uVar14 <= uVar23;
        uVar21 = uVar21 - uVar14;
        if (!bVar11) {
          uVar13 = uVar13 - 0x7e1;
          uVar21 = uVar14;
        }
        uVar6 = *(ushort *)(lVar25 + uVar31 * 2);
        if (bVar11) {
          uVar6 = *(ushort *)(lVar19 + uVar31 * 2);
        }
        uVar17 = (uint)uVar6;
        uVar24 = uVar23 - uVar14;
        if (!bVar11) {
          uVar24 = uVar23;
        }
        *(ushort *)(lVar25 + uVar31) = uVar7 - (short)((int)uVar13 >> 5);
        uVar26 = uVar26 + bVar11;
        pbVar35 = pbVar32;
        if ((uVar21 & 0xff000000) == 0) {
          pbVar35 = pbVar32 + 1;
          uVar21 = uVar21 << 8;
          uVar24 = (uint)*pbVar32 | uVar24 << 8;
        }
        uVar13 = (uVar21 >> 0xb) * uVar17;
        uVar23 = uVar24 - uVar13;
        uVar14 = uVar21 - uVar13;
        if (uVar13 > uVar24) {
          uVar23 = uVar24;
          uVar17 = uVar17 - 0x7e1;
          uVar14 = uVar13;
        }
        *(ushort *)(lVar25 + (ulong)(uVar26 * 2)) = uVar6 - (short)((int)uVar17 >> 5);
        uVar17 = uVar26 * 2 + (uint)(uVar13 <= uVar24) & 3;
        if (uVar26 < 0x27) {
          uVar21 = uVar26 - 0x21;
          if (0x20 < uVar26 && uVar21 != 0) {
            uVar31 = 2;
            puVar28 = (ushort *)(lVar41 + (ulong)((uVar17 | 2) << (ulong)(uVar21 & 0x1f)) * 2 + 2);
            pbVar32 = pbVar35;
            do {
              uVar7 = *puVar28;
              puVar29 = (ushort *)((long)puVar28 + uVar31);
              pbVar35 = pbVar32;
              if ((uVar14 & 0xff000000) == 0) {
                pbVar35 = pbVar32 + 1;
                uVar14 = uVar14 << 8;
                uVar23 = (uint)*pbVar32 | uVar23 << 8;
              }
              uVar26 = (uVar14 >> 0xb) * (uint)uVar7;
              bVar11 = uVar23 < uVar26;
              uVar17 = uVar14 - uVar26;
              uVar14 = uVar26;
              if (!bVar11) {
                uVar23 = uVar23 - uVar26;
                uVar14 = uVar17;
                puVar29 = (ushort *)((long)puVar29 + uVar31);
              }
              uVar26 = (uint)uVar7;
              if (bVar11) {
                uVar26 = uVar7 - 0x7e1;
              }
              uVar17 = (int)uVar31 * 2;
              uVar31 = (ulong)uVar17;
              *puVar28 = uVar7 - (short)((int)uVar26 >> 5);
              uVar21 = uVar21 - 1;
              puVar28 = puVar29;
              pbVar32 = pbVar35;
            } while (uVar21 != 0);
            uVar17 = (int)puVar29 - (uVar17 + (int)lVar41) >> 1;
          }
        }
        else {
          iVar30 = uVar26 - 0x25;
          uVar17 = uVar17 | 2;
          uVar7 = *(ushort *)(lVar41 + 0xd02);
          pbVar32 = pbVar35;
          uVar21 = uVar14;
          if ((uVar14 & 0xff000000) == 0) {
LAB_0012d5f8:
            do {
              pbVar35 = pbVar32 + 1;
              uVar23 = (uint)*pbVar32 | uVar23 << 8;
              uVar26 = uVar23 + (uVar21 & 0xffffff) * -0x80;
              uVar17 = uVar17 * 2;
              if (-1 < (int)uVar26) {
                uVar17 = uVar17 + 1;
                uVar23 = uVar26;
              }
              uVar13 = (uVar21 & 0xffffff) * 0x80;
              if (iVar30 == 1) break;
              uVar26 = uVar23 + (uVar21 & 0xffffff) * -0x40;
              uVar17 = uVar17 * 2;
              if (-1 < (int)uVar26) {
                uVar17 = uVar17 + 1;
                uVar23 = uVar26;
              }
              uVar13 = (uVar21 & 0xffffff) * 0x40;
              if (iVar30 == 2) break;
              uVar26 = uVar23 + (uVar21 & 0xffffff) * -0x20;
              uVar17 = uVar17 * 2;
              if (-1 < (int)uVar26) {
                uVar17 = uVar17 + 1;
                uVar23 = uVar26;
              }
              uVar13 = (uVar21 & 0xffffff) * 0x20;
              if (iVar30 == 3) break;
              uVar26 = uVar23 + (uVar21 & 0xffffff) * -0x10;
              uVar17 = uVar17 * 2;
              if (-1 < (int)uVar26) {
                uVar17 = uVar17 + 1;
                uVar23 = uVar26;
              }
              uVar13 = (uVar21 & 0xffffff) * 0x10;
              if (iVar30 == 4) break;
              uVar26 = uVar23 + (uVar21 & 0xffffff) * -8;
              uVar17 = uVar17 * 2;
              if (-1 < (int)uVar26) {
                uVar17 = uVar17 + 1;
                uVar23 = uVar26;
              }
              uVar13 = (uVar21 & 0xffffff) * 8;
              if (iVar30 == 5) break;
              uVar26 = uVar23 + (uVar21 & 0xffffff) * -4;
              uVar17 = uVar17 * 2;
              if (-1 < (int)uVar26) {
                uVar17 = uVar17 + 1;
                uVar23 = uVar26;
              }
              uVar13 = (uVar21 & 0xffffff) * 4;
              if (iVar30 == 6) break;
              uVar26 = uVar23 + (uVar21 & 0xffffff) * -2;
              uVar17 = uVar17 * 2;
              if (-1 < (int)uVar26) {
                uVar17 = uVar17 + 1;
                uVar23 = uVar26;
              }
              uVar13 = (uVar21 & 0xffffff) * 2;
              if (iVar30 == 7) break;
              uVar21 = uVar21 & 0xffffff;
              uVar17 = uVar17 * 2;
              if (-1 < (int)(uVar23 - uVar21)) {
                uVar17 = uVar17 + 1;
                uVar23 = uVar23 - uVar21;
              }
              iVar30 = iVar30 + -8;
              pbVar32 = pbVar35;
              uVar13 = uVar21;
            } while (iVar30 != 0);
          }
          else {
            uVar21 = uVar14 >> 1;
            uVar17 = uVar17 * 2;
            if (-1 < (int)(uVar23 - uVar21)) {
              uVar17 = uVar17 + 1;
              uVar23 = uVar23 - uVar21;
            }
            iVar30 = uVar26 - 0x26;
            uVar13 = uVar21;
            if (iVar30 != 0) {
              if ((uVar21 & 0xff000000) != 0) {
                uVar21 = uVar14 >> 2;
                uVar17 = uVar17 * 2;
                if (-1 < (int)(uVar23 - uVar21)) {
                  uVar17 = uVar17 + 1;
                  uVar23 = uVar23 - uVar21;
                }
                iVar30 = uVar26 - 0x27;
                uVar13 = uVar21;
                if (iVar30 == 0) goto LAB_0012d700;
                if ((uVar21 & 0xff000000) != 0) {
                  uVar21 = uVar14 >> 3;
                  uVar17 = uVar17 * 2;
                  if (-1 < (int)(uVar23 - uVar21)) {
                    uVar17 = uVar17 + 1;
                    uVar23 = uVar23 - uVar21;
                  }
                  iVar30 = uVar26 - 0x28;
                  uVar13 = uVar21;
                  if (iVar30 == 0) goto LAB_0012d700;
                  if ((uVar21 & 0xff000000) != 0) {
                    uVar21 = uVar14 >> 4;
                    uVar17 = uVar17 * 2;
                    if (-1 < (int)(uVar23 - uVar21)) {
                      uVar17 = uVar17 + 1;
                      uVar23 = uVar23 - uVar21;
                    }
                    iVar30 = uVar26 - 0x29;
                    uVar13 = uVar21;
                    if (iVar30 == 0) goto LAB_0012d700;
                    if ((uVar21 & 0xff000000) != 0) {
                      uVar21 = uVar14 >> 5;
                      uVar17 = uVar17 * 2;
                      if (-1 < (int)(uVar23 - uVar21)) {
                        uVar17 = uVar17 + 1;
                        uVar23 = uVar23 - uVar21;
                      }
                      iVar30 = uVar26 - 0x2a;
                      uVar13 = uVar21;
                      if (iVar30 == 0) goto LAB_0012d700;
                      if ((uVar21 & 0xff000000) != 0) {
                        uVar21 = uVar14 >> 6;
                        uVar17 = uVar17 * 2;
                        if (-1 < (int)(uVar23 - uVar21)) {
                          uVar17 = uVar17 + 1;
                          uVar23 = uVar23 - uVar21;
                        }
                        iVar30 = uVar26 - 0x2b;
                        uVar13 = uVar21;
                        if (iVar30 == 0) goto LAB_0012d700;
                        if ((uVar21 & 0xff000000) != 0) {
                          uVar21 = uVar14 >> 7;
                          uVar17 = uVar17 * 2;
                          if (-1 < (int)(uVar23 - uVar21)) {
                            uVar17 = uVar17 + 1;
                            uVar23 = uVar23 - uVar21;
                          }
                          iVar30 = uVar26 - 0x2c;
                          uVar13 = uVar21;
                          if (iVar30 == 0) goto LAB_0012d700;
                          if ((uVar21 & 0xff000000) != 0) {
                            uVar21 = uVar14 >> 8;
                            uVar17 = uVar17 * 2;
                            if (-1 < (int)(uVar23 - uVar21)) {
                              uVar17 = uVar17 + 1;
                              uVar23 = uVar23 - uVar21;
                            }
                            iVar30 = uVar26 - 0x2d;
                            uVar13 = uVar21;
                            if (iVar30 == 0) goto LAB_0012d700;
                          }
                        }
                      }
                    }
                  }
                }
              }
              goto LAB_0012d5f8;
            }
          }
LAB_0012d700:
          pbVar32 = pbVar35;
          if ((uVar13 & 0xff000000) == 0) {
            pbVar32 = pbVar35 + 1;
            uVar13 = uVar13 << 8;
            uVar23 = (uint)*pbVar35 | uVar23 << 8;
          }
          uVar26 = (uVar13 >> 0xb) * (uint)uVar7;
          bVar11 = uVar26 <= uVar23;
          uVar21 = uVar26;
          if (bVar11) {
            uVar21 = uVar13 - uVar26;
          }
          uVar26 = uVar23 - uVar26;
          if (!bVar11) {
            uVar26 = uVar23;
          }
          puVar28 = (ushort *)(lVar41 + 0xd06);
          uVar23 = (uint)uVar7;
          if (!bVar11) {
            puVar28 = (ushort *)(lVar41 + 0xd04);
            uVar23 = uVar7 - 0x7e1;
          }
          *(ushort *)(lVar41 + 0xd02) = uVar7 - (short)((int)uVar23 >> 5);
          uVar7 = *(ushort *)(lVar41 + 0xd04);
          if (bVar11) {
            uVar7 = *(ushort *)(lVar41 + 0xd06);
          }
          uVar23 = (uint)uVar7;
          pbVar35 = pbVar32;
          if ((uVar21 & 0xff000000) == 0) {
            pbVar35 = pbVar32 + 1;
            uVar21 = uVar21 << 8;
            uVar26 = (uint)*pbVar32 | uVar26 << 8;
          }
          uVar14 = (uVar21 >> 0xb) * uVar23;
          bVar11 = uVar14 <= uVar26;
          uVar13 = uVar14;
          if (bVar11) {
            uVar13 = uVar21 - uVar14;
          }
          puVar29 = puVar28 + 4;
          uVar21 = uVar26 - uVar14;
          if (!bVar11) {
            puVar29 = puVar28 + 2;
            uVar23 = uVar23 - 0x7e1;
            uVar21 = uVar26;
          }
          uVar6 = puVar28[2];
          if (bVar11) {
            uVar6 = puVar28[4];
          }
          uVar26 = (uint)uVar6;
          *puVar28 = uVar7 - (short)((int)uVar23 >> 5);
          pbVar32 = pbVar35;
          if ((uVar13 & 0xff000000) == 0) {
            pbVar32 = pbVar35 + 1;
            uVar13 = uVar13 << 8;
            uVar21 = (uint)*pbVar35 | uVar21 << 8;
          }
          uVar23 = (uVar13 >> 0xb) * uVar26;
          bVar11 = uVar23 <= uVar21;
          uVar14 = uVar23;
          if (bVar11) {
            uVar14 = uVar13 - uVar23;
          }
          puVar28 = puVar29 + 8;
          uVar13 = uVar21 - uVar23;
          if (!bVar11) {
            puVar28 = puVar29 + 4;
            uVar26 = uVar26 - 0x7e1;
            uVar13 = uVar21;
          }
          uVar7 = puVar29[4];
          if (bVar11) {
            uVar7 = puVar29[8];
          }
          uVar21 = (uint)uVar7;
          *puVar29 = uVar6 - (short)((int)uVar26 >> 5);
          pbVar35 = pbVar32;
          if ((uVar14 & 0xff000000) == 0) {
            pbVar35 = pbVar32 + 1;
            uVar14 = uVar14 << 8;
            uVar13 = (uint)*pbVar32 | uVar13 << 8;
          }
          uVar17 = uVar17 << 4 | (uint)((int)puVar28 - ((int)lVar41 + 0xd00)) >> 1;
          uVar26 = (uVar14 >> 0xb) * uVar21;
          uVar23 = uVar13 - uVar26;
          uVar14 = uVar14 - uVar26;
          if (uVar13 < uVar26) {
            uVar21 = uVar21 - 0x7e1;
            uVar23 = uVar13;
            uVar17 = uVar17 - 8;
            uVar14 = uVar26;
          }
          *puVar28 = uVar7 - (short)((int)uVar21 >> 5);
        }
        uVar26 = uVar42;
        if (uVar4 != 0) {
          uVar26 = uVar4;
        }
        uVar21 = (uint)uVar37;
        if (uVar26 <= uVar17) {
          iVar30 = uVar17 + 1;
          if (iVar30 != 0) {
            uVar12 = uVar12 + 0x200;
            uVar27 = 0x14;
            if (uVar16 < 0x2e) {
              uVar27 = 0xe;
            }
            uVar31 = (ulong)uVar27;
            uVar22 = 1;
            goto LAB_0012dfcc;
          }
          uVar12 = 0x112;
          uVar31 = (ulong)(uVar16 ^ 0x20);
LAB_0012dfc8:
          iVar30 = (int)uVar37;
          uVar22 = 0;
          uVar21 = uVar38;
          uVar38 = uVar39;
          uVar39 = uVar40;
LAB_0012dfcc:
          pbVar36 = pbVar35;
          if ((uVar14 & 0xff000000) == 0) {
            pbVar36 = pbVar35 + 1;
            uVar14 = uVar14 << 8;
            uVar23 = (uint)*pbVar35 | uVar23 << 8;
          }
          *(long *)(param_1 + 0x28) = (long)pbVar34 - (long)pbVar2;
          *(byte **)(param_1 + 0x30) = pbVar36;
          *(uint *)(param_1 + 0x38) = uVar14;
          *(uint *)(param_1 + 0x3c) = uVar23;
          *(uint *)(param_1 + 0x40) = uVar42;
          *(int *)(param_1 + 0x48) = iVar30;
          *(uint *)(param_1 + 0x4c) = uVar21;
          *(uint *)(param_1 + 0x50) = uVar38;
          *(uint *)(param_1 + 0x54) = uVar39;
          *(int *)(param_1 + 0x58) = (int)(uVar31 >> 1);
          *(uint *)(param_1 + 0x5c) = uVar12;
          return uVar22;
        }
        uVar37 = (ulong)(uVar17 + 1);
        uVar26 = 0x14;
        if (uVar16 < 0x2e) {
          uVar26 = 0xe;
        }
        uVar31 = (ulong)uVar26;
        uVar26 = uVar38;
        uVar40 = uVar39;
      }
      uVar39 = uVar26;
      uVar38 = uVar21;
      uVar15 = (long)pbVar36 - (long)pbVar34;
      if (uVar15 == 0) goto LAB_0012dfc8;
      uVar21 = uVar12;
      if (uVar15 < uVar12) {
        uVar21 = (uint)uVar15;
      }
      uVar18 = (ulong)uVar21;
      uVar42 = uVar42 + uVar21;
      uVar12 = uVar12 - uVar21;
      uVar15 = ((long)pbVar34 - (long)pbVar2) - uVar37;
      if (((ulong)((long)pbVar34 - (long)pbVar2) < uVar37) &&
         (bVar11 = CARRY8(uVar15,uVar18), lVar25 = uVar15 + uVar18, uVar15 = uVar15 + uVar3,
         bVar11 && lVar25 != 0)) {
        lVar19 = -uVar18;
        do {
          pbVar32 = pbVar2 + uVar15;
          uVar15 = uVar15 + 1;
          pbVar34[lVar19 + uVar18] = *pbVar32;
          lVar19 = lVar19 + 1;
        } while (uVar15 != uVar3);
        bVar5 = *pbVar2;
        pbVar33 = pbVar2 + -lVar19;
      }
      else {
        bVar5 = pbVar2[uVar15];
        pbVar33 = pbVar2 + uVar15 + uVar18;
        lVar19 = -uVar18;
      }
      uVar21 = (uint)bVar5;
      pbVar32 = pbVar34 + (uVar18 - 1);
      uVar15 = (ulong)(uVar8 & uVar42 * 0x20);
      lVar25 = lVar1 + uVar31;
      lVar20 = lVar19 + 1;
      if (lVar20 != 0) {
        if ((int)uVar37 == 1) {
          pbVar32[lVar20] = bVar5;
          if (lVar19 + 2 != 0) {
            pbVar32[lVar19 + 2] = bVar5;
            if (lVar19 + 3 != 0) {
              pbVar32[lVar19 + 3] = bVar5;
              if (lVar19 + 4U != 0) {
                uVar18 = lVar19 + 4U & 0xfffffffffffffffc;
                do {
                  *(uint *)(pbVar32 + uVar18) =
                       CONCAT22(CONCAT11(bVar5,bVar5),CONCAT11(bVar5,bVar5));
                  uVar18 = uVar18 + 4;
                } while (uVar18 != 0);
              }
            }
          }
        }
        else {
          do {
            pbVar32[lVar20] = (byte)uVar21;
            uVar21 = (uint)pbVar33[lVar20];
            lVar19 = lVar20 + 1;
            if (lVar19 == 0) break;
            pbVar32[lVar19] = pbVar33[lVar20];
            uVar21 = (uint)pbVar33[lVar19];
            lVar20 = lVar20 + 2;
          } while (lVar20 != 0);
        }
      }
    }
    else {
      uVar23 = uVar23 - uVar21;
      uVar14 = uVar14 - uVar21;
      *(ushort *)(lVar25 + 0x220) = uVar7 - (uVar7 >> 5);
      uVar17 = 0x16;
      if (uVar26 < 0xe) {
        uVar17 = 0x10;
      }
      uVar31 = (ulong)uVar17;
      puVar28 = (ushort *)(lVar41 + 0x300);
      uVar7 = *(ushort *)(lVar25 + 0x238);
      pbVar32 = pbVar35;
      if ((uVar14 & 0xff000000) == 0) {
        pbVar32 = pbVar35 + 1;
        uVar14 = uVar14 * 0x100;
        uVar23 = (uint)*pbVar35 | uVar23 * 0x100;
      }
      uVar21 = (uVar14 >> 0xb) * (uint)uVar7;
      if (uVar21 <= uVar23) {
        uVar23 = uVar23 - uVar21;
        uVar14 = uVar14 - uVar21;
        *(ushort *)(lVar25 + 0x238) = uVar7 - (uVar7 >> 5);
        uVar7 = *(ushort *)(lVar25 + 0x250);
        pbVar33 = pbVar32;
        if ((uVar14 & 0xff000000) == 0) {
          pbVar33 = pbVar32 + 1;
          uVar14 = uVar14 * 0x100;
          uVar23 = (uint)*pbVar32 | uVar23 * 0x100;
        }
        uVar21 = (uVar14 >> 0xb) * (uint)uVar7;
        uVar16 = (uint)uVar37;
        pbVar35 = pbVar33;
        if (uVar23 < uVar21) {
          *(ushort *)(lVar25 + 0x250) = uVar7 - (short)((int)(uVar7 - 0x7e1) >> 5);
          uVar37 = (ulong)uVar38;
          uVar38 = uVar39;
        }
        else {
          uVar23 = uVar23 - uVar21;
          uVar14 = uVar14 - uVar21;
          *(ushort *)(lVar25 + 0x250) = uVar7 - (uVar7 >> 5);
          uVar7 = *(ushort *)(lVar25 + 0x268);
          if ((uVar14 & 0xff000000) == 0) {
            pbVar35 = pbVar33 + 1;
            uVar14 = uVar14 * 0x100;
            uVar23 = (uint)*pbVar33 | uVar23 * 0x100;
          }
          uVar21 = (uVar14 >> 0xb) * (uint)uVar7;
          if (uVar23 < uVar21) {
            *(ushort *)(lVar25 + 0x268) = uVar7 - (short)((int)(uVar7 - 0x7e1) >> 5);
            uVar37 = (ulong)uVar39;
          }
          else {
            uVar23 = uVar23 - uVar21;
            uVar21 = uVar14 - uVar21;
            *(ushort *)(lVar25 + 0x268) = uVar7 - (uVar7 >> 5);
            uVar37 = (ulong)uVar40;
            uVar40 = uVar39;
          }
        }
        goto LAB_0012d0c4;
      }
      *(ushort *)(lVar25 + 0x238) = uVar7 - (short)((int)(uVar7 - 0x7e1) >> 5);
      lVar25 = lVar25 + -0xa00;
      uVar7 = *(ushort *)(lVar25 + uVar15);
      pbVar35 = pbVar32;
      if ((uVar21 & 0xff000000) == 0) {
        pbVar35 = pbVar32 + 1;
        uVar21 = uVar21 * 0x100;
        uVar23 = (uint)*pbVar32 | uVar23 << 8;
      }
      uVar14 = (uVar21 >> 0xb) * (uint)uVar7;
      if (uVar14 <= uVar23) {
        uVar23 = uVar23 - uVar14;
        uVar21 = uVar21 - uVar14;
        *(ushort *)(lVar25 + uVar15) = uVar7 - (uVar7 >> 5);
        uVar38 = uVar39;
        goto LAB_0012d0c4;
      }
      *(ushort *)(lVar25 + uVar15) = uVar7 - (short)((int)(uVar7 - 0x7e1) >> 5);
      uVar31 = (ulong)(uVar17 | 2);
      uVar42 = uVar42 + 1;
      uVar15 = (ulong)(uVar8 & uVar42 * 0x20);
      lVar25 = lVar1 + uVar31;
      lVar19 = ((long)pbVar34 - (long)pbVar2) - uVar37;
      if ((ulong)((long)pbVar34 - (long)pbVar2) < uVar37) {
        lVar19 = lVar19 + uVar3;
      }
      uVar21 = (uint)pbVar2[lVar19];
      pbVar32 = pbVar34;
    }
    pbVar34 = pbVar32 + 1;
    *pbVar32 = (byte)uVar21;
    if ((param_3 <= pbVar35) || (pbVar32 = pbVar34, pbVar36 <= pbVar34)) goto LAB_0012dfc8;
  } while( true );
}

