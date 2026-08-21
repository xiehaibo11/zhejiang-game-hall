
/* cocos2d::extension::ControlPotentiometer::setMaximumValue(float) */

void __thiscall
cocos2d::extension::ControlPotentiometer::setMaximumValue(ControlPotentiometer *this,float param_1)

{
  float fVar1;
  float fVar2;
  
                    /* catch() { ... } // from try @ 00e0fafc with catch @ 00e0fb84 */
  fVar2 = *(float *)(this + 0x35c);
  *(float *)(this + 0x360) = param_1;
  if (param_1 <= fVar2) {
                    /* catch() { ... } // from try @ 00e0fae8 with catch @ 00e0fba4 */
    fVar2 = param_1 + -1.0;
    *(float *)(this + 0x35c) = fVar2;
  }
  fVar1 = param_1;
  if (fVar2 <= param_1) {
    fVar1 = fVar2;
  }
  *(float *)(this + 0x358) = fVar1;
                    /* try { // try from 00e0fbc0 to 00f0fe7f has its CatchHandler @ 00e0fbc0
                       catch() { ... } // from try @ 00e0fbc0 with catch @ 00e0fbc0
                       catch() { ... } // from try @ 00e0fe8c with catch @ 00e0fbc0 */
  fVar2 = (fVar1 - fVar2) / (param_1 - fVar2);
  ProgressTimer::setPercentage(*(ProgressTimer **)(this + 0x370),fVar2 * 100.0);
  (**(code **)(**(long **)(this + 0x368) + 0x180))(fVar2 * 360.0);
                    /* WARNING: Could not recover jumptable at 0x00e0fc10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x688))(this,0x100);
  return;
}

