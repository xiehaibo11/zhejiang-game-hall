
/* cocos2d::FadeOutTRTiles::create(float, cocos2d::Size const&) */

Action * cocos2d::FadeOutTRTiles::create(float param_1,Size *param_2)

{
  Action *this;
  ulong uVar1;
  
  this = operator_new(0x68,(nothrow_t *)&std::nothrow);
  if (this != (Action *)0x0) {
                    /* catch() { ... } // from try @ 00ee96fc with catch @ 00ee9764 */
    Action::Action(this);
    *(undefined4 *)(this + 0x4c) = 0;
    *(undefined ***)this = &PTR__Action_016f7408;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f7470;
    Size::Size((Size *)(this + 0x58));
                    /* catch() { ... } // from try @ 00ee96cc with catch @ 00ee9794 */
    *(undefined ***)this = &PTR__Action_016f9da8;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f9e20;
                    /* try { // try from 00ee97b0 to 00fe97e3 has its CatchHandler @ 00ee97b0
                       catch() { ... } // from try @ 00ee97b0 with catch @ 00ee97b0
                       catch() { ... } // from try @ 00ee981c with catch @ 00ee97b0 */
    uVar1 = GridAction::initWithDuration((GridAction *)this,param_1,param_2);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (Action *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
    }
  }
                    /* try { // try from 00ee97e4 to 00fe97f7 has its CatchHandler @ 00ee98ac */
  return this;
}

