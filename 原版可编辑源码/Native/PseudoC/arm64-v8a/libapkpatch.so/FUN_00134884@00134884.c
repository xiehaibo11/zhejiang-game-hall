
void FUN_00134884(long *param_1,int param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  long lVar8;
  uint uVar9;
  byte bVar10;
  ushort uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  byte *pbVar17;
  byte *pbVar18;
  long lVar19;
  uint uVar20;
  ulong uVar21;
  undefined4 uVar22;
  char *pcVar23;
  uint uVar24;
  ulong uVar25;
  uint uVar26;
  ulong uVar27;
  uint uVar28;
  undefined1 *puVar29;
  long lVar30;
  undefined1 *puVar31;
  uint uVar32;
  long lVar33;
  
  lVar14 = param_1[7];
  lVar13 = param_1[4];
  puVar15 = (undefined1 *)param_1[3];
  uVar3 = *(uint *)(lVar14 + 0x78);
  uVar5 = *(uint *)(lVar14 + 0x7c);
  pbVar17 = (byte *)*param_1;
  iVar4 = *(int *)(lVar14 + 0x3c);
  uVar6 = *(uint *)(lVar14 + 0x40);
  uVar9 = *(uint *)(lVar14 + 0x44);
  puVar7 = *(undefined1 **)(lVar14 + 0x48);
  uVar21 = *(ulong *)(lVar14 + 0x50);
  uVar25 = (ulong)*(uint *)(lVar14 + 0x58);
  lVar19 = *(long *)(lVar14 + 0x68);
  lVar8 = *(long *)(lVar14 + 0x70);
  pbVar1 = pbVar17 + ((int)param_1[1] - 5);
  puVar16 = puVar15;
LAB_00134908:
  uVar24 = (uint)uVar25;
  if (uVar24 < 0xf) {
    bVar10 = *pbVar17;
    pbVar18 = pbVar17 + 1;
    pbVar17 = pbVar17 + 2;
    uVar21 = ((ulong)bVar10 << (uVar25 & 0x3f)) + uVar21 +
             ((ulong)*pbVar18 << ((ulong)(uVar24 + 8) & 0x3f));
    uVar25 = (ulong)(uVar24 + 0x10);
  }
  uVar27 = uVar21 & (uint)~(-1 << (ulong)(uVar3 & 0x1f));
  while( true ) {
    pbVar18 = (byte *)(lVar19 + uVar27 * 4);
    bVar10 = *pbVar18;
    uVar11 = *(ushort *)(pbVar18 + 2);
    uVar21 = uVar21 >> ((ulong)pbVar18[1] & 0x3f);
    uVar24 = (int)uVar25 - (uint)pbVar18[1];
    uVar25 = (ulong)uVar24;
    uVar28 = (uint)bVar10;
    if (uVar28 == 0) break;
    pbVar18 = pbVar17;
    if ((bVar10 >> 4 & 1) != 0) {
      uVar28 = uVar28 & 0xf;
      uVar26 = (uint)uVar11;
      if ((bVar10 & 0xf) != 0) {
        if (uVar24 < uVar28) {
          pbVar18 = pbVar17 + 1;
          uVar21 = ((ulong)*pbVar17 << (uVar25 & 0x3f)) + uVar21;
          uVar24 = uVar24 + 8;
        }
        uVar20 = (uint)uVar21;
        uVar21 = uVar21 >> uVar28;
        uVar26 = (uVar20 & (-1 << (ulong)uVar28 ^ 0xffffffffU)) + uVar26;
        uVar25 = (ulong)(uVar24 - uVar28);
      }
      uVar24 = (uint)uVar25;
      if (uVar24 < 0xf) {
        bVar10 = *pbVar18;
        pbVar17 = pbVar18 + 1;
        pbVar18 = pbVar18 + 2;
        uVar21 = ((ulong)bVar10 << (uVar25 & 0x3f)) + uVar21 +
                 ((ulong)*pbVar17 << ((ulong)(uVar24 + 8) & 0x3f));
        uVar25 = (ulong)(uVar24 + 0x10);
      }
      uVar27 = uVar21 & (uint)~(-1 << (ulong)(uVar5 & 0x1f));
      goto LAB_001349f4;
    }
    if ((bVar10 >> 6 & 1) != 0) {
      if ((bVar10 >> 5 & 1) != 0) {
        uVar22 = 0x3f3f;
        goto LAB_00134c98;
      }
      pcVar23 = "invalid literal/length code";
      goto LAB_00134c90;
    }
    uVar27 = (uVar21 & (uint)~(-1 << (ulong)(uVar28 & 0x1f))) + (ulong)uVar11;
  }
  puVar29 = puVar16 + 1;
  *puVar16 = (char)uVar11;
  goto LAB_00134978;
LAB_001349f4:
  pbVar2 = (byte *)(lVar8 + uVar27 * 4);
  bVar10 = *pbVar2;
  uVar21 = uVar21 >> ((ulong)pbVar2[1] & 0x3f);
  uVar24 = (int)uVar25 - (uint)pbVar2[1];
  uVar25 = (ulong)uVar24;
  if ((bVar10 >> 4 & 1) != 0) goto LAB_00134a28;
  pcVar23 = "invalid distance code";
  if ((bVar10 >> 6 & 1) != 0) goto LAB_00134c90;
  uVar27 = (uVar21 & (uint)~(-1 << (ulong)(bVar10 & 0x1f))) + (ulong)*(ushort *)(pbVar2 + 2);
  goto LAB_001349f4;
LAB_00134a28:
  uVar20 = bVar10 & 0xf;
  pbVar17 = pbVar18;
  uVar28 = uVar24;
  if (uVar24 < uVar20) {
    pbVar17 = pbVar18 + 1;
    uVar28 = uVar24 + 8;
    uVar21 = ((ulong)*pbVar18 << (uVar25 & 0x3f)) + uVar21;
    if (uVar28 < uVar20) {
      uVar21 = ((ulong)pbVar18[1] << ((ulong)uVar28 & 0x3f)) + uVar21;
      pbVar17 = pbVar18 + 2;
      uVar28 = uVar24 + 0x10;
    }
  }
  uVar24 = ((uint)uVar21 & (-1 << uVar20 ^ 0xffffffffU)) + (uint)*(ushort *)(pbVar2 + 2);
  uVar12 = (int)puVar16 - ((int)puVar15 - (param_2 - (int)lVar13));
  uVar21 = uVar21 >> uVar20;
  uVar32 = uVar24 - uVar12;
  uVar25 = (ulong)(uVar28 - uVar20);
  if (uVar24 < uVar12 || uVar32 == 0) {
    lVar33 = 0;
    uVar28 = uVar26;
    do {
      lVar30 = lVar33;
      puVar29 = puVar16 + lVar30 + (1 - (ulong)uVar24);
      puVar31 = puVar16 + lVar30;
      uVar28 = uVar28 - 3;
      *puVar31 = puVar29[-1];
      lVar33 = lVar30 + 3;
      puVar31[1] = *puVar29;
      puVar31[2] = puVar29[1];
    } while (2 < uVar28);
    puVar29 = puVar16 + lVar33;
    if (uVar26 != (uint)lVar33) {
      *puVar29 = puVar16[lVar33 + -(ulong)uVar24];
      if (uVar26 - 1 == (uint)lVar33) {
        puVar29 = puVar29 + 1;
      }
      else {
        puVar29[1] = puVar16[lVar33 + -(ulong)uVar24 + 1];
        puVar29 = puVar16 + lVar30 + 5;
      }
    }
    goto LAB_00134978;
  }
  if ((uVar6 < uVar32) &&
     (pbVar18 = pbVar17, pcVar23 = "invalid distance too far back", *(int *)(lVar14 + 0x1be8) != 0))
  {
LAB_00134c90:
    param_1[6] = (long)pcVar23;
    uVar22 = 0x3f51;
    pbVar17 = pbVar18;
LAB_00134c98:
    *(undefined4 *)(lVar14 + 8) = uVar22;
    puVar29 = puVar16;
LAB_00134c9c:
    uVar3 = (uint)uVar25 & 7;
    param_1[3] = (long)puVar29;
    lVar19 = (long)pbVar17 - (uVar25 >> 3);
    *param_1 = lVar19;
    *(int *)(param_1 + 4) = ((int)(puVar15 + ((int)lVar13 - 0x101)) - (int)puVar29) + 0x101;
    *(int *)(param_1 + 1) = ((int)pbVar1 - (int)lVar19) + 5;
    *(ulong *)(lVar14 + 0x50) = uVar21 & (uint)~(-1 << (ulong)uVar3);
    *(uint *)(lVar14 + 0x58) = uVar3;
    return;
  }
  uVar28 = uVar26;
  if (uVar9 == 0) {
    uVar20 = uVar26 - uVar32;
    puVar29 = puVar16;
    puVar31 = puVar7 + (iVar4 - uVar32);
    if (uVar32 <= uVar26 && uVar20 != 0) {
      do {
        uVar32 = uVar32 - 1;
        puVar16 = puVar29 + 1;
        *puVar29 = *puVar31;
        puVar29 = puVar16;
        puVar31 = puVar31 + 1;
      } while (uVar32 != 0);
LAB_00134bcc:
      puVar31 = puVar16 + -(ulong)uVar24;
      uVar28 = uVar20;
    }
  }
  else if (uVar9 < uVar32) {
    uVar28 = uVar26 - (uVar32 - uVar9);
    uVar27 = (ulong)((uVar9 + iVar4) - uVar32);
    puVar29 = puVar16;
    if (uVar26 < uVar32 - uVar9 || uVar28 == 0) {
      puVar31 = puVar7 + uVar27;
      uVar28 = uVar26;
    }
    else {
      do {
        puVar31 = puVar7 + uVar27;
        uVar32 = uVar32 - 1;
        uVar27 = uVar27 + 1;
        puVar16 = puVar29 + 1;
        *puVar29 = *puVar31;
        puVar29 = puVar16;
      } while (uVar9 != uVar32);
      puVar31 = puVar7;
      if (uVar9 < uVar28) {
        lVar33 = 0;
        do {
          puVar16[lVar33] = puVar7[lVar33];
          lVar33 = lVar33 + 1;
        } while (uVar9 != (uint)lVar33);
        puVar31 = puVar16 + (lVar33 - (ulong)uVar24);
        puVar16 = puVar16 + lVar33;
        uVar28 = uVar28 - uVar9;
      }
    }
  }
  else {
    uVar20 = uVar26 - uVar32;
    puVar29 = puVar16;
    puVar31 = puVar7 + (uVar9 - uVar32);
    if (uVar32 <= uVar26 && uVar20 != 0) {
      do {
        uVar32 = uVar32 - 1;
        puVar16 = puVar29 + 1;
        *puVar29 = *puVar31;
        puVar29 = puVar16;
        puVar31 = puVar31 + 1;
      } while (uVar32 != 0);
      goto LAB_00134bcc;
    }
  }
  for (; 2 < uVar28; uVar28 = uVar28 - 3) {
    *puVar16 = *puVar31;
    puVar16[1] = puVar31[1];
    puVar16[2] = puVar31[2];
    puVar16 = puVar16 + 3;
    puVar31 = puVar31 + 3;
  }
  puVar29 = puVar16;
  if (uVar28 != 0) {
    puVar29 = puVar16 + 1;
    *puVar16 = *puVar31;
    if (uVar28 != 1) {
      puVar29 = puVar16 + 2;
      puVar16[1] = puVar31[1];
    }
  }
LAB_00134978:
  if ((pbVar1 <= pbVar17) || (puVar16 = puVar29, puVar15 + ((int)lVar13 - 0x101) <= puVar29))
  goto LAB_00134c9c;
  goto LAB_00134908;
}

