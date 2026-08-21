
/* cocostudio::ActionTintFrame::getAction(float) */

void __thiscall cocostudio::ActionTintFrame::getAction(ActionTintFrame *this,float param_1)

{
  undefined8 uVar1;
  
  uVar1 = cocos2d::TintTo::create(param_1,(uchar)this[0x50],(uchar)this[0x51],(uchar)this[0x52]);
                    /* WARNING: Could not recover jumptable at 0x00c33df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x28))(this,uVar1);
  return;
}

