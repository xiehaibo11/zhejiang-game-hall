
/* v8::internal::CodeObjectRegistry::Finalize() */

void __thiscall v8::internal::CodeObjectRegistry::Finalize(CodeObjectRegistry *this)

{
  void *__dest;
  void *__src;
  ulong __n;
  ulong uVar1;
  void *pvVar2;
  
  __src = *(void **)this;
  __n = *(long *)(this + 8) - (long)__src;
  uVar1 = (long)__n >> 3;
  if (uVar1 < (ulong)(*(long *)(this + 0x10) - (long)__src >> 3)) {
    if (__n == 0) {
      __dest = (void *)0x0;
      pvVar2 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      __dest = operator_new(__n);
      pvVar2 = (void *)((long)__dest + uVar1 * 8);
      if (0 < (long)__n) {
        memcpy(__dest,__src,__n);
        __src = *(void **)this;
      }
    }
    *(void **)this = __dest;
    *(void **)(this + 8) = pvVar2;
    *(void **)(this + 0x10) = pvVar2;
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  return;
}

