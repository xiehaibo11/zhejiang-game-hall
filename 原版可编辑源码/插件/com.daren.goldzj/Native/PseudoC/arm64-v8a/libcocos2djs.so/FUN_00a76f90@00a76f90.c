
void FUN_00a76f90(long param_1)

{
                    /* try { // try from 00a76f90 to 00b76f9b has its CatchHandler @ 00a77208 */
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    return;
  }
                    /* try { // try from 00a76f9c to 00b76fa7 has its CatchHandler @ 00a77204 */
  operator_delete(*(void **)(param_1 + 0x20));
  return;
}

