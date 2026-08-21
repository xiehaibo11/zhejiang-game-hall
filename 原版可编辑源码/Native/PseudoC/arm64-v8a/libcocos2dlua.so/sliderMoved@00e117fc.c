
/* cocos2d::extension::ControlSlider::sliderMoved(cocos2d::Vec2) */

void __thiscall cocos2d::extension::ControlSlider::sliderMoved(float param_1,ControlSlider *this)

{
  float *pfVar1;
  float fVar2;
  
  pfVar1 = (float *)(**(code **)(**(long **)(this + 0x388) + 0x168))();
  fVar2 = *(float *)(this + 0x35c) +
          (param_1 / *pfVar1) * (*(float *)(this + 0x360) - *(float *)(this + 0x35c));
                    /* try { // try from 00e1184c to 00f11857 has its CatchHandler @ 00e1203c */
  if (*(float *)(this + 0x368) <= fVar2) {
    fVar2 = *(float *)(this + 0x368);
  }
  if (fVar2 <= *(float *)(this + 0x364)) {
    fVar2 = *(float *)(this + 0x364);
  }
                    /* try { // try from 00e1186c to 00f11877 has its CatchHandler @ 00e12038 */
                    /* WARNING: Could not recover jumptable at 0x00e11870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x6d0))(fVar2,this);
  return;
}

