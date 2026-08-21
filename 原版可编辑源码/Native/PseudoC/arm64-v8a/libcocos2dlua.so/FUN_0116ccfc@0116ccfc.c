
void FUN_0116ccfc(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long *local_50;
  long lStack_48;
  code *local_40;
  undefined8 uStack_38;
  
  if (param_1[6] != 0) {
    cpHashSetEach(param_1[5],thunk_FUN_0116d6e0,param_1);
    puVar2 = (undefined8 *)param_1[2];
    if ((puVar2 == (undefined8 *)0x0) || ((undefined **)*puVar2 != &PTR_FUN_01781708)) {
      lVar3 = 0;
    }
    else {
      lVar3 = puVar2[6];
    }
    local_40 = FUN_0116d470;
    uStack_38 = 0;
    local_50 = param_1;
    lStack_48 = lVar3;
    FUN_0116da10(param_1[6],&local_50);
    if ((puVar2 != (undefined8 *)0x0) && (lVar3 == 0)) {
      cpSpatialIndexCollideStatic(param_1,puVar2,FUN_0116d470,0);
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

