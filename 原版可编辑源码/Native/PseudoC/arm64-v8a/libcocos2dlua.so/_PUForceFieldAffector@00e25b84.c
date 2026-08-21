
/* cocos2d::PUForceFieldAffector::~PUForceFieldAffector() */

void __thiscall cocos2d::PUForceFieldAffector::~PUForceFieldAffector(PUForceFieldAffector *this)

{
                    /* try { // try from 00e25b84 to 00f25b8b has its CatchHandler @ 00e25db8 */
                    /* try { // try from 00e25b8c to 00f25c33 has its CatchHandler @ 00e2573c */
  *(undefined ***)this = &PTR__PUForceFieldAffector_016ef190;
  PUForceField::~PUForceField((PUForceField *)(this + 0xb0));
  PUAffector::~PUAffector((PUAffector *)this);
  return;
}

