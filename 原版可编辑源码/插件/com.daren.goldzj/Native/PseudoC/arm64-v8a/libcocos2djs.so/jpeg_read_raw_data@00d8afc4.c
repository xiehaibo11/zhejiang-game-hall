
uint jpeg_read_raw_data(long *param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  
  iVar2 = *(int *)((long)param_1 + 0x24);
  if (iVar2 != 0xce) {
    puVar4 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar4 + 5) = 0x15;
    *(int *)((long)puVar4 + 0x2c) = iVar2;
    (*(code *)*puVar4)(param_1);
  }
  uVar1 = *(uint *)((long)param_1 + 0x8c);
  if (*(uint *)(param_1 + 0x15) < uVar1) {
    puVar4 = (undefined8 *)param_1[2];
    if (puVar4 != (undefined8 *)0x0) {
      puVar4[1] = (ulong)*(uint *)(param_1 + 0x15);
      puVar4[2] = (ulong)uVar1;
      (*(code *)*puVar4)(param_1);
    }
    uVar1 = *(int *)((long)param_1 + 0x1ac) * *(int *)((long)param_1 + 0x1a4);
    if (param_3 < uVar1) {
      puVar4 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar4 + 5) = 0x18;
      (*(code *)*puVar4)(param_1);
    }
    iVar2 = (**(code **)(param_1[0x4a] + 0x18))(param_1,param_2);
    if (iVar2 != 0) {
      *(uint *)(param_1 + 0x15) = (int)param_1[0x15] + uVar1;
      return uVar1;
    }
  }
  else {
    lVar3 = *param_1;
    *(undefined4 *)(lVar3 + 0x28) = 0x7e;
    (**(code **)(lVar3 + 8))(param_1,0xffffffff);
  }
  return 0;
}

