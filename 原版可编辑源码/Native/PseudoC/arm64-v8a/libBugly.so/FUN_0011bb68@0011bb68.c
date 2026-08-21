
void FUN_0011bb68(long param_1)

{
  long lVar1;
  
  while (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 0x78);
    if (*(char *)(param_1 + 0x5a) != '\0') {
      munmap(*(void **)(param_1 + 0x60),*(size_t *)(param_1 + 0x68));
    }
    if (*(void **)(param_1 + 0x28) != (void *)0x0) {
      free(*(void **)(param_1 + 0x28));
    }
    FUN_0011b9a8(&DAT_001763e0,param_1);
    param_1 = lVar1;
  }
  return;
}

