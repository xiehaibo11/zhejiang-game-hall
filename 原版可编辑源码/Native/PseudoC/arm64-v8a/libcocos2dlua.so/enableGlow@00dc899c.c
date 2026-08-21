
/* cocos2d::ui::Text::enableGlow(cocos2d::Color4B const&) */

void cocos2d::ui::Text::enableGlow(Color4B *param_1)

{
  if (*(int *)(param_1 + 0x534) == 1) {
                    /* WARNING: Could not recover jumptable at 0x00dc89b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x528) + 0x5b0))();
    return;
  }
                    /* try { // try from 00dc89b8 to 00ec89bf has its CatchHandler @ 00dc89ec */
  return;
}

