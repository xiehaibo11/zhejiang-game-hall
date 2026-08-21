
/* cocos2d::PUObserver::destroyEventHandler(cocos2d::PUEventHandler*) */

void __thiscall cocos2d::PUObserver::destroyEventHandler(PUObserver *this,PUEventHandler *param_1)

{
  undefined8 *puVar1;
  size_t __n;
  undefined8 *__dest;
  
  __dest = *(undefined8 **)(this + 0x80);
  if (*(undefined8 **)(this + 0x88) != __dest) {
    if ((PUEventHandler *)*__dest != param_1) {
      do {
        if (*(undefined8 **)(this + 0x88) + -1 == __dest) {
          return;
        }
        puVar1 = __dest + 1;
        __dest = __dest + 1;
      } while ((PUEventHandler *)*puVar1 != param_1);
    }
    Ref::release((Ref *)*__dest);
    __n = *(long *)(this + 0x88) - (long)(__dest + 1);
    if (__n != 0) {
      memmove(__dest,__dest + 1,__n);
    }
    *(undefined8 **)(this + 0x88) = __dest + ((long)__n >> 3);
  }
  return;
}

