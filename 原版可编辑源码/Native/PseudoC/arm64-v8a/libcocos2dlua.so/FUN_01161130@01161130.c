
void FUN_01161130(ulong *param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  ulong *puVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  
  lVar13 = 0;
  lVar15 = param_2 + 0x4ab;
  lVar17 = param_2 + 0x4b6;
  lVar18 = param_2 + 0x4c1;
  puVar20 = &DAT_01499c00;
  puVar22 = &DAT_0149a020;
  do {
    lVar10 = 0;
    lVar16 = lVar15;
    lVar11 = lVar17;
    lVar19 = lVar18;
    puVar21 = puVar20;
    puVar23 = puVar22;
    do {
      lVar14 = 0;
      do {
        uVar8 = param_1[1];
        uVar9 = *(uint *)((long)param_1 + 0xc);
        bVar2 = puVar21[lVar14];
        if ((int)uVar9 < 0) {
          puVar7 = (ulong *)param_1[2];
          if (puVar7 < (ulong *)param_1[4]) {
            uVar12 = *puVar7;
            uVar9 = uVar9 + 0x38;
            *(uint *)((long)param_1 + 0xc) = uVar9;
            param_1[2] = (long)puVar7 + 7;
            uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
            uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
            *param_1 = (uVar12 >> 0x20 | uVar12 << 0x20) >> 8 | *param_1 << 0x38;
          }
          else {
            FUN_0115f010(param_1);
            uVar9 = *(uint *)((long)param_1 + 0xc);
          }
        }
        uVar6 = (int)uVar8 * (uint)bVar2 >> 8;
        bVar3 = (uint)(*param_1 >> ((ulong)uVar9 & 0x3f)) <= uVar6;
        if (!bVar3) {
          uVar1 = uVar6 + 1;
          uVar6 = (int)uVar8 - uVar1;
          *param_1 = *param_1 - ((ulong)uVar1 << ((ulong)uVar9 & 0x3f));
        }
        if (uVar6 < 0x7f) {
          uVar8 = (ulong)uVar6;
          uVar6 = (uint)(byte)(&DAT_014998c0)[uVar6];
          *(uint *)((long)param_1 + 0xc) = uVar9 - (byte)(&DAT_01499840)[uVar8];
        }
        *(uint *)(param_1 + 1) = uVar6;
        if (bVar3) {
          uVar4 = puVar23[lVar14];
        }
        else {
          uVar4 = FUN_0115f078(param_1,8);
        }
        *(undefined1 *)(lVar16 + lVar14) = uVar4;
        lVar14 = lVar14 + 1;
      } while (lVar14 != 0xb);
      lVar14 = 0;
      do {
        uVar8 = param_1[1];
        uVar9 = *(uint *)((long)param_1 + 0xc);
        bVar2 = puVar21[lVar14 + 0xb];
        if ((int)uVar9 < 0) {
          puVar7 = (ulong *)param_1[2];
          if (puVar7 < (ulong *)param_1[4]) {
            uVar12 = *puVar7;
            uVar9 = uVar9 + 0x38;
            *(uint *)((long)param_1 + 0xc) = uVar9;
            param_1[2] = (long)puVar7 + 7;
            uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
            uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
            *param_1 = (uVar12 >> 0x20 | uVar12 << 0x20) >> 8 | *param_1 << 0x38;
          }
          else {
            FUN_0115f010(param_1);
            uVar9 = *(uint *)((long)param_1 + 0xc);
          }
        }
        uVar6 = (int)uVar8 * (uint)bVar2 >> 8;
        bVar3 = (uint)(*param_1 >> ((ulong)uVar9 & 0x3f)) <= uVar6;
        if (!bVar3) {
          uVar1 = uVar6 + 1;
          uVar6 = (int)uVar8 - uVar1;
          *param_1 = *param_1 - ((ulong)uVar1 << ((ulong)uVar9 & 0x3f));
        }
        if (uVar6 < 0x7f) {
          uVar8 = (ulong)uVar6;
          uVar6 = (uint)(byte)(&DAT_014998c0)[uVar6];
          *(uint *)((long)param_1 + 0xc) = uVar9 - (byte)(&DAT_01499840)[uVar8];
        }
        *(uint *)(param_1 + 1) = uVar6;
        if (bVar3) {
          uVar4 = puVar23[lVar14 + 0xb];
        }
        else {
          uVar4 = FUN_0115f078(param_1,8);
        }
        *(undefined1 *)(lVar11 + lVar14) = uVar4;
        lVar14 = lVar14 + 1;
      } while (lVar14 != 0xb);
      lVar14 = 0;
      do {
        uVar8 = param_1[1];
        uVar9 = *(uint *)((long)param_1 + 0xc);
        bVar2 = puVar21[lVar14 + 0x16];
        if ((int)uVar9 < 0) {
          puVar7 = (ulong *)param_1[2];
          if (puVar7 < (ulong *)param_1[4]) {
            uVar12 = *puVar7;
            uVar9 = uVar9 + 0x38;
            *(uint *)((long)param_1 + 0xc) = uVar9;
            param_1[2] = (long)puVar7 + 7;
            uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
            uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
            *param_1 = (uVar12 >> 0x20 | uVar12 << 0x20) >> 8 | *param_1 << 0x38;
          }
          else {
            FUN_0115f010(param_1);
            uVar9 = *(uint *)((long)param_1 + 0xc);
          }
        }
        uVar6 = (int)uVar8 * (uint)bVar2 >> 8;
        bVar3 = (uint)(*param_1 >> ((ulong)uVar9 & 0x3f)) <= uVar6;
        if (!bVar3) {
          uVar1 = uVar6 + 1;
          uVar6 = (int)uVar8 - uVar1;
          *param_1 = *param_1 - ((ulong)uVar1 << ((ulong)uVar9 & 0x3f));
        }
        if (uVar6 < 0x7f) {
          uVar8 = (ulong)uVar6;
          uVar6 = (uint)(byte)(&DAT_014998c0)[uVar6];
          *(uint *)((long)param_1 + 0xc) = uVar9 - (byte)(&DAT_01499840)[uVar8];
        }
        *(uint *)(param_1 + 1) = uVar6;
        if (bVar3) {
          uVar4 = puVar23[lVar14 + 0x16];
        }
        else {
          uVar4 = FUN_0115f078(param_1,8);
        }
        *(undefined1 *)(lVar19 + lVar14) = uVar4;
        lVar14 = lVar14 + 1;
      } while (lVar14 != 0xb);
      puVar21 = puVar21 + 0x21;
      puVar23 = puVar23 + 0x21;
      lVar16 = lVar16 + 0x21;
      lVar10 = lVar10 + 1;
      lVar11 = lVar11 + 0x21;
      lVar19 = lVar19 + 0x21;
    } while (lVar10 != 8);
    lVar11 = param_2 + 0x4a8 + lVar13 * 0x108;
    lVar10 = param_2 + 0x4a8 + lVar13 * 0x88;
    *(long *)(lVar10 + 0x430) = lVar11 + 0x24;
    *(long *)(lVar10 + 0x440) = lVar11 + 0x66;
    *(long *)(lVar10 + 0x438) = lVar11 + 0x45;
    lVar16 = lVar11 + 0xc9;
    *(long *)(lVar10 + 0x450) = lVar11 + 0x87;
    *(long *)(lVar10 + 0x428) = lVar11 + 3;
    *(long *)(lVar10 + 0x448) = lVar16;
    *(long *)(lVar10 + 0x458) = lVar11 + 0xa8;
    *(long *)(lVar10 + 0x460) = lVar16;
    *(long *)(lVar10 + 0x468) = lVar16;
    *(long *)(lVar10 + 0x470) = lVar16;
    *(long *)(lVar10 + 0x478) = lVar16;
    *(long *)(lVar10 + 0x480) = lVar16;
    *(long *)(lVar10 + 0x488) = lVar16;
    *(long *)(lVar10 + 0x490) = lVar16;
    *(long *)(lVar10 + 0x498) = lVar16;
    *(long *)(lVar10 + 0x4a0) = lVar11 + 0xea;
    *(long *)(lVar10 + 0x4a8) = lVar11 + 3;
    lVar13 = lVar13 + 1;
    puVar20 = puVar20 + 0x108;
    puVar22 = puVar22 + 0x108;
    lVar15 = lVar15 + 0x108;
    lVar17 = lVar17 + 0x108;
    lVar18 = lVar18 + 0x108;
  } while (lVar13 != 4);
  iVar5 = FUN_0115f078(param_1,1);
  *(int *)(param_2 + 0xaf0) = iVar5;
  if (iVar5 != 0) {
    uVar4 = FUN_0115f078(param_1,8);
    *(undefined1 *)(param_2 + 0xaf4) = uVar4;
  }
  return;
}

