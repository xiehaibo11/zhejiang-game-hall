
void _TIFFsetString(undefined8 *param_1,char *param_2)

{
  size_t sVar1;
  void *__dest;
  
  sVar1 = strlen(param_2);
  if ((void *)*param_1 != (void *)0x0) {
    _TIFFfree((void *)*param_1);
    *param_1 = 0;
  }
  if (param_2 != (char *)0x0) {
    __dest = _TIFFmalloc(sVar1 + 1);
    *param_1 = __dest;
    if (__dest != (void *)0x0) {
      _TIFFmemcpy(__dest,param_2,sVar1 + 1);
      return;
    }
  }
  return;
}

