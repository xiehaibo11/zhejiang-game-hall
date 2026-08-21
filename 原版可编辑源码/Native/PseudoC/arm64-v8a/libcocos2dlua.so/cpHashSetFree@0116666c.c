
void cpHashSetFree(void *param_1)

{
  if (param_1 != (void *)0x0) {
    free(*(void **)((long)param_1 + 0x18));
    cpArrayFreeEach(*(undefined8 *)((long)param_1 + 0x28),free);
    cpArrayFree(*(undefined8 *)((long)param_1 + 0x28));
    free(param_1);
    return;
  }
  return;
}

