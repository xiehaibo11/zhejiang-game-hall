
ulong FUN_01074238(long param_1,uint param_2,int *param_3)

{
  byte *pbVar1;
  undefined1 *puVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  uVar6 = *(ulong *)(param_1 + 0x478);
  if (param_2 < uVar6) {
    lVar8 = *(long *)(param_1 + 0x480);
    if (*(short *)(param_1 + 0x186) == 0) {
      puVar2 = (undefined1 *)(lVar8 + (ulong)(param_2 << 1));
      uVar7 = (ulong)CONCAT11(*puVar2,puVar2[1]);
      if (puVar2 + 4 <= (undefined1 *)(lVar8 + uVar6 * 2)) {
        uVar7 = (ulong)CONCAT11(puVar2[2],puVar2[3]);
      }
      uVar4 = (ulong)CONCAT11(*puVar2,puVar2[1]) << 1;
      uVar7 = uVar7 << 1;
    }
    else {
      pbVar1 = (byte *)(lVar8 + (ulong)(param_2 << 2));
      uVar4 = (ulong)*pbVar1 << 0x18 | (ulong)pbVar1[1] << 0x10 | (ulong)pbVar1[2] << 8 |
              (ulong)pbVar1[3];
      uVar7 = uVar4;
      if (pbVar1 + 8 <= (byte *)(lVar8 + uVar6 * 4)) {
        uVar7 = (ulong)pbVar1[4] << 0x18 | (ulong)pbVar1[5] << 0x10 | (ulong)pbVar1[6] << 8 |
                (ulong)pbVar1[7];
      }
    }
    uVar6 = *(ulong *)(param_1 + 0x440);
    if (uVar6 < uVar4) {
      iVar5 = 0;
      uVar4 = 0;
      goto LAB_0107432c;
    }
  }
  else {
    uVar6 = *(ulong *)(param_1 + 0x440);
    uVar7 = 0;
    uVar4 = 0;
  }
  uVar3 = uVar6;
  if (uVar7 <= uVar6) {
    uVar3 = uVar7;
  }
  iVar5 = (int)uVar6;
  if (uVar4 <= uVar3) {
    iVar5 = (int)uVar3;
  }
  iVar5 = iVar5 - (int)uVar4;
LAB_0107432c:
  *param_3 = iVar5;
  return uVar4;
}

