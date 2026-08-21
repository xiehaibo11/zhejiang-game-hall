
void FUN_01086bc4(long param_1,void *param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  memset(param_2,0,0xe0);
  bVar2 = *(byte *)(param_1 + 0x138);
  uVar3 = (ulong)bVar2;
  *(byte *)((long)param_2 + 8) = bVar2;
  if (uVar3 != 0) {
    if (bVar2 < 4) {
      lVar5 = 0;
    }
    else {
      lVar5 = uVar3 - (uVar3 & 3);
      if (lVar5 != 0) {
        puVar6 = (undefined8 *)(param_1 + 0x150);
        puVar7 = (undefined2 *)((long)param_2 + 0x10);
        lVar4 = lVar5;
        do {
          puVar1 = puVar6 + -2;
          uVar8 = puVar6[-1];
          uVar10 = puVar6[1];
          uVar9 = *puVar6;
          puVar6 = puVar6 + 4;
          lVar4 = lVar4 + -4;
          puVar7[-2] = (short)*puVar1;
          *puVar7 = (short)uVar9;
          puVar7[-1] = (short)uVar8;
          puVar7[1] = (short)uVar10;
          puVar7 = puVar7 + 4;
        } while (lVar4 != 0);
        if ((bVar2 & 3) == 0) goto LAB_01086c84;
      }
    }
    lVar4 = uVar3 - lVar5;
    puVar6 = (undefined8 *)(param_1 + lVar5 * 8 + 0x140);
    puVar7 = (undefined2 *)((long)param_2 + lVar5 * 2 + 0xc);
    do {
      lVar4 = lVar4 + -1;
      *puVar7 = (short)*puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    } while (lVar4 != 0);
  }
LAB_01086c84:
  bVar2 = *(byte *)(param_1 + 0x139);
  uVar3 = (ulong)bVar2;
  *(byte *)((long)param_2 + 9) = bVar2;
  if (uVar3 != 0) {
    if (bVar2 < 4) {
      lVar5 = 0;
    }
    else {
      lVar5 = uVar3 - (uVar3 & 3);
      if (lVar5 != 0) {
        puVar6 = (undefined8 *)(param_1 + 0x1c0);
        puVar7 = (undefined2 *)((long)param_2 + 0x2c);
        lVar4 = lVar5;
        do {
          puVar1 = puVar6 + -2;
          uVar8 = puVar6[-1];
          uVar10 = puVar6[1];
          uVar9 = *puVar6;
          puVar6 = puVar6 + 4;
          lVar4 = lVar4 + -4;
          puVar7[-2] = (short)*puVar1;
          *puVar7 = (short)uVar9;
          puVar7[-1] = (short)uVar8;
          puVar7[1] = (short)uVar10;
          puVar7 = puVar7 + 4;
        } while (lVar4 != 0);
        if ((bVar2 & 3) == 0) goto LAB_01086d20;
      }
    }
    lVar4 = uVar3 - lVar5;
    puVar6 = (undefined8 *)(param_1 + lVar5 * 8 + 0x1b0);
    puVar7 = (undefined2 *)((long)param_2 + lVar5 * 2 + 0x28);
    do {
      lVar4 = lVar4 + -1;
      *puVar7 = (short)*puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    } while (lVar4 != 0);
  }
LAB_01086d20:
  bVar2 = *(byte *)(param_1 + 0x13a);
  uVar3 = (ulong)bVar2;
  *(byte *)((long)param_2 + 10) = bVar2;
  if (uVar3 != 0) {
    if (bVar2 < 4) {
      lVar5 = 0;
    }
    else {
      lVar5 = uVar3 - (uVar3 & 3);
      if (lVar5 != 0) {
        puVar6 = (undefined8 *)(param_1 + 0x210);
        puVar7 = (undefined2 *)((long)param_2 + 0x40);
        lVar4 = lVar5;
        do {
          puVar1 = puVar6 + -2;
          uVar8 = puVar6[-1];
          uVar10 = puVar6[1];
          uVar9 = *puVar6;
          puVar6 = puVar6 + 4;
          lVar4 = lVar4 + -4;
          puVar7[-2] = (short)*puVar1;
          *puVar7 = (short)uVar9;
          puVar7[-1] = (short)uVar8;
          puVar7[1] = (short)uVar10;
          puVar7 = puVar7 + 4;
        } while (lVar4 != 0);
        if ((bVar2 & 3) == 0) goto LAB_01086dbc;
      }
    }
    lVar4 = uVar3 - lVar5;
    puVar6 = (undefined8 *)(param_1 + lVar5 * 8 + 0x200);
    puVar7 = (undefined2 *)((long)param_2 + lVar5 * 2 + 0x3c);
    do {
      lVar4 = lVar4 + -1;
      *puVar7 = (short)*puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    } while (lVar4 != 0);
  }
LAB_01086dbc:
  bVar2 = *(byte *)(param_1 + 0x13b);
  uVar3 = (ulong)bVar2;
  *(byte *)((long)param_2 + 0xb) = bVar2;
  if (uVar3 != 0) {
    if (bVar2 < 4) {
      lVar5 = 0;
    }
    else {
      lVar5 = uVar3 - (uVar3 & 3);
      if (lVar5 != 0) {
        puVar6 = (undefined8 *)(param_1 + 0x280);
        puVar7 = (undefined2 *)((long)param_2 + 0x5c);
        lVar4 = lVar5;
        do {
          puVar1 = puVar6 + -2;
          uVar8 = puVar6[-1];
          uVar10 = puVar6[1];
          uVar9 = *puVar6;
          puVar6 = puVar6 + 4;
          lVar4 = lVar4 + -4;
          puVar7[-2] = (short)*puVar1;
          *puVar7 = (short)uVar9;
          puVar7[-1] = (short)uVar8;
          puVar7[1] = (short)uVar10;
          puVar7 = puVar7 + 4;
        } while (lVar4 != 0);
        if ((bVar2 & 3) == 0) goto LAB_01086e58;
      }
    }
    lVar4 = uVar3 - lVar5;
    puVar6 = (undefined8 *)(param_1 + lVar5 * 8 + 0x270);
    puVar7 = (undefined2 *)((long)param_2 + lVar5 * 2 + 0x58);
    do {
      lVar4 = lVar4 + -1;
      *puVar7 = (short)*puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    } while (lVar4 != 0);
  }
LAB_01086e58:
  *(undefined8 *)((long)param_2 + 0x70) = *(undefined8 *)(param_1 + 0x2c0);
  *(int *)((long)param_2 + 0x78) = (int)*(undefined8 *)(param_1 + 0x2c8);
  *(int *)((long)param_2 + 0x7c) = (int)*(undefined8 *)(param_1 + 0x2d0);
  *(short *)((long)param_2 + 0x80) = (short)*(undefined8 *)(param_1 + 0x2d8);
  *(short *)((long)param_2 + 0x82) = (short)*(undefined8 *)(param_1 + 0x2e0);
  bVar2 = *(byte *)(param_1 + 0x2e8);
  uVar3 = (ulong)bVar2;
  *(byte *)((long)param_2 + 0x84) = bVar2;
  if (uVar3 != 0) {
    if (bVar2 < 4) {
      lVar5 = 0;
    }
    else {
      lVar5 = uVar3 - (uVar3 & 3);
      if (lVar5 != 0) {
        puVar6 = (undefined8 *)(param_1 + 0x300);
        puVar7 = (undefined2 *)((long)param_2 + 0x8c);
        lVar4 = lVar5;
        do {
          puVar1 = puVar6 + -2;
          uVar8 = puVar6[-1];
          uVar10 = puVar6[1];
          uVar9 = *puVar6;
          puVar6 = puVar6 + 4;
          lVar4 = lVar4 + -4;
          puVar7[-2] = (short)*puVar1;
          *puVar7 = (short)uVar9;
          puVar7[-1] = (short)uVar8;
          puVar7[1] = (short)uVar10;
          puVar7 = puVar7 + 4;
        } while (lVar4 != 0);
        if ((bVar2 & 3) == 0) goto LAB_01086f1c;
      }
    }
    lVar4 = uVar3 - lVar5;
    puVar6 = (undefined8 *)(param_1 + lVar5 * 8 + 0x2f0);
    puVar7 = (undefined2 *)((long)param_2 + lVar5 * 2 + 0x88);
    do {
      lVar4 = lVar4 + -1;
      *puVar7 = (short)*puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    } while (lVar4 != 0);
  }
LAB_01086f1c:
  bVar2 = *(byte *)(param_1 + 0x2e9);
  uVar3 = (ulong)bVar2;
  *(byte *)((long)param_2 + 0x85) = bVar2;
  if (uVar3 != 0) {
    if (bVar2 < 4) {
      lVar5 = 0;
    }
    else {
      lVar5 = uVar3 - (uVar3 & 3);
      if (lVar5 != 0) {
        puVar6 = (undefined8 *)(param_1 + 0x368);
        puVar7 = (undefined2 *)((long)param_2 + 0xa6);
        lVar4 = lVar5;
        do {
          puVar1 = puVar6 + -2;
          uVar8 = puVar6[-1];
          uVar10 = puVar6[1];
          uVar9 = *puVar6;
          puVar6 = puVar6 + 4;
          lVar4 = lVar4 + -4;
          puVar7[-2] = (short)*puVar1;
          *puVar7 = (short)uVar9;
          puVar7[-1] = (short)uVar8;
          puVar7[1] = (short)uVar10;
          puVar7 = puVar7 + 4;
        } while (lVar4 != 0);
        if ((bVar2 & 3) == 0) goto LAB_01086fb8;
      }
    }
    lVar4 = uVar3 - lVar5;
    puVar6 = (undefined8 *)(param_1 + lVar5 * 8 + 0x358);
    puVar7 = (undefined2 *)((long)param_2 + lVar5 * 2 + 0xa2);
    do {
      lVar4 = lVar4 + -1;
      *puVar7 = (short)*puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    } while (lVar4 != 0);
  }
LAB_01086fb8:
  *(undefined1 *)((long)param_2 + 0x86) = *(undefined1 *)(param_1 + 0x3c0);
  *(long *)((long)param_2 + 200) = (long)*(int *)(param_1 + 0x3d4);
  *(undefined4 *)((long)param_2 + 4) = *(undefined4 *)(param_1 + 0x3d0);
  return;
}

