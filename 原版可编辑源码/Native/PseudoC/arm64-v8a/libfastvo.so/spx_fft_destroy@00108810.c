
void spx_fft_destroy(void *param_1)

{
  spx_drft_clear();
  free(param_1);
  return;
}

