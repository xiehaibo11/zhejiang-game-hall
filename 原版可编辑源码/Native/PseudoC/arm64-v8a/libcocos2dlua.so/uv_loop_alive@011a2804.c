
bool uv_loop_alive(long param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    return true;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    return true;
  }
  return *(long *)(param_1 + 0x168) != 0;
}

