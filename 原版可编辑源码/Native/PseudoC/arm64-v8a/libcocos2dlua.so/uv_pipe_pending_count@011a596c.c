
int uv_pipe_pending_count(long param_1)

{
  if (*(int *)(param_1 + 0xf8) == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0xec) != -1) {
    if (*(long *)(param_1 + 0xf0) != 0) {
      return *(int *)(*(long *)(param_1 + 0xf0) + 4) + 1;
    }
    return 1;
  }
  return 0;
}

