
/* cocos2d::PUForceFieldCalculationFactory::setFrequency(double) */

void __thiscall
cocos2d::PUForceFieldCalculationFactory::setFrequency
          (PUForceFieldCalculationFactory *this,double param_1)

{
  undefined4 uVar1;
  
  *(double *)(this + 0x838) = param_1;
                    /* try { // try from 00e3f5ac to 00f3f5c3 has its CatchHandler @ 00e3f6f4 */
  uVar1 = (**(code **)(*(long *)this + 0x60))();
                    /* WARNING: Could not recover jumptable at 0x00e3f5e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x10))
            (*(undefined8 *)(this + 0x838),*(undefined8 *)(this + 0x840),
             *(undefined8 *)(this + 0x848),this,uVar1,*(undefined2 *)(this + 0x830),this + 0x85c);
  return;
}

