
/* cocos2d::PhysicsBody::removeJoint(cocos2d::PhysicsJoint*) */

void __thiscall cocos2d::PhysicsBody::removeJoint(PhysicsBody *this,PhysicsJoint *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  size_t __n;
  undefined8 *__dest;
  
  __dest = *(undefined8 **)(this + 0x50);
  puVar2 = *(undefined8 **)(this + 0x58);
  if ((__dest != puVar2) && ((PhysicsJoint *)*__dest != param_1)) {
    do {
      if (puVar2 + -1 == __dest) {
        return;
      }
      puVar1 = __dest + 1;
      __dest = __dest + 1;
    } while ((PhysicsJoint *)*puVar1 != param_1);
  }
  if (__dest != puVar2) {
    __n = (long)puVar2 - (long)(__dest + 1);
    if (__n != 0) {
      memmove(__dest,__dest + 1,__n);
    }
    *(undefined8 **)(this + 0x58) = __dest + ((long)__n >> 3);
  }
  return;
}

