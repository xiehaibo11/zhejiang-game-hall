
/* cocos2d::PUParticle3D::calculateBoundingSphereRadius() */

void __thiscall cocos2d::PUParticle3D::calculateBoundingSphereRadius(PUParticle3D *this)

{
  float fVar1;
  
                    /* try { // try from 00e1ad28 to 00f1ad2f has its CatchHandler @ 00e1be88 */
  fVar1 = *(float *)(this + 0x48);
                    /* try { // try from 00e1ad30 to 00f1adc7 has its CatchHandler @ 00e1ab10 */
  if (*(float *)(this + 0x48) <= *(float *)(this + 0x44)) {
    fVar1 = *(float *)(this + 0x44);
  }
  if (fVar1 <= *(float *)(this + 0x4c)) {
    fVar1 = *(float *)(this + 0x4c);
  }
  *(float *)(this + 0x104) = fVar1 * 0.5;
  return;
}

