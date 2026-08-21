
/* cocos2d::PhysicsBody::addMass(float) */

void __thiscall cocos2d::PhysicsBody::addMass(PhysicsBody *this,float param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = 3.4028235e+38;
  if (param_1 == 3.4028235e+38) {
    *(undefined4 *)(this + 0x98) = 0x7f7fffff;
    this[0x93] = (PhysicsBody)0x0;
    fVar3 = fVar2;
  }
  else {
                    /* try { // try from 01000260 to 01100273 has its CatchHandler @ 010002f4 */
    if (param_1 == -3.4028235e+38) {
      return;
    }
                    /* try { // try from 01000280 to 011002db has its CatchHandler @ 010002f8 */
    if (this[0x93] == (PhysicsBody)0x0) {
      fVar3 = *(float *)(this + 0x98);
    }
    else {
      fVar3 = 0.0;
      *(undefined4 *)(this + 0x98) = 0;
      this[0x93] = (PhysicsBody)0x0;
    }
    fVar3 = fVar3 + param_1;
    if (fVar3 <= 0.0) {
      fVar3 = 1.0;
      *(undefined4 *)(this + 0x98) = 0x3f800000;
      this[0x93] = (PhysicsBody)0x1;
    }
    else {
      *(float *)(this + 0x98) = fVar3;
    }
    fVar2 = 0.0;
    if (0.0 < *(float *)(this + 0x9c)) {
      fVar2 = fVar3 / *(float *)(this + 0x9c);
    }
  }
  *(float *)(this + 0xa0) = fVar2;
  if (this[0x90] != (PhysicsBody)0x0) {
    lVar1 = *(long *)(this + 0x88);
    cpBodyActivate(lVar1);
    *(float *)(lVar1 + 0x10) = fVar3;
    *(float *)(lVar1 + 0x14) = 1.0 / fVar3;
  }
  return;
}

