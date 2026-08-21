
undefined8 FUN_00a2478c(ulong param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = DAT_017824b0 + 1;
  bVar1 = DAT_017824b0 == 0;
  DAT_017824b0 = iVar2;
  if (bVar1) {
    PTR_malloc_017699f8 = malloc;
    PTR_free_01769a00 = free;
    PTR_realloc_01769a08 = realloc;
    PTR_strdup_01769a10 = strdup;
    PTR_calloc_01769a18 = calloc;
    if (((param_1 & 1) != 0) && (iVar2 = FUN_00a2d540(), iVar2 == 0)) {
      return 2;
    }
    FUN_00a2b08c();
    if (((uint)param_1 >> 2 & 1) != 0) {
      DAT_017824c0 = 1;
    }
    DAT_017824b8 = param_1;
    FUN_00a22b88();
  }
  return 0;
}

