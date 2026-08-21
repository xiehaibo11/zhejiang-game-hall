
long FUN_01346234(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                 undefined4 param_6,undefined8 param_7,long param_8)

{
  undefined2 *puVar1;
  long lVar2;
  long unaff_x26;
  
  *(int *)(param_8 + -1) = (int)*(undefined8 *)(unaff_x26 + 0x2e0);
  *(undefined4 *)(param_8 + 7) = param_6;
  *(undefined4 *)(param_8 + 3) = 7;
  if (param_3 != param_4) {
    lVar2 = 0xb;
    while( true ) {
      puVar1 = (undefined2 *)(param_5 + param_3);
      param_3 = param_3 + 2;
      *(undefined2 *)(param_8 + lVar2) = *puVar1;
      if (param_3 == param_4) break;
      lVar2 = lVar2 + 2;
    }
  }
  return param_8;
}

