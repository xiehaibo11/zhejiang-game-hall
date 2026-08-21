
/* cocos2d::BaseLight::onExit() */

void __thiscall cocos2d::BaseLight::onExit(BaseLight *this)

{
  undefined8 *puVar1;
  size_t __n;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *__dest;
  
  lVar2 = (**(code **)(*(long *)this + 0x368))();
  if (lVar2 != 0) {
    __dest = *(undefined8 **)(lVar2 + 0x330);
    puVar3 = *(undefined8 **)(lVar2 + 0x338);
    if ((__dest != puVar3) && ((BaseLight *)*__dest != this)) {
      do {
        if (puVar3 + -1 == __dest) goto LAB_00f1a290;
        puVar1 = __dest + 1;
        __dest = __dest + 1;
      } while ((BaseLight *)*puVar1 != this);
    }
    if (__dest != puVar3) {
      __n = (long)puVar3 - (long)(__dest + 1);
      if (__n != 0) {
        memmove(__dest,__dest + 1,__n);
      }
                    /* try { // try from 00f1a28c to 0101a2c7 has its CatchHandler @ 00f1a28c
                       catch() { ... } // from try @ 00f1a28c with catch @ 00f1a28c
                       catch() { ... } // from try @ 00f1a2d8 with catch @ 00f1a28c */
      *(undefined8 **)(lVar2 + 0x338) = __dest + ((long)__n >> 3);
    }
  }
LAB_00f1a290:
  Node::onExit((Node *)this);
  return;
}

