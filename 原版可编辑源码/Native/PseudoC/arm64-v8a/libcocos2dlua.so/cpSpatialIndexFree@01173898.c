
void cpSpatialIndexFree(long *param_1)

{
  if (param_1 != (long *)0x0) {
    if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
      (**(code **)*param_1)(param_1);
    }
    free(param_1);
    return;
  }
  return;
}

