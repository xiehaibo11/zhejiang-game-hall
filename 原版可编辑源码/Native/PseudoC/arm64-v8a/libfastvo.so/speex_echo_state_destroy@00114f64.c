
void speex_echo_state_destroy(void *param_1)

{
  spx_fft_destroy(*(undefined8 *)((long)param_1 + 0x100));
  free(*(void **)((long)param_1 + 0x38));
  free(*(void **)((long)param_1 + 0x40));
  free(*(void **)((long)param_1 + 0x50));
  free(*(void **)((long)param_1 + 0x58));
  free(*(void **)((long)param_1 + 0x60));
  free(*(void **)((long)param_1 + 200));
  free(*(void **)((long)param_1 + 0xc0));
  free(*(void **)((long)param_1 + 0xd0));
  free(*(void **)((long)param_1 + 0xe0));
  free(*(void **)((long)param_1 + 0xd8));
  free(*(void **)((long)param_1 + 0x48));
  free(*(void **)((long)param_1 + 0x68));
  free(*(void **)((long)param_1 + 0x70));
  free(*(void **)((long)param_1 + 0x80));
  free(*(void **)((long)param_1 + 0x88));
  free(*(void **)((long)param_1 + 0x78));
  free(*(void **)((long)param_1 + 0xa0));
  free(*(void **)((long)param_1 + 0xa8));
  free(*(void **)((long)param_1 + 0xf0));
  free(*(void **)((long)param_1 + 0xf8));
  free(*(void **)((long)param_1 + 0xb0));
  free(*(void **)((long)param_1 + 0xb8));
  free(*(void **)((long)param_1 + 0x108));
  free(*(void **)((long)param_1 + 0x110));
  free(*(void **)((long)param_1 + 0x118));
  free(*(void **)((long)param_1 + 0x128));
  free(*(void **)((long)param_1 + 0x130));
  free(param_1);
  return;
}

