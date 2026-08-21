
/* cocos2d::PhysicsBody::setGroup(int) */

void __thiscall cocos2d::PhysicsBody::setGroup(PhysicsBody *this,int param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(this + 0x70);
  for (puVar2 = *(undefined8 **)(this + 0x68); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    PhysicsShape::setGroup((PhysicsShape *)*puVar2,param_1);
  }
  return;
}

