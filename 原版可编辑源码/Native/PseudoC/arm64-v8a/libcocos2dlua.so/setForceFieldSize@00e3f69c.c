
/* cocos2d::PUForceFieldCalculationFactory::setForceFieldSize(unsigned int) */

void __thiscall
cocos2d::PUForceFieldCalculationFactory::setForceFieldSize
          (PUForceFieldCalculationFactory *this,uint param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00e3f6bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x10))
              (*(undefined8 *)(this + 0x838),*(undefined8 *)(this + 0x840),
               *(undefined8 *)(this + 0x848),this,param_1,*(undefined2 *)(this + 0x830),this + 0x85c
              );
    return;
  }
  return;
}

