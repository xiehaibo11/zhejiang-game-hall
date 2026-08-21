
/* cocos2d::PhysicsShape::containsPoint(cocos2d::Vec2 const&) const */

undefined8 __thiscall cocos2d::PhysicsShape::containsPoint(PhysicsShape *this,Vec2 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  float fVar3;
  
  puVar1 = *(undefined8 **)(this + 0x38);
  puVar2 = *(undefined8 **)(this + 0x30);
  do {
    if (puVar2 == puVar1) {
      return 0;
    }
    fVar3 = (float)cpShapePointQuery(*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4),*puVar2,0);
    puVar2 = puVar2 + 1;
  } while (0.0 <= fVar3);
  return 1;
}

