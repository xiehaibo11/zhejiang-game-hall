
/* cocos2d::PUForceFieldAffector::setAmplitude(double) */

void __thiscall
cocos2d::PUForceFieldAffector::setAmplitude(PUForceFieldAffector *this,double param_1)

{
  *(double *)(this + 0x128) = param_1;
  if (this[0x17c] != (PUForceFieldAffector)0x0) {
                    /* try { // try from 00e25c88 to 00f25c93 has its CatchHandler @ 00e25da4 */
    return;
  }
  PUForceField::setAmplitude((PUForceField *)(this + 0xb0),param_1);
  return;
}

