
uint FUN_00a5823c(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x3c0) != '\0') {
    return 1;
  }
                    /* try { // try from 00a58258 to 00b5826b has its CatchHandler @ 00a582f0 */
  return (*(uint *)(param_1 + 0xc) & *(uint *)(param_1 + 0x10)) >> 5 & 1;
}

