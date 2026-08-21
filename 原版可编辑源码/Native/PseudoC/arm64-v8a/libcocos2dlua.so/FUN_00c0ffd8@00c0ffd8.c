
int FUN_00c0ffd8(long param_1)

{
  int iVar1;
  
  if (*(void **)(param_1 + 0xb8) != (void *)0x0) {
    iVar1 = munmap(*(void **)(param_1 + 0xb8),0x1000);
    return iVar1;
  }
  return 0;
}

