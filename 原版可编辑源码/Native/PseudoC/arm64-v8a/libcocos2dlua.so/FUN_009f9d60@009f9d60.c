
long FUN_009f9d60(ulong *param_1,long param_2)

{
  ulong *__src;
  ulong uVar1;
  ulong *__ptr;
  void *__dest;
  ulong uVar2;
  ulong __size;
  
  uVar2 = *param_1;
  uVar1 = uVar2 + param_2;
  if (param_1[1] < uVar1) {
    __size = 0x400;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009f9cf4 with catch @ 009f9d8c
                       catch(type#1 @ 00000000) { ... } // from try @ 009f9d1c with catch @ 009f9d8c
                       catch(type#1 @ 00000000) { ... } // from try @ 009f9d44 with catch @ 009f9d8c
                        */
    if (0x400 < uVar1) {
      do {
        __size = __size + (__size >> 1);
        if (0x7fffffffffffffcc < __size) break;
      } while (__size < uVar1);
    }
    if (uVar2 < __size) {
      __src = param_1 + 3;
      __ptr = (ulong *)0x0;
      if ((ulong *)param_1[2] != __src) {
        __ptr = (ulong *)param_1[2];
      }
      __dest = realloc(__ptr,__size);
      if (__dest == (void *)0x0) {
        return 0;
      }
      if ((ulong *)param_1[2] == __src) {
        memcpy(__dest,__src,*param_1);
      }
      uVar2 = *param_1;
      param_1[1] = __size;
      param_1[2] = (ulong)__dest;
    }
    else if (param_1[1] == 0) {
      return 0;
    }
  }
  return param_1[2] + uVar2;
}

