
long FUN_0136e8b4(undefined8 param_1,undefined8 param_2,int param_3,undefined4 param_4,
                 undefined4 param_5,long param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x26;
  
  *(undefined4 *)(param_8 + -1) = param_4;
  *(undefined4 *)(param_8 + 0xb) = param_5;
  *(int *)(param_8 + 3) = (int)*(undefined8 *)(unaff_x26 + 0x168);
  *(int *)(param_8 + 7) = (int)(param_8 + 0x10);
  *(int *)(param_8 + 0xf) = (int)*(undefined8 *)(unaff_x26 + 0xe0);
  *(int *)(param_8 + 0x13) = param_3 * 2;
  lVar1 = param_6 * 4 + 7;
  if (lVar1 != 7) {
    uVar2 = *(undefined8 *)(unaff_x26 + 0xa8);
    do {
      lVar1 = lVar1 + -4;
      *(int *)(param_8 + 0x10 + lVar1) = (int)uVar2;
    } while (lVar1 != 7);
  }
  return param_8;
}

