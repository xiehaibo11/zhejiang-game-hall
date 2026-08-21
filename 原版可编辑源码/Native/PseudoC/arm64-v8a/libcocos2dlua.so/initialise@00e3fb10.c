
/* cocos2d::PUForceField::initialise(cocos2d::PUForceField::ForceFieldType, unsigned int, unsigned
   short, double, double, double, cocos2d::Vec3 const&) */

void __thiscall
cocos2d::PUForceField::initialise
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,PUForceField *this,
          undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8)

{
  long *plVar1;
  
  plVar1 = (long *)createForceFieldCalculationFactory();
  *(long **)(this + 0x38) = plVar1;
                    /* try { // try from 00e3fb4c to 00f3fbbb has its CatchHandler @ 00e3f730 */
                    /* WARNING: Could not recover jumptable at 0x00e3fb80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x10))(param_1,param_2,param_3,plVar1,param_6,param_7,param_8);
  return;
}

