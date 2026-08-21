
void jpeg_mem_src(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  
  if ((param_2 == 0) || (param_3 == 0)) {
    puVar2 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar2 + 5) = 0x2b;
    (*(code *)*puVar2)(param_1);
    plVar1 = (long *)param_1[5];
  }
  else {
    plVar1 = (long *)param_1[5];
  }
  if (plVar1 == (long *)0x0) {
    plVar1 = (long *)(**(code **)param_1[1])(param_1,0,0x38);
    param_1[5] = (long)plVar1;
  }
  plVar1[2] = (long)FUN_00d8b89c;
  plVar1[3] = (long)FUN_00d8b8a0;
  plVar1[4] = (long)FUN_00d8b778;
  plVar1[5] = (long)jpeg_resync_to_restart;
  plVar1[6] = (long)FUN_00d8b7e4;
  *plVar1 = param_2;
  plVar1[1] = param_3;
  return;
}

