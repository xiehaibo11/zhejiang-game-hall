
/* cocos2d::PhysicsWorld::getShape(cocos2d::Vec2 const&) const */

void __thiscall cocos2d::PhysicsWorld::getShape(PhysicsWorld *this,Vec2 *param_1)

{
  long lVar1;
  
  lVar1 = cpSpacePointQueryNearest
                    (*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4),0,
                     *(undefined8 *)(this + 0x28),0,0xffffffffffffffff,0);
  if (lVar1 != 0) {
    cpShapeGetUserData();
    return;
  }
  return;
}

