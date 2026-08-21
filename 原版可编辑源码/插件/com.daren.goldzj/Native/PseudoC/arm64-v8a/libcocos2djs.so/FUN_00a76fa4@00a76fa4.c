
void FUN_00a76fa4(void *param_1)

{
                    /* try { // try from 00a76fa8 to 00b76fbf has its CatchHandler @ 00a7721c */
  if ((*(byte *)((long)param_1 + 0x10) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x20));
  }
  operator_delete(param_1);
  return;
}

