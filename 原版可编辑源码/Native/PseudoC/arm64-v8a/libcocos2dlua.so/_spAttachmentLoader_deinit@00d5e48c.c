
void _spAttachmentLoader_deinit(undefined8 *param_1)

{
  _spFree((void *)param_1[2]);
  _spFree((void *)*param_1);
  _spFree((void *)param_1[1]);
  return;
}

