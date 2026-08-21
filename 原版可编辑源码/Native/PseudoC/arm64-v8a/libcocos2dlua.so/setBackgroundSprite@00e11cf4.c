
/* cocos2d::extension::ControlSlider::setBackgroundSprite(cocos2d::Sprite*) */

void __thiscall
cocos2d::extension::ControlSlider::setBackgroundSprite(ControlSlider *this,Sprite *param_1)

{
  Ref *this_00;
  
  this_00 = *(Ref **)(this + 0x388);
  if (this_00 != (Ref *)param_1) {
    if (param_1 != (Sprite *)0x0) {
                    /* try { // try from 00e11d18 to 00f11d23 has its CatchHandler @ 00e12074 */
      Ref::retain((Ref *)param_1);
      this_00 = *(Ref **)(this + 0x388);
    }
                    /* try { // try from 00e11d24 to 00f11ee7 has its CatchHandler @ 00e11350 */
    if (this_00 != (Ref *)0x0) {
      Ref::release(this_00);
    }
    *(Sprite **)(this + 0x388) = param_1;
  }
  return;
}

