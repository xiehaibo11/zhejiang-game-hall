
undefined8 FUN_0109b00c(long param_1,uint param_2,uint param_3)

{
  byte *pbVar1;
  uint *puVar2;
  byte *pbVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  
  lVar4 = *(long *)(param_1 + 0x18);
  uVar5 = 0;
  uVar6 = (*(uint *)(lVar4 + 6) & 0xff00ff00) >> 8 | (*(uint *)(lVar4 + 6) & 0xff00ff) << 8;
  uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
  do {
    uVar7 = uVar6;
    if (uVar7 <= uVar5) {
      return 0xffffffff;
    }
    uVar6 = uVar5 + uVar7 >> 1;
    pbVar1 = (byte *)(lVar4 + 10 + (ulong)(uVar6 * 0xb));
    uVar9 = (uint)*pbVar1 << 0x10 | (uint)pbVar1[1] << 8 | (uint)pbVar1[2];
  } while ((param_3 < uVar9) || (uVar5 = uVar6 + 1, uVar6 = uVar7, uVar9 < param_3));
  uVar8 = (ulong)pbVar1[3] << 0x18 | (ulong)pbVar1[4] << 0x10 | (ulong)pbVar1[5] << 8 |
          (ulong)pbVar1[6];
  if (uVar8 != 0) {
    puVar2 = (uint *)(lVar4 + uVar8);
    uVar6 = *puVar2;
    uVar5 = 0;
    uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
    uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
    while (uVar7 = uVar6, uVar5 < uVar7) {
      uVar6 = uVar7 + uVar5 >> 1;
      pbVar3 = (byte *)((long)puVar2 + (ulong)(uVar6 << 2) + 4);
      uVar9 = (uint)*pbVar3 << 0x10 | (uint)pbVar3[1] << 8 | (uint)pbVar3[2];
      if ((uVar9 <= param_2) && (uVar5 = uVar6 + 1, uVar6 = uVar7, param_2 <= uVar9 + pbVar3[3])) {
        return 1;
      }
    }
  }
  uVar8 = (ulong)pbVar1[7] << 0x18 | (ulong)pbVar1[8] << 0x10 | (ulong)pbVar1[9] << 8 |
          (ulong)pbVar1[10];
  if (uVar8 != 0) {
    puVar2 = (uint *)(lVar4 + uVar8);
    uVar5 = *puVar2;
    uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
    uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
    if (uVar5 != 0) {
      uVar6 = 0;
      do {
        while( true ) {
          uVar7 = uVar6 + uVar5 >> 1;
          pbVar1 = (byte *)((long)puVar2 + (ulong)(uVar7 * 5) + 4);
          uVar9 = (uint)*pbVar1 << 0x10 | (uint)pbVar1[1] << 8 | (uint)pbVar1[2];
          if (param_2 < uVar9) break;
          if (param_2 <= uVar9) {
            if (CONCAT11(pbVar1[3],pbVar1[4]) == 0) {
              return 0xffffffff;
            }
            return 0;
          }
          uVar6 = uVar7 + 1;
          if (uVar5 <= uVar6) {
            return 0xffffffff;
          }
        }
        uVar5 = uVar7;
      } while (uVar6 < uVar7);
    }
  }
  return 0xffffffff;
}

