
uint * FUN_0109b280(long param_1,undefined8 param_2,uint param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint *puVar7;
  byte *pbVar8;
  byte bVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  byte *pbVar15;
  uint uVar16;
  ulong uVar17;
  int iVar18;
  long lVar19;
  int local_34;
  
  iVar18 = *(int *)(param_1 + 0x28);
  lVar19 = *(long *)(param_1 + 0x18);
  uVar12 = iVar18 + 1;
  local_34 = 0;
  if (*(uint *)(param_1 + 0x30) < uVar12) {
    *(undefined8 *)(param_1 + 0x40) = param_2;
    puVar11 = (uint *)ft_mem_realloc(param_2,4,*(uint *)(param_1 + 0x30),uVar12,
                                     *(undefined8 *)(param_1 + 0x38),&local_34);
    *(uint **)(param_1 + 0x38) = puVar11;
    if (local_34 != 0) {
      return (uint *)0x0;
    }
    *(uint *)(param_1 + 0x30) = uVar12;
  }
  else {
    puVar11 = *(uint **)(param_1 + 0x38);
  }
  puVar14 = puVar11;
  if (iVar18 != 0) {
    pbVar15 = (byte *)(lVar19 + 10);
    do {
      bVar9 = *pbVar15;
      pbVar1 = pbVar15 + 1;
      pbVar2 = pbVar15 + 2;
      pbVar3 = pbVar15 + 7;
      pbVar4 = pbVar15 + 8;
      pbVar5 = pbVar15 + 9;
      pbVar6 = pbVar15 + 10;
      uVar17 = (ulong)pbVar15[3] << 0x18 | (ulong)pbVar15[4] << 0x10 | (ulong)pbVar15[5] << 8 |
               (ulong)pbVar15[6];
      pbVar15 = pbVar15 + 0xb;
      if (uVar17 == 0) {
LAB_0109b3c4:
        uVar17 = (ulong)*pbVar3 << 0x18 | (ulong)*pbVar4 << 0x10 | (ulong)*pbVar5 << 8 |
                 (ulong)*pbVar6;
        if (uVar17 != 0) {
          puVar7 = (uint *)(*(long *)(param_1 + 0x18) + uVar17);
          uVar12 = *puVar7;
          uVar12 = (uVar12 & 0xff00ff00) >> 8 | (uVar12 & 0xff00ff) << 8;
          uVar12 = uVar12 >> 0x10 | uVar12 << 0x10;
          if (uVar12 != 0) {
            uVar16 = 0;
            do {
              while( true ) {
                uVar10 = uVar16 + uVar12 >> 1;
                pbVar3 = (byte *)((long)puVar7 + (ulong)(uVar10 * 5) + 4);
                uVar13 = (uint)*pbVar3 << 0x10 | (uint)pbVar3[1] << 8 | (uint)pbVar3[2];
                if (param_3 < uVar13) break;
                if (param_3 <= uVar13) {
                  if (CONCAT11(pbVar3[3],pbVar3[4]) != 0) goto LAB_0109b454;
                  goto LAB_0109b464;
                }
                uVar16 = uVar10 + 1;
                if (uVar12 <= uVar16) goto LAB_0109b464;
              }
              uVar12 = uVar10;
            } while (uVar16 < uVar10);
          }
        }
      }
      else {
        uVar12 = 0;
        puVar7 = (uint *)(*(long *)(param_1 + 0x18) + uVar17);
        uVar16 = *puVar7;
        uVar16 = (uVar16 & 0xff00ff00) >> 8 | (uVar16 & 0xff00ff) << 8;
        uVar16 = uVar16 >> 0x10 | uVar16 << 0x10;
        do {
          uVar10 = uVar16;
          if (uVar10 <= uVar12) goto LAB_0109b3c4;
          uVar16 = uVar10 + uVar12 >> 1;
          pbVar8 = (byte *)((long)puVar7 + (ulong)(uVar16 << 2) + 4);
          uVar13 = (uint)*pbVar8 << 0x10 | (uint)pbVar8[1] << 8 | (uint)pbVar8[2];
        } while ((param_3 < uVar13) ||
                (uVar12 = uVar16 + 1, uVar16 = uVar10, uVar13 + pbVar8[3] < param_3));
LAB_0109b454:
        *puVar14 = (uint)bVar9 << 0x10 | (uint)*pbVar1 << 8 | (uint)*pbVar2;
        puVar14 = puVar14 + 1;
      }
LAB_0109b464:
      iVar18 = iVar18 + -1;
    } while (iVar18 != 0);
  }
  *puVar14 = 0;
  return puVar11;
}

