
/* cocos2d::PhysicsShape::setDensity(float) */

void __thiscall cocos2d::PhysicsShape::setDensity(PhysicsShape *this,float param_1)

{
  bool bVar1;
  float fVar2;
  
                    /* catch() { ... } // from try @ 0100888c with catch @ 01008830 */
  if (0.0 <= param_1) {
    fVar2 = 3.4028235e+38;
    *(float *)(this + 0x6c) = param_1;
    if (param_1 == 3.4028235e+38) {
      bVar1 = false;
    }
    else {
                    /* try { // try from 0100888c to 01108917 has its CatchHandler @ 01008830 */
      if (*(float *)(this + 0x4c) <= 0.0) {
        return;
      }
      fVar2 = *(float *)(this + 0x4c) * param_1;
      bVar1 = fVar2 < 0.0;
    }
    if (!bVar1) {
                    /* try { // try from 01008860 to 01108867 has its CatchHandler @ 010088ec */
      if (*(PhysicsBody **)(this + 0x28) != (PhysicsBody *)0x0) {
        PhysicsBody::addMass(*(PhysicsBody **)(this + 0x28),-*(float *)(this + 0x50));
                    /* try { // try from 0100887c to 0110888b has its CatchHandler @ 010088f4 */
        PhysicsBody::addMass(*(PhysicsBody **)(this + 0x28),fVar2);
      }
      *(float *)(this + 0x50) = fVar2;
    }
  }
  return;
}

