
void FUN_01140144(uint *param_1,uint param_2,uint param_3,undefined8 param_4,uint param_5,
                 uint param_6,uint param_7,uint param_8,void *param_9)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = param_2 - 1;
  uVar3 = param_5 - 1;
  if ((int)param_5 <= (int)param_2) {
    uVar1 = param_5;
    uVar3 = param_2;
  }
  param_1[0xb] = param_2;
  param_1[0xc] = param_3;
  param_1[0xd] = param_5;
  param_1[0xe] = param_6;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)(param_1 + 0x12) = param_4;
  param_1[0x14] = param_7;
  *param_1 = (uint)((int)param_2 < (int)param_5);
  param_1[1] = (uint)((int)param_3 < (int)param_6);
  param_1[2] = param_8;
  param_1[9] = uVar3;
  param_1[10] = uVar1;
  if ((int)param_5 <= (int)param_2) {
    uVar4 = 0;
    if ((long)(int)uVar1 != 0) {
      uVar4 = (uint)(0x100000000 / (ulong)(long)(int)uVar1);
    }
    param_1[3] = uVar4;
  }
  uVar1 = param_3 - ((int)param_3 < (int)param_6);
  uVar4 = param_6 - ((int)param_3 < (int)param_6);
  param_1[7] = uVar1;
  param_1[8] = uVar4;
  if ((int)param_6 <= (int)param_3) {
    uVar2 = 0;
    if ((long)(int)(uVar3 * uVar1) != 0) {
      uVar2 = ((ulong)param_6 << 0x20) / (ulong)(long)(int)(uVar3 * uVar1);
    }
    uVar3 = 0;
    if ((uVar2 & 0xffffffff00000000) == 0) {
      uVar3 = (uint)uVar2;
    }
    param_1[5] = uVar3;
    uVar3 = uVar4;
    uVar4 = uVar1;
  }
  param_1[6] = uVar4;
  param_8 = param_8 * param_5;
  uVar1 = 0;
  if ((long)(int)uVar3 != 0) {
    uVar1 = (uint)(0x100000000 / (ulong)(long)(int)uVar3);
  }
  param_1[4] = uVar1;
  *(void **)(param_1 + 0x16) = param_9;
  *(void **)(param_1 + 0x18) = (void *)((long)param_9 + (long)(int)param_8 * 4);
  memset(param_9,0,
         -(ulong)((param_8 & 0x7fffffff) >> 0x1e) & 0xfffffffc00000000 | (ulong)(param_8 * 2) << 2);
  FUN_01150cc8();
  return;
}

