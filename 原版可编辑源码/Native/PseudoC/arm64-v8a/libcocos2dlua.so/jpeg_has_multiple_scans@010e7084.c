
undefined4 jpeg_has_multiple_scans(long *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = *(int *)((long)param_1 + 0x24);
  if (8 < iVar1 - 0xcaU) {
    puVar2 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar2 + 5) = 0x15;
    *(int *)((long)puVar2 + 0x2c) = iVar1;
    (*(code *)*puVar2)(param_1);
  }
  return *(undefined4 *)(param_1[0x4c] + 0x20);
}

