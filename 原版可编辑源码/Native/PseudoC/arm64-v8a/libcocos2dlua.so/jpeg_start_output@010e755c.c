
undefined8 jpeg_start_output(long *param_1,int param_2)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  
  iVar3 = *(int *)((long)param_1 + 0x24);
  if ((iVar3 != 0xcc) && (iVar3 != 0xcf)) {
    puVar5 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar5 + 5) = 0x15;
    *(int *)((long)puVar5 + 0x2c) = iVar3;
    (*(code *)*puVar5)(param_1);
  }
  if (param_2 < 2) {
    param_2 = 1;
  }
  iVar3 = param_2;
  if ((*(int *)(param_1[0x4c] + 0x24) != 0) &&
     (iVar3 = *(int *)((long)param_1 + 0xac), param_2 <= *(int *)((long)param_1 + 0xac))) {
    iVar3 = param_2;
  }
  *(int *)((long)param_1 + 0xb4) = iVar3;
  if (*(int *)((long)param_1 + 0x24) != 0xcc) {
    (**(code **)param_1[0x48])(param_1);
    *(undefined4 *)(param_1 + 0x15) = 0;
    *(undefined4 *)((long)param_1 + 0x24) = 0xcc;
  }
  if (*(int *)(param_1[0x48] + 0x10) == 0) {
LAB_010e7690:
    uVar2 = 1;
    uVar4 = 0xcd;
    if (*(int *)((long)param_1 + 0x5c) != 0) {
      uVar4 = 0xce;
    }
    *(undefined4 *)((long)param_1 + 0x24) = uVar4;
  }
  else {
    uVar6 = *(uint *)(param_1 + 0x15);
    do {
      while (uVar1 = *(uint *)((long)param_1 + 0x8c), uVar1 <= uVar6) {
        (**(code **)(param_1[0x48] + 8))(param_1);
        (**(code **)param_1[0x48])(param_1);
        *(undefined4 *)(param_1 + 0x15) = 0;
        uVar6 = 0;
        if (*(int *)(param_1[0x48] + 0x10) == 0) goto LAB_010e7690;
      }
      puVar5 = (undefined8 *)param_1[2];
      uVar7 = uVar6;
      if (puVar5 != (undefined8 *)0x0) {
        puVar5[1] = (ulong)uVar6;
        puVar5[2] = (ulong)uVar1;
        (*(code *)*puVar5)(param_1);
        uVar7 = *(uint *)(param_1 + 0x15);
      }
      (**(code **)(param_1[0x49] + 8))(param_1,0,param_1 + 0x15,0);
      uVar6 = *(uint *)(param_1 + 0x15);
    } while (uVar6 != uVar7);
    uVar2 = 0;
  }
  return uVar2;
}

