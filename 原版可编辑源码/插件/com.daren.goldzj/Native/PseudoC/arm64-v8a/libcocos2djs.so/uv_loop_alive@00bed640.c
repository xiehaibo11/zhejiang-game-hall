
bool uv_loop_alive(long param_1)

{
  if ((*(int *)(param_1 + 8) == 0) && (*(long *)(param_1 + 0x20) == param_1 + 0x20)) {
    return *(long *)(param_1 + 0x168) != 0;
  }
  return true;
}

