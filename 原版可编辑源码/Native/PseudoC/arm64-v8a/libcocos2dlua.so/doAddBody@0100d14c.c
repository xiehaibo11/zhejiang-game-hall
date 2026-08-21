
/* cocos2d::PhysicsWorld::doAddBody(cocos2d::PhysicsBody*) */

void __thiscall cocos2d::PhysicsWorld::doAddBody(PhysicsWorld *this,PhysicsBody *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 *puVar3;
  
  if (param_1[0x48] != (PhysicsBody)0x0) {
    cVar2 = cpSpaceContainsBody(*(undefined8 *)(this + 0x28),*(undefined8 *)(param_1 + 0x88));
    if (cVar2 == '\0') {
      cpSpaceAddBody(*(undefined8 *)(this + 0x28),*(undefined8 *)(param_1 + 0x88));
    }
    puVar1 = *(undefined8 **)(param_1 + 0x70);
    for (puVar3 = *(undefined8 **)(param_1 + 0x68); puVar3 != puVar1; puVar3 = puVar3 + 1) {
      (**(code **)(*(long *)this + 0x38))(this,*puVar3);
    }
  }
  return;
}

