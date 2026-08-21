
/* cocos2d::PhysicsBody::setPosition(float, float) */

void __thiscall cocos2d::PhysicsBody::setPosition(PhysicsBody *this,float param_1,float param_2)

{
  cpBodySetPosition(*(float *)(this + 0xc4) + param_1,*(float *)(this + 200) + param_2,
                    *(undefined8 *)(this + 0x88));
  return;
}

