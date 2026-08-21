
void spUnsignedShortArray_dispose(void *param_1)

{
  _spFree(*(void **)((long)param_1 + 8));
  _spFree(param_1);
  return;
}

