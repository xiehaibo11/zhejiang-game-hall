
/* cocos2d::PUObserver::removeEventHandler(cocos2d::PUEventHandler*) */

void __thiscall cocos2d::PUObserver::removeEventHandler(PUObserver *this,PUEventHandler *param_1)

{
  undefined8 *puVar1;
  size_t __n;
  undefined8 *__dest;
  
  __dest = *(undefined8 **)(this + 0x80);
  if (*(undefined8 **)(this + 0x88) != __dest) {
    if ((PUEventHandler *)*__dest != param_1) {
      do {
        if (*(undefined8 **)(this + 0x88) + -1 == __dest) goto LAB_00e4dd84;
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
LAB_00e4dd84:
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}

