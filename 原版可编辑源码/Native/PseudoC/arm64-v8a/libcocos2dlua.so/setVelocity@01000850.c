
/* cocos2d::PhysicsBody::setVelocity(cocos2d::Vec2 const&) */

void __thiscall cocos2d::PhysicsBody::setVelocity(PhysicsBody *this,Vec2 *param_1)

{
  int iVar1;
  
  iVar1 = cpBodyGetType(*(undefined8 *)(this + 0x88));
  if (iVar1 == 2) {
    return;
  }
  cpBodySetVelocity(*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4),*(undefined8 *)(this + 0x88)
                   );
  return;
}

