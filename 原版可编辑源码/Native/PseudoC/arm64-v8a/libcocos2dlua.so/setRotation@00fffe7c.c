
/* cocos2d::PhysicsBody::setRotation(float) */

void __thiscall cocos2d::PhysicsBody::setRotation(PhysicsBody *this,float param_1)

{
  double dVar1;
  
  *(float *)(this + 0xd0) = param_1;
  dVar1 = (double)(*(float *)(this + 0xcc) + param_1) * -0.017453292519943295;
  *(double *)(this + 0xd8) = dVar1;
  cpBodySetAngle((float)dVar1,*(undefined8 *)(this + 0x88));
  return;
}

