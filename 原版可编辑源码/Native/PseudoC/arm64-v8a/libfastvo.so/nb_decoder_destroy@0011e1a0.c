
void nb_decoder_destroy(void *param_1)

{
  free(*(void **)((long)param_1 + 0x38));
  free(*(void **)((long)param_1 + 0x50));
  free(*(void **)((long)param_1 + 0x48));
  free(*(void **)((long)param_1 + 0x58));
  free(*(void **)((long)param_1 + 0x68));
  free(param_1);
  return;
}

