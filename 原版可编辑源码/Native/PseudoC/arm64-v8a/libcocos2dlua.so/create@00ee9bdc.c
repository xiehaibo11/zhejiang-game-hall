
/* cocos2d::FadeOutBLTiles::create(float, cocos2d::Size const&) */

Action * cocos2d::FadeOutBLTiles::create(float param_1,Size *param_2)

{
  Action *this;
  ulong uVar1;
  
  this = operator_new(0x68,(nothrow_t *)&std::nothrow);
  if (this != (Action *)0x0) {
    Action::Action(this);
    *(undefined4 *)(this + 0x4c) = 0;
    *(undefined ***)this = &PTR__Action_016f7408;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f7470;
                    /* try { // try from 00ee9c34 to 00fe9c77 has its CatchHandler @ 00ee9c34
                       catch() { ... } // from try @ 00ee9c34 with catch @ 00ee9c34
                       catch() { ... } // from try @ 00ee9ccc with catch @ 00ee9c34 */
    Size::Size((Size *)(this + 0x58));
    *(undefined ***)this = &PTR__Action_016f9e60;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f9ed8;
    uVar1 = GridAction::initWithDuration((GridAction *)this,param_1,param_2);
    if ((uVar1 & 1) == 0) {
                    /* try { // try from 00ee9c78 to 00fe9c83 has its CatchHandler @ 00ee9d7c */
      (**(code **)(*(long *)this + 8))(this);
      this = (Action *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

