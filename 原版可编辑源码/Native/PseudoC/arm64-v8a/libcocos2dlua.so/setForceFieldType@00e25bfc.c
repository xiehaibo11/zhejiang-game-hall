
/* cocos2d::PUForceFieldAffector::setForceFieldType(cocos2d::PUForceField::ForceFieldType) */

void __thiscall
cocos2d::PUForceFieldAffector::setForceFieldType(PUForceFieldAffector *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0x100) = param_2;
  if (this[0x17c] != (PUForceFieldAffector)0x0) {
    return;
  }
  PUForceField::setForceFieldType((PUForceField *)(this + 0xb0));
  return;
}

