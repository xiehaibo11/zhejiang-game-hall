
void strbuf_free(undefined8 *param_1)

{
  if (*(int *)((long)param_1 + 0x1c) != 0) {
    fprintf((FILE *)pthread_rwlock_tryrdlock,"strbuf(%lx) reallocs: %d, length: %d, size: %d\n",
            param_1,(ulong)*(uint *)(param_1 + 3),(ulong)*(uint *)((long)param_1 + 0xc),
            (ulong)*(uint *)(param_1 + 1));
  }
  if ((void *)*param_1 != (void *)0x0) {
    free((void *)*param_1);
    *param_1 = 0;
  }
  if (*(int *)((long)param_1 + 0x14) != 0) {
    free(param_1);
    return;
  }
  return;
}

