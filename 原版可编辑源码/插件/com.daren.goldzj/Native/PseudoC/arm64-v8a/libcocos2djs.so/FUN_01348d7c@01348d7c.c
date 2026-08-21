
long FUN_01348d7c(long param_1,undefined8 param_2,long param_3,undefined4 param_4,ulong param_5,
                 undefined8 param_6,long param_7)

{
  long lVar1;
  ulong uVar2;
  long unaff_x26;
  ulong uVar3;
  
  uVar2 = (param_3 << 0x20) >> 0x21;
  if ((long)param_5 < (long)uVar2) {
    uVar2 = param_5;
  }
  *(int *)(param_7 + -1) = (int)*(undefined8 *)(unaff_x26 + 0xe0);
  *(undefined4 *)(param_7 + 3) = param_4;
  uVar3 = 0;
  while( true ) {
    if (uVar3 == uVar2) {
      while( true ) {
        if (uVar3 == param_5) {
          return param_7;
        }
        if ((ulong)((long)((ulong)*(uint *)(param_7 + 3) << 0x20) >> 0x21) <= uVar3) break;
        *(int *)(param_7 + uVar3 * 4 + 7) =
             (int)*(undefined8 *)(param_1 + ((param_5 + 1) - uVar3) * 8);
        uVar3 = uVar3 + 1;
      }
      lVar1 = FUN_01348e98();
      return lVar1;
    }
    if ((ulong)((long)((ulong)*(uint *)(param_7 + 3) << 0x20) >> 0x21) <= uVar3) break;
    *(int *)(param_7 + uVar3 * 4 + 7) = (int)*(undefined8 *)(unaff_x26 + 0xa8);
    uVar3 = uVar3 + 1;
  }
  lVar1 = FUN_01348e90();
  return lVar1;
}

