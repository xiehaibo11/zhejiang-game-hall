
void floor1_free_info(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    if ((void *)*param_1 != (void *)0x0) {
      free((void *)*param_1);
    }
    if ((void *)param_1[1] != (void *)0x0) {
      free((void *)param_1[1]);
    }
    if ((void *)param_1[2] != (void *)0x0) {
      free((void *)param_1[2]);
    }
    if ((void *)param_1[3] != (void *)0x0) {
      free((void *)param_1[3]);
    }
    if ((void *)param_1[4] != (void *)0x0) {
      free((void *)param_1[4]);
    }
    if ((void *)param_1[5] != (void *)0x0) {
      free((void *)param_1[5]);
    }
    free(param_1);
    return;
  }
  return;
}

