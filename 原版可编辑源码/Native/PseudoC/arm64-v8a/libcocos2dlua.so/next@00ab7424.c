
/* fairygui::FastSplitter::next() */

undefined8 __thiscall fairygui::FastSplitter::next(FastSplitter *this)

{
  void *__s;
  ulong uVar1;
  void *pvVar2;
  undefined8 uVar3;
  size_t __n;
  
  __n = *(size_t *)(this + 8);
  if ((long)__n < 0) {
    uVar3 = 0;
  }
  else {
    if (__n == 0) {
      *(undefined8 *)(this + 0x10) = 0;
      *(undefined8 *)(this + 8) = 0xffffffffffffffff;
    }
    else {
                    /* try { // try from 00ab7458 to 00bb74bb has its CatchHandler @ 00ab7514 */
      __s = (void *)(*(long *)(this + 0x10) + *(long *)this + 1);
      *(void **)this = __s;
      pvVar2 = memchr(__s,(int)(char)this[0x18],__n);
      uVar1 = __n;
      if (pvVar2 != (void *)0x0) {
        uVar1 = (long)pvVar2 - (long)__s;
      }
      *(size_t *)(this + 8) = __n + ~uVar1;
      *(ulong *)(this + 0x10) = uVar1;
    }
    uVar3 = 1;
  }
  return uVar3;
}

