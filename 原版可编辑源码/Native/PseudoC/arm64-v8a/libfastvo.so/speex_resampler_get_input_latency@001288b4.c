
uint speex_resampler_get_input_latency(long param_1)

{
  return *(uint *)(param_1 + 0x18) >> 1;
}

