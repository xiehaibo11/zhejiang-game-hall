
long FUN_01346384(undefined8 param_1,long param_2,long param_3,int param_4,long param_5,long param_6
                 )

{
  undefined2 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x26;
  long unaff_x27;
  
  *(int *)(param_5 + -1) = (int)*(undefined8 *)(unaff_x26 + 0x2e0);
  *(int *)(param_5 + 7) = (int)param_6;
  *(undefined4 *)(param_5 + 3) = 7;
  if (param_4 == 0) {
    lVar3 = (param_2 + unaff_x27) * 2 + 0xb;
    lVar2 = lVar3 + param_6 * 2;
    lVar4 = 0xb;
    while( true ) {
      puVar1 = (undefined2 *)(param_3 + -0xb + lVar3);
      lVar3 = lVar3 + 2;
      *(undefined2 *)(param_5 + lVar4) = *puVar1;
      if (lVar3 == lVar2) break;
      lVar4 = lVar4 + 2;
    }
  }
  return param_5;
}

