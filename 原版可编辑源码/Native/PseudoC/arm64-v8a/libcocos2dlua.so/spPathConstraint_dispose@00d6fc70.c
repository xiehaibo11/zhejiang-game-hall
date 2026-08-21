
void spPathConstraint_dispose(void *param_1)

{
  _spFree(*(void **)((long)param_1 + 0x10));
  _spFree(*(void **)((long)param_1 + 0x38));
  if (*(void **)((long)param_1 + 0x48) != (void *)0x0) {
    _spFree(*(void **)((long)param_1 + 0x48));
  }
  if (*(void **)((long)param_1 + 0x58) != (void *)0x0) {
    _spFree(*(void **)((long)param_1 + 0x58));
  }
  if (*(void **)((long)param_1 + 0x68) != (void *)0x0) {
    _spFree(*(void **)((long)param_1 + 0x68));
  }
  if (*(void **)((long)param_1 + 0x78) != (void *)0x0) {
    _spFree(*(void **)((long)param_1 + 0x78));
  }
  _spFree(param_1);
  return;
}

