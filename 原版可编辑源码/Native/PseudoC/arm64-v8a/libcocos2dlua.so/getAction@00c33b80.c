
/* cocostudio::ActionRotationFrame::getAction(float, cocostudio::ActionFrame*) */

void __thiscall
cocostudio::ActionRotationFrame::getAction
          (ActionRotationFrame *this,float param_1,ActionFrame *param_2)

{
  undefined8 uVar1;
  
  if (param_2 != (ActionFrame *)0x0) {
    uVar1 = cocos2d::RotateBy::create(param_1,*(float *)(this + 0x50) - *(float *)(param_2 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00c33bbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x28))(this,uVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00c33bd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x10))(this);
  return;
}

