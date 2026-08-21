
undefined4
FUN_00a6a020(byte *param_1,long param_2,ulong param_3,ulong param_4,undefined8 param_5,
            undefined8 param_6)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  lVar12 = (param_4 + param_2) * 2;
  lVar4 = (*(code *)PTR_malloc_017699f8)(lVar12);
  if (lVar4 == 0) {
    return 0x1b;
  }
  if (param_2 != 0) {
    puVar6 = (undefined1 *)(lVar4 + 1);
    lVar13 = param_2;
    do {
      iVar2 = toupper((uint)*param_1);
      puVar6[-1] = (char)iVar2;
      *puVar6 = 0;
      lVar13 = lVar13 + -1;
      param_1 = param_1 + 1;
      puVar6 = puVar6 + 2;
    } while (lVar13 != 0);
  }
  if (param_4 != 0) {
    uVar5 = param_2 * 2;
    uVar8 = 0;
    if ((0x1f < param_4) && (uVar7 = param_4 & 0xffffffffffffffe0, uVar7 != 0)) {
      uVar11 = param_4 - 1;
      if ((!CARRY8(uVar11 * 2,lVar4 + uVar5)) &&
         ((!CARRY8(uVar11,uVar11) && (!CARRY8(uVar11 * 2,lVar4 + (uVar5 | 1)))))) {
        if ((lVar4 + uVar5 < param_3 + param_4) && (param_3 < lVar4 + uVar5 + param_4 * 2)) {
          uVar8 = 0;
        }
        else {
          puVar9 = (undefined8 *)(param_3 + 0x10);
          puVar6 = (undefined1 *)(lVar4 + uVar5 + 0x20);
          uVar8 = uVar7;
          do {
            uVar15 = puVar9[-1];
            uVar14 = puVar9[-2];
            uVar17 = puVar9[1];
            uVar16 = *puVar9;
            uVar8 = uVar8 - 0x20;
            puVar9 = puVar9 + 4;
            puVar6[-0x20] = (char)uVar14;
            puVar6[-0x1f] = 0;
            puVar6[-0x1e] = (char)((ulong)uVar14 >> 8);
            puVar6[-0x1d] = 0;
            puVar6[-0x1c] = (char)((ulong)uVar14 >> 0x10);
            puVar6[-0x1b] = 0;
            puVar6[-0x1a] = (char)((ulong)uVar14 >> 0x18);
            puVar6[-0x19] = 0;
            puVar6[-0x18] = (char)((ulong)uVar14 >> 0x20);
            puVar6[-0x17] = 0;
            puVar6[-0x16] = (char)((ulong)uVar14 >> 0x28);
            puVar6[-0x15] = 0;
            puVar6[-0x14] = (char)((ulong)uVar14 >> 0x30);
            puVar6[-0x13] = 0;
            puVar6[-0x12] = (char)((ulong)uVar14 >> 0x38);
            puVar6[-0x11] = 0;
            puVar6[-0x10] = (char)uVar15;
            puVar6[-0xf] = 0;
            puVar6[-0xe] = (char)((ulong)uVar15 >> 8);
            puVar6[-0xd] = 0;
            puVar6[-0xc] = (char)((ulong)uVar15 >> 0x10);
            puVar6[-0xb] = 0;
            puVar6[-10] = (char)((ulong)uVar15 >> 0x18);
            puVar6[-9] = 0;
            puVar6[-8] = (char)((ulong)uVar15 >> 0x20);
            puVar6[-7] = 0;
            puVar6[-6] = (char)((ulong)uVar15 >> 0x28);
            puVar6[-5] = 0;
            puVar6[-4] = (char)((ulong)uVar15 >> 0x30);
            puVar6[-3] = 0;
            puVar6[-2] = (char)((ulong)uVar15 >> 0x38);
            puVar6[-1] = 0;
            *puVar6 = (char)uVar16;
            puVar6[1] = 0;
            puVar6[2] = (char)((ulong)uVar16 >> 8);
            puVar6[3] = 0;
            puVar6[4] = (char)((ulong)uVar16 >> 0x10);
            puVar6[5] = 0;
            puVar6[6] = (char)((ulong)uVar16 >> 0x18);
            puVar6[7] = 0;
            puVar6[8] = (char)((ulong)uVar16 >> 0x20);
            puVar6[9] = 0;
            puVar6[10] = (char)((ulong)uVar16 >> 0x28);
            puVar6[0xb] = 0;
            puVar6[0xc] = (char)((ulong)uVar16 >> 0x30);
            puVar6[0xd] = 0;
            puVar6[0xe] = (char)((ulong)uVar16 >> 0x38);
            puVar6[0xf] = 0;
            puVar6[0x10] = (char)uVar17;
            puVar6[0x11] = 0;
            puVar6[0x12] = (char)((ulong)uVar17 >> 8);
            puVar6[0x13] = 0;
            puVar6[0x14] = (char)((ulong)uVar17 >> 0x10);
            puVar6[0x15] = 0;
            puVar6[0x16] = (char)((ulong)uVar17 >> 0x18);
            puVar6[0x17] = 0;
            puVar6[0x18] = (char)((ulong)uVar17 >> 0x20);
            puVar6[0x19] = 0;
            puVar6[0x1a] = (char)((ulong)uVar17 >> 0x28);
            puVar6[0x1b] = 0;
            puVar6[0x1c] = (char)((ulong)uVar17 >> 0x30);
            puVar6[0x1d] = 0;
            puVar6[0x1e] = (char)((ulong)uVar17 >> 0x38);
            puVar6[0x1f] = 0;
            puVar6 = puVar6 + 0x40;
          } while (uVar8 != 0);
          uVar8 = uVar7;
          if (uVar7 == param_4) goto LAB_00a6a18c;
        }
      }
    }
    lVar13 = param_4 - uVar8;
    puVar6 = (undefined1 *)(lVar4 + uVar5 + uVar8 * 2 + 1);
    puVar10 = (undefined1 *)(param_3 + uVar8);
    do {
      uVar1 = *puVar10;
      *puVar6 = 0;
      lVar13 = lVar13 + -1;
      puVar6[-1] = uVar1;
      puVar6 = puVar6 + 2;
      puVar10 = puVar10 + 1;
    } while (lVar13 != 0);
  }
LAB_00a6a18c:
  uVar3 = FUN_00a2c6e0(lVar12);
  lVar12 = FUN_00a697fc(&PTR_MD5_Init_016a4cf0,param_5,0x10);
  if (lVar12 == 0) {
    uVar3 = 0x1b;
  }
  else {
    FUN_00a69990(lVar12,lVar4,uVar3);
    FUN_00a699b0(lVar12,param_6);
    uVar3 = 0;
  }
  (*(code *)PTR_free_01769a00)(lVar4);
  return uVar3;
}

