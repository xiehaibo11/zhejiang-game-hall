
void FUN_00e6bd3c(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  
  iVar2 = *(int *)((long)param_1 + 0x24);
  lVar1 = param_1[5];
  if (iVar2 != 0) {
    puVar3 = (undefined8 *)(lVar1 + 8);
    do {
      FUN_00e139fc(param_2,*puVar3);
      puVar3[-1] = 0;
      *puVar3 = 0;
      *(undefined4 *)(puVar3 + 1) = 0;
      iVar2 = iVar2 + -1;
      puVar3 = puVar3 + 3;
    } while (iVar2 != 0);
    lVar1 = param_1[5];
  }
  FUN_00e139fc(param_2,lVar1);
  param_1[4] = 0;
  param_1[5] = 0;
  iVar2 = *(int *)((long)param_1 + 0x14);
  lVar1 = param_1[3];
  if (iVar2 != 0) {
    puVar3 = (undefined8 *)(lVar1 + 8);
    do {
      FUN_00e139fc(param_2,*puVar3);
      puVar3[-1] = 0;
      *puVar3 = 0;
      *(undefined4 *)(puVar3 + 1) = 0;
      iVar2 = iVar2 + -1;
      puVar3 = puVar3 + 3;
    } while (iVar2 != 0);
    lVar1 = param_1[3];
  }
  FUN_00e139fc(param_2,lVar1);
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_00e139fc(param_2,param_1[1]);
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

