
undefined8 FUN_00e5526c(long param_1,uint param_2,uint param_3)

{
  byte *pbVar1;
  uint *puVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  
  lVar5 = *(long *)(param_1 + 0x18);
  uVar6 = 0;
  uVar7 = (*(uint *)(lVar5 + 6) & 0xff00ff00) >> 8 | (*(uint *)(lVar5 + 6) & 0xff00ff) << 8;
  uVar7 = uVar7 >> 0x10 | uVar7 << 0x10;
  do {
    uVar8 = uVar7;
    if (uVar8 <= uVar6) {
      return 0xffffffff;
    }
    uVar7 = uVar6 + uVar8 >> 1;
    pbVar1 = (byte *)(lVar5 + 0xd + (ulong)(uVar7 * 0xb));
    uVar10 = (uint)pbVar1[-3] << 0x10 | (uint)pbVar1[-2] << 8 | (uint)pbVar1[-1];
  } while ((param_3 < uVar10) || (uVar6 = uVar7 + 1, uVar7 = uVar8, uVar10 < param_3));
  uVar9 = (ulong)*pbVar1 << 0x18 | (ulong)pbVar1[1] << 0x10 | (ulong)pbVar1[2] << 8 |
          (ulong)pbVar1[3];
  if (uVar9 != 0) {
    puVar2 = (uint *)(lVar5 + uVar9);
    uVar7 = *puVar2;
    uVar6 = 0;
    uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
    uVar7 = uVar7 >> 0x10 | uVar7 << 0x10;
    while (uVar8 = uVar7, uVar6 < uVar8) {
      uVar7 = uVar8 + uVar6 >> 1;
      pbVar3 = (byte *)((long)puVar2 + (ulong)(uVar7 << 2) + 7);
      uVar10 = (uint)pbVar3[-3] << 0x10 | (uint)pbVar3[-2] << 8 | (uint)pbVar3[-1];
      if ((uVar10 <= param_2) && (uVar6 = uVar7 + 1, uVar7 = uVar8, param_2 <= uVar10 + *pbVar3)) {
        return 1;
      }
    }
  }
  uVar9 = (ulong)pbVar1[4] << 0x18 | (ulong)pbVar1[5] << 0x10 | (ulong)pbVar1[6] << 8 |
          (ulong)pbVar1[7];
  if (uVar9 != 0) {
    puVar2 = (uint *)(lVar5 + uVar9);
    uVar6 = *puVar2;
    uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
    uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
    if (uVar6 != 0) {
      uVar7 = 0;
      do {
        uVar8 = uVar6 + uVar7 >> 1;
        puVar4 = (undefined1 *)((long)puVar2 + (ulong)(uVar8 * 5) + 7);
        uVar10 = (uint)(byte)puVar4[-3] << 0x10 | (uint)(byte)puVar4[-2] << 8 |
                 (uint)(byte)puVar4[-1];
        if (uVar10 <= param_2) {
          if (param_2 <= uVar10) {
            if (CONCAT11(*puVar4,puVar4[1]) == 0) {
              return 0xffffffff;
            }
            return 0;
          }
          uVar7 = uVar8 + 1;
          uVar8 = uVar6;
        }
        uVar6 = uVar8;
      } while (uVar7 < uVar6);
    }
  }
  return 0xffffffff;
}

