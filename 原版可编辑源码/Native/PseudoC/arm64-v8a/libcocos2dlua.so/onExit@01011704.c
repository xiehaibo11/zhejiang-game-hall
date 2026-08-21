
/* cocos2d::Physics3DComponent::onExit() */

void __thiscall cocos2d::Physics3DComponent::onExit(Physics3DComponent *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  size_t __n;
  undefined8 *__dest;
  long lVar3;
  
  Component::onExit((Component *)this);
  (**(code **)(*(long *)this + 0x18))(this,0);
  if (*(long *)(this + 0xd0) != 0) {
    lVar3 = *(long *)(*(long *)(this + 0xd0) + 0x30);
    __dest = *(undefined8 **)(lVar3 + 0x40);
    puVar2 = *(undefined8 **)(lVar3 + 0x48);
    if ((__dest != puVar2) && ((Physics3DComponent *)*__dest != this)) {
      do {
        if (puVar2 + -1 == __dest) {
          return;
        }
        puVar1 = __dest + 1;
        __dest = __dest + 1;
      } while ((Physics3DComponent *)*puVar1 != this);
    }
    if (__dest != puVar2) {
      __n = (long)puVar2 - (long)(__dest + 1);
      if (__n != 0) {
        memmove(__dest,__dest + 1,__n);
      }
      *(undefined8 **)(lVar3 + 0x48) = __dest + ((long)__n >> 3);
    }
  }
  return;
}

