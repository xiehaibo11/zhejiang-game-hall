
long strbuf_free_to_string(long *param_1,undefined4 *param_2)

{
  long lVar1;
  
  if (*(int *)((long)param_1 + 0x1c) != 0) {
    fprintf((FILE *)pthread_rwlock_tryrdlock,"strbuf(%lx) reallocs: %d, length: %d, size: %d\n",
            param_1,(ulong)*(uint *)(param_1 + 3),(ulong)*(uint *)((long)param_1 + 0xc),
            (ulong)*(uint *)(param_1 + 1));
  }
  *(undefined1 *)(*param_1 + (long)*(int *)((long)param_1 + 0xc)) = 0;
  lVar1 = *param_1;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)((long)param_1 + 0xc);
  }
  if (*(int *)((long)param_1 + 0x14) != 0) {
    free(param_1);
  }
  return lVar1;
}

