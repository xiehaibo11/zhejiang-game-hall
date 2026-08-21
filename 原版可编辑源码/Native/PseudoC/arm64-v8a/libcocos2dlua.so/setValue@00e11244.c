
/* cocos2d::extension::ControlSlider::setValue(float) */

void __thiscall cocos2d::extension::ControlSlider::setValue(ControlSlider *this,float param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(this + 0x35c);
  if (*(float *)(this + 0x35c) <= param_1) {
    fVar1 = param_1;
  }
  fVar2 = *(float *)(this + 0x360);
  if (fVar1 <= *(float *)(this + 0x360)) {
    fVar2 = fVar1;
  }
                    /* try { // try from 00e11270 to 00f11273 has its CatchHandler @ 00e1131c */
  *(float *)(this + 0x358) = fVar2;
                    /* try { // try from 00e11274 to 00f11317 has its CatchHandler @ 00e10e3c */
  (**(code **)(*(long *)this + 0x680))();
                    /* WARNING: Could not recover jumptable at 0x00e11294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x688))(this,0x100);
  return;
}

