
/* cocos2d::PhysicsBody::getPosition() const */

float __thiscall cocos2d::PhysicsBody::getPosition(PhysicsBody *this)

{
  float fVar1;
  
  fVar1 = (float)cpBodyGetPosition(*(undefined8 *)(this + 0x88));
  return fVar1 - *(float *)(this + 0xc4);
}

