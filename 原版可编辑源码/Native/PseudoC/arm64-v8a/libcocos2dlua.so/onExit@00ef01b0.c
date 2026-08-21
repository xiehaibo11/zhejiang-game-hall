
/* cocos2d::Camera::onExit() */

void __thiscall cocos2d::Camera::onExit(Camera *this)

{
  undefined8 *puVar1;
  size_t __n;
  undefined8 *puVar2;
  undefined8 *__dest;
  long lVar3;
  
  lVar3 = *(long *)(this + 0x2f8);
  if (lVar3 != 0) {
    __dest = *(undefined8 **)(lVar3 + 0x2f8);
    puVar2 = *(undefined8 **)(lVar3 + 0x300);
    if (__dest != puVar2) {
      if ((Camera *)*__dest != this) {
        do {
          if (puVar2 + -1 == __dest) goto LAB_00ef0234;
          puVar1 = __dest + 1;
          __dest = __dest + 1;
        } while ((Camera *)*puVar1 != this);
      }
      if (__dest != puVar2) {
        __n = (long)puVar2 - (long)(__dest + 1);
        if (__n != 0) {
          memmove(__dest,__dest + 1,__n);
        }
        *(undefined8 **)(lVar3 + 0x300) = __dest + ((long)__n >> 3);
      }
    }
LAB_00ef0234:
    *(undefined8 *)(this + 0x2f8) = 0;
  }
  Node::onExit((Node *)this);
  return;
}

