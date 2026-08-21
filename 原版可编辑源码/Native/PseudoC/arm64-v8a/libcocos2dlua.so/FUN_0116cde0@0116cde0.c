
void FUN_0116cde0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *local_40;
  undefined8 uStack_38;
  code *local_30;
  undefined8 uStack_28;
  
  lVar2 = cpHashSetFind(param_1[5],param_3,param_2);
  if (lVar2 == 0) {
    return;
  }
  cVar1 = FUN_0116d6e0(lVar2,param_1);
  if (cVar1 != '\0') {
    local_40 = (long *)param_1[3];
    if (local_40 == (long *)0x0) {
      puVar4 = (undefined8 *)param_1[2];
      uStack_38 = 0;
      if (puVar4 != (undefined8 *)0x0) {
        if ((undefined **)*puVar4 == &PTR_FUN_01781708) {
          uStack_38 = puVar4[6];
        }
        else {
          uStack_38 = 0;
        }
      }
      local_30 = FUN_0116d470;
      uStack_28 = 0;
      local_40 = param_1;
      FUN_0116d478(lVar2,&local_40);
    }
    else if (((undefined **)*local_40 == &PTR_FUN_01781708) && (local_40[6] != 0)) {
      local_30 = (code *)0x0;
      uStack_28 = 0;
      uStack_38 = 0;
      FUN_0116d36c(local_40[6],lVar2,1,&local_40);
      plVar3 = (long *)param_1[3];
      goto joined_r0x0116ceb4;
    }
  }
  plVar3 = (long *)param_1[3];
joined_r0x0116ceb4:
  if ((plVar3 != (long *)0x0) && ((undefined **)*plVar3 != &PTR_FUN_01781708)) {
    plVar3 = (long *)0x0;
  }
  if (plVar3 == (long *)0x0) {
    plVar3 = param_1;
  }
  *(int *)(plVar3 + 10) = (int)plVar3[10] + 1;
  return;
}

