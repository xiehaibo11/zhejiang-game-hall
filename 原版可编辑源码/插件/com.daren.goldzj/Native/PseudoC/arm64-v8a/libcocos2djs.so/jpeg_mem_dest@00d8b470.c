
void jpeg_mem_dest(long *param_1,long *param_2,long *param_3)

{
  void *pvVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  
  if ((param_2 == (long *)0x0) || (param_3 == (long *)0x0)) {
    puVar3 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar3 + 5) = 0x18;
    (*(code *)*puVar3)(param_1);
    plVar5 = (long *)param_1[5];
  }
  else {
    plVar5 = (long *)param_1[5];
  }
  if (plVar5 == (long *)0x0) {
    plVar5 = (long *)(**(code **)param_1[1])(param_1,0,0x50);
    param_1[5] = (long)plVar5;
  }
  plVar5[2] = (long)FUN_00d8b568;
  plVar5[3] = (long)FUN_00d8b56c;
  plVar5[4] = (long)FUN_00d8b5f8;
  plVar5[5] = (long)param_2;
  plVar5[6] = (long)param_3;
  plVar5[7] = 0;
  lVar2 = *param_2;
  if ((lVar2 == 0) || (lVar4 = *param_3, lVar4 == 0)) {
    pvVar1 = malloc(0x1000);
    *param_2 = (long)pvVar1;
    plVar5[7] = (long)pvVar1;
    if (pvVar1 == (void *)0x0) {
      puVar3 = (undefined8 *)*param_1;
      puVar3[5] = 0xa00000038;
      (*(code *)*puVar3)(param_1);
    }
    lVar4 = 0x1000;
    *param_3 = 0x1000;
    lVar2 = *param_2;
  }
  plVar5[8] = lVar2;
  plVar5[9] = lVar4;
  *plVar5 = lVar2;
  plVar5[1] = lVar4;
  return;
}

