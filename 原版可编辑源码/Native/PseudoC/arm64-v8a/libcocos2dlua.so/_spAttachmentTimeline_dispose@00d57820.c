
void _spAttachmentTimeline_dispose(void *param_1)

{
  void *__ptr;
  long lVar1;
  
  _spFree(*(void **)((long)param_1 + 8));
  __ptr = *(void **)((long)param_1 + 0x28);
  if (0 < *(int *)((long)param_1 + 0x10)) {
    lVar1 = 0;
    do {
      _spFree(*(void **)((long)__ptr + lVar1 * 8));
      __ptr = *(void **)((long)param_1 + 0x28);
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)((long)param_1 + 0x10));
  }
  _spFree(__ptr);
  _spFree(*(void **)((long)param_1 + 0x18));
  _spFree(param_1);
  return;
}

