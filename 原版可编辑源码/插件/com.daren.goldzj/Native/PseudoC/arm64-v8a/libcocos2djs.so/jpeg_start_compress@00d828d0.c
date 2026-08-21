
void jpeg_start_compress(long *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  
  iVar1 = *(int *)((long)param_1 + 0x24);
  if (iVar1 != 100) {
    puVar3 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar3 + 5) = 0x15;
    *(int *)((long)puVar3 + 0x2c) = iVar1;
    (*(code *)*puVar3)(param_1);
  }
  if (param_2 != 0) {
    jpeg_suppress_tables(param_1,0);
  }
  (**(code **)(*param_1 + 0x20))(param_1);
  (**(code **)(param_1[5] + 0x10))(param_1);
  jinit_compress_master(param_1);
  (**(code **)param_1[0x3e])(param_1);
  *(undefined4 *)(param_1 + 0x2b) = 0;
  uVar2 = 0x65;
  if ((int)param_1[0x24] != 0) {
    uVar2 = 0x66;
  }
  *(undefined4 *)((long)param_1 + 0x24) = uVar2;
  return;
}

