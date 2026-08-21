
/* cocos2d::Label::updateLetterSpriteScale(cocos2d::Sprite*) */

void __thiscall cocos2d::Label::updateLetterSpriteScale(Label *this,Sprite *param_1)

{
  if ((*(int *)(this + 0x308) == 1) && (0.0 < *(float *)(this + 0x67c))) {
                    /* try { // try from 00f0b6f8 to 0100b70b has its CatchHandler @ 00f0b738 */
                    /* WARNING: Could not recover jumptable at 0x00f0b700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 0x80))(*(undefined4 *)(this + 0x680));
    return;
  }
                    /* try { // try from 00f0b70c to 0100b74f has its CatchHandler @ 00f0b65c */
  if (ABS(*(float *)(this + 0x67c)) < 1.1920929e-07) {
                    /* WARNING: Could not recover jumptable at 0x00f0b724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 0x80))(0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00f0b72c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x80))(0x3f800000);
  return;
}

