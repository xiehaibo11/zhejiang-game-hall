
undefined8 FUN_0108d3a8(long param_1,int param_2,long *param_3)

{
  *param_3 = 0;
  if (param_2 == 0) {
    return 6;
  }
  if (param_1 != 0) {
    if (param_2 - 1U < *(uint *)(param_1 + 0x248)) {
                    /* try { // try from 0108d3d4 to 0118d3db has its CatchHandler @ 0108d5b0 */
      *param_3 = (long)*(int *)(*(long *)(param_1 + 600) + (ulong)(param_2 - 1U) * 0x10 + 4);
                    /* try { // try from 0108d3dc to 0118d4b3 has its CatchHandler @ 0108d314 */
      return 0;
    }
    return 6;
  }
  return 6;
}

