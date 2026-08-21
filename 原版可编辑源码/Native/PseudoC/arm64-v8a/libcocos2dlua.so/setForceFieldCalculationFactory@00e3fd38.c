
/* cocos2d::PUForceField::setForceFieldCalculationFactory(cocos2d::PUForceFieldCalculationFactory*)
    */

void __thiscall
cocos2d::PUForceField::setForceFieldCalculationFactory
          (PUForceField *this,PUForceFieldCalculationFactory *param_1)

{
  if (*(long **)(this + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x38) + 8))();
  }
  *(PUForceFieldCalculationFactory **)(this + 0x38) = param_1;
  return;
}

