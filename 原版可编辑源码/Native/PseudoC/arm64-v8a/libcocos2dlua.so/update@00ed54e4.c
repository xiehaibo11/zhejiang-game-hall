
/* cocos2d::DeccelAmplitude::update(float) */

void __thiscall cocos2d::DeccelAmplitude::update(DeccelAmplitude *this,float param_1)

{
  float fVar1;
  undefined4 in_register_00005004;
  
                    /* try { // try from 00ed5500 to 00fd567b has its CatchHandler @ 00ed4ef8 */
  fVar1 = powf(1.0 - param_1,*(float *)(this + 0x58));
  ActionInterval::setAmplitudeRate(fVar1);
                    /* WARNING: Could not recover jumptable at 0x00ed5534. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x60) + 0x48))(CONCAT44(in_register_00005004,param_1));
  return;
}

