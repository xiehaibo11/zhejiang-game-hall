
/* cocos2d::PhysicsBody::getRotation() */

float __thiscall cocos2d::PhysicsBody::getRotation(PhysicsBody *this)

{
  float fVar1;
  double dVar2;
  
  dVar2 = *(double *)(this + 0xd8);
  fVar1 = (float)cpBodyGetAngle(*(undefined8 *)(this + 0x88));
  if (dVar2 == (double)fVar1) {
    fVar1 = *(float *)(this + 0xd0);
  }
  else {
    fVar1 = (float)cpBodyGetAngle(*(undefined8 *)(this + 0x88));
                    /* try { // try from 0100047c to 01100483 has its CatchHandler @ 01000584 */
    *(double *)(this + 0xd8) = (double)fVar1;
    fVar1 = (float)(((double)fVar1 * -180.0) / 3.141592653589793 - (double)*(float *)(this + 0xcc));
    *(float *)(this + 0xd0) = fVar1;
  }
                    /* try { // try from 010004a4 to 011004f3 has its CatchHandler @ 0100058c */
  return fVar1;
}

