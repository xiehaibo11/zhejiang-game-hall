
void spPathConstraintData_dispose(undefined8 *param_1)

{
                    /* try { // try from 00d5eddc to 00e5ede7 has its CatchHandler @ 00d5f670 */
  _spFree((void *)*param_1);
  _spFree((void *)param_1[2]);
  _spFree(param_1);
  return;
}

