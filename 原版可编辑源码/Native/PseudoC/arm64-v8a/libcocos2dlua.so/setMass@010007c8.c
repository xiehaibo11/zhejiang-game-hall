
/* cocos2d::PhysicsBody::setMass(float) */

void __thiscall cocos2d::PhysicsBody::setMass(PhysicsBody *this,float param_1)

{
  long lVar1;
  float fVar2;
  
  if (0.0 < param_1) {
    fVar2 = 3.4028235e+38;
    *(float *)(this + 0x98) = param_1;
    this[0x93] = (PhysicsBody)0x0;
    this[0xc0] = (PhysicsBody)0x1;
    if (param_1 != 3.4028235e+38) {
      fVar2 = 0.0;
      if (0.0 < *(float *)(this + 0x9c)) {
        fVar2 = param_1 / *(float *)(this + 0x9c);
      }
    }
    *(float *)(this + 0xa0) = fVar2;
    if (this[0x90] != (PhysicsBody)0x0) {
      lVar1 = *(long *)(this + 0x88);
      cpBodyActivate(lVar1);
      *(float *)(lVar1 + 0x10) = param_1;
      *(float *)(lVar1 + 0x14) = 1.0 / param_1;
    }
  }
  return;
}

