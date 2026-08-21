
void FUN_00e78180(long param_1,long param_2,void *param_3)

{
  short *psVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  short *psVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined1 auStack_3c [4];
  void *local_38;
  long lStack_28;
  
  local_38 = param_3;
  lStack_28 = param_1;
  memset(param_3,0,0x4c8);
  bVar3 = *(byte *)(param_2 + 8);
  uVar8 = (ulong)bVar3;
  *(byte *)((long)param_3 + 0x148) = bVar3;
  if (uVar8 != 0) {
    if (bVar3 < 4) {
      uVar10 = 0;
    }
    else {
      uVar10 = uVar8 & 0xfc;
      psVar12 = (short *)(param_2 + 0x10);
      plVar13 = (long *)((long)param_3 + 0x160);
      uVar14 = uVar10;
      do {
        sVar7 = psVar12[-2];
        sVar5 = *psVar12;
        psVar1 = psVar12 + -1;
        sVar6 = psVar12[1];
        psVar12 = psVar12 + 4;
        uVar14 = uVar14 - 4;
        plVar13[-1] = (long)*psVar1;
        plVar13[-2] = (long)sVar7;
        plVar13[1] = (long)sVar6;
        *plVar13 = (long)sVar5;
        plVar13 = plVar13 + 4;
      } while (uVar14 != 0);
      if (uVar10 == uVar8) goto LAB_00e78240;
    }
    lVar9 = uVar8 - uVar10;
    psVar12 = (short *)(param_2 + uVar10 * 2 + 0xc);
    plVar13 = (long *)((long)param_3 + uVar10 * 8 + 0x150);
    do {
      lVar9 = lVar9 + -1;
      *plVar13 = (long)*psVar12;
      psVar12 = psVar12 + 1;
      plVar13 = plVar13 + 1;
    } while (lVar9 != 0);
  }
LAB_00e78240:
  bVar3 = *(byte *)(param_2 + 9);
  uVar8 = (ulong)bVar3;
  *(byte *)((long)param_3 + 0x149) = bVar3;
  if (uVar8 != 0) {
    if (bVar3 < 4) {
      uVar10 = 0;
    }
    else {
      uVar10 = uVar8 & 0xfc;
      psVar12 = (short *)(param_2 + 0x2c);
      plVar13 = (long *)((long)param_3 + 0x1d0);
      uVar14 = uVar10;
      do {
        sVar7 = psVar12[-2];
        sVar5 = *psVar12;
        psVar1 = psVar12 + -1;
        sVar6 = psVar12[1];
        psVar12 = psVar12 + 4;
        uVar14 = uVar14 - 4;
        plVar13[-1] = (long)*psVar1;
        plVar13[-2] = (long)sVar7;
        plVar13[1] = (long)sVar6;
        *plVar13 = (long)sVar5;
        plVar13 = plVar13 + 4;
      } while (uVar14 != 0);
      if (uVar10 == uVar8) goto LAB_00e782cc;
    }
    lVar9 = uVar8 - uVar10;
    psVar12 = (short *)(param_2 + uVar10 * 2 + 0x28);
    plVar13 = (long *)((long)param_3 + uVar10 * 8 + 0x1c0);
    do {
      lVar9 = lVar9 + -1;
      *plVar13 = (long)*psVar12;
      psVar12 = psVar12 + 1;
      plVar13 = plVar13 + 1;
    } while (lVar9 != 0);
  }
LAB_00e782cc:
  bVar3 = *(byte *)(param_2 + 10);
  uVar8 = (ulong)bVar3;
  *(byte *)((long)param_3 + 0x14a) = bVar3;
  if (uVar8 != 0) {
    if (bVar3 < 4) {
      uVar10 = 0;
    }
    else {
      uVar10 = uVar8 & 0xfc;
      psVar12 = (short *)(param_2 + 0x40);
      plVar13 = (long *)((long)param_3 + 0x220);
      uVar14 = uVar10;
      do {
        sVar7 = psVar12[-2];
        sVar5 = *psVar12;
        psVar1 = psVar12 + -1;
        sVar6 = psVar12[1];
        psVar12 = psVar12 + 4;
        uVar14 = uVar14 - 4;
        plVar13[-1] = (long)*psVar1;
        plVar13[-2] = (long)sVar7;
        plVar13[1] = (long)sVar6;
        *plVar13 = (long)sVar5;
        plVar13 = plVar13 + 4;
      } while (uVar14 != 0);
      if (uVar10 == uVar8) goto LAB_00e78358;
    }
    lVar9 = uVar8 - uVar10;
    psVar12 = (short *)(param_2 + uVar10 * 2 + 0x3c);
    plVar13 = (long *)((long)param_3 + uVar10 * 8 + 0x210);
    do {
      lVar9 = lVar9 + -1;
      *plVar13 = (long)*psVar12;
      psVar12 = psVar12 + 1;
      plVar13 = plVar13 + 1;
    } while (lVar9 != 0);
  }
LAB_00e78358:
  bVar3 = *(byte *)(param_2 + 0xb);
  uVar8 = (ulong)bVar3;
  *(byte *)((long)param_3 + 0x14b) = bVar3;
  if (uVar8 != 0) {
    if (bVar3 < 4) {
      uVar10 = 0;
    }
    else {
      uVar10 = uVar8 & 0xfc;
      psVar12 = (short *)(param_2 + 0x5c);
      plVar13 = (long *)((long)param_3 + 0x290);
      uVar14 = uVar10;
      do {
        sVar7 = psVar12[-2];
        sVar5 = *psVar12;
        psVar1 = psVar12 + -1;
        sVar6 = psVar12[1];
        psVar12 = psVar12 + 4;
        uVar14 = uVar14 - 4;
        plVar13[-1] = (long)*psVar1;
        plVar13[-2] = (long)sVar7;
        plVar13[1] = (long)sVar6;
        *plVar13 = (long)sVar5;
        plVar13 = plVar13 + 4;
      } while (uVar14 != 0);
      if (uVar10 == uVar8) goto LAB_00e783e4;
    }
    lVar9 = uVar8 - uVar10;
    psVar12 = (short *)(param_2 + uVar10 * 2 + 0x58);
    plVar13 = (long *)((long)param_3 + uVar10 * 8 + 0x280);
    do {
      lVar9 = lVar9 + -1;
      *plVar13 = (long)*psVar12;
      psVar12 = psVar12 + 1;
      plVar13 = plVar13 + 1;
    } while (lVar9 != 0);
  }
LAB_00e783e4:
  *(undefined8 *)((long)param_3 + 0x2d0) = *(undefined8 *)(param_2 + 0x70);
  uVar15 = *(undefined8 *)(param_2 + 0x78);
  *(long *)((long)param_3 + 0x2e0) = (long)(int)((ulong)uVar15 >> 0x20);
  *(long *)((long)param_3 + 0x2d8) = (long)(int)uVar15;
  uVar4 = *(ushort *)(param_2 + 0x80);
  *(ulong *)((long)param_3 + 0x2f0) = (ulong)*(ushort *)(param_2 + 0x82);
  *(ulong *)((long)param_3 + 0x2e8) = (ulong)uVar4;
  bVar3 = *(byte *)(param_2 + 0x84);
  uVar8 = (ulong)bVar3;
  *(byte *)((long)param_3 + 0x2f8) = bVar3;
  if (uVar8 != 0) {
    if (bVar3 < 4) {
      uVar10 = 0;
    }
    else {
      uVar10 = uVar8 & 0xfc;
      psVar12 = (short *)(param_2 + 0x8c);
      plVar13 = (long *)((long)param_3 + 0x310);
      uVar14 = uVar10;
      do {
        sVar7 = psVar12[-2];
        sVar5 = *psVar12;
        psVar1 = psVar12 + -1;
        sVar6 = psVar12[1];
        psVar12 = psVar12 + 4;
        uVar14 = uVar14 - 4;
        plVar13[-1] = (long)*psVar1;
        plVar13[-2] = (long)sVar7;
        plVar13[1] = (long)sVar6;
        *plVar13 = (long)sVar5;
        plVar13 = plVar13 + 4;
      } while (uVar14 != 0);
      if (uVar10 == uVar8) goto LAB_00e784a0;
    }
    lVar9 = uVar8 - uVar10;
    psVar12 = (short *)(param_2 + uVar10 * 2 + 0x88);
    plVar13 = (long *)((long)param_3 + uVar10 * 8 + 0x300);
    do {
      lVar9 = lVar9 + -1;
      *plVar13 = (long)*psVar12;
      psVar12 = psVar12 + 1;
      plVar13 = plVar13 + 1;
    } while (lVar9 != 0);
  }
LAB_00e784a0:
  bVar3 = *(byte *)(param_2 + 0x85);
  uVar8 = (ulong)bVar3;
  *(byte *)((long)param_3 + 0x2f9) = bVar3;
  if (uVar8 != 0) {
    if (bVar3 < 4) {
      uVar10 = 0;
    }
    else {
      uVar10 = uVar8 & 0xfc;
      psVar12 = (short *)(param_2 + 0xa6);
      plVar13 = (long *)((long)param_3 + 0x378);
      uVar14 = uVar10;
      do {
        sVar7 = psVar12[-2];
        sVar5 = *psVar12;
        psVar1 = psVar12 + -1;
        sVar6 = psVar12[1];
        psVar12 = psVar12 + 4;
        uVar14 = uVar14 - 4;
        plVar13[-1] = (long)*psVar1;
        plVar13[-2] = (long)sVar7;
        plVar13[1] = (long)sVar6;
        *plVar13 = (long)sVar5;
        plVar13 = plVar13 + 4;
      } while (uVar14 != 0);
      if (uVar10 == uVar8) goto LAB_00e7852c;
    }
    lVar9 = uVar8 - uVar10;
    psVar12 = (short *)(param_2 + uVar10 * 2 + 0xa2);
    plVar13 = (long *)((long)param_3 + uVar10 * 8 + 0x368);
    do {
      lVar9 = lVar9 + -1;
      *plVar13 = (long)*psVar12;
      psVar12 = psVar12 + 1;
      plVar13 = plVar13 + 1;
    } while (lVar9 != 0);
  }
LAB_00e7852c:
  *(undefined1 *)((long)param_3 + 0x3d0) = *(undefined1 *)(param_2 + 0x86);
  *(undefined4 *)((long)param_3 + 0x3e0) = *(undefined4 *)(param_2 + 4);
  *(int *)((long)param_3 + 0x3e4) = (int)*(undefined8 *)(param_2 + 200);
  uVar15 = *(undefined8 *)(param_2 + 0xc0);
  *(void **)((long)param_3 + 0x418) = param_3;
  *(undefined8 *)((long)param_3 + 1000) = uVar15;
  lVar9 = *(long *)(param_1 + 0xf0);
  uVar2 = *(uint *)(lVar9 + 0x74);
  if ((uVar2 != 0xffffffff) &&
     (*(uint *)((long)param_3 + 0x4c0) = uVar2, uVar11 = uVar2, uVar2 != 0)) {
    do {
      uVar11 = uVar11 ^ uVar11 << 0xd;
      uVar11 = uVar11 ^ uVar11 >> 0x11;
      uVar11 = uVar11 ^ uVar11 << 5;
    } while ((int)uVar11 < 0);
    *(uint *)(lVar9 + 0x74) = uVar11;
    if (uVar2 != 0) {
      return;
    }
  }
  uVar2 = (uint)&local_38 ^ (uint)&lStack_28 ^ (uint)auStack_3c;
  uVar11 = uVar2 ^ uVar2 >> 10 ^ uVar2 >> 0x14;
  uVar2 = 0x7384;
  if (uVar11 != 0) {
    uVar2 = uVar11;
  }
  *(uint *)((long)param_3 + 0x4c0) = uVar2;
  return;
}

