
void _TIFFsetLong8Array(undefined8 *param_1,void *param_2,uint param_3)

{
  void *__dest;
  
  if ((void *)*param_1 != (void *)0x0) {
    _TIFFfree((void *)*param_1);
    *param_1 = 0;
  }
  if (param_2 != (void *)0x0) {
    __dest = _TIFFmalloc((ulong)param_3 << 3);
    *param_1 = __dest;
    if (__dest != (void *)0x0) {
                    /* try { // try from 0110f580 to 0120f587 has its CatchHandler @ 0110f5d8 */
      _TIFFmemcpy(__dest,param_2,(ulong)param_3 << 3);
      return;
    }
  }
  return;
}

