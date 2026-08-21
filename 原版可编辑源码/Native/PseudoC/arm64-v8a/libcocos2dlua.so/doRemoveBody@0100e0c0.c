
/* cocos2d::PhysicsWorld::doRemoveBody(cocos2d::PhysicsBody*) */

void __thiscall cocos2d::PhysicsWorld::doRemoveBody(PhysicsWorld *this,PhysicsBody *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 0x70);
  for (puVar3 = *(undefined8 **)(param_1 + 0x68); puVar3 != puVar1; puVar3 = puVar3 + 1) {
    (**(code **)(*(long *)this + 0x40))(this,*puVar3);
  }
  cVar2 = cpSpaceContainsBody(*(undefined8 *)(this + 0x28),*(undefined8 *)(param_1 + 0x88));
  if (cVar2 == '\0') {
    return;
  }
  cpSpaceRemoveBody(*(undefined8 *)(this + 0x28),*(undefined8 *)(param_1 + 0x88));
  return;
}

