
undefined8 CRYPTO_gcm128_decrypt(long param_1,ulong *param_2,ulong *param_3,ulong param_4)

{
  int iVar1;
  ulong *puVar2;
  code *pcVar3;
  code *pcVar4;
  undefined8 uVar5;
  code *pcVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  bool bVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong *puVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  
  uVar12 = *(ulong *)(param_1 + 0x38) + param_4;
  if (0xfffffffe0 < uVar12) {
    return 0xffffffff;
  }
  if (CARRY8(*(ulong *)(param_1 + 0x38),param_4)) {
    return 0xffffffff;
  }
  pcVar3 = *(code **)(param_1 + 0x178);
  uVar5 = *(undefined8 *)(param_1 + 0x180);
  pcVar4 = *(code **)(param_1 + 0x160);
  pcVar6 = *(code **)(param_1 + 0x168);
  *(ulong *)(param_1 + 0x38) = uVar12;
  if (*(int *)(param_1 + 0x174) != 0) {
    (*pcVar4)(param_1 + 0x40,param_1 + 0x60);
    *(undefined4 *)(param_1 + 0x174) = 0;
  }
  uVar17 = *(uint *)(param_1 + 0x170);
  uVar7 = *(uint *)(param_1 + 0xc);
  if (uVar17 != 0) {
    if (param_4 == 0) goto LAB_00b433d4;
    puVar14 = param_2;
    puVar15 = param_3;
    uVar12 = param_4;
    do {
      uVar11 = (ulong)uVar17;
      param_2 = (ulong *)((long)puVar14 + 1);
      uVar13 = *puVar14;
      uVar17 = uVar17 + 1 & 0xf;
      param_4 = uVar12 - 1;
      param_3 = (ulong *)((long)puVar15 + 1);
      *(byte *)puVar15 = *(byte *)(param_1 + 0x10 + uVar11) ^ (byte)uVar13;
      *(byte *)(param_1 + 0x40 + uVar11) = *(byte *)(param_1 + 0x40 + uVar11) ^ (byte)uVar13;
      if (uVar17 == 0) break;
      bVar10 = uVar12 != 1;
      puVar14 = param_2;
      puVar15 = param_3;
      uVar12 = param_4;
    } while (bVar10);
    if (uVar17 != 0) goto LAB_00b433d4;
    (*pcVar4)(param_1 + 0x40,param_1 + 0x60);
  }
  uVar17 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
  uVar17 = uVar17 >> 0x10 | uVar17 << 0x10;
  if (0xbff < param_4) {
    uVar7 = uVar17 + 1;
    puVar14 = param_3;
    do {
      (*pcVar6)(param_1 + 0x40,param_1 + 0x60,param_2,0xc00);
      lVar18 = 0;
      param_3 = puVar14 + 0x180;
      uVar16 = uVar7;
      do {
        puVar15 = (ulong *)((long)puVar14 + lVar18);
        puVar2 = (ulong *)((long)param_2 + lVar18);
        (*pcVar3)(param_1,param_1 + 0x10,uVar5);
        uVar9 = (uVar16 & 0xff00ff00) >> 8 | (uVar16 & 0xff00ff) << 8;
        *(uint *)(param_1 + 0xc) = uVar9 >> 0x10 | uVar9 << 0x10;
        lVar18 = lVar18 + 0x10;
        uVar16 = uVar16 + 1;
        *puVar15 = *(ulong *)(param_1 + 0x10) ^ *puVar2;
        puVar15[1] = *(ulong *)(param_1 + 0x18) ^ puVar2[1];
      } while (lVar18 != 0xc00);
      param_4 = param_4 - 0xc00;
      uVar17 = uVar17 + 0xc0;
      param_2 = param_2 + 0x180;
      uVar7 = uVar7 + 0xc0;
      puVar14 = param_3;
    } while (0xbff < param_4);
  }
  puVar14 = param_3;
  if ((param_4 & 0xfffffffffffffff0) != 0) {
    (*pcVar6)(param_1 + 0x40,param_1 + 0x60,param_2);
    uVar12 = param_4 - 0x10;
    if (0xf < param_4) {
      iVar1 = uVar17 + (int)(uVar12 >> 4);
      lVar18 = (uVar12 & 0xfffffffffffffff0) + 0x10;
      puVar14 = (ulong *)((long)param_3 + lVar18);
      puVar15 = param_2;
      do {
        uVar17 = uVar17 + 1;
        (*pcVar3)(param_1,param_1 + 0x10,uVar5);
        uVar7 = (uVar17 & 0xff00ff00) >> 8 | (uVar17 & 0xff00ff) << 8;
        *(uint *)(param_1 + 0xc) = uVar7 >> 0x10 | uVar7 << 0x10;
        param_4 = param_4 - 0x10;
        *param_3 = *(ulong *)(param_1 + 0x10) ^ *puVar15;
        puVar2 = puVar15 + 1;
        puVar15 = puVar15 + 2;
        param_3[1] = *(ulong *)(param_1 + 0x18) ^ *puVar2;
        param_3 = param_3 + 2;
      } while (0xf < param_4);
      uVar17 = iVar1 + 1;
      param_2 = (ulong *)((long)param_2 + lVar18);
      param_4 = uVar12 - (uVar12 & 0xfffffffffffffff0);
    }
  }
  if (param_4 == 0) {
    uVar17 = 0;
  }
  else {
    (*pcVar3)(param_1,param_1 + 0x10,uVar5);
    uVar17 = (uVar17 + 1 & 0xff00ff00) >> 8 | (uVar17 + 1 & 0xff00ff) << 8;
    uVar12 = 0;
    *(uint *)(param_1 + 0xc) = uVar17 >> 0x10 | uVar17 << 0x10;
    do {
      uVar13 = uVar12 & 0xffffffff;
      bVar8 = *(byte *)((long)param_2 + uVar13);
      uVar12 = uVar12 + 1;
      *(byte *)(param_1 + 0x40 + uVar13) = *(byte *)(param_1 + 0x40 + uVar13) ^ bVar8;
      *(byte *)((long)puVar14 + uVar13) = *(byte *)(param_1 + 0x10 + uVar13) ^ bVar8;
    } while (param_4 != uVar12);
    uVar17 = (uint)param_4;
  }
LAB_00b433d4:
  *(uint *)(param_1 + 0x170) = uVar17;
  return 0;
}

