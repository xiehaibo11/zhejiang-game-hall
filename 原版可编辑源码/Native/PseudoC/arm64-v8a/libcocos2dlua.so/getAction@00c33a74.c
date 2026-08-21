
/* cocostudio::ActionScaleFrame::getAction(float) */

void __thiscall cocostudio::ActionScaleFrame::getAction(ActionScaleFrame *this,float param_1)

{
  undefined8 uVar1;
  
  uVar1 = cocos2d::ScaleTo::create(param_1,*(float *)(this + 0x50),*(float *)(this + 0x54));
                    /* WARNING: Could not recover jumptable at 0x00c33aa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x28))(this,uVar1);
  return;
}

