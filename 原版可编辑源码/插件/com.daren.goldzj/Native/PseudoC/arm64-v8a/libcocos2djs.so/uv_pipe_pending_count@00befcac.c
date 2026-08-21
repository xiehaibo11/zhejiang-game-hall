
int uv_pipe_pending_count(long param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0xf8) != 0) {
    if (*(int *)(param_1 + 0xec) == -1) {
      return 0;
    }
    if (*(long *)(param_1 + 0xf0) == 0) {
      return 1;
    }
    iVar1 = *(int *)(*(long *)(param_1 + 0xf0) + 4) + 1;
  }
  return iVar1;
}

