
void speex_bits_destroy(undefined8 *param_1)

{
  if (*(int *)((long)param_1 + 0x14) != 0) {
    free((void *)*param_1);
    return;
  }
  return;
}

