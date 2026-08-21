
void sf_close(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    free((void *)*param_1);
    (*(code *)param_1[9])(param_1[1]);
    free(param_1);
    return;
  }
  return;
}

