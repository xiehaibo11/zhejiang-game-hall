
void _TIFFsetFloatArray(undefined8 *param_1,void *param_2,uint param_3)

{
  void *__dest;
  
  if ((void *)*param_1 != (void *)0x0) {
    _TIFFfree((void *)*param_1);
    *param_1 = 0;
  }
  if (param_2 != (void *)0x0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0110f580 with catch @ 0110f5d8
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0110f3e0 with catch @ 0110f5dc
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0110f450 with catch @ 0110f5e0
                        */
    __dest = _TIFFmalloc((ulong)param_3 << 2);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0110f410 with catch @ 0110f5e4
                        */
    *param_1 = __dest;
    if (__dest != (void *)0x0) {
      _TIFFmemcpy(__dest,param_2,(ulong)param_3 << 2);
      return;
    }
  }
  return;
}

