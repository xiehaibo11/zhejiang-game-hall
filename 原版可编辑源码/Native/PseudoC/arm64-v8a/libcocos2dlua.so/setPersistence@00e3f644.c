
/* cocos2d::PUForceFieldCalculationFactory::setPersistence(double) */

void __thiscall
cocos2d::PUForceFieldCalculationFactory::setPersistence
          (PUForceFieldCalculationFactory *this,double param_1)

{
  undefined4 uVar1;
  
                    /* try { // try from 00e3f644 to 00f3f68b has its CatchHandler @ 00e3f6f8 */
  *(double *)(this + 0x848) = param_1;
  uVar1 = (**(code **)(*(long *)this + 0x60))();
                    /* try { // try from 00e3f68c to 00f3f72f has its CatchHandler @ 00e3f490 */
                    /* WARNING: Could not recover jumptable at 0x00e3f690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x10))
            (*(undefined8 *)(this + 0x838),*(undefined8 *)(this + 0x840),
             *(undefined8 *)(this + 0x848),this,uVar1,*(undefined2 *)(this + 0x830),this + 0x85c);
  return;
}

