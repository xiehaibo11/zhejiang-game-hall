
/* cocos2d::PUDynamicAttributeHelper::calculate(cocos2d::PUDynamicAttribute*, float, float) */

undefined8 __thiscall
cocos2d::PUDynamicAttributeHelper::calculate
          (PUDynamicAttributeHelper *this,PUDynamicAttribute *param_1,float param_2,float param_3)

{
  undefined4 in_register_00005004;
  undefined8 uVar1;
  undefined4 in_register_00005024;
  
  if (param_1 != (PUDynamicAttribute *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00e3dcbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(long *)param_1 + 0x10))(CONCAT44(in_register_00005004,param_2),param_1);
    return uVar1;
  }
  return CONCAT44(in_register_00005024,param_3);
}

