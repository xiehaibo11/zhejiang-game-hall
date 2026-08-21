
void _TIFFsetString(undefined8 *param_1,char *param_2)

{
  size_t sVar1;
  void *__dest;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0110f4ac with catch @ 0110f384
                        */
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
                    /* try { // try from 0110f3e0 to 0120f3e7 has its CatchHandler @ 0110f5dc */
  return;
}

