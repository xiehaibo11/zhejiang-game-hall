
/* cocos2d::extension::ControlSlider::setProgressSprite(cocos2d::Sprite*) */

void __thiscall
cocos2d::extension::ControlSlider::setProgressSprite(ControlSlider *this,Sprite *param_1)

{
  Ref *this_00;
  
  this_00 = *(Ref **)(this + 0x380);
  if (this_00 != (Ref *)param_1) {
    if (param_1 != (Sprite *)0x0) {
      Ref::retain((Ref *)param_1);
                    /* try { // try from 00e11cd0 to 00f11cdf has its CatchHandler @ 00e12078 */
      this_00 = *(Ref **)(this + 0x380);
    }
    if (this_00 != (Ref *)0x0) {
      Ref::release(this_00);
    }
    *(Sprite **)(this + 0x380) = param_1;
  }
                    /* try { // try from 00e11ce0 to 00f11d17 has its CatchHandler @ 00e11350 */
  return;
}

