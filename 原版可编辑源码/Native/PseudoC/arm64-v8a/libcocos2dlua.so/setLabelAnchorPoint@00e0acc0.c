
/* cocos2d::extension::ControlButton::setLabelAnchorPoint(cocos2d::Vec2 const&) */

void __thiscall
cocos2d::extension::ControlButton::setLabelAnchorPoint(ControlButton *this,Vec2 *param_1)

{
  *(undefined8 *)(this + 0x3a0) = *(undefined8 *)param_1;
  if (*(long **)(this + 0x380) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00e0acdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 00e0acdc to 00f0ae4b has its CatchHandler @ 00e0acdc
                       catch() { ... } // from try @ 00e0acdc with catch @ 00e0acdc
                       catch() { ... } // from try @ 00e0ae54 with catch @ 00e0acdc */
    (**(code **)(**(long **)(this + 0x380) + 0x148))();
    return;
  }
  return;
}

