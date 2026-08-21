
undefined8 jpeg_finish_output(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  iVar1 = *(int *)((long)param_1 + 0x24);
  if (iVar1 - 0xcdU < 2) {
    if ((int)param_1[0xb] != 0) {
      (**(code **)(param_1[0x48] + 8))(param_1);
      *(undefined4 *)((long)param_1 + 0x24) = 0xd0;
      goto LAB_00d8b27c;
    }
  }
  else if (iVar1 == 0xd0) goto LAB_00d8b27c;
  puVar3 = (undefined8 *)*param_1;
  *(undefined4 *)(puVar3 + 5) = 0x15;
  *(int *)((long)puVar3 + 0x2c) = iVar1;
  (*(code *)*puVar3)(param_1);
LAB_00d8b27c:
  while ((*(int *)((long)param_1 + 0xac) <= *(int *)((long)param_1 + 0xb4) &&
         (*(int *)(param_1[0x4c] + 0x24) == 0))) {
    uVar2 = (**(code **)param_1[0x4c])(param_1);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
  }
  *(undefined4 *)((long)param_1 + 0x24) = 0xcf;
  return 1;
}

