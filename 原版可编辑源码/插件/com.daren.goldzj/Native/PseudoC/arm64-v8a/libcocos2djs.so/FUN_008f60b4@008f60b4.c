
void FUN_008f60b4(long param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x18);
  if (pvVar1 != (void *)0x0) {
    if ((*(char *)((long)pvVar1 + 0x29) != '\0') && (*(void **)((long)pvVar1 + 0x10) != (void *)0x0)
       ) {
      operator_delete__(*(void **)((long)pvVar1 + 0x10));
    }
    operator_delete(pvVar1);
    return;
  }
  return;
}

