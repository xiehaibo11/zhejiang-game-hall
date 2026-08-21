
/* cocos2d::extension::ControlSwitchSprite::setOffSprite(cocos2d::Sprite*) */

void __thiscall
cocos2d::extension::ControlSwitchSprite::setOffSprite(ControlSwitchSprite *this,Sprite *param_1)

{
  Ref *this_00;
  
                    /* try { // try from 00e13fb4 to 00f140b7 has its CatchHandler @ 00e13e58 */
  this_00 = *(Ref **)(this + 0x560);
  if (this_00 != (Ref *)param_1) {
    if (param_1 != (Sprite *)0x0) {
      Ref::retain((Ref *)param_1);
      this_00 = *(Ref **)(this + 0x560);
    }
    if (this_00 != (Ref *)0x0) {
      Ref::release(this_00);
    }
    *(Sprite **)(this + 0x560) = param_1;
  }
  return;
}

