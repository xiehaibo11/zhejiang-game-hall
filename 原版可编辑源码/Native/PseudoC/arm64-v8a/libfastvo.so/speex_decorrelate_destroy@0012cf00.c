
void speex_decorrelate_destroy(void *param_1)

{
  free(*(void **)((long)param_1 + 0x28));
  free(*(void **)((long)param_1 + 0x30));
  free(*(void **)((long)param_1 + 0x38));
  free(*(void **)((long)param_1 + 0x48));
  free(*(void **)((long)param_1 + 0x10));
  free(*(void **)((long)param_1 + 0x40));
  free(*(void **)((long)param_1 + 0x20));
  free(param_1);
  return;
}

