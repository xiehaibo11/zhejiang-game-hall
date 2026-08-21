
/* cocos2d::FadeOutUpTiles::create(float, cocos2d::Size const&) */

Action * cocos2d::FadeOutUpTiles::create(float param_1,Size *param_2)

{
  Action *this;
  ulong uVar1;
  
                    /* catch() { ... } // from try @ 00ee9c9c with catch @ 00ee9d3c */
  this = operator_new(0x68,(nothrow_t *)&std::nothrow);
                    /* catch() { ... } // from try @ 00ee9ca4 with catch @ 00ee9d5c */
  if (this != (Action *)0x0) {
    Action::Action(this);
    *(undefined4 *)(this + 0x4c) = 0;
                    /* catch() { ... } // from try @ 00ee9c78 with catch @ 00ee9d7c */
    *(undefined ***)this = &PTR__Action_016f7408;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f7470;
    Size::Size((Size *)(this + 0x58));
                    /* catch() { ... } // from try @ 00ee9de8 with catch @ 00ee9da0 */
    *(undefined ***)this = &PTR__Action_016f9f18;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f9f90;
    uVar1 = GridAction::initWithDuration((GridAction *)this,param_1,param_2);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (Action *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
    }
  }
                    /* try { // try from 00ee9de0 to 00fe9de7 has its CatchHandler @ 00ee9e40 */
                    /* try { // try from 00ee9de8 to 00fe9e5b has its CatchHandler @ 00ee9da0 */
  return this;
}

