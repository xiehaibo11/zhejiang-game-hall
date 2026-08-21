
/* cocos2d::AccelAmplitude::update(float) */

void __thiscall cocos2d::AccelAmplitude::update(AccelAmplitude *this,float param_1)

{
  float fVar1;
  undefined4 in_register_00005004;
  
  fVar1 = powf(param_1,*(float *)(this + 0x58));
  ActionInterval::setAmplitudeRate(fVar1);
                    /* try { // try from 00ed51e0 to 00fd5203 has its CatchHandler @ 00ed5700 */
                    /* WARNING: Could not recover jumptable at 0x00ed51e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x60) + 0x48))(CONCAT44(in_register_00005004,param_1));
  return;
}

