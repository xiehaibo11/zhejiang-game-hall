
undefined1  [16]
FUN_01348b98(long param_1,ulong param_2,undefined8 param_3,long param_4,undefined8 param_5,
            int param_6,long param_7,ulong param_8)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x26;
  undefined1 auVar3 [16];
  
  *(int *)(param_8 - 1) = (int)*(undefined8 *)(unaff_x26 + 0xe0);
  *(int *)(param_8 + 3) = param_6 * 2;
  param_1 = param_1 + 7;
  lVar1 = param_7 * 4 + 7;
  if (param_1 != lVar1) {
    uVar2 = *(undefined8 *)(unaff_x26 + 0xa8);
    do {
      param_1 = param_1 + -4;
      *(int *)(param_8 + param_1) = (int)uVar2;
    } while (param_1 != lVar1);
  }
  while (lVar1 != 7) {
    lVar1 = lVar1 + -4;
    *(undefined4 *)(param_8 + lVar1) = *(undefined4 *)(param_4 + lVar1);
  }
  *(int *)(param_2 + 7) = (int)param_8;
  if (((((uint)*(undefined8 *)((param_2 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
      ((param_8 & 1) != 0)) &&
     (param_8 = unaff_x26 + (param_8 & 0xffffffff),
     ((uint)*(undefined8 *)((param_8 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
    FUN_0133eb00(param_2,param_2 + 7,0,2);
  }
  auVar3._8_8_ = param_3;
  auVar3._0_8_ = param_8;
  return auVar3;
}

