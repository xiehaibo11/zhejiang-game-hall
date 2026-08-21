
void FUN_00c18cc4(undefined8 *param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 extraout_x1;
  code *pcVar5;
  undefined8 extraout_d0;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar1 = *(uint *)(param_1 + 1);
  pcVar5 = (code *)*param_1;
  uVar3 = (ulong)*(byte *)((long)param_1 + 0xc);
  while (uVar2 = uVar3 - 1, -1 < (long)uVar2) {
    *(undefined8 *)(&stack0xffffffffffffffe0 + (uVar2 * 8 - (ulong)uVar1)) = param_1[uVar3 + 0x12];
    uVar3 = uVar2;
  }
  uVar6 = param_1[4];
  uVar7 = param_1[5];
  uVar8 = param_1[6];
  uVar4 = (*pcVar5)(param_1[2],param_1[3],param_1[0xb],param_1[0xc],param_1[0xd],param_1[0xe],
                    param_1[0xf],param_1[0x10],param_1[0x11],param_1[0x12]);
  param_1[0xb] = uVar4;
  param_1[0xc] = extraout_x1;
  param_1[3] = extraout_d0;
  param_1[4] = uVar6;
  param_1[5] = uVar7;
  param_1[6] = uVar8;
  return;
}

