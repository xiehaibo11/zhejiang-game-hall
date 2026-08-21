
void spAtlasRegion_dispose(undefined8 *param_1)

{
  _spFree((void *)*param_1);
  _spFree((void *)param_1[9]);
  _spFree((void *)param_1[10]);
  _spFree(param_1);
  return;
}

