
void spTransformConstraint_dispose(void *param_1)

{
  _spFree(*(void **)((long)param_1 + 0x10));
  _spFree(param_1);
  return;
}

