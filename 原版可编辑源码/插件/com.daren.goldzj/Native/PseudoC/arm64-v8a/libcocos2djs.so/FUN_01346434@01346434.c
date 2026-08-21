
long FUN_01346434(undefined8 param_1,long param_2,long param_3,int param_4,long param_5,long param_6
                 )

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x26;
  long unaff_x27;
  
  *(int *)(param_5 + -1) = (int)*(undefined8 *)(unaff_x26 + 0x100);
  *(int *)(param_5 + 7) = (int)param_6;
  *(undefined4 *)(param_5 + 3) = 7;
  if (param_4 == 0) {
    lVar2 = param_2 + unaff_x27 + 0xb;
    param_6 = lVar2 + param_6;
    lVar3 = 0xb;
    while( true ) {
      puVar1 = (undefined1 *)(param_3 + -0xb + lVar2);
      lVar2 = lVar2 + 1;
      *(undefined1 *)(param_5 + lVar3) = *puVar1;
      if (lVar2 == param_6) break;
      lVar3 = lVar3 + 1;
    }
  }
  return param_5;
}

