
void FUN_0116cef8(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long *local_60;
  long lStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if (param_1[6] != 0) {
    cpHashSetEach(param_1[5],thunk_FUN_0116d6e0,param_1);
    puVar2 = (undefined8 *)param_1[2];
    if ((puVar2 == (undefined8 *)0x0) || ((undefined **)*puVar2 != &PTR_FUN_01781708)) {
      lVar3 = 0;
    }
    else {
      lVar3 = puVar2[6];
    }
    local_60 = param_1;
    lStack_58 = lVar3;
    local_50 = param_2;
    uStack_48 = param_3;
    FUN_0116da10(param_1[6],&local_60);
    if ((puVar2 != (undefined8 *)0x0) && (lVar3 == 0)) {
      cpSpatialIndexCollideStatic(param_1,puVar2,param_2,param_3);
    }
    plVar1 = (long *)param_1[3];
    if ((plVar1 != (long *)0x0) && ((undefined **)*plVar1 != &PTR_FUN_01781708)) {
      plVar1 = (long *)0x0;
    }
    if (plVar1 == (long *)0x0) {
      plVar1 = param_1;
    }
    *(int *)(plVar1 + 10) = (int)plVar1[10] + 1;
  }
  return;
}

