
void FUN_01091e58(undefined8 param_1,ulong param_2,undefined8 param_3,uint param_4,
                 undefined8 *param_5,undefined8 param_6,uint param_7)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar2 = param_2 & 0xffffffff00000000;
  uVar3 = 0xffffffff;
  if (((((param_4 & 0xff) < 5) && ((param_4 & 1) == 0)) &&
      (uVar3 = 0xffffffff, *(short *)((uVar2 | 7) + (ulong)*(uint *)(param_2 - 1)) == 0x423)) &&
     (uVar1 = *(int *)(param_2 + 0xb) >> 1, uVar3 = param_7,
     (int)uVar1 <= (int)param_7 || 0x7fffffff < param_7)) {
    uVar3 = uVar1;
  }
  FUN_01092348(uVar2,uVar2 | *(uint *)(param_2 + 7),param_3,*param_5,param_4,param_6,uVar3);
  return;
}

