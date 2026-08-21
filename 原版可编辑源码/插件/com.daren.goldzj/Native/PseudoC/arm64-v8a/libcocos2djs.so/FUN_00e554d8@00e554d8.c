
uint * FUN_00e554d8(long param_1,undefined8 param_2,uint param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint *puVar7;
  byte *pbVar8;
  undefined1 *puVar9;
  byte bVar10;
  uint uVar11;
  uint *puVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  long lVar20;
  int local_34;
  
  iVar19 = *(int *)(param_1 + 0x28);
  lVar20 = *(long *)(param_1 + 0x18);
  uVar14 = iVar19 + 1;
  local_34 = 0;
  if (*(uint *)(param_1 + 0x30) < uVar14) {
    *(undefined8 *)(param_1 + 0x40) = param_2;
    puVar12 = (uint *)FUN_00e13bcc(param_2,4,*(uint *)(param_1 + 0x30),uVar14,
                                   *(undefined8 *)(param_1 + 0x38),&local_34);
    *(uint **)(param_1 + 0x38) = puVar12;
    if (local_34 != 0) {
      return (uint *)0x0;
    }
    *(uint *)(param_1 + 0x30) = uVar14;
  }
  else {
    puVar12 = *(uint **)(param_1 + 0x38);
  }
  puVar16 = puVar12;
  if (iVar19 != 0) {
    pbVar17 = (byte *)(lVar20 + 10);
    do {
      bVar10 = *pbVar17;
      pbVar1 = pbVar17 + 1;
      pbVar2 = pbVar17 + 2;
      pbVar3 = pbVar17 + 7;
      pbVar4 = pbVar17 + 8;
      pbVar5 = pbVar17 + 9;
      pbVar6 = pbVar17 + 10;
      uVar13 = (ulong)pbVar17[3] << 0x18 | (ulong)pbVar17[4] << 0x10 | (ulong)pbVar17[5] << 8 |
               (ulong)pbVar17[6];
      pbVar17 = pbVar17 + 0xb;
      if (uVar13 == 0) {
LAB_00e5561c:
        uVar13 = (ulong)*pbVar3 << 0x18 | (ulong)*pbVar4 << 0x10 | (ulong)*pbVar5 << 8 |
                 (ulong)*pbVar6;
        if (uVar13 != 0) {
          puVar7 = (uint *)(*(long *)(param_1 + 0x18) + uVar13);
          uVar14 = *puVar7;
          uVar14 = (uVar14 & 0xff00ff00) >> 8 | (uVar14 & 0xff00ff) << 8;
          uVar14 = uVar14 >> 0x10 | uVar14 << 0x10;
          if (uVar14 != 0) {
            uVar18 = 0;
            do {
              uVar11 = uVar14 + uVar18 >> 1;
              puVar9 = (undefined1 *)((long)puVar7 + (ulong)(uVar11 * 5) + 7);
              uVar15 = (uint)(byte)puVar9[-3] << 0x10 | (uint)(byte)puVar9[-2] << 8 |
                       (uint)(byte)puVar9[-1];
              if (uVar15 <= param_3) {
                if (param_3 <= uVar15) {
                  if (CONCAT11(*puVar9,puVar9[1]) != 0) goto LAB_00e556a8;
                  break;
                }
                uVar18 = uVar11 + 1;
                uVar11 = uVar14;
              }
              uVar14 = uVar11;
            } while (uVar18 < uVar14);
          }
        }
      }
      else {
        uVar14 = 0;
        puVar7 = (uint *)(*(long *)(param_1 + 0x18) + uVar13);
        uVar18 = *puVar7;
        uVar18 = (uVar18 & 0xff00ff00) >> 8 | (uVar18 & 0xff00ff) << 8;
        uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
        do {
          uVar11 = uVar18;
          if (uVar11 <= uVar14) goto LAB_00e5561c;
          uVar18 = uVar11 + uVar14 >> 1;
          pbVar8 = (byte *)((long)puVar7 + (ulong)(uVar18 << 2) + 7);
          uVar15 = (uint)pbVar8[-3] << 0x10 | (uint)pbVar8[-2] << 8 | (uint)pbVar8[-1];
        } while ((param_3 < uVar15) ||
                (uVar14 = uVar18 + 1, uVar18 = uVar11, uVar15 + *pbVar8 < param_3));
LAB_00e556a8:
        *puVar16 = (uint)bVar10 << 0x10 | (uint)*pbVar1 << 8 | (uint)*pbVar2;
        puVar16 = puVar16 + 1;
      }
      iVar19 = iVar19 + -1;
    } while (iVar19 != 0);
  }
  *puVar16 = 0;
  return puVar12;
}

