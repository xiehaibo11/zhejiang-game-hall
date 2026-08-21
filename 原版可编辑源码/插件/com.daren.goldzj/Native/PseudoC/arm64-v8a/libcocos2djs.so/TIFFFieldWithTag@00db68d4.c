
uint * TIFFFieldWithTag(long param_1,uint param_2)

{
  uint *puVar1;
  long *plVar2;
  ulong *local_58;
  ulong local_50 [6];
  
  local_58 = local_50;
  local_50[3] = 0;
  local_50[2] = 0;
  local_50[5] = 0;
  local_50[4] = 0;
  local_50[1] = 0;
  local_50[0] = 0;
  puVar1 = *(uint **)(param_1 + 0x400);
  if ((puVar1 == (uint *)0x0) || (*puVar1 != param_2)) {
    if (*(void **)(param_1 + 0x3f0) != (void *)0x0) {
      local_50[0] = (ulong)param_2;
      local_50[1] = 0;
      plVar2 = bsearch(&local_58,*(void **)(param_1 + 0x3f0),*(size_t *)(param_1 + 0x3f8),8,
                       FUN_00db66a4);
      if (plVar2 == (long *)0x0) {
        *(undefined8 *)(param_1 + 0x400) = 0;
      }
      else {
        puVar1 = (uint *)*plVar2;
        *(uint **)(param_1 + 0x400) = puVar1;
        if (puVar1 != (uint *)0x0) {
          return puVar1;
        }
      }
    }
    TIFFErrorExt(*(undefined8 *)(param_1 + 0x3b8),"TIFFFieldWithTag",
                 "Internal error, unknown tag 0x%x",param_2);
    puVar1 = (uint *)0x0;
  }
  return puVar1;
}

