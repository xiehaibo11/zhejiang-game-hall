
void _Entry_dispose(void *param_1)

{
  spAttachment_dispose(*(undefined8 *)((long)param_1 + 0x10));
  _spFree(*(void **)((long)param_1 + 8));
  _spFree(param_1);
  return;
}

