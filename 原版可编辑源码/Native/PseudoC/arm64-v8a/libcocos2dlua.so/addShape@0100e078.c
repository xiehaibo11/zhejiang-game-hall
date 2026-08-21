
/* cocos2d::PhysicsWorld::addShape(cocos2d::PhysicsShape*) */

void __thiscall cocos2d::PhysicsWorld::addShape(PhysicsWorld *this,PhysicsShape *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_1 != (PhysicsShape *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0x38);
    for (puVar2 = *(undefined8 **)(param_1 + 0x30); puVar2 != puVar1; puVar2 = puVar2 + 1) {
      cpSpaceAddShape(*(undefined8 *)(this + 0x28),*puVar2);
    }
  }
  return;
}

