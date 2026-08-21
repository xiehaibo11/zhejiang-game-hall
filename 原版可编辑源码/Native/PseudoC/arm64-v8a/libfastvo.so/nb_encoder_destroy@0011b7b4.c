
void nb_encoder_destroy(void *param_1)

{
  free(*(void **)((long)param_1 + 0x50));
  free(*(void **)((long)param_1 + 0x58));
  free(*(void **)((long)param_1 + 0x90));
  free(*(void **)((long)param_1 + 0x68));
  free(*(void **)((long)param_1 + 0x88));
  free(*(void **)((long)param_1 + 0x98));
  free(*(void **)((long)param_1 + 0xa0));
  free(*(void **)((long)param_1 + 0xa8));
  free(*(void **)((long)param_1 + 0xb0));
  free(*(void **)((long)param_1 + 0xb8));
  free(*(void **)((long)param_1 + 200));
  free(*(void **)((long)param_1 + 0x38));
  vbr_destroy(*(undefined8 *)((long)param_1 + 0xd8));
  free(*(void **)((long)param_1 + 0xd8));
  free(param_1);
  return;
}

