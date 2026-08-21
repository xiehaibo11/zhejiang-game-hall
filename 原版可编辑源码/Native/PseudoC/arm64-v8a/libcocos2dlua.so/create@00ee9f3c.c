
/* cocos2d::FadeOutDownTiles::create(float, cocos2d::Size const&) */

Action * cocos2d::FadeOutDownTiles::create(float param_1,Size *param_2)

{
  Action *this;
  ulong uVar1;
  
                    /* catch() { ... } // from try @ 00ee9f80 with catch @ 00ee9f3c */
  this = operator_new(0x68,(nothrow_t *)&std::nothrow);
  if (this != (Action *)0x0) {
    Action::Action(this);
    *(undefined4 *)(this + 0x4c) = 0;
                    /* try { // try from 00ee9f78 to 00fe9f7f has its CatchHandler @ 00ee9fd4 */
                    /* try { // try from 00ee9f80 to 00fe9fef has its CatchHandler @ 00ee9f3c */
    *(undefined ***)this = &PTR__Action_016f7408;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f7470;
    Size::Size((Size *)(this + 0x58));
    *(undefined ***)this = &PTR__Action_016f9fd0;
    *(undefined ***)(this + 0x28) = &PTR_clone_016fa048;
    uVar1 = GridAction::initWithDuration((GridAction *)this,param_1,param_2);
    if ((uVar1 & 1) == 0) {
                    /* catch() { ... } // from try @ 00ee9f78 with catch @ 00ee9fd4 */
      (**(code **)(*(long *)this + 8))(this);
      this = (Action *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

