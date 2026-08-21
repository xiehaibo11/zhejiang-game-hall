
/* cocos2d::extension::ControlPotentiometer::setThumbSprite(cocos2d::Sprite*) */

void __thiscall
cocos2d::extension::ControlPotentiometer::setThumbSprite(ControlPotentiometer *this,Sprite *param_1)

{
  Ref *this_00;
  
                    /* try { // try from 00e100b8 to 00f100cb has its CatchHandler @ 00e10104 */
  this_00 = *(Ref **)(this + 0x368);
  if (this_00 != (Ref *)param_1) {
    if (param_1 != (Sprite *)0x0) {
                    /* try { // try from 00e100cc to 00f1037b has its CatchHandler @ 00e1002c */
      Ref::retain((Ref *)param_1);
      this_00 = *(Ref **)(this + 0x368);
    }
    if (this_00 != (Ref *)0x0) {
      Ref::release(this_00);
    }
    *(Sprite **)(this + 0x368) = param_1;
  }
  return;
}

