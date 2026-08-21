
uint * FUN_00a3511c(void)

{
  int iVar1;
  uint *puVar2;
  
  puVar2 = (uint *)(*(code *)PTR_calloc_01d1b760)(1,0x70);
  if (puVar2 != (uint *)0x0) {
    *puVar2 = *puVar2 | 2;
    iVar1 = FUN_00a1a8c4(puVar2 + 8);
    if (iVar1 != 0) {
      (*(code *)PTR_free_01d1b748)(puVar2);
      puVar2 = (uint *)0x0;
    }
  }
  return puVar2;
}

