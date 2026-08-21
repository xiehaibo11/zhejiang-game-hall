
void spx_drft_clear(long param_1)

{
  if (param_1 != 0) {
    if (*(void **)(param_1 + 8) != (void *)0x0) {
      free(*(void **)(param_1 + 8));
    }
    if (*(void **)(param_1 + 0x10) != (void *)0x0) {
      free(*(void **)(param_1 + 0x10));
      return;
    }
  }
  return;
}

