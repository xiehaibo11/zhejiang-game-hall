
/* cocos2d::TransitionFade::onExit() */

void __thiscall cocos2d::TransitionFade::onExit(TransitionFade *this)

{
  TransitionScene::onExit((TransitionScene *)this);
                    /* WARNING: Could not recover jumptable at 0x00f5d5c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x288))(this,0xfadefade,0);
  return;
}

