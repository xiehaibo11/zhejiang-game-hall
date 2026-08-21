
void FUN_00e5f000(long *param_1)

{
  ulong uVar1;
  bool bVar2;
  uint uVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  if ((ulong)param_1[6] < 0xffffffff) {
    uVar7 = param_1[8];
    uVar1 = param_1[9];
    if (uVar7 < uVar1) {
      uVar8 = param_1[6] + 1;
      do {
        while( true ) {
          pbVar4 = (byte *)(param_1[3] + 0x14 + uVar7 * 0xc);
          uVar5 = (ulong)pbVar4[-4] << 0x18 | (ulong)pbVar4[-3] << 0x10 | (ulong)pbVar4[-2] << 8 |
                  (ulong)pbVar4[-1];
          uVar10 = (ulong)*pbVar4 << 0x18 | (ulong)pbVar4[1] << 0x10 | (ulong)pbVar4[2] << 8 |
                   (ulong)pbVar4[3];
          uVar9 = uVar5;
          if (uVar5 <= uVar8) {
            uVar9 = uVar8;
          }
          uVar8 = uVar9;
          if (uVar10 < uVar9) break;
          uVar6 = (ulong)pbVar4[4] << 0x18 | (ulong)pbVar4[5] << 0x10 | (ulong)pbVar4[6] << 8 |
                  (ulong)pbVar4[7];
          uVar3 = ((int)uVar6 + (int)uVar9) - (int)uVar5;
          uVar5 = (uVar5 + 0xffffffff) - uVar9;
          do {
            uVar8 = uVar9;
            if (uVar5 < uVar6) goto LAB_00e5f104;
            if (uVar3 != 0) {
              if (uVar3 < *(uint *)(*param_1 + 0x20)) {
                param_1[6] = uVar9;
                *(uint *)(param_1 + 7) = uVar3;
                param_1[8] = uVar7;
                return;
              }
              goto LAB_00e5f104;
            }
            if (0xfffffffe < uVar9) goto LAB_00e5f114;
            uVar8 = uVar9 + 1;
            uVar3 = 1;
            bVar2 = uVar9 < uVar10;
            uVar5 = uVar5 - 1;
            uVar9 = uVar8;
          } while (bVar2);
          uVar7 = uVar7 + 1;
          if (uVar1 <= uVar7) goto LAB_00e5f114;
        }
LAB_00e5f104:
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar1);
    }
  }
LAB_00e5f114:
  *(undefined1 *)(param_1 + 5) = 0;
  return;
}

