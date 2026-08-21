
void FUN_00a07e5c(long param_1)

{
                    /* try { // try from 00a07e5c to 00b07e6f has its CatchHandler @ 00a0801c */
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x20));
  return;
}

