
/* cocos2d::PhysicsShape::setGroup(int) */

void __thiscall cocos2d::PhysicsShape::setGroup(PhysicsShape *this,int param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_1 < 0) {
    puVar1 = *(undefined8 **)(this + 0x38);
    if (*(undefined8 **)(this + 0x30) != puVar1) {
      puVar2 = *(undefined8 **)(this + 0x30);
      do {
        puVar3 = puVar2 + 1;
        cpShapeSetFilter(*puVar2,(long)param_1,0xffffffffffffffff);
        puVar2 = puVar3;
      } while (puVar1 != puVar3);
    }
  }
  *(int *)(this + 0x88) = param_1;
  return;
}

