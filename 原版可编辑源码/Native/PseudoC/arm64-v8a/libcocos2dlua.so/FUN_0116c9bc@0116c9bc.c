
void FUN_0116c9bc(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *local_40;
  undefined8 uStack_38;
  code *local_30;
  undefined8 uStack_28;
  
  lVar1 = cpHashSetInsert(param_1[5],param_3,param_2,FUN_0116d00c,param_1);
  lVar2 = FUN_0116d150(param_1[6],lVar1,param_1);
  local_40 = (long *)param_1[3];
  param_1[6] = lVar2;
  if (local_40 == (long *)0x0) {
    *(int *)(lVar1 + 0x20) = (int)param_1[10];
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
    FUN_0116d478(lVar1,&local_40);
  }
  else {
    plVar3 = local_40;
    if ((undefined **)*local_40 != &PTR_FUN_01781708) {
      plVar3 = (long *)0x0;
    }
    if (plVar3 == (long *)0x0) {
      plVar3 = param_1;
    }
    *(int *)(lVar1 + 0x20) = (int)plVar3[10];
    if (((undefined **)*local_40 == &PTR_FUN_01781708) && (local_40[6] != 0)) {
      local_30 = (code *)0x0;
      uStack_28 = 0;
      uStack_38 = 0;
      FUN_0116d36c(local_40[6],lVar1,1,&local_40);
      plVar3 = (long *)param_1[3];
      goto joined_r0x0116cac0;
    }
  }
  plVar3 = (long *)param_1[3];
joined_r0x0116cac0:
  if ((plVar3 != (long *)0x0) && ((undefined **)*plVar3 != &PTR_FUN_01781708)) {
    plVar3 = (long *)0x0;
  }
  if (plVar3 == (long *)0x0) {
    plVar3 = param_1;
  }
  *(int *)(plVar3 + 10) = (int)plVar3[10] + 1;
  return;
}

