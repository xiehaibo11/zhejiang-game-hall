
int gzclose_r(void *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 == (void *)0x0) || (*(int *)((long)param_1 + 0x18) != 0x1c4f)) {
    iVar2 = -2;
  }
  else {
    if (*(int *)((long)param_1 + 0x28) != 0) {
      inflateEnd((long)param_1 + 0x78);
      free(*(void **)((long)param_1 + 0x38));
      free(*(void **)((long)param_1 + 0x30));
    }
    iVar2 = *(int *)((long)param_1 + 0x6c);
    if (iVar2 != -5) {
      iVar2 = 0;
    }
    FUN_0117e474(param_1,0,0);
    free(*(void **)((long)param_1 + 0x20));
    iVar1 = close(*(int *)((long)param_1 + 0x1c));
    free(param_1);
    if (iVar1 != 0) {
      iVar2 = -1;
    }
  }
  return iVar2;
}

