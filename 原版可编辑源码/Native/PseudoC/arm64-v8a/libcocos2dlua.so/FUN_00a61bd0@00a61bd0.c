
undefined8 FUN_00a61bd0(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(*param_1 + 0x218);
  if (puVar1 != (undefined8 *)0x0) {
    (*(code *)PTR_free_01769a00)(puVar1[1]);
    *puVar1 = 0;
    puVar1[1] = 0;
    if (*(int *)(puVar1 + 2) != -1) {
      close(*(int *)(puVar1 + 2));
    }
    *(undefined4 *)(puVar1 + 2) = 0xffffffff;
  }
  return 0;
}

