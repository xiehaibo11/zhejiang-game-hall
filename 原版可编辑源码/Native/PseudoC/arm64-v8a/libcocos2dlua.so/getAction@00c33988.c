
/* cocostudio::ActionMoveFrame::getAction(float) */

void __thiscall cocostudio::ActionMoveFrame::getAction(ActionMoveFrame *this,float param_1)

{
  undefined8 uVar1;
  
  uVar1 = cocos2d::MoveTo::create(param_1,this + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00c339b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x28))(this,uVar1);
  return;
}

