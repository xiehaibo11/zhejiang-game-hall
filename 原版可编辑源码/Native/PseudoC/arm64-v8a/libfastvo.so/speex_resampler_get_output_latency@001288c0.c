
uint speex_resampler_get_output_latency(long param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = ((*(uint *)(param_1 + 0x18) >> 1) * *(int *)(param_1 + 0xc) + (uVar1 >> 1)) / uVar1;
  }
  return uVar2;
}

