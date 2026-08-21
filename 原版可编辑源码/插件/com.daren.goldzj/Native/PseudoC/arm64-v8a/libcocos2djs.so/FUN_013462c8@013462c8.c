
long FUN_013462c8(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                 undefined4 param_6,undefined8 param_7,long param_8)

{
  undefined1 *puVar1;
  long lVar2;
  long unaff_x26;
  
  *(int *)(param_8 + -1) = (int)*(undefined8 *)(unaff_x26 + 0x100);
  *(undefined4 *)(param_8 + 7) = param_6;
  *(undefined4 *)(param_8 + 3) = 7;
  if (param_3 != param_4) {
    lVar2 = 0xb;
    while( true ) {
      puVar1 = (undefined1 *)(param_5 + param_3);
      param_3 = param_3 + 1;
      *(undefined1 *)(param_8 + lVar2) = *puVar1;
      if (param_3 == param_4) break;
      lVar2 = lVar2 + 1;
    }
  }
  return param_8;
}

