
/* cocostudio::ActionFadeFrame::getAction(float) */

void __thiscall cocostudio::ActionFadeFrame::getAction(ActionFadeFrame *this,float param_1)

{
  undefined8 uVar1;
  
  uVar1 = cocos2d::FadeTo::create(param_1,(uchar)(int)*(float *)(this + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00c33cbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x28))(this,uVar1);
  return;
}

