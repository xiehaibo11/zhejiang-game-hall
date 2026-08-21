
/* cocos2d::extension::ControlSwitchSprite::setOffLabel(cocos2d::Label*) */

void __thiscall
cocos2d::extension::ControlSwitchSprite::setOffLabel(ControlSwitchSprite *this,Label *param_1)

{
  Ref *this_00;
  
  this_00 = *(Ref **)(this + 0x578);
  if (this_00 != (Ref *)param_1) {
                    /* try { // try from 00e140b8 to 00f140cf has its CatchHandler @ 00e14140 */
    if (param_1 != (Label *)0x0) {
      Ref::retain((Ref *)param_1);
      this_00 = *(Ref **)(this + 0x578);
    }
    if (this_00 != (Ref *)0x0) {
      Ref::release(this_00);
    }
    *(Label **)(this + 0x578) = param_1;
  }
                    /* try { // try from 00e140dc to 00f14113 has its CatchHandler @ 00e1414c */
  return;
}

