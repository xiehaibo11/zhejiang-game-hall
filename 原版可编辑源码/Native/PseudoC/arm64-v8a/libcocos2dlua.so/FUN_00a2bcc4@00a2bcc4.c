
void FUN_00a2bcc4(long param_1)

{
  long lVar1;
  
  while (param_1 != 0) {
    (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x20));
    (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x18));
    lVar1 = *(long *)(param_1 + 0x28);
    (*(code *)PTR_free_01769a00)(param_1);
    param_1 = lVar1;
  }
  return;
}

