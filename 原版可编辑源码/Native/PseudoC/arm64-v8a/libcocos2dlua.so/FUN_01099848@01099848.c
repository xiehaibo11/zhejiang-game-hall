
undefined8 FUN_01099848(long param_1,long param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined1 uVar4;
  byte bVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  uint uVar11;
  undefined1 *puVar12;
  uint uVar13;
  long lVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  
  if (*(ulong *)(param_2 + 0x108) < param_1 + 4U) {
    ft_validator_error(param_2,8);
  }
  uVar13 = (uint)CONCAT11(*(undefined1 *)(param_1 + 2),*(undefined1 *)(param_1 + 3));
  puVar1 = (undefined1 *)(param_1 + (ulong)uVar13);
  if ((uVar13 < 0x206) || (*(undefined1 **)(param_2 + 0x108) < puVar1)) {
    ft_validator_error(param_2,8);
  }
  lVar14 = 0;
  uVar13 = 0;
  do {
    puVar15 = (undefined1 *)(param_1 + 6 + lVar14);
    uVar4 = *puVar15;
    bVar5 = puVar15[1];
    if ((1 < *(uint *)(param_2 + 0x110)) && ((bVar5 & 7) != 0)) {
      ft_validator_error(param_2,8);
    }
    uVar11 = (uint)(ushort)(CONCAT11(uVar4,bVar5) >> 3);
    lVar14 = lVar14 + 2;
    if (uVar11 <= uVar13) {
      uVar11 = uVar13;
    }
    uVar13 = uVar11;
  } while ((int)lVar14 != 0x200);
  puVar15 = (undefined1 *)(param_1 + 0x206);
  puVar2 = puVar15 + (uVar11 * 8 + 8);
  if (*(undefined1 **)(param_2 + 0x108) < puVar2) {
    ft_validator_error(param_2,8);
  }
  uVar13 = 0;
  do {
    uVar6 = puVar15[2];
    uVar7 = puVar15[3];
    uVar8 = puVar15[4];
    uVar9 = puVar15[5];
    puVar12 = puVar15 + 6;
    uVar4 = *puVar12;
    uVar3 = (uint)CONCAT11(uVar6,uVar7);
    puVar16 = puVar15 + 8;
    if (uVar3 != 0) {
      uVar10 = puVar15[7];
      if ((1 < *(uint *)(param_2 + 0x110)) &&
         ((0xff < CONCAT11(*puVar15,puVar15[1]) || (0x100 < uVar3 + CONCAT11(*puVar15,puVar15[1]))))
         ) {
        ft_validator_error(param_2,8);
      }
      if (CONCAT11(uVar4,uVar10) != 0) {
        if ((puVar12 + (uint)CONCAT11(uVar4,uVar10) < puVar2) ||
           (puVar1 < puVar12 + (uint)CONCAT11(uVar4,uVar10) + (ulong)CONCAT11(uVar6,uVar7) * 2)) {
          ft_validator_error(param_2,9);
        }
        if (*(int *)(param_2 + 0x110) != 0) {
          do {
            uVar4 = *puVar16;
            puVar12 = puVar16 + 1;
            puVar16 = puVar16 + 2;
            if ((CONCAT11(uVar4,*puVar12) != 0) &&
               (*(uint *)(param_2 + 0x118) <=
                (uint)(ushort)(CONCAT11(uVar4,*puVar12) + CONCAT11(uVar8,uVar9)))) {
              ft_validator_error(param_2,0x10);
            }
          } while (puVar16 < puVar15 + (uVar3 * 2 + 8));
        }
      }
    }
    puVar15 = puVar16;
    uVar13 = uVar13 + 1;
  } while (uVar13 <= uVar11);
  return 0;
}

