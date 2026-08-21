
/* cocos2d::PhysicsBody::setMoment(float) */

void __thiscall cocos2d::PhysicsBody::setMoment(PhysicsBody *this,float param_1)

{
  *(float *)(this + 0xa4) = param_1;
  this[0x94] = (PhysicsBody)0x0;
  this[0xc1] = (PhysicsBody)0x1;
  if ((this[0x91] != (PhysicsBody)0x0) && (this[0x90] != (PhysicsBody)0x0)) {
    cpBodySetMoment(*(undefined8 *)(this + 0x88));
    return;
  }
  return;
}

