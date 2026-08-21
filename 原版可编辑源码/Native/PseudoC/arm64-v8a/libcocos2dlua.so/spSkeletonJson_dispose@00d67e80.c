
void spSkeletonJson_dispose(void *param_1)

{
  if (*(int *)((long)param_1 + 0x18) != 0) {
    spAttachmentLoader_dispose(*(undefined8 *)((long)param_1 + 8));
  }
  _spFree(*(void **)((long)param_1 + 0x28));
  _spFree(*(void **)((long)param_1 + 0x10));
  _spFree(param_1);
  return;
}

