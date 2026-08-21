
void _spAttachment_deinit(undefined8 *param_1)

{
  if (param_1[3] != 0) {
    spAttachmentLoader_disposeAttachment(param_1[3],param_1);
  }
  _spFree((void *)param_1[2]);
  _spFree((void *)*param_1);
  return;
}

