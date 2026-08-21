
ulong unzeof(long param_1)

{
  if (param_1 == 0) {
    return 0xffffff9a;
  }
  if (*(long *)(param_1 + 0x120) != 0) {
    return (ulong)(*(long *)(*(long *)(param_1 + 0x120) + 0xb8) == 0);
  }
                    /* try { // try from 00a0c7e0 to 00b0c7e3 has its CatchHandler @ 00a0c968 */
  return 0xffffff9a;
}

