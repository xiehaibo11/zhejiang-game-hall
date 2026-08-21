
/* cocos2d::PUForceField::~PUForceField() */

void __thiscall cocos2d::PUForceField::~PUForceField(PUForceField *this)

{
                    /* try { // try from 00e3fa48 to 00f3fb4b has its CatchHandler @ 00e3fba8 */
  *(undefined ***)this = &PTR__PUForceField_016f1d90;
  if (*(long **)(this + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x38) + 8))();
  }
  operator_delete(this);
  return;
}

