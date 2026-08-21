
/* cocos2d::ShuffleTiles::create(float, cocos2d::Size const&, unsigned int) */

Action * cocos2d::ShuffleTiles::create(float param_1,Size *param_2,uint param_3)

{
  Action *this;
  ulong uVar1;
  
  this = operator_new(0x80,(nothrow_t *)&std::nothrow);
  if (this != (Action *)0x0) {
    Action::Action(this);
    *(undefined4 *)(this + 0x4c) = 0;
    *(undefined ***)this = &PTR__Action_016f7408;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f7470;
    Size::Size((Size *)(this + 0x58));
                    /* catch() { ... } // from try @ 00ee8efc with catch @ 00ee8fbc */
    *(undefined ***)this = &PTR__ShuffleTiles_016f9b20;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f9b88;
    uVar1 = GridAction::initWithDuration((GridAction *)this,param_1,param_2);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (Action *)0x0;
    }
    else {
      *(uint *)(this + 0x68) = param_3;
      *(undefined8 *)(this + 0x70) = 0;
      *(undefined8 *)(this + 0x78) = 0;
      Ref::autorelease((Ref *)this);
    }
  }
                    /* catch() { ... } // from try @ 00ee8ec8 with catch @ 00ee9004 */
  return this;
}

