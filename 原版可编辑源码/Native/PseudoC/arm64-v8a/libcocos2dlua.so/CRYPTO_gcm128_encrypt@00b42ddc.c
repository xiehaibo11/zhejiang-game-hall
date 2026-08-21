
undefined8 CRYPTO_gcm128_encrypt(long param_1,ulong *param_2,ulong *param_3,ulong param_4)

{
  int iVar1;
  ulong *puVar2;
  byte bVar3;
  code *pcVar4;
  code *pcVar5;
  undefined8 uVar6;
  code *pcVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong *puVar14;
  uint uVar15;
  long lVar16;
  uint uVar17;
  
  uVar12 = *(ulong *)(param_1 + 0x38) + param_4;
  if (0xfffffffe0 < uVar12) {
    return 0xffffffff;
  }
  if (CARRY8(*(ulong *)(param_1 + 0x38),param_4)) {
    return 0xffffffff;
  }
  pcVar4 = *(code **)(param_1 + 0x178);
  uVar6 = *(undefined8 *)(param_1 + 0x180);
  pcVar5 = *(code **)(param_1 + 0x160);
  pcVar7 = *(code **)(param_1 + 0x168);
  *(ulong *)(param_1 + 0x38) = uVar12;
  if (*(int *)(param_1 + 0x174) != 0) {
    (*pcVar5)(param_1 + 0x40,param_1 + 0x60);
    *(undefined4 *)(param_1 + 0x174) = 0;
  }
  uVar15 = *(uint *)(param_1 + 0x170);
  uVar8 = *(uint *)(param_1 + 0xc);
  if (uVar15 != 0) {
    if (param_4 == 0) goto LAB_00b430c8;
    puVar13 = param_2;
    puVar14 = param_3;
    uVar12 = param_4;
    do {
      uVar11 = (ulong)uVar15;
      param_2 = (ulong *)((long)puVar13 + 1);
      uVar15 = uVar15 + 1 & 0xf;
      param_4 = uVar12 - 1;
      bVar3 = *(byte *)(param_1 + 0x10 + uVar11) ^ (byte)*puVar13;
      param_3 = (ulong *)((long)puVar14 + 1);
      *(byte *)puVar14 = bVar3;
      *(byte *)(param_1 + 0x40 + uVar11) = *(byte *)(param_1 + 0x40 + uVar11) ^ bVar3;
      if (uVar15 == 0) break;
      bVar10 = uVar12 != 1;
      puVar13 = param_2;
      puVar14 = param_3;
      uVar12 = param_4;
    } while (bVar10);
    if (uVar15 != 0) goto LAB_00b430c8;
    (*pcVar5)(param_1 + 0x40,param_1 + 0x60);
  }
  uVar15 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
  uVar15 = uVar15 >> 0x10 | uVar15 << 0x10;
  if (0xbff < param_4) {
    uVar8 = uVar15 + 1;
    puVar13 = param_3;
    do {
      lVar16 = 0;
      param_3 = puVar13 + 0x180;
      uVar17 = uVar8;
      do {
        puVar14 = (ulong *)((long)puVar13 + lVar16);
        puVar2 = (ulong *)((long)param_2 + lVar16);
        (*pcVar4)(param_1,param_1 + 0x10,uVar6);
        uVar9 = (uVar17 & 0xff00ff00) >> 8 | (uVar17 & 0xff00ff) << 8;
        *(uint *)(param_1 + 0xc) = uVar9 >> 0x10 | uVar9 << 0x10;
        lVar16 = lVar16 + 0x10;
        uVar17 = uVar17 + 1;
        *puVar14 = *(ulong *)(param_1 + 0x10) ^ *puVar2;
        puVar14[1] = *(ulong *)(param_1 + 0x18) ^ puVar2[1];
      } while (lVar16 != 0xc00);
      uVar15 = uVar15 + 0xc0;
      param_2 = param_2 + 0x180;
      (*pcVar7)(param_1 + 0x40,param_1 + 0x60,puVar13,0xc00);
      param_4 = param_4 - 0xc00;
      uVar8 = uVar8 + 0xc0;
      puVar13 = param_3;
    } while (0xbff < param_4);
  }
  uVar12 = param_4 & 0xfffffffffffffff0;
  if (uVar12 != 0) {
    uVar11 = param_4 - 0x10;
    if (0xf < param_4) {
      iVar1 = uVar15 + (int)(uVar11 >> 4);
      lVar16 = (uVar11 & 0xfffffffffffffff0) + 0x10;
      puVar14 = (ulong *)((long)param_3 + lVar16);
      puVar13 = param_2;
      do {
        uVar15 = uVar15 + 1;
        (*pcVar4)(param_1,param_1 + 0x10,uVar6);
        uVar8 = (uVar15 & 0xff00ff00) >> 8 | (uVar15 & 0xff00ff) << 8;
        *(uint *)(param_1 + 0xc) = uVar8 >> 0x10 | uVar8 << 0x10;
        param_4 = param_4 - 0x10;
        *param_3 = *(ulong *)(param_1 + 0x10) ^ *puVar13;
        puVar2 = puVar13 + 1;
        puVar13 = puVar13 + 2;
        param_3[1] = *(ulong *)(param_1 + 0x18) ^ *puVar2;
        param_3 = param_3 + 2;
      } while (0xf < param_4);
      uVar15 = iVar1 + 1;
      param_2 = (ulong *)((long)param_2 + lVar16);
      param_4 = uVar11 - (uVar11 & 0xfffffffffffffff0);
      param_3 = puVar14;
    }
    (*pcVar7)(param_1 + 0x40,param_1 + 0x60,(long)param_3 - uVar12,uVar12);
  }
  if (param_4 == 0) {
    uVar15 = 0;
  }
  else {
    (*pcVar4)(param_1,param_1 + 0x10,uVar6);
    uVar15 = (uVar15 + 1 & 0xff00ff00) >> 8 | (uVar15 + 1 & 0xff00ff) << 8;
    uVar12 = 0;
    *(uint *)(param_1 + 0xc) = uVar15 >> 0x10 | uVar15 << 0x10;
    do {
      uVar11 = uVar12 & 0xffffffff;
      uVar12 = uVar12 + 1;
      bVar3 = *(byte *)(param_1 + 0x10 + uVar11) ^ *(byte *)((long)param_2 + uVar11);
      *(byte *)((long)param_3 + uVar11) = bVar3;
      *(byte *)(param_1 + 0x40 + uVar11) = *(byte *)(param_1 + 0x40 + uVar11) ^ bVar3;
    } while (param_4 != uVar12);
    uVar15 = (uint)param_4;
  }
LAB_00b430c8:
  *(uint *)(param_1 + 0x170) = uVar15;
  return 0;
}

