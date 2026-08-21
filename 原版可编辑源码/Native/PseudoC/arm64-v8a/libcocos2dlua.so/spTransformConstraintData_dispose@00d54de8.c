
void spTransformConstraintData_dispose(undefined8 *param_1)

{
  _spFree((void *)*param_1);
  _spFree((void *)param_1[2]);
  _spFree(param_1);
  return;
}

