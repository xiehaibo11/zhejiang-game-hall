
void spSkin_dispose(undefined8 *param_1)

{
  void *pvVar1;
  void *__ptr;
  
  __ptr = (void *)param_1[1];
  while (__ptr != (void *)0x0) {
    pvVar1 = *(void **)((long)__ptr + 0x18);
    spAttachment_dispose(*(undefined8 *)((long)__ptr + 0x10));
    _spFree(*(void **)((long)__ptr + 8));
    _spFree(__ptr);
    __ptr = pvVar1;
  }
  _spFree((void *)*param_1);
  _spFree(param_1);
  return;
}

