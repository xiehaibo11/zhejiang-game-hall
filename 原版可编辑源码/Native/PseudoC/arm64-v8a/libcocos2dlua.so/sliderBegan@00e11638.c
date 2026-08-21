
/* cocos2d::extension::ControlSlider::sliderBegan(cocos2d::Vec2) */

void __thiscall cocos2d::extension::ControlSlider::sliderBegan(float param_1,ControlSlider *this)

{
  float *pfVar1;
  float fVar2;
  
  (**(code **)(*(long *)this + 0x660))(this,1);
  (**(code **)(**(long **)(this + 0x370) + 0x170))(*(long **)(this + 0x370),0);
  (**(code **)(**(long **)(this + 0x378) + 0x170))(*(long **)(this + 0x378),1);
  pfVar1 = (float *)(**(code **)(**(long **)(this + 0x388) + 0x168))();
  fVar2 = *(float *)(this + 0x35c) +
          (param_1 / *pfVar1) * (*(float *)(this + 0x360) - *(float *)(this + 0x35c));
  if (*(float *)(this + 0x368) <= fVar2) {
    fVar2 = *(float *)(this + 0x368);
  }
  if (fVar2 <= *(float *)(this + 0x364)) {
    fVar2 = *(float *)(this + 0x364);
  }
                    /* WARNING: Could not recover jumptable at 0x00e116e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x6d0))(fVar2,this);
  return;
}

