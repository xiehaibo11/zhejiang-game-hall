
/* btQuantizedBvh::deSerializeInPlace(void*, unsigned int, bool) */

void * btQuantizedBvh::deSerializeInPlace(void *param_1,uint param_2,bool param_3)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  ushort *puVar17;
  long lVar18;
  uint *puVar19;
  long lVar20;
  uint uVar21;
  long lVar22;
  
  if (param_1 == (void *)0x0) {
    return (void *)0x0;
  }
  if (param_3) {
    uVar3 = *(undefined1 *)((long)param_1 + 8);
    uVar4 = *(undefined1 *)((long)param_1 + 9);
    uVar5 = *(undefined1 *)((long)param_1 + 0xc);
    *(undefined1 *)((long)param_1 + 8) = *(undefined1 *)((long)param_1 + 0xb);
    *(undefined1 *)((long)param_1 + 0xb) = uVar3;
    *(undefined1 *)((long)param_1 + 0xc) = *(undefined1 *)((long)param_1 + 0xf);
    uVar3 = *(undefined1 *)((long)param_1 + 0xd);
    uVar6 = *(undefined1 *)((long)param_1 + 0x11);
    uVar7 = *(undefined1 *)((long)param_1 + 0x10);
    uVar8 = *(undefined1 *)((long)param_1 + 0x17);
    uVar9 = *(undefined1 *)((long)param_1 + 0x15);
    *(undefined1 *)((long)param_1 + 9) = *(undefined1 *)((long)param_1 + 10);
    uVar10 = *(undefined1 *)((long)param_1 + 0x1b);
    *(undefined1 *)((long)param_1 + 10) = uVar4;
    uVar4 = *(undefined1 *)((long)param_1 + 0x1a);
    *(undefined1 *)((long)param_1 + 0x17) = *(undefined1 *)((long)param_1 + 0x14);
    *(undefined1 *)((long)param_1 + 0x1a) = *(undefined1 *)((long)param_1 + 0x19);
    *(undefined1 *)((long)param_1 + 0x1b) = *(undefined1 *)((long)param_1 + 0x18);
    uVar11 = *(undefined1 *)((long)param_1 + 0x29);
    *(undefined1 *)((long)param_1 + 0xd) = *(undefined1 *)((long)param_1 + 0xe);
    *(undefined1 *)((long)param_1 + 0xe) = uVar3;
    *(undefined1 *)((long)param_1 + 0xf) = uVar5;
    uVar3 = *(undefined1 *)((long)param_1 + 0x1d);
    *(undefined1 *)((long)param_1 + 0x10) = *(undefined1 *)((long)param_1 + 0x13);
    uVar5 = *(undefined1 *)((long)param_1 + 0x1c);
    *(undefined1 *)((long)param_1 + 0x11) = *(undefined1 *)((long)param_1 + 0x12);
    *(undefined1 *)((long)param_1 + 0x12) = uVar6;
    *(undefined1 *)((long)param_1 + 0x13) = uVar7;
    uVar6 = *(undefined1 *)((long)param_1 + 0x21);
    *(undefined1 *)((long)param_1 + 0x14) = uVar8;
    uVar7 = *(undefined1 *)((long)param_1 + 0x20);
    *(undefined1 *)((long)param_1 + 0x15) = *(undefined1 *)((long)param_1 + 0x16);
    *(undefined1 *)((long)param_1 + 0x16) = uVar9;
    uVar8 = *(undefined1 *)((long)param_1 + 0x26);
    *(undefined1 *)((long)param_1 + 0x18) = uVar10;
    uVar9 = *(undefined1 *)((long)param_1 + 0x24);
    *(undefined1 *)((long)param_1 + 0x19) = uVar4;
    *(undefined1 *)((long)param_1 + 0x26) = *(undefined1 *)((long)param_1 + 0x25);
    *(undefined1 *)((long)param_1 + 0x29) = *(undefined1 *)((long)param_1 + 0x2a);
    *(undefined1 *)((long)param_1 + 0x2a) = uVar11;
    *(undefined1 *)((long)param_1 + 0x1c) = *(undefined1 *)((long)param_1 + 0x1f);
    uVar4 = *(undefined1 *)((long)param_1 + 0x28);
    *(undefined1 *)((long)param_1 + 0x1d) = *(undefined1 *)((long)param_1 + 0x1e);
    *(undefined1 *)((long)param_1 + 0x1e) = uVar3;
    *(undefined1 *)((long)param_1 + 0x1f) = uVar5;
    uVar3 = *(undefined1 *)((long)param_1 + 0x2d);
    *(undefined1 *)((long)param_1 + 0x20) = *(undefined1 *)((long)param_1 + 0x23);
    uVar5 = *(undefined1 *)((long)param_1 + 0x2c);
    *(undefined1 *)((long)param_1 + 0x21) = *(undefined1 *)((long)param_1 + 0x22);
    *(undefined1 *)((long)param_1 + 0x22) = uVar6;
    *(undefined1 *)((long)param_1 + 0x23) = uVar7;
    uVar6 = *(undefined1 *)((long)param_1 + 0x31);
    *(undefined1 *)((long)param_1 + 0x24) = *(undefined1 *)((long)param_1 + 0x27);
    uVar7 = *(undefined1 *)((long)param_1 + 0x30);
    *(undefined1 *)((long)param_1 + 0x25) = uVar8;
    *(undefined1 *)((long)param_1 + 0x27) = uVar9;
    uVar8 = *(undefined1 *)((long)param_1 + 0x35);
    *(undefined1 *)((long)param_1 + 0x28) = *(undefined1 *)((long)param_1 + 0x2b);
    uVar9 = *(undefined1 *)((long)param_1 + 0x34);
    uVar15 = (*(uint *)((long)param_1 + 0x3c) & 0xff00ff00) >> 8 |
             (*(uint *)((long)param_1 + 0x3c) & 0xff00ff) << 8;
    *(undefined1 *)((long)param_1 + 0x35) = *(undefined1 *)((long)param_1 + 0x36);
    uVar13 = (*(uint *)((long)param_1 + 200) & 0xff00ff00) >> 8 |
             (*(uint *)((long)param_1 + 200) & 0xff00ff) << 8;
    uVar21 = (*(uint *)((long)param_1 + 0xf0) & 0xff00ff00) >> 8 |
             (*(uint *)((long)param_1 + 0xf0) & 0xff00ff) << 8;
    uVar21 = uVar21 >> 0x10 | uVar21 << 0x10;
    *(undefined1 *)((long)param_1 + 0x2b) = uVar4;
    *(undefined1 *)((long)param_1 + 0x2c) = *(undefined1 *)((long)param_1 + 0x2f);
    *(undefined1 *)((long)param_1 + 0x2d) = *(undefined1 *)((long)param_1 + 0x2e);
    *(undefined1 *)((long)param_1 + 0x2e) = uVar3;
    *(undefined1 *)((long)param_1 + 0x2f) = uVar5;
    *(undefined1 *)((long)param_1 + 0x30) = *(undefined1 *)((long)param_1 + 0x33);
    *(undefined1 *)((long)param_1 + 0x31) = *(undefined1 *)((long)param_1 + 0x32);
    *(undefined1 *)((long)param_1 + 0x32) = uVar6;
    *(undefined1 *)((long)param_1 + 0x33) = uVar7;
    *(undefined1 *)((long)param_1 + 0x34) = *(undefined1 *)((long)param_1 + 0x37);
    *(undefined1 *)((long)param_1 + 0x36) = uVar8;
    *(undefined1 *)((long)param_1 + 0x37) = uVar9;
    *(uint *)((long)param_1 + 0x3c) = uVar15 >> 0x10 | uVar15 << 0x10;
    *(uint *)((long)param_1 + 200) = uVar13 >> 0x10 | uVar13 << 0x10;
    *(uint *)((long)param_1 + 0xf0) = uVar21;
  }
  else {
    uVar21 = *(uint *)((long)param_1 + 0xf0);
  }
  uVar13 = *(uint *)((long)param_1 + 0x3c);
  uVar16 = (ulong)uVar13;
  uVar15 = 6;
  if (*(char *)((long)param_1 + 0x40) != '\0') {
    uVar15 = 4;
  }
  if (param_2 < (uVar13 << (ulong)uVar15) + uVar21 * 0x20 + 0xf8) {
    return (void *)0x0;
  }
  *(undefined4 *)((long)param_1 + 0x38) = 0x11a;
  *(undefined1 *)((long)param_1 + 0x60) = 1;
  *(undefined1 *)((long)param_1 + 0x80) = 1;
  *(undefined1 *)((long)param_1 + 0xa0) = 1;
  *(undefined1 *)((long)param_1 + 0xc0) = 1;
  *(undefined1 *)((long)param_1 + 0xe8) = 1;
  lVar22 = (long)param_1 + 0xf8;
  *(undefined8 *)((long)param_1 + 0x58) = 0;
  *(undefined4 *)((long)param_1 + 0x4c) = 0;
  *(undefined4 *)((long)param_1 + 0x50) = 0;
  *(undefined8 *)((long)param_1 + 0x78) = 0;
  *(undefined4 *)((long)param_1 + 0x6c) = 0;
  *(undefined4 *)((long)param_1 + 0x70) = 0;
  *(undefined8 *)((long)param_1 + 0x98) = 0;
  *(undefined4 *)((long)param_1 + 0x8c) = 0;
  *(undefined4 *)((long)param_1 + 0x90) = 0;
  *(undefined8 *)((long)param_1 + 0xb8) = 0;
  *(undefined4 *)((long)param_1 + 0xac) = 0;
  *(undefined4 *)((long)param_1 + 0xb0) = 0;
  *(undefined8 *)((long)param_1 + 0xe0) = 0;
  *(undefined ***)param_1 = &PTR__btQuantizedBvh_01734088;
  *(undefined4 *)((long)param_1 + 0xd4) = 0;
  *(undefined4 *)((long)param_1 + 0xd8) = 0;
  if (*(char *)((long)param_1 + 0x40) == '\0') {
    lVar18 = 6;
    *(undefined1 *)((long)param_1 + 0x80) = 0;
    *(long *)((long)param_1 + 0x78) = lVar22;
    *(uint *)((long)param_1 + 0x6c) = uVar13;
    *(uint *)((long)param_1 + 0x70) = uVar13;
    if ((0 < (int)uVar13) && (param_3)) {
      lVar18 = 0;
      lVar20 = lVar22;
      do {
        puVar1 = (undefined1 *)(lVar20 + lVar18);
        uVar3 = puVar1[1];
        uVar4 = *puVar1;
        uVar5 = puVar1[5];
        uVar6 = puVar1[4];
        uVar7 = puVar1[9];
        uVar8 = puVar1[8];
        uVar9 = puVar1[0xd];
        uVar10 = puVar1[0xc];
        *puVar1 = puVar1[3];
        puVar1[1] = puVar1[2];
        puVar1[2] = uVar3;
        puVar1[3] = uVar4;
        puVar1[4] = puVar1[7];
        puVar1[5] = puVar1[6];
        puVar1[6] = uVar5;
        puVar1[7] = uVar6;
        puVar1[8] = puVar1[0xb];
        puVar1[9] = puVar1[10];
        puVar1[10] = uVar7;
        puVar1[0xb] = uVar8;
        puVar1[0xc] = puVar1[0xf];
        puVar1[0xd] = puVar1[0xe];
        puVar1[0xe] = uVar9;
        puVar1[0xf] = uVar10;
        uVar16 = uVar16 - 1;
        lVar20 = *(long *)((long)param_1 + 0x78) + lVar18;
        uVar3 = *(undefined1 *)(lVar20 + 0x11);
        uVar4 = *(undefined1 *)(lVar20 + 0x10);
        uVar5 = *(undefined1 *)(lVar20 + 0x15);
        uVar6 = *(undefined1 *)(lVar20 + 0x14);
        uVar7 = *(undefined1 *)(lVar20 + 0x19);
        uVar8 = *(undefined1 *)(lVar20 + 0x18);
        uVar9 = *(undefined1 *)(lVar20 + 0x1d);
        uVar10 = *(undefined1 *)(lVar20 + 0x1c);
        *(undefined1 *)(lVar20 + 0x10) = *(undefined1 *)(lVar20 + 0x13);
        *(undefined1 *)(lVar20 + 0x11) = *(undefined1 *)(lVar20 + 0x12);
        *(undefined1 *)(lVar20 + 0x12) = uVar3;
        *(undefined1 *)(lVar20 + 0x13) = uVar4;
        *(undefined1 *)(lVar20 + 0x14) = *(undefined1 *)(lVar20 + 0x17);
        *(undefined1 *)(lVar20 + 0x15) = *(undefined1 *)(lVar20 + 0x16);
        *(undefined1 *)(lVar20 + 0x16) = uVar5;
        *(undefined1 *)(lVar20 + 0x17) = uVar6;
        *(undefined1 *)(lVar20 + 0x18) = *(undefined1 *)(lVar20 + 0x1b);
        *(undefined1 *)(lVar20 + 0x19) = *(undefined1 *)(lVar20 + 0x1a);
        *(undefined1 *)(lVar20 + 0x1a) = uVar7;
        *(undefined1 *)(lVar20 + 0x1b) = uVar8;
        *(undefined1 *)(lVar20 + 0x1c) = *(undefined1 *)(lVar20 + 0x1f);
        *(undefined1 *)(lVar20 + 0x1d) = *(undefined1 *)(lVar20 + 0x1e);
        *(undefined1 *)(lVar20 + 0x1e) = uVar9;
        *(undefined1 *)(lVar20 + 0x1f) = uVar10;
        lVar20 = *(long *)((long)param_1 + 0x78);
        lVar2 = lVar20 + lVar18;
        lVar18 = lVar18 + 0x40;
        uVar21 = (*(uint *)(lVar2 + 0x20) & 0xff00ff00) >> 8 |
                 (*(uint *)(lVar2 + 0x20) & 0xff00ff) << 8;
        uVar15 = (*(uint *)(lVar2 + 0x24) & 0xff00ff00) >> 8 |
                 (*(uint *)(lVar2 + 0x24) & 0xff00ff) << 8;
        uVar14 = (*(uint *)(lVar2 + 0x28) & 0xff00ff00) >> 8 |
                 (*(uint *)(lVar2 + 0x28) & 0xff00ff) << 8;
        *(uint *)(lVar2 + 0x20) = uVar21 >> 0x10 | uVar21 << 0x10;
        *(uint *)(lVar2 + 0x24) = uVar15 >> 0x10 | uVar15 << 0x10;
        *(uint *)(lVar2 + 0x28) = uVar14 >> 0x10 | uVar14 << 0x10;
      } while (uVar16 != 0);
      uVar21 = *(uint *)((long)param_1 + 0xf0);
      lVar22 = lVar22 + (long)(int)uVar13 * 0x40;
      if (*(void **)((long)param_1 + 0xe0) != (void *)0x0) {
        if (*(char *)((long)param_1 + 0xe8) != '\0') {
          btAlignedFreeInternal(*(void **)((long)param_1 + 0xe0));
        }
        *(undefined8 *)((long)param_1 + 0xe0) = 0;
      }
      goto LAB_0123c364;
    }
  }
  else {
    lVar18 = 4;
    *(undefined1 *)((long)param_1 + 0xc0) = 0;
    *(long *)((long)param_1 + 0xb8) = lVar22;
    *(uint *)((long)param_1 + 0xac) = uVar13;
    *(uint *)((long)param_1 + 0xb0) = uVar13;
    if ((0 < (int)uVar13) && (param_3)) {
      puVar19 = (uint *)((long)param_1 + 0x104);
      lVar18 = 4;
      do {
        uVar16 = uVar16 - 1;
        uVar15 = (*puVar19 & 0xff00ff00) >> 8 | (*puVar19 & 0xff00ff) << 8;
        *puVar19 = uVar15 >> 0x10 | uVar15 << 0x10;
        *(ushort *)(puVar19 + -3) = (ushort)puVar19[-3] >> 8 | (ushort)puVar19[-3] << 8;
        *(ushort *)((long)puVar19 + -10) =
             *(ushort *)((long)puVar19 + -10) >> 8 | *(ushort *)((long)puVar19 + -10) << 8;
        *(ushort *)(puVar19 + -2) = (ushort)puVar19[-2] >> 8 | (ushort)puVar19[-2] << 8;
        *(ushort *)((long)puVar19 + -6) =
             *(ushort *)((long)puVar19 + -6) >> 8 | *(ushort *)((long)puVar19 + -6) << 8;
        *(ushort *)(puVar19 + -1) = (ushort)puVar19[-1] >> 8 | (ushort)puVar19[-1] << 8;
        *(ushort *)((long)puVar19 + -2) =
             *(ushort *)((long)puVar19 + -2) >> 8 | *(ushort *)((long)puVar19 + -2) << 8;
        puVar19 = puVar19 + 4;
      } while (uVar16 != 0);
    }
  }
  lVar22 = lVar22 + ((long)(int)uVar13 << lVar18);
LAB_0123c364:
  *(undefined1 *)((long)param_1 + 0xe8) = 0;
  *(long *)((long)param_1 + 0xe0) = lVar22;
  *(uint *)((long)param_1 + 0xd4) = uVar21;
  *(uint *)((long)param_1 + 0xd8) = uVar21;
  if ((param_3) && (iVar12 = *(int *)((long)param_1 + 0xf0), 0 < iVar12)) {
    lVar18 = 0;
    puVar17 = (ushort *)(lVar22 + 8);
    do {
      lVar18 = lVar18 + 1;
      uVar21 = (*(uint *)(puVar17 + 2) & 0xff00ff00) >> 8 | (*(uint *)(puVar17 + 2) & 0xff00ff) << 8
      ;
      *(uint *)(puVar17 + 2) = uVar21 >> 0x10 | uVar21 << 0x10;
      uVar21 = (*(uint *)(puVar17 + 4) & 0xff00ff00) >> 8 | (*(uint *)(puVar17 + 4) & 0xff00ff) << 8
      ;
      *(uint *)(puVar17 + 4) = uVar21 >> 0x10 | uVar21 << 0x10;
      puVar17[-4] = puVar17[-4] >> 8 | puVar17[-4] << 8;
      puVar17[-3] = puVar17[-3] >> 8 | puVar17[-3] << 8;
      puVar17[-2] = puVar17[-2] >> 8 | puVar17[-2] << 8;
      puVar17[-1] = puVar17[-1] >> 8 | puVar17[-1] << 8;
      *puVar17 = *puVar17 >> 8 | *puVar17 << 8;
      puVar17[1] = puVar17[1] >> 8 | puVar17[1] << 8;
      puVar17 = puVar17 + 0x10;
    } while (lVar18 < iVar12);
  }
  return param_1;
}

