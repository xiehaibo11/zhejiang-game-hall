
undefined8 FUN_01143520(int *param_1,long param_2,int param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x26);
  if ((lVar3 != 0) && (0 < param_3)) {
    iVar1 = *(int *)(param_2 + 0x20) + param_3;
    while( true ) {
      FUN_011402a4(param_2 + 0x168,(param_1[2] - *(int *)(param_2 + 0x1a4)) + param_1[4],
                   lVar3 + *param_1 * (*(int *)(param_2 + 0x1a4) - param_1[2]));
      iVar2 = (**(code **)(param_2 + 0x1e8))(param_2,iVar1 - param_3,param_3);
      param_3 = param_3 - iVar2;
      if (param_3 < 1) break;
      lVar3 = *(long *)(param_1 + 0x26);
    }
  }
  return 0;
}

