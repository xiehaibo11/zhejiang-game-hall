
/* cocos2d::extension::ControlSwitchSprite::setMaskTexture(cocos2d::Texture2D*) */

void __thiscall
cocos2d::extension::ControlSwitchSprite::setMaskTexture
          (ControlSwitchSprite *this,Texture2D *param_1)

{
  Ref *this_00;
  
                    /* try { // try from 00e13efc to 00f13f03 has its CatchHandler @ 00e141a4 */
  this_00 = *(Ref **)(this + 0x548);
  if (this_00 != (Ref *)param_1) {
    if (param_1 != (Texture2D *)0x0) {
      Ref::retain((Ref *)param_1);
      this_00 = *(Ref **)(this + 0x548);
    }
    if (this_00 != (Ref *)0x0) {
                    /* try { // try from 00e13f20 to 00f13f2b has its CatchHandler @ 00e14194 */
      Ref::release(this_00);
    }
    *(Texture2D **)(this + 0x548) = param_1;
  }
  return;
}

