
/* cocos2d::Sequence::create(cocos2d::Vector<cocos2d::FiniteTimeAction*> const&) */

Action * cocos2d::Sequence::create(Vector *param_1)

{
  Action *this;
  ulong uVar1;
  
  this = operator_new(0x70,(nothrow_t *)&std::nothrow);
  if (this != (Action *)0x0) {
    Action::Action(this);
    *(undefined4 *)(this + 0x4c) = 0;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x60) = 0;
    *(undefined ***)this = &PTR__Sequence_016f8520;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f8580;
    *(undefined4 *)(this + 0x68) = 0;
    uVar1 = init((Sequence *)this,param_1);
    if ((uVar1 & 1) == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00edc4bc with catch @ 00edc638
                        */
                    /* try { // try from 00edc63c to 00fdc6db has its CatchHandler @ 00edc63c
                       catch() { ... } // from try @ 00edc63c with catch @ 00edc63c
                       catch() { ... } // from try @ 00edc710 with catch @ 00edc63c */
      (**(code **)(*(long *)this + 8))(this);
      this = (Action *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

