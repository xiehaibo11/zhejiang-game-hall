
void FUN_00e38ba4(undefined8 param_1,uint param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long local_70 [4];
  
  if (3 < param_2) {
    param_2 = 4;
  }
  if (param_2 != 0) {
    uVar3 = 0;
    do {
      lVar2 = FT_RoundFix(*(undefined8 *)(param_3 + uVar3 * 8));
      uVar1 = uVar3 + 1;
      local_70[uVar3] = lVar2 >> 0x10;
      uVar3 = uVar1;
    } while (uVar1 < param_2);
  }
  FUN_00e383b4(param_1,param_2,local_70);
  return;
}

