
void FUN_00bfbafc(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  uVar16 = *param_1;
  uVar1 = *(uint *)(param_1 + 2);
  uVar2 = *(uint *)((long)param_1 + 0x14);
  uVar3 = *(uint *)(param_1 + 3);
  uVar4 = *(uint *)((long)param_1 + 0x1c);
  uVar15 = param_1[4];
  uVar14 = param_1[1];
  uVar13 = param_1[6];
  iVar5 = *(int *)(param_1 + 7);
  uVar12 = param_1[8];
  uVar11 = param_1[9];
  uVar10 = param_1[10];
  uVar9 = param_1[0xb];
  uVar8 = param_1[0xc];
  uVar7 = param_1[0xd];
  uVar6 = param_1[0xe];
  param_2[0x11] = uVar6;
  *param_2 = uVar16;
  param_2[1] = (ulong)uVar1;
  param_2[2] = (ulong)uVar2;
  param_2[3] = (ulong)uVar3;
  param_2[4] = (ulong)uVar4;
  param_2[5] = uVar15;
  param_2[6] = uVar14;
  param_2[7] = uVar13;
  param_2[8] = (long)iVar5;
  param_2[9] = uVar12;
  param_2[0xc] = uVar11;
  param_2[0xd] = uVar10;
  param_2[0xe] = uVar9;
  param_2[0xf] = uVar8;
  param_2[0x10] = uVar7;
  param_2[0x12] = uVar7;
  param_2[0x13] = uVar6;
  param_2[10] = 0;
  param_2[0xb] = 0;
  return;
}

