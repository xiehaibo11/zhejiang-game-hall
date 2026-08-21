
undefined8 uv_loop_close(long param_1)

{
  long *plVar1;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    return 0xfffffff0;
  }
  for (plVar1 = *(long **)(param_1 + 0x10); plVar1 != (long *)(param_1 + 0x10);
      plVar1 = (long *)*plVar1) {
    if ((*(byte *)(plVar1 + 7) >> 4 & 1) == 0) {
      return 0xfffffff0;
    }
  }
  FUN_011a51d8(param_1);
  if (DAT_017932d0 != param_1) {
    return 0;
  }
  DAT_017932d0 = 0;
  return 0;
}

