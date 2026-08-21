
uint * FUN_00a4bb04(void)

{
  int iVar1;
  uint *puVar2;
  
  puVar2 = (uint *)(*(code *)PTR_calloc_01769a18)(1,0x70);
  if (puVar2 != (uint *)0x0) {
    *puVar2 = *puVar2 | 2;
    iVar1 = FUN_00a302ac(puVar2 + 8);
    if (iVar1 != 0) {
                    /* catch() { ... } // from try @ 00a4bab4 with catch @ 00a4bb54 */
      (*(code *)PTR_free_01769a00)(puVar2);
      puVar2 = (uint *)0x0;
    }
  }
                    /* catch() { ... } // from try @ 00a4ba48 with catch @ 00a4bb6c */
  return puVar2;
}

