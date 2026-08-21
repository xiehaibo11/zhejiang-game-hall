
/* cocos2d::extension::ControlPotentiometer::setMinimumValue(float) */

void __thiscall
cocos2d::extension::ControlPotentiometer::setMinimumValue(ControlPotentiometer *this,float param_1)

{
  float fVar1;
  float fVar2;
  
                    /* try { // try from 00e0fae8 to 00f0faef has its CatchHandler @ 00e0fba4 */
                    /* try { // try from 00e0faf0 to 00f0fafb has its CatchHandler @ 00e0fa94 */
  fVar1 = *(float *)(this + 0x360);
                    /* try { // try from 00e0fafc to 00f0fb17 has its CatchHandler @ 00e0fb84 */
  *(float *)(this + 0x35c) = param_1;
  if (fVar1 <= param_1) {
    fVar1 = param_1 + 1.0;
    *(float *)(this + 0x360) = fVar1;
  }
                    /* try { // try from 00e0fb18 to 00f0fbbf has its CatchHandler @ 00e0fa94 */
  fVar2 = (fVar1 - param_1) / (fVar1 - param_1);
  *(float *)(this + 0x358) = fVar1;
  ProgressTimer::setPercentage(*(ProgressTimer **)(this + 0x370),fVar2 * 100.0);
  (**(code **)(**(long **)(this + 0x368) + 0x180))(fVar2 * 360.0);
                    /* WARNING: Could not recover jumptable at 0x00e0fb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x688))(this,0x100);
  return;
}

