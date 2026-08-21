
undefined8 FUN_00a2495c(void)

{
  int iVar1;
  undefined8 local_18;
  
  if (DAT_017824b0 == 0) {
    DAT_017824b0 = 1;
    PTR_malloc_017699f8 = malloc;
    PTR_free_01769a00 = free;
    PTR_realloc_01769a08 = realloc;
    PTR_strdup_01769a10 = strdup;
    PTR_calloc_01769a18 = calloc;
    iVar1 = FUN_00a2d540();
    if (iVar1 == 0) {
      return 0;
    }
    FUN_00a2b08c();
    DAT_017824b8 = 3;
    FUN_00a22b88();
  }
  iVar1 = FUN_00a39aac(&local_18);
  if (iVar1 != 0) {
    local_18 = 0;
  }
  return local_18;
}

