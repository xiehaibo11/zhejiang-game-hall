
void spEvent_dispose(void *param_1)

{
  _spFree(*(void **)((long)param_1 + 0x18));
  _spFree(param_1);
  return;
}

