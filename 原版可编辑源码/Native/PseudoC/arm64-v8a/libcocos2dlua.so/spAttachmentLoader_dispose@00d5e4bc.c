
void spAttachmentLoader_dispose(void *param_1)

{
  (**(code **)(*(long *)((long)param_1 + 0x10) + 0x18))();
  _spFree(param_1);
  return;
}

