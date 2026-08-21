
ulong FUN_00e31c8c(long param_1,uint param_2,int *param_3)

{
  byte *pbVar1;
  undefined1 *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar4 = *(ulong *)(param_1 + 0x4f0);
  if (uVar4 <= param_2) {
    *param_3 = 0;
    return 0;
  }
  lVar5 = *(long *)(param_1 + 0x4f8);
  if (*(short *)(param_1 + 0x186) == 0) {
    puVar2 = (undefined1 *)(lVar5 + (ulong)(param_2 << 1));
    uVar6 = (ulong)CONCAT11(*puVar2,puVar2[1]);
    if (puVar2 + 4 <= (undefined1 *)(lVar5 + uVar4 * 2)) {
      uVar6 = (ulong)CONCAT11(puVar2[2],puVar2[3]);
    }
    uVar3 = (ulong)CONCAT11(*puVar2,puVar2[1]) * 2;
    uVar6 = uVar6 << 1;
    uVar7 = *(ulong *)(param_1 + 0x4a8);
    if (uVar7 <= uVar3 && uVar3 - uVar7 != 0) goto LAB_00e31db0;
  }
  else {
    pbVar1 = (byte *)(lVar5 + (ulong)(param_2 << 2));
    uVar3 = (ulong)*pbVar1 << 0x18 | (ulong)pbVar1[1] << 0x10 | (ulong)pbVar1[2] << 8 |
            (ulong)pbVar1[3];
    if ((byte *)(lVar5 + uVar4 * 4) < pbVar1 + 8) {
      uVar7 = *(ulong *)(param_1 + 0x4a8);
      uVar6 = uVar3;
    }
    else {
      uVar7 = *(ulong *)(param_1 + 0x4a8);
      uVar6 = (ulong)pbVar1[4] << 0x18 | (ulong)pbVar1[5] << 0x10 | (ulong)pbVar1[6] << 8 |
              (ulong)pbVar1[7];
    }
    if (uVar7 < uVar3) goto LAB_00e31db0;
  }
  if ((uVar6 <= uVar7) || (uVar6 = uVar7, uVar4 - 2 == (ulong)param_2)) {
    if (uVar3 <= uVar6) {
      uVar7 = uVar6;
    }
    *param_3 = (int)uVar7 - (int)uVar3;
    return uVar3;
  }
LAB_00e31db0:
  *param_3 = 0;
  return 0;
}

