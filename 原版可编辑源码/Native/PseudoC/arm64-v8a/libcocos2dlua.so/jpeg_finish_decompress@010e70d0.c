
undefined8 jpeg_finish_decompress(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  iVar1 = *(int *)((long)param_1 + 0x24);
  if ((iVar1 - 0xcdU < 2) && ((int)param_1[0xb] == 0)) {
    if (*(uint *)(param_1 + 0x15) < *(uint *)((long)param_1 + 0x8c)) {
      puVar3 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar3 + 5) = 0x45;
      (*(code *)*puVar3)(param_1);
    }
    (**(code **)(param_1[0x48] + 8))(param_1);
  }
  else {
    if (iVar1 == 0xd2) goto LAB_010e7164;
    if (iVar1 != 0xcf) {
      puVar3 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar3 + 5) = 0x15;
      *(int *)((long)puVar3 + 0x2c) = iVar1;
      (*(code *)*puVar3)(param_1);
      goto LAB_010e7164;
    }
  }
  *(undefined4 *)((long)param_1 + 0x24) = 0xd2;
LAB_010e7164:
  do {
    if (*(int *)(param_1[0x4c] + 0x24) != 0) {
      (**(code **)(param_1[5] + 0x30))(param_1);
      jpeg_abort(param_1);
      return 1;
    }
    uVar2 = (**(code **)param_1[0x4c])(param_1);
  } while ((int)uVar2 != 0);
  return uVar2;
}

