
/* cocostudio::ActionRotationFrame::getAction(float) */

void __thiscall cocostudio::ActionRotationFrame::getAction(ActionRotationFrame *this,float param_1)

{
  undefined8 uVar1;
  
  uVar1 = cocos2d::RotateTo::create(param_1,*(float *)(this + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00c33b7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x28))(this,uVar1);
  return;
}

