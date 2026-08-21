
undefined8 FUN_011480d4(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  if (param_2 == (int *)0x0) {
    *param_1 = 2;
    return 0;
  }
  *(int **)(param_1 + 2) = param_2;
  *param_1 = 0;
  puVar1 = param_1 + 10;
  FUN_0115f1e0(puVar1,*(undefined8 *)(param_2 + 0x1a),*(undefined8 *)(param_2 + 0x18));
  iVar2 = FUN_0115f344(puVar1,8);
  if (iVar2 == 0x2f) {
    iVar2 = FUN_0115f344(puVar1,0xe);
    iVar3 = FUN_0115f344(puVar1,0xe);
    FUN_0115f344(puVar1,1);
    iVar4 = FUN_0115f344(puVar1,3);
    if ((iVar4 == 0) && (param_1[0x13] == 0)) {
      param_1[1] = 2;
      *param_2 = iVar2 + 1;
      param_2[1] = iVar3 + 1;
      iVar2 = FUN_01145eec(iVar2 + 1,iVar3 + 1,1,param_1,0);
      if (iVar2 != 0) {
        return 1;
      }
      goto LAB_01148170;
    }
  }
  *param_1 = 3;
LAB_01148170:
  FUN_01145c24(param_1);
  return 0;
}

