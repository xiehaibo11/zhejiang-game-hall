
/* cocos2d::PUObserver::destroyEventHandler(unsigned long) */

void __thiscall cocos2d::PUObserver::destroyEventHandler(PUObserver *this,ulong param_1)

{
  long *plVar1;
  long *plVar2;
  size_t __n;
  long *__dest;
  
  __dest = *(long **)(this + 0x80);
  if (*(long **)(this + 0x88) != __dest) {
    plVar2 = __dest + param_1;
    if (*__dest != *plVar2) {
      do {
        if (*(long **)(this + 0x88) + -1 == __dest) {
          return;
        }
        plVar1 = __dest + 1;
        __dest = __dest + 1;
      } while (*plVar1 != *plVar2);
    }
    Ref::release((Ref *)*__dest);
    __n = *(long *)(this + 0x88) - (long)(__dest + 1);
    if (__n != 0) {
      memmove(__dest,__dest + 1,__n);
    }
    *(long **)(this + 0x88) = __dest + ((long)__n >> 3);
  }
  return;
}

