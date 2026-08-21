
void speex_resampler_destroy(void *param_1)

{
  free(*(void **)((long)param_1 + 0x58));
  free(*(void **)((long)param_1 + 0x60));
  free(*(void **)((long)param_1 + 0x40));
  free(*(void **)((long)param_1 + 0x50));
  free(*(void **)((long)param_1 + 0x48));
  free(param_1);
  return;
}

