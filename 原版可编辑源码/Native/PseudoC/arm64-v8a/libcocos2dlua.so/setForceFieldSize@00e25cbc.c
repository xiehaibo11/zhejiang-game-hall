
/* cocos2d::PUForceFieldAffector::setForceFieldSize(unsigned int) */

void __thiscall
cocos2d::PUForceFieldAffector::setForceFieldSize(PUForceFieldAffector *this,uint param_1)

{
                    /* try { // try from 00e25cbc to 00f25cc7 has its CatchHandler @ 00e25d94 */
  *(uint *)(this + 0x138) = param_1;
  if (this[0x17c] != (PUForceFieldAffector)0x0) {
    return;
  }
  PUForceField::setForceFieldSize((PUForceField *)(this + 0xb0),param_1);
  return;
}

