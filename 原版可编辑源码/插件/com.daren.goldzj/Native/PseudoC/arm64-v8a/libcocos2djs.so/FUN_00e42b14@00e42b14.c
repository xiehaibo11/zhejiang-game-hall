
void FUN_00e42b14(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  param_2[0x19] = 0;
  param_2[0x18] = 0;
  param_2[0x1b] = 0;
  param_2[0x1a] = 0;
  param_2[0x15] = 0;
  param_2[0x14] = 0;
  param_2[0x17] = 0;
  param_2[0x16] = 0;
  param_2[0x11] = 0;
  param_2[0x10] = 0;
  param_2[0x13] = 0;
  param_2[0x12] = 0;
  param_2[0xd] = 0;
  param_2[0xc] = 0;
  param_2[0xf] = 0;
  param_2[0xe] = 0;
  param_2[9] = 0;
  param_2[8] = 0;
  param_2[0xb] = 0;
  param_2[10] = 0;
  param_2[5] = 0;
  param_2[4] = 0;
  param_2[7] = 0;
  param_2[6] = 0;
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  bVar2 = *(byte *)(param_1 + 0x148);
  uVar3 = (ulong)bVar2;
  *(byte *)(param_2 + 1) = bVar2;
  if (uVar3 != 0) {
    if (bVar2 < 4) {
      uVar5 = 0;
    }
    else {
      uVar5 = uVar3 & 0xfc;
      puVar6 = (undefined8 *)(param_1 + 0x160);
      puVar7 = param_2 + 2;
      uVar9 = uVar5;
      do {
        puVar1 = puVar6 + -2;
        uVar10 = puVar6[-1];
        uVar12 = puVar6[1];
        uVar11 = *puVar6;
        puVar6 = puVar6 + 4;
        uVar9 = uVar9 - 4;
        *(short *)((long)puVar7 + -4) = (short)*puVar1;
        *(short *)puVar7 = (short)uVar11;
        *(short *)((long)puVar7 + -2) = (short)uVar10;
        *(short *)((long)puVar7 + 2) = (short)uVar12;
        puVar7 = puVar7 + 1;
      } while (uVar9 != 0);
      if (uVar5 == uVar3) goto LAB_00e42bc8;
    }
    lVar4 = uVar3 - uVar5;
    puVar6 = (undefined8 *)(param_1 + uVar5 * 8 + 0x150);
    puVar8 = (undefined2 *)((long)param_2 + uVar5 * 2 + 0xc);
    do {
      lVar4 = lVar4 + -1;
      *puVar8 = (short)*puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    } while (lVar4 != 0);
  }
LAB_00e42bc8:
  bVar2 = *(byte *)(param_1 + 0x149);
  uVar3 = (ulong)bVar2;
  *(byte *)((long)param_2 + 9) = bVar2;
  if (uVar3 != 0) {
    if (bVar2 < 4) {
      uVar5 = 0;
    }
    else {
      uVar5 = uVar3 & 0xfc;
      puVar6 = (undefined8 *)(param_1 + 0x1d0);
      puVar8 = (undefined2 *)((long)param_2 + 0x2c);
      uVar9 = uVar5;
      do {
        puVar7 = puVar6 + -2;
        uVar10 = puVar6[-1];
        uVar12 = puVar6[1];
        uVar11 = *puVar6;
        puVar6 = puVar6 + 4;
        uVar9 = uVar9 - 4;
        puVar8[-2] = (short)*puVar7;
        *puVar8 = (short)uVar11;
        puVar8[-1] = (short)uVar10;
        puVar8[1] = (short)uVar12;
        puVar8 = puVar8 + 4;
      } while (uVar9 != 0);
      if (uVar5 == uVar3) goto LAB_00e42c5c;
    }
    lVar4 = uVar3 - uVar5;
    puVar6 = (undefined8 *)(param_1 + uVar5 * 8 + 0x1c0);
    puVar8 = (undefined2 *)((long)param_2 + uVar5 * 2 + 0x28);
    do {
      lVar4 = lVar4 + -1;
      *puVar8 = (short)*puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    } while (lVar4 != 0);
  }
LAB_00e42c5c:
  bVar2 = *(byte *)(param_1 + 0x14a);
  uVar3 = (ulong)bVar2;
  *(byte *)((long)param_2 + 10) = bVar2;
  if (uVar3 != 0) {
    if (bVar2 < 4) {
      uVar5 = 0;
    }
    else {
      uVar5 = uVar3 & 0xfc;
      puVar6 = (undefined8 *)(param_1 + 0x220);
      puVar7 = param_2 + 8;
      uVar9 = uVar5;
      do {
        puVar1 = puVar6 + -2;
        uVar10 = puVar6[-1];
        uVar12 = puVar6[1];
        uVar11 = *puVar6;
        puVar6 = puVar6 + 4;
        uVar9 = uVar9 - 4;
        *(short *)((long)puVar7 + -4) = (short)*puVar1;
        *(short *)puVar7 = (short)uVar11;
        *(short *)((long)puVar7 + -2) = (short)uVar10;
        *(short *)((long)puVar7 + 2) = (short)uVar12;
        puVar7 = puVar7 + 1;
      } while (uVar9 != 0);
      if (uVar5 == uVar3) goto LAB_00e42cf0;
    }
    lVar4 = uVar3 - uVar5;
    puVar6 = (undefined8 *)(param_1 + uVar5 * 8 + 0x210);
    puVar8 = (undefined2 *)((long)param_2 + uVar5 * 2 + 0x3c);
    do {
      lVar4 = lVar4 + -1;
      *puVar8 = (short)*puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    } while (lVar4 != 0);
  }
LAB_00e42cf0:
  bVar2 = *(byte *)(param_1 + 0x14b);
  uVar3 = (ulong)bVar2;
  *(byte *)((long)param_2 + 0xb) = bVar2;
  if (uVar3 != 0) {
    if (bVar2 < 4) {
      uVar5 = 0;
    }
    else {
      uVar5 = uVar3 & 0xfc;
      puVar6 = (undefined8 *)(param_1 + 0x290);
      puVar8 = (undefined2 *)((long)param_2 + 0x5c);
      uVar9 = uVar5;
      do {
        puVar7 = puVar6 + -2;
        uVar10 = puVar6[-1];
        uVar12 = puVar6[1];
        uVar11 = *puVar6;
        puVar6 = puVar6 + 4;
        uVar9 = uVar9 - 4;
        puVar8[-2] = (short)*puVar7;
        *puVar8 = (short)uVar11;
        puVar8[-1] = (short)uVar10;
        puVar8[1] = (short)uVar12;
        puVar8 = puVar8 + 4;
      } while (uVar9 != 0);
      if (uVar5 == uVar3) goto LAB_00e42d84;
    }
    lVar4 = uVar3 - uVar5;
    puVar6 = (undefined8 *)(param_1 + uVar5 * 8 + 0x280);
    puVar8 = (undefined2 *)((long)param_2 + uVar5 * 2 + 0x58);
    do {
      lVar4 = lVar4 + -1;
      *puVar8 = (short)*puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    } while (lVar4 != 0);
  }
LAB_00e42d84:
  param_2[0xe] = *(undefined8 *)(param_1 + 0x2d0);
  param_2[0xf] = CONCAT44((int)*(undefined8 *)(param_1 + 0x2e0),
                          (int)*(undefined8 *)(param_1 + 0x2d8));
  *(short *)(param_2 + 0x10) = (short)*(undefined8 *)(param_1 + 0x2e8);
  *(short *)((long)param_2 + 0x82) = (short)*(undefined8 *)(param_1 + 0x2f0);
  bVar2 = *(byte *)(param_1 + 0x2f8);
  uVar3 = (ulong)bVar2;
  *(byte *)((long)param_2 + 0x84) = bVar2;
  if (uVar3 != 0) {
    if (bVar2 < 4) {
      uVar5 = 0;
    }
    else {
      uVar5 = uVar3 & 0xfc;
      puVar6 = (undefined8 *)(param_1 + 0x310);
      puVar8 = (undefined2 *)((long)param_2 + 0x8c);
      uVar9 = uVar5;
      do {
        puVar7 = puVar6 + -2;
        uVar10 = puVar6[-1];
        uVar12 = puVar6[1];
        uVar11 = *puVar6;
        puVar6 = puVar6 + 4;
        uVar9 = uVar9 - 4;
        puVar8[-2] = (short)*puVar7;
        *puVar8 = (short)uVar11;
        puVar8[-1] = (short)uVar10;
        puVar8[1] = (short)uVar12;
        puVar8 = puVar8 + 4;
      } while (uVar9 != 0);
      if (uVar5 == uVar3) goto LAB_00e42e40;
    }
    lVar4 = uVar3 - uVar5;
    puVar6 = (undefined8 *)(param_1 + uVar5 * 8 + 0x300);
    puVar8 = (undefined2 *)((long)param_2 + uVar5 * 2 + 0x88);
    do {
      lVar4 = lVar4 + -1;
      *puVar8 = (short)*puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    } while (lVar4 != 0);
  }
LAB_00e42e40:
  bVar2 = *(byte *)(param_1 + 0x2f9);
  uVar3 = (ulong)bVar2;
  *(byte *)((long)param_2 + 0x85) = bVar2;
  if (uVar3 != 0) {
    if (bVar2 < 4) {
      uVar5 = 0;
    }
    else {
      uVar5 = uVar3 & 0xfc;
      puVar6 = (undefined8 *)(param_1 + 0x378);
      puVar8 = (undefined2 *)((long)param_2 + 0xa6);
      uVar9 = uVar5;
      do {
        puVar7 = puVar6 + -2;
        uVar10 = puVar6[-1];
        uVar12 = puVar6[1];
        uVar11 = *puVar6;
        puVar6 = puVar6 + 4;
        uVar9 = uVar9 - 4;
        puVar8[-2] = (short)*puVar7;
        *puVar8 = (short)uVar11;
        puVar8[-1] = (short)uVar10;
        puVar8[1] = (short)uVar12;
        puVar8 = puVar8 + 4;
      } while (uVar9 != 0);
      if (uVar5 == uVar3) goto LAB_00e42ed4;
    }
    lVar4 = uVar3 - uVar5;
    puVar6 = (undefined8 *)(param_1 + uVar5 * 8 + 0x368);
    puVar8 = (undefined2 *)((long)param_2 + uVar5 * 2 + 0xa2);
    do {
      lVar4 = lVar4 + -1;
      *puVar8 = (short)*puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    } while (lVar4 != 0);
  }
LAB_00e42ed4:
  *(undefined1 *)((long)param_2 + 0x86) = *(undefined1 *)(param_1 + 0x3d0);
  param_2[0x19] = (long)*(int *)(param_1 + 0x3e4);
  *(undefined4 *)((long)param_2 + 4) = *(undefined4 *)(param_1 + 0x3e0);
  return;
}

