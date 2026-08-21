
/* cocos2d::PUForceFieldAffector::setOctaves(unsigned short) */

void __thiscall cocos2d::PUForceFieldAffector::setOctaves(PUForceFieldAffector *this,ushort param_1)

{
                    /* try { // try from 00e25c3c to 00f25c87 has its CatchHandler @ 00e2573c */
  *(ushort *)(this + 0x118) = param_1;
  if (this[0x17c] != (PUForceFieldAffector)0x0) {
    return;
  }
  PUForceField::setOctaves((PUForceField *)(this + 0xb0),param_1);
  return;
}

