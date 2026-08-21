
void FUN_0115e4ac(uint *param_1,uint *param_2,uint *param_3,uint param_4,int param_5)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  uint *puVar4;
  byte *pbVar5;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar18;
  ulong uVar17;
  int iVar19;
  int iVar20;
  ulong uVar21;
  int iVar22;
  int iVar23;
  ulong uVar24;
  int iVar25;
  ulong uVar26;
  
  uVar1 = (int)param_4 >> 1;
  uVar2 = (ulong)uVar1;
  if ((int)uVar1 < 1) {
    uVar2 = 0;
    goto joined_r0x0115e654;
  }
  if (param_5 == 0) {
    puVar4 = param_1 + 1;
    uVar17 = uVar2;
    puVar9 = param_3;
    puVar10 = param_2;
    do {
      uVar1 = puVar4[-1];
      uVar11 = *puVar4;
      iVar12 = (uVar11 >> 0xf & 0x1fe) + (uVar1 >> 0xf & 0x1fe);
      iVar14 = (uVar11 >> 7 & 0x1fe) + (uVar1 >> 7 & 0x1fe);
      iVar16 = (uVar11 & 0xff) * 2 + (uVar1 & 0xff) * 2;
      iVar19 = iVar12 * -0x25f7 + 0x2020000 + iVar14 * -0x4a89 + iVar16 * 0x7080;
      uVar1 = iVar19 >> 0x12;
      if (0xff < uVar1) {
        uVar1 = (iVar19 >> 0x1f & 0xffffff01U) + 0xff;
      }
      iVar12 = iVar12 * 0x7080 + 0x2020000 + iVar14 * -0x5e34 + iVar16 * -0x124c;
      uVar11 = iVar12 >> 0x12;
      if (0xff < uVar11) {
        uVar11 = (iVar12 >> 0x1f & 0xffffff01U) + 0xff;
      }
      uVar17 = uVar17 - 1;
      puVar4 = puVar4 + 2;
      *(byte *)puVar10 = (byte)(uVar1 + (byte)*puVar10 + 1 >> 1);
      *(byte *)puVar9 = (byte)(uVar11 + (byte)*puVar9 + 1 >> 1);
      puVar9 = (uint *)((long)puVar9 + 1);
      puVar10 = (uint *)((long)puVar10 + 1);
    } while (uVar17 != 0);
    goto joined_r0x0115e654;
  }
  if (uVar1 < 2) {
LAB_0115e65c:
    lVar3 = 0;
  }
  else {
    uVar1 = param_4 >> 1 & 1;
    lVar6 = uVar2 - uVar1;
    if (lVar6 == 0) goto LAB_0115e65c;
    lVar3 = 0;
    if ((((uint *)((long)param_3 + uVar2) <= param_2 || (uint *)((long)param_2 + uVar2) <= param_3)
        && (param_1 + uVar2 * 2 <= param_2 || (uint *)((long)param_2 + uVar2) <= param_1)) &&
       (lVar7 = lVar6, puVar4 = param_3, puVar9 = param_2, puVar10 = param_1,
       param_1 + uVar2 * 2 <= param_3 || (uint *)((long)param_3 + uVar2) <= param_1)) {
      do {
        uVar11 = *puVar10;
        uVar15 = puVar10[1];
        uVar13 = puVar10[2];
        uVar18 = puVar10[3];
        lVar7 = lVar7 + -2;
        uVar17 = CONCAT44(uVar13 >> 0xf,uVar11 >> 0xf) & 0x1fe000001fe;
        uVar21 = CONCAT44(uVar18 >> 0xf,uVar15 >> 0xf) & 0x1fe000001fe;
        uVar24 = CONCAT44(uVar13 >> 7,uVar11 >> 7) & 0x1fe000001fe;
        uVar26 = CONCAT44(uVar18 >> 7,uVar15 >> 7) & 0x1fe000001fe;
        iVar16 = (int)uVar21 + (int)uVar17;
        iVar19 = (int)(uVar21 >> 0x20) + (int)(uVar17 >> 0x20);
        uVar21 = CONCAT44(uVar13 << 1,uVar11 << 1) & 0x1fe000001fe;
        uVar17 = CONCAT44(uVar18 << 1,uVar15 << 1) & 0x1fe000001fe;
        iVar20 = (int)uVar26 + (int)uVar24;
        iVar22 = (int)(uVar26 >> 0x20) + (int)(uVar24 >> 0x20);
        iVar12 = (int)uVar17 + (int)uVar21;
        iVar14 = (int)(uVar17 >> 0x20) + (int)(uVar21 >> 0x20);
        iVar23 = iVar16 * -0x25f7 + iVar20 * -0x4a89 + iVar12 * 0x7080 + 0x2020000;
        iVar25 = iVar19 * -0x25f7 + iVar22 * -0x4a89 + iVar14 * 0x7080 + 0x2020000;
        uVar15 = iVar23 >> 0x12;
        uVar18 = iVar25 >> 0x12;
        iVar12 = iVar16 * 0x7080 + iVar20 * -0x5e34 + iVar12 * -0x124c + 0x2020000;
        iVar14 = iVar19 * 0x7080 + iVar22 * -0x5e34 + iVar14 * -0x124c + 0x2020000;
        uVar11 = iVar12 >> 0x12;
        uVar13 = iVar14 >> 0x12;
        uVar21 = CONCAT44(0xff - (iVar25 >> 0x1f),0xff - (iVar23 >> 0x1f));
        uVar21 = uVar21 ^ (uVar21 ^ CONCAT44(uVar18,uVar15)) &
                          CONCAT44(-(uint)(uVar18 < 0x100),-(uint)(uVar15 < 0x100));
        uVar17 = CONCAT44(0xff - (iVar14 >> 0x1f),0xff - (iVar12 >> 0x1f));
        uVar17 = uVar17 ^ (uVar17 ^ CONCAT44(uVar13,uVar11)) &
                          CONCAT44(-(uint)(uVar13 < 0x100),-(uint)(uVar11 < 0x100));
        *(byte *)((long)puVar9 + 1) = (byte)(uVar21 >> 0x20);
        *(byte *)puVar9 = (byte)uVar21;
        *(byte *)((long)puVar4 + 1) = (byte)(uVar17 >> 0x20);
        *(byte *)puVar4 = (byte)uVar17;
        puVar4 = (uint *)((long)puVar4 + 2);
        puVar9 = (uint *)((long)puVar9 + 2);
        puVar10 = puVar10 + 4;
      } while (lVar7 != 0);
      lVar3 = lVar6;
      if (uVar1 == 0) goto joined_r0x0115e654;
    }
  }
  lVar6 = uVar2 - lVar3;
  puVar4 = param_1 + lVar3 * 2 + 1;
  pbVar5 = (byte *)((long)param_2 + lVar3);
  pbVar8 = (byte *)((long)param_3 + lVar3);
  do {
    uVar1 = puVar4[-1];
    uVar11 = *puVar4;
    iVar12 = (uVar11 >> 0xf & 0x1fe) + (uVar1 >> 0xf & 0x1fe);
    iVar14 = (uVar11 >> 7 & 0x1fe) + (uVar1 >> 7 & 0x1fe);
    iVar16 = (uVar11 & 0xff) * 2 + (uVar1 & 0xff) * 2;
    iVar19 = iVar12 * -0x25f7 + 0x2020000 + iVar14 * -0x4a89 + iVar16 * 0x7080;
    uVar1 = iVar19 >> 0x12;
    if (0xff < uVar1) {
      uVar1 = (iVar19 >> 0x1f & 0xffffff01U) + 0xff;
    }
    iVar12 = iVar12 * 0x7080 + 0x2020000 + iVar14 * -0x5e34 + iVar16 * -0x124c;
    uVar11 = iVar12 >> 0x12;
    if (0xff < uVar11) {
      uVar11 = (iVar12 >> 0x1f & 0xffffff01U) + 0xff;
    }
    *pbVar5 = (byte)uVar1;
    *pbVar8 = (byte)uVar11;
    lVar6 = lVar6 + -1;
    puVar4 = puVar4 + 2;
    pbVar5 = pbVar5 + 1;
    pbVar8 = pbVar8 + 1;
  } while (lVar6 != 0);
joined_r0x0115e654:
  if ((param_4 & 1) != 0) {
    uVar15 = *(uint *)((long)param_1 + (-(uVar2 >> 0x1f) & 0xfffffff800000000 | uVar2 << 3));
    uVar11 = uVar15 >> 0xe & 0x3fc;
    uVar13 = uVar15 >> 6 & 0x3fc;
    iVar12 = uVar11 * -0x25f7 + 0x2020000 + uVar13 * -0x4a89 + (uVar15 & 0xff) * 0x1c200;
    uVar1 = iVar12 >> 0x12;
    if (0xff < uVar1) {
      uVar1 = (iVar12 >> 0x1f & 0xffffff01U) + 0xff;
    }
    iVar12 = uVar11 * 0x7080 + 0x2020000 + uVar13 * -0x5e34 + (uVar15 & 0xff) * -0x4930;
    uVar11 = iVar12 >> 0x12;
    lVar6 = (long)(int)uVar2;
    if (0xff < uVar11) {
      uVar11 = (iVar12 >> 0x1f & 0xffffff01U) + 0xff;
    }
    if (param_5 == 0) {
      *(byte *)((long)param_2 + lVar6) = (byte)(uVar1 + *(byte *)((long)param_2 + lVar6) + 1 >> 1);
      uVar11 = uVar11 + *(byte *)((long)param_3 + lVar6) + 1 >> 1;
    }
    else {
      *(byte *)((long)param_2 + lVar6) = (byte)uVar1;
    }
    *(byte *)((long)param_3 + lVar6) = (byte)uVar11;
  }
  return;
}

