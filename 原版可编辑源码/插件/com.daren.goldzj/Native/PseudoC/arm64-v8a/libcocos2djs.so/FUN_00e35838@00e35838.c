
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00e35838(long *param_1)

{
  ushort *puVar1;
  undefined1 *puVar2;
  byte *pbVar3;
  char *pcVar4;
  ushort *puVar5;
  ushort *puVar6;
  byte bVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ushort uVar12;
  undefined8 uVar13;
  long lVar14;
  uint *puVar15;
  ulong uVar16;
  uint *puVar17;
  ulong uVar18;
  ulong uVar19;
  uint *puVar20;
  uint uVar21;
  long lVar22;
  long lVar23;
  uint uVar24;
  ushort *puVar25;
  ulong uVar26;
  
  puVar25 = (ushort *)param_1[0x2b];
  puVar6 = (ushort *)param_1[0x2c];
  lVar22 = param_1[3];
  lVar23 = *(long *)(*param_1 + 0x20);
  uVar21 = 0;
  do {
    uVar26 = (ulong)uVar21;
    uVar21 = uVar21 + 1;
    uVar13 = FUN_00e141b0(lVar22,uVar21);
    if ((int)uVar13 != 0) {
      return uVar13;
    }
    if (puVar6 < puVar25 + 2) {
      return 0x15;
    }
    lVar14 = *(long *)(lVar22 + 0xa0);
    puVar20 = (uint *)(lVar14 + uVar26 * 0x30);
    puVar15 = puVar20 + 3;
    *puVar15 = 0;
    puVar17 = puVar20 + 2;
    *puVar17 = 0;
    bVar7 = *(byte *)((long)puVar25 + 1);
    uVar8 = CONCAT11((char)*puVar25,bVar7);
    *(ushort *)(puVar20 + 1) = uVar8;
    uVar12 = CONCAT11((char)puVar25[1],*(undefined1 *)((long)puVar25 + 3));
    *puVar20 = (uint)uVar12;
    if (lVar23 <= (long)(ulong)uVar12) {
      return 0x15;
    }
    uVar24 = 2;
    if ((bVar7 & 1) != 0) {
      uVar24 = 4;
    }
    if ((bVar7 & 8) == 0) {
      if ((bVar7 & 0x40) == 0) {
        uVar24 = (uVar8 & 0x80) >> 4 | uVar24;
      }
      else {
        uVar24 = uVar24 + 4;
      }
    }
    else {
      uVar24 = uVar24 + 2;
    }
    if (puVar6 < (ushort *)((long)(puVar25 + 2) + (ulong)uVar24)) {
      return 0x15;
    }
    if ((bVar7 & 2) == 0) {
      if ((bVar7 & 1) == 0) {
        *puVar17 = (uint)(byte)puVar25[2];
        pbVar3 = (byte *)((long)puVar25 + 5);
        puVar25 = puVar25 + 3;
        *puVar15 = (uint)*pbVar3;
        goto joined_r0x00e35a30;
      }
      *puVar17 = (uint)CONCAT11((char)puVar25[2],*(undefined1 *)((long)puVar25 + 5));
      puVar1 = puVar25 + 3;
      puVar2 = (undefined1 *)((long)puVar25 + 7);
      puVar25 = puVar25 + 4;
      *puVar15 = (uint)CONCAT11((char)*puVar1,*puVar2);
      if ((bVar7 & 8) == 0) goto LAB_00e359c0;
LAB_00e35940:
      uVar24 = *puVar25 & 0xff00ff;
      uVar18 = -(ulong)(uVar24 >> 7) & 0xfffffffffffc0000 |
               (ulong)((uint)(*puVar25 >> 8) | uVar24 << 8) << 2;
      lVar14 = lVar14 + uVar26 * 0x30;
      *(ulong *)(lVar14 + 0x10) = uVar18;
      *(undefined8 *)(lVar14 + 0x18) = 0;
      *(undefined8 *)(lVar14 + 0x20) = 0;
      *(ulong *)(lVar14 + 0x28) = uVar18;
      puVar25 = puVar25 + 1;
    }
    else {
      if ((bVar7 & 1) == 0) {
        *puVar17 = (int)(char)puVar25[2];
        pcVar4 = (char *)((long)puVar25 + 5);
        puVar25 = puVar25 + 3;
        *puVar15 = (int)*pcVar4;
      }
      else {
        *puVar17 = (int)(short)((ushort)(byte)puVar25[2] << 8) | (uint)*(byte *)((long)puVar25 + 5);
        puVar1 = puVar25 + 3;
        pbVar3 = (byte *)((long)puVar25 + 7);
        puVar25 = puVar25 + 4;
        *puVar15 = (int)(short)((ushort)(byte)*puVar1 << 8) | (uint)*pbVar3;
      }
joined_r0x00e35a30:
      if ((bVar7 & 8) != 0) goto LAB_00e35940;
LAB_00e359c0:
      if ((bVar7 & 0x40) == 0) {
        if ((bVar7 & 0x80) != 0) {
          uVar8 = *puVar25;
          puVar1 = puVar25 + 1;
          puVar5 = puVar25 + 2;
          uVar9 = uVar8 & 0xff00ff;
          uVar10 = *puVar1 & 0xff00ff;
          uVar11 = *puVar5 & 0xff00ff;
          uVar24 = (uint)(puVar25[3] >> 8) | (puVar25[3] & 0xff00ff) << 8;
          puVar25 = puVar25 + 4;
          uVar19 = -(ulong)(uVar9 >> 7) & 0xfffffffffffc0000 |
                   (ulong)((uint)(uVar8 >> 8) | uVar9 << 8) << 2;
          uVar18 = -(ulong)(uVar10 >> 7) & 0xfffffffffffc0000 |
                   (ulong)((uint)(*puVar1 >> 8) | uVar10 << 8) << 2;
          uVar16 = -(ulong)(uVar11 >> 7) & 0xfffffffffffc0000 |
                   (ulong)((uint)(*puVar5 >> 8) | uVar11 << 8) << 2;
          goto LAB_00e35aa4;
        }
        lVar14 = lVar14 + uVar26 * 0x30;
        *(undefined8 *)(lVar14 + 0x10) = 0x10000;
        *(undefined8 *)(lVar14 + 0x18) = 0;
        *(undefined8 *)(lVar14 + 0x20) = 0;
        *(undefined8 *)(lVar14 + 0x28) = 0x10000;
      }
      else {
        uVar8 = *puVar25;
        uVar16 = 0;
        uVar18 = 0;
        uVar9 = uVar8 & 0xff00ff;
        uVar24 = (uint)(puVar25[1] >> 8) | (puVar25[1] & 0xff00ff) << 8;
        puVar25 = puVar25 + 2;
        uVar19 = -(ulong)(uVar9 >> 7) & 0xfffffffffffc0000 |
                 (ulong)((uint)(uVar8 >> 8) | uVar9 << 8) << 2;
LAB_00e35aa4:
        lVar14 = lVar14 + uVar26 * 0x30;
        *(ulong *)(lVar14 + 0x10) = uVar19;
        *(ulong *)(lVar14 + 0x18) = uVar16;
        *(ulong *)(lVar14 + 0x20) = uVar18;
        *(ulong *)(lVar14 + 0x28) =
             -(ulong)(uVar24 >> 0xf) & 0xfffffffffffc0000 | (ulong)uVar24 << 2;
      }
    }
    if ((bVar7 >> 5 & 1) == 0) {
      *(uint *)(lVar22 + 0x98) = uVar21;
      lVar22 = FUN_00e1d4a0(param_1[6]);
      param_1[0x24] = (long)((long)puVar25 + (lVar22 - (long)puVar6));
      param_1[0x2b] = (long)puVar25;
      return 0;
    }
  } while( true );
}

