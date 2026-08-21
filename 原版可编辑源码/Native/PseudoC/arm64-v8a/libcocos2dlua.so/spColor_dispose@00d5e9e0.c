
void spColor_dispose(void *param_1)

{
  if (param_1 != (void *)0x0) {
    _spFree(param_1);
    return;
  }
  return;
}

