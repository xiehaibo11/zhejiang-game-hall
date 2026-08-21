
void vorbis_dsp_destroy(void *param_1)

{
  vorbis_dsp_clear();
  free(param_1);
  return;
}

