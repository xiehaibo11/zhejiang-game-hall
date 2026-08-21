
void ecp_nistz256_scatter_w5(long param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  param_1 = param_1 + param_3 * 4;
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar2 = param_2[2];
  uVar4 = param_2[3];
  *(int *)(param_1 + -4) = (int)uVar1;
  *(int *)(param_1 + 0x3c) = (int)uVar3;
  *(int *)(param_1 + 0x7c) = (int)uVar2;
  *(int *)(param_1 + 0xbc) = (int)uVar4;
  *(int *)(param_1 + 0xfc) = (int)((ulong)uVar1 >> 0x20);
  *(int *)(param_1 + 0x13c) = (int)((ulong)uVar3 >> 0x20);
  *(int *)(param_1 + 0x17c) = (int)((ulong)uVar2 >> 0x20);
  *(int *)(param_1 + 0x1bc) = (int)((ulong)uVar4 >> 0x20);
  uVar1 = param_2[4];
  uVar3 = param_2[5];
  uVar2 = param_2[6];
  uVar4 = param_2[7];
  *(int *)(param_1 + 0x1fc) = (int)uVar1;
  *(int *)(param_1 + 0x23c) = (int)uVar3;
  *(int *)(param_1 + 0x27c) = (int)uVar2;
  *(int *)(param_1 + 700) = (int)uVar4;
  *(int *)(param_1 + 0x2fc) = (int)((ulong)uVar1 >> 0x20);
  *(int *)(param_1 + 0x33c) = (int)((ulong)uVar3 >> 0x20);
  *(int *)(param_1 + 0x37c) = (int)((ulong)uVar2 >> 0x20);
  *(int *)(param_1 + 0x3bc) = (int)((ulong)uVar4 >> 0x20);
  uVar1 = param_2[8];
  uVar3 = param_2[9];
  uVar2 = param_2[10];
  uVar4 = param_2[0xb];
  *(int *)(param_1 + 0x3fc) = (int)uVar1;
  *(int *)(param_1 + 0x43c) = (int)uVar3;
  *(int *)(param_1 + 0x47c) = (int)uVar2;
  *(int *)(param_1 + 0x4bc) = (int)uVar4;
  *(int *)(param_1 + 0x4fc) = (int)((ulong)uVar1 >> 0x20);
  *(int *)(param_1 + 0x53c) = (int)((ulong)uVar3 >> 0x20);
  *(int *)(param_1 + 0x57c) = (int)((ulong)uVar2 >> 0x20);
  *(int *)(param_1 + 0x5bc) = (int)((ulong)uVar4 >> 0x20);
  return;
}

