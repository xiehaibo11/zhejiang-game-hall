
void FUN_00e5ed9c(long *param_1)

{
  byte *pbVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  byte *pbVar16;
  
  uVar10 = *(uint *)(param_1 + 5);
  if (0xfffe < uVar10) {
LAB_00e5efec:
    uVar9 = 0;
    uVar10 = 0xffffffff;
LAB_00e5eff4:
    *(uint *)(param_1 + 5) = uVar10;
    *(uint *)((long)param_1 + 0x2c) = uVar9;
    return;
  }
  lVar11 = *param_1;
  uVar14 = *(uint *)(param_1 + 7);
  uVar12 = *(uint *)((long)param_1 + 0x3c);
  pbVar16 = (byte *)param_1[9];
  uVar13 = *(uint *)(param_1 + 8);
  uVar9 = uVar14;
  if (uVar14 <= uVar10 + 1) {
    uVar9 = uVar10 + 1;
  }
  pbVar1 = (byte *)(*(long *)(lVar11 + 0x330) + *(long *)(lVar11 + 0x338));
  uVar10 = uVar9;
  if (uVar12 < uVar9) goto LAB_00e5eefc;
  do {
    uVar10 = uVar9;
    if (pbVar16 == (byte *)0x0) {
      uVar14 = *(uint *)(lVar11 + 0x20);
      if ((int)(uVar13 + uVar12) < 0) {
        do {
          uVar9 = uVar13 + uVar10 & 0xffff;
          if (uVar14 <= uVar9) break;
          if (uVar9 != 0) goto LAB_00e5eff4;
          uVar10 = uVar10 + 1;
        } while (uVar10 <= uVar12);
      }
      else if ((int)(uVar13 + uVar12) < 0x10000) {
        do {
          uVar9 = uVar10 + uVar13 & 0xffff;
          if (uVar9 < uVar14) {
            uVar6 = uVar10;
            if (uVar9 != 0) goto LAB_00e5eff4;
          }
          else {
            uVar6 = -uVar13;
            if (-1 < (int)(uVar10 + uVar13)) break;
          }
          uVar10 = uVar6 + 1;
        } while (uVar10 <= uVar12);
      }
      else {
        do {
          uVar6 = uVar10 + uVar13;
          uVar9 = uVar6 & 0xffff;
          if (uVar9 < uVar14) {
            uVar7 = uVar10;
            if (uVar9 != 0) goto LAB_00e5eff4;
          }
          else {
            uVar7 = -uVar13;
            if ((-1 < (int)uVar6) && (uVar7 = 0x10000 - uVar13, 0xffff < (int)uVar6)) break;
          }
          uVar10 = uVar7 + 1;
        } while (uVar10 <= uVar12);
      }
    }
    else {
      pbVar16 = pbVar16 + (uVar9 - uVar14) * 2;
      if (pbVar16 <= pbVar1) {
        do {
          if ((CONCAT11(*pbVar16,pbVar16[1]) != 0) &&
             (uVar9 = CONCAT11(*pbVar16,pbVar16[1]) + uVar13 & 0xffff, uVar9 != 0))
          goto LAB_00e5eff4;
          uVar10 = uVar10 + 1;
          pbVar16 = pbVar16 + 2;
        } while (uVar10 <= uVar12);
      }
    }
LAB_00e5eefc:
    do {
      uVar9 = *(uint *)(param_1 + 6);
      uVar12 = *(int *)((long)param_1 + 0x34) + 1;
      if (uVar9 <= uVar12) goto LAB_00e5efec;
      uVar6 = uVar9 * 2;
      uVar15 = (ulong)uVar12;
      uVar8 = uVar15 << 1;
      while( true ) {
        puVar2 = (undefined1 *)(param_1[3] + 0xe + (uVar8 & 0xfffffffe));
        puVar3 = puVar2 + (uVar6 + 2);
        uVar12 = (uint)CONCAT11(*puVar2,puVar2[1]);
        *(uint *)((long)param_1 + 0x3c) = uVar12;
        pbVar4 = puVar3 + uVar6;
        uVar14 = (uint)CONCAT11(*puVar3,puVar3[1]);
        *(uint *)(param_1 + 7) = uVar14;
        pbVar16 = pbVar4 + uVar6;
        uVar13 = (int)(short)((ushort)*pbVar4 << 8) | (uint)pbVar4[1];
        *(uint *)(param_1 + 8) = uVar13;
        uVar5 = CONCAT11(*pbVar16,pbVar16[1]);
        if (((uVar12 == 0xffff) && (uVar9 - 1 <= uVar15)) && (uVar14 == 0xffff)) {
          if (uVar5 == 0) goto LAB_00e5efd4;
          if (pbVar1 < pbVar16 + (ulong)uVar5 + 2) {
            uVar13 = 1;
            pbVar16 = (byte *)0x0;
            *(undefined4 *)(param_1 + 8) = 1;
            goto LAB_00e5edec;
          }
        }
        if (uVar5 != 0xffff) break;
        uVar15 = uVar15 + 1;
        uVar8 = uVar8 + 2;
        if (uVar9 <= uVar15) goto LAB_00e5efec;
      }
      if (uVar5 == 0) {
LAB_00e5efd4:
        pbVar16 = (byte *)0x0;
      }
      else {
        pbVar16 = pbVar16 + uVar5;
      }
LAB_00e5edec:
      param_1[9] = (long)pbVar16;
      *(int *)((long)param_1 + 0x34) = (int)uVar15;
      uVar9 = uVar14;
      if (uVar14 <= uVar10) {
        uVar9 = uVar10;
      }
      uVar10 = uVar9;
    } while (uVar12 < uVar9);
  } while( true );
}

