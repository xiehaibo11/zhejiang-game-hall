
void sb_encoder_destroy(void *param_1)

{
  speex_encoder_destroy(*(undefined8 *)((long)param_1 + 8));
  free(*(void **)((long)param_1 + 0x40));
  free(*(void **)((long)param_1 + 0x48));
  free(*(void **)((long)param_1 + 0x50));
  free(*(void **)((long)param_1 + 0x68));
  free(*(void **)((long)param_1 + 0x70));
  free(*(void **)((long)param_1 + 0x78));
  free(*(void **)((long)param_1 + 0x98));
  free(*(void **)((long)param_1 + 0xa0));
  free(*(void **)((long)param_1 + 0x80));
  free(*(void **)((long)param_1 + 0x88));
  free(*(void **)((long)param_1 + 0x90));
  free(param_1);
  return;
}

