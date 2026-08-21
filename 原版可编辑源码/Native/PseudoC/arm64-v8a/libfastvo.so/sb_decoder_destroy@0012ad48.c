
void sb_decoder_destroy(void *param_1)

{
  speex_decoder_destroy(*(undefined8 *)((long)param_1 + 8));
  free(*(void **)((long)param_1 + 0x38));
  free(*(void **)((long)param_1 + 0x40));
  free(*(void **)((long)param_1 + 0x48));
  free(*(void **)((long)param_1 + 0x50));
  free(*(void **)((long)param_1 + 0x58));
  free(*(void **)((long)param_1 + 0x68));
  free(*(void **)((long)param_1 + 0x70));
  free(*(void **)((long)param_1 + 0x60));
  free(param_1);
  return;
}

