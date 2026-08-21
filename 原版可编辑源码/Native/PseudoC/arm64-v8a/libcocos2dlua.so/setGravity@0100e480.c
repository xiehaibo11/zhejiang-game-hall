
/* cocos2d::PhysicsWorld::setGravity(cocos2d::Vec2 const&) */

void __thiscall cocos2d::PhysicsWorld::setGravity(PhysicsWorld *this,Vec2 *param_1)

{
  *(undefined8 *)(this + 8) = *(undefined8 *)param_1;
  cpSpaceSetGravity(*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4),*(undefined8 *)(this + 0x28)
                   );
  return;
}

