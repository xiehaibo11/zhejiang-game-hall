
undefined8 speex_resampler_skip_zeros(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    lVar1 = *(long *)(param_1 + 0x40);
    uVar2 = 0;
    do {
      *(uint *)(lVar1 + uVar2 * 4) = *(uint *)(param_1 + 0x18) >> 1;
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x14));
  }
  return 0;
}

