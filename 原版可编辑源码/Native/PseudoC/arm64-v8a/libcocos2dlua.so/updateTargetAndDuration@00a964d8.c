
/* fairygui::ScrollPane::updateTargetAndDuration(cocos2d::Vec2 const&) */

undefined1  [16] __thiscall
fairygui::ScrollPane::updateTargetAndDuration(ScrollPane *this,Vec2 *param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  
  auVar1 = updateTargetAndDuration(this,*(float *)param_1,0);
  uVar2 = auVar1._8_8_;
  updateTargetAndDuration(this,*(float *)(param_1 + 4),1);
  auVar1._8_8_ = uVar2;
                    /* catch() { ... } // from try @ 00a96480 with catch @ 00a96518 */
                    /* catch() { ... } // from try @ 00a96498 with catch @ 00a9651c */
  return auVar1;
}

