
/* cocos2d::PhysicsBody::addMoment(float) */

void __thiscall cocos2d::PhysicsBody::addMoment(PhysicsBody *this,float param_1)

{
  PhysicsBody PVar1;
  float fVar2;
  
                    /* try { // try from 010002dc to 01100317 has its CatchHandler @ 01000190 */
  fVar2 = 3.4028235e+38;
  if (param_1 == 3.4028235e+38) {
    *(undefined4 *)(this + 0xa4) = 0x7f7fffff;
    this[0x94] = (PhysicsBody)0x0;
                    /* catch() { ... } // from try @ 01000260 with catch @ 010002f4 */
    PVar1 = this[0x91];
                    /* catch() { ... } // from try @ 01000280 with catch @ 010002f8 */
  }
  else {
    if (param_1 == -3.4028235e+38) {
      return;
    }
    fVar2 = *(float *)(this + 0xa4);
    if (fVar2 == 3.4028235e+38) {
      PVar1 = this[0x91];
    }
    else {
      if (this[0x94] != (PhysicsBody)0x0) {
        fVar2 = 0.0;
        *(undefined4 *)(this + 0xa4) = 0;
        this[0x94] = (PhysicsBody)0x0;
      }
      fVar2 = fVar2 + param_1;
      if (fVar2 <= 0.0) {
        fVar2 = 200.0;
        *(undefined4 *)(this + 0xa4) = 0x43480000;
        this[0x94] = (PhysicsBody)0x1;
        PVar1 = this[0x91];
      }
      else {
        *(float *)(this + 0xa4) = fVar2;
        PVar1 = this[0x91];
      }
    }
  }
                    /* catch() { ... } // from try @ 01000204 with catch @ 010002fc */
  if ((PVar1 != (PhysicsBody)0x0) && (this[0x90] != (PhysicsBody)0x0)) {
    cpBodySetMoment(fVar2,*(undefined8 *)(this + 0x88));
    return;
  }
  return;
}

