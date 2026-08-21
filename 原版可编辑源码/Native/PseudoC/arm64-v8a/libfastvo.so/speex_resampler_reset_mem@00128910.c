
undefined8 speex_resampler_reset_mem(long param_1)

{
  uint uVar1;
  
  uVar1 = (*(int *)(param_1 + 0x18) + -1) * *(int *)(param_1 + 0x14);
  if (uVar1 != 0) {
    memset(*(void **)(param_1 + 0x58),0,(ulong)uVar1 << 1);
  }
  return 0;
}

