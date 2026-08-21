
undefined8 FUN_00e53864(long param_1,long param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  byte bVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  uint uVar10;
  ushort uVar11;
  undefined1 *puVar12;
  uint uVar13;
  long lVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  uint uVar17;
  
  if (*(ulong *)(param_2 + 0x108) < param_1 + 4U) {
    FUN_00e14b1c(param_2,8);
  }
  uVar11 = CONCAT11(*(undefined1 *)(param_1 + 2),*(undefined1 *)(param_1 + 3));
  puVar1 = (undefined1 *)(param_1 + (ulong)uVar11);
  if ((uVar11 < 0x206) || (*(undefined1 **)(param_2 + 0x108) < puVar1)) {
    FUN_00e14b1c(param_2,8);
  }
  lVar14 = 0;
  uVar13 = 0;
  do {
    puVar15 = (undefined1 *)(param_1 + 6 + lVar14);
    uVar3 = *puVar15;
    bVar4 = puVar15[1];
    if ((1 < *(uint *)(param_2 + 0x110)) && ((bVar4 & 7) != 0)) {
      FUN_00e14b1c(param_2,8);
    }
    uVar10 = (uint)(ushort)(CONCAT11(uVar3,bVar4) >> 3);
    lVar14 = lVar14 + 2;
    if (uVar10 <= uVar13) {
      uVar10 = uVar13;
    }
    uVar13 = uVar10;
  } while ((int)lVar14 != 0x200);
  puVar15 = (undefined1 *)(param_1 + 0x206);
  puVar2 = puVar15 + (uVar10 * 8 + 8);
  if (*(undefined1 **)(param_2 + 0x108) < puVar2) {
    FUN_00e14b1c(param_2,8);
  }
  uVar13 = 0;
  do {
    uVar5 = puVar15[2];
    uVar6 = puVar15[3];
    uVar7 = puVar15[4];
    uVar8 = puVar15[5];
    puVar12 = puVar15 + 6;
    uVar3 = *puVar12;
    puVar16 = puVar15 + 8;
    uVar17 = (uint)CONCAT11(uVar5,uVar6);
    if (uVar17 != 0) {
      uVar9 = puVar15[7];
      if ((1 < *(uint *)(param_2 + 0x110)) &&
         ((0xff < CONCAT11(*puVar15,puVar15[1]) || (0x100 - CONCAT11(*puVar15,puVar15[1]) < uVar17))
         )) {
        FUN_00e14b1c(param_2,8);
      }
      if (CONCAT11(uVar3,uVar9) != 0) {
        if ((puVar12 + CONCAT11(uVar3,uVar9) < puVar2) ||
           (puVar1 < puVar12 + CONCAT11(uVar3,uVar9) + (ulong)CONCAT11(uVar5,uVar6) * 2)) {
          FUN_00e14b1c(param_2,9);
        }
        if (*(int *)(param_2 + 0x110) != 0) {
          do {
            uVar3 = *puVar16;
            puVar12 = puVar16 + 1;
            puVar16 = puVar16 + 2;
            if ((CONCAT11(uVar3,*puVar12) != 0) &&
               (*(uint *)(param_2 + 0x118) <=
                (uint)(ushort)(CONCAT11(uVar3,*puVar12) + CONCAT11(uVar7,uVar8)))) {
              FUN_00e14b1c(param_2,0x10);
            }
          } while (puVar16 < puVar15 + (uVar17 * 2 + 8));
        }
      }
    }
    puVar15 = puVar16;
    uVar13 = uVar13 + 1;
  } while (uVar13 <= uVar10);
  return 0;
}

