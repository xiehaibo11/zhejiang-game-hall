
uint FUN_0115f344(ulong *param_1,int param_2)

{
  bool bVar1;
  byte *pbVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  
  if ((param_2 < 0x19) && (*(int *)((long)param_1 + 0x24) == 0)) {
    uVar4 = *param_1;
    uVar3 = (uint)param_1[4];
    uVar5 = uVar3 + param_2;
    uVar3 = *(uint *)(&DAT_01499940 + (long)param_2 * 4) & (uint)(uVar4 >> (uVar3 & 0x3f));
    *(uint *)(param_1 + 4) = uVar5;
    if ((int)uVar5 < 8) {
      return uVar3;
    }
    uVar6 = param_1[3];
    do {
      uVar7 = uVar5;
      if (param_1[2] <= uVar6) break;
      *param_1 = uVar4 >> 8;
      uVar7 = uVar5 - 8;
      pbVar2 = (byte *)(param_1[1] + uVar6);
      uVar6 = uVar6 + 1;
      uVar4 = uVar4 >> 8 | (ulong)*pbVar2 << 0x38;
      param_1[3] = uVar6;
      *param_1 = uVar4;
      *(uint *)(param_1 + 4) = uVar7;
      bVar1 = 0xf < (int)uVar5;
      uVar5 = uVar7;
    } while (bVar1);
    if ((int)uVar7 < 0x41) {
      return uVar3;
    }
    if (param_1[3] != param_1[2]) {
      return uVar3;
    }
    *(undefined4 *)((long)param_1 + 0x24) = 1;
  }
  else {
    uVar3 = 0;
    *(undefined4 *)((long)param_1 + 0x24) = 1;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return uVar3;
}

