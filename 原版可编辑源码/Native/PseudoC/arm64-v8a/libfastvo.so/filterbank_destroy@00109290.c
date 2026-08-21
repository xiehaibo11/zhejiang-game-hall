
void filterbank_destroy(undefined8 *param_1)

{
  free((void *)*param_1);
  free((void *)param_1[1]);
  free((void *)param_1[2]);
  free((void *)param_1[3]);
  free(param_1);
  return;
}

