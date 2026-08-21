
uint FUN_00e53bcc(long param_1,long param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  uint uVar11;
  ulong uVar12;
  ushort uVar13;
  ushort uVar14;
  short sVar15;
  ulong uVar16;
  undefined1 *puVar17;
  ulong uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  long lVar23;
  uint local_88;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  
  if (*(ulong *)(param_2 + 0x108) < param_1 + 4U) {
    FUN_00e14b1c(param_2,8);
  }
  uVar16 = (ulong)CONCAT11(*(undefined1 *)(param_1 + 2),*(undefined1 *)(param_1 + 3));
  if (*(ulong *)(param_2 + 0x108) < param_1 + uVar16) {
    if (*(int *)(param_2 + 0x110) != 0) {
      FUN_00e14b1c(param_2,8);
    }
    uVar16 = (ulong)(uint)((int)*(undefined8 *)(param_2 + 0x108) - (int)param_1);
  }
  if ((uint)uVar16 < 0x10) {
    FUN_00e14b1c(param_2,8);
  }
  bVar5 = *(byte *)(param_1 + 7);
  bVar6 = *(byte *)(param_1 + 6);
  uVar13 = CONCAT11(bVar6,bVar5);
  if ((1 < *(uint *)(param_2 + 0x110)) && ((bVar5 & 1) != 0)) {
    FUN_00e14b1c(param_2,8);
  }
  uVar12 = (ulong)bVar5 & 0xfffe | (ulong)bVar6 << 8;
  if ((uint)uVar16 < (int)uVar12 * 4 + 0x10U) {
    FUN_00e14b1c(param_2,8);
  }
  uVar14 = uVar13 >> 1;
  uVar11 = (uint)uVar14;
  if (1 < *(uint *)(param_2 + 0x110)) {
    bVar5 = *(byte *)(param_1 + 9);
    bVar6 = *(byte *)(param_1 + 0xb);
    bVar7 = *(byte *)(param_1 + 0xd);
    bVar8 = *(byte *)(param_1 + 8);
    uVar9 = *(undefined1 *)(param_1 + 0xc);
    if (((bVar7 | bVar5) & 1) != 0) {
      FUN_00e14b1c(param_2,8);
    }
    uVar19 = (uint)(ushort)(CONCAT11(bVar8,bVar5) >> 1);
    if ((((uVar19 != 1 << (ulong)(bVar6 & 0x1f)) || ((bVar5 & 0xfffe | (uint)bVar8 << 8) < uVar11))
        || (uVar11 < uVar19)) || (uVar19 + (ushort)(CONCAT11(uVar9,bVar7) >> 1) != uVar11)) {
      FUN_00e14b1c(param_2,8);
    }
  }
  local_68 = (undefined1 *)(param_1 + 0xe);
  if ((1 < *(uint *)(param_2 + 0x110)) &&
     (CONCAT11(local_68[(int)uVar12 - 2],(local_68 + ((int)uVar12 - 2))[1]) != -1)) {
    FUN_00e14b1c(param_2,8);
  }
  if (uVar14 == 0) {
    local_88 = 0;
  }
  else {
    local_70 = (undefined1 *)(param_1 + uVar12 + 0x10);
    local_78 = local_70 + uVar12;
    puVar1 = local_78 + uVar12;
    uVar19 = 0;
    local_88 = 0;
    lVar23 = param_1 + (ulong)(uVar13 >> 1) * 6 + 0x11;
    puVar17 = puVar1;
    uVar22 = 0;
    uVar20 = 0;
    do {
      uVar3 = (uint)CONCAT11(*local_70,local_70[1]);
      uVar4 = (uint)CONCAT11(*local_68,local_68[1]);
      uVar9 = *local_78;
      uVar10 = local_78[1];
      uVar13 = CONCAT11(*puVar17,puVar17[1]);
      uVar18 = (ulong)uVar13;
      if (uVar4 < uVar3) {
        FUN_00e14b1c(param_2,8);
      }
      if ((uVar19 != 0) && (uVar3 <= uVar22)) {
        if (*(int *)(param_2 + 0x110) == 0) {
          if ((uVar3 < uVar20) || (uVar4 < uVar22)) {
            local_88 = local_88 | 1;
          }
          else {
            local_88 = local_88 | 2;
          }
        }
        else {
          FUN_00e14b1c(param_2,8);
        }
      }
      local_70 = local_70 + 2;
      local_68 = local_68 + 2;
      local_78 = local_78 + 2;
      if (uVar13 != 0) {
        if (uVar13 == 0xffff) {
          if ((((1 < *(uint *)(param_2 + 0x110)) || (uVar19 != uVar11 - 1)) || (uVar3 != 0xffff)) ||
             (uVar4 != 0xffff)) {
            FUN_00e14b1c(param_2,8);
          }
        }
        else {
          puVar2 = puVar17 + uVar18;
          if (*(int *)(param_2 + 0x110) == 0) {
            if ((((uVar19 != uVar11 - 1) || (uVar3 != 0xffff)) || (uVar4 != 0xffff)) &&
               ((puVar2 < puVar1 + uVar12 ||
                (*(undefined1 **)(param_2 + 0x108) < puVar2 + ((uVar4 - uVar3) * 2 + 2)))))
            goto LAB_00e53f5c;
          }
          else if ((puVar2 < puVar1 + uVar12) ||
                  ((undefined1 *)(param_1 + uVar16) < puVar2 + ((uVar4 - uVar3) * 2 + 2))) {
LAB_00e53f5c:
            FUN_00e14b1c(param_2,8);
          }
          if ((*(int *)(param_2 + 0x110) != 0) &&
             (iVar21 = uVar4 - uVar3, uVar3 <= uVar4 && iVar21 != 0)) {
            do {
              sVar15 = CONCAT11(puVar17[uVar18],*(undefined1 *)(lVar23 + uVar18));
              if ((sVar15 != 0) &&
                 (*(uint *)(param_2 + 0x118) <= (uint)(ushort)(sVar15 + CONCAT11(uVar9,uVar10)))) {
                FUN_00e14b1c(param_2,0x10);
              }
              iVar21 = iVar21 + -1;
              uVar18 = uVar18 + 2;
            } while (iVar21 != 0);
          }
        }
      }
      uVar19 = uVar19 + 1;
      lVar23 = lVar23 + 2;
      puVar17 = puVar17 + 2;
      uVar22 = uVar4;
      uVar20 = uVar3;
    } while (uVar19 != uVar11);
  }
  return local_88;
}

