
/* cocos2d::extension::ControlPotentiometer::setValue(float) */

void __thiscall
cocos2d::extension::ControlPotentiometer::setValue(ControlPotentiometer *this,float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = *(float *)(this + 0x35c);
  fVar3 = *(float *)(this + 0x360);
                    /* try { // try from 00e0fa20 to 00f0fa2b has its CatchHandler @ 00e0fa78 */
  fVar4 = fVar2;
  if (fVar2 <= param_1) {
    fVar4 = param_1;
  }
                    /* try { // try from 00e0fa2c to 00f0fa8b has its CatchHandler @ 00e0f9e0 */
  fVar1 = fVar3;
  if (fVar4 <= fVar3) {
    fVar1 = fVar4;
  }
  *(float *)(this + 0x358) = fVar1;
  fVar4 = (fVar1 - fVar2) / (fVar3 - fVar2);
  ProgressTimer::setPercentage(*(ProgressTimer **)(this + 0x370),fVar4 * 100.0);
  (**(code **)(**(long **)(this + 0x368) + 0x180))(fVar4 * 360.0);
                    /* catch() { ... } // from try @ 00e0fa20 with catch @ 00e0fa78 */
                    /* WARNING: Could not recover jumptable at 0x00e0fa8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x688))(this,0x100);
  return;
}

