
/* cocos2d::extension::ControlSlider::setSelectedThumbSprite(cocos2d::Sprite*) */

void __thiscall
cocos2d::extension::ControlSlider::setSelectedThumbSprite(ControlSlider *this,Sprite *param_1)

{
  Ref *this_00;
  
  this_00 = *(Ref **)(this + 0x378);
  if (this_00 != (Ref *)param_1) {
    if (param_1 != (Sprite *)0x0) {
      Ref::retain((Ref *)param_1);
      this_00 = *(Ref **)(this + 0x378);
    }
    if (this_00 != (Ref *)0x0) {
      Ref::release(this_00);
    }
    *(Sprite **)(this + 0x378) = param_1;
  }
                    /* try { // try from 00e11c90 to 00f11c9b has its CatchHandler @ 00e12080 */
  return;
}

