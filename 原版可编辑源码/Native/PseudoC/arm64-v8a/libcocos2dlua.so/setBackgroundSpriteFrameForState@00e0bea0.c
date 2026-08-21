
/* cocos2d::extension::ControlButton::setBackgroundSpriteFrameForState(cocos2d::SpriteFrame*,
   cocos2d::extension::Control::State) */

void __thiscall
cocos2d::extension::ControlButton::setBackgroundSpriteFrameForState
          (ControlButton *this,SpriteFrame *param_1,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = cocos2d::ui::Scale9Sprite::createWithSpriteFrame(param_1);
                    /* WARNING: Could not recover jumptable at 0x00e0bed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x720))(this,uVar1,param_3);
  return;
}

