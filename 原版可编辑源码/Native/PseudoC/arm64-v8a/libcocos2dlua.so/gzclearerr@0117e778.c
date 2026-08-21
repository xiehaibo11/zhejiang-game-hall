
void gzclearerr(long param_1)

{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x18) != 0x79b1) {
      if (*(int *)(param_1 + 0x18) != 0x1c4f) {
        return;
      }
      *(undefined8 *)(param_1 + 0x50) = 0;
    }
    if (*(void **)(param_1 + 0x70) != (void *)0x0) {
      if (*(int *)(param_1 + 0x6c) != -4) {
        free(*(void **)(param_1 + 0x70));
      }
      *(undefined8 *)(param_1 + 0x70) = 0;
    }
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  return;
}

