
void FUN_00a07e70(void *param_1)

{
                    /* try { // try from 00a07e7c to 00b07e8b has its CatchHandler @ 00a07fd4 */
  if ((*(byte *)((long)param_1 + 0x10) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x20));
  }
                    /* try { // try from 00a07e98 to 00b07ecb has its CatchHandler @ 00a07fbc */
  operator_delete(param_1);
  return;
}

