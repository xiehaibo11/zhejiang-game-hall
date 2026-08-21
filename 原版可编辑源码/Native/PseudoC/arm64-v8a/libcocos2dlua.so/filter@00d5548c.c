
/* filter(spAtlasFilter) */

undefined4 filter(int param_1)

{
  if (param_1 - 1U < 7) {
    return *(undefined4 *)(&DAT_0141a464 + (long)(int)(param_1 - 1U) * 4);
  }
  return 0x2601;
}

