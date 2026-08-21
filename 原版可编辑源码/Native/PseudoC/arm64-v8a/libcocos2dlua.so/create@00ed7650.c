
/* cocos2d::Liquid::create(float, cocos2d::Size const&, unsigned int, float) */

Action * cocos2d::Liquid::create(float param_1,Size *param_2,uint param_3,float param_4)

{
  Action *this;
  ulong uVar1;
  
                    /* catch() { ... } // from try @ 00ed7610 with catch @ 00ed767c */
  this = operator_new(0x78,(nothrow_t *)&std::nothrow);
  if (this != (Action *)0x0) {
                    /* catch() { ... } // from try @ 00ed7734 with catch @ 00ed7690 */
    Action::Action(this);
    *(undefined4 *)(this + 0x4c) = 0;
    *(undefined ***)this = &PTR__Action_016f7408;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f7470;
    Size::Size((Size *)(this + 0x58));
    *(undefined ***)this = &PTR__Action_016f7b88;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f7bf0;
    uVar1 = GridAction::initWithDuration((GridAction *)this,param_1,param_2);
    if ((uVar1 & 1) == 0) {
      Ref::release((Ref *)this);
      this = (Action *)0x0;
    }
    else {
      *(uint *)(this + 0x68) = param_3;
                    /* try { // try from 00ed76f0 to 00fd771b has its CatchHandler @ 00ed7794 */
      *(float *)(this + 0x6c) = param_4;
      *(undefined4 *)(this + 0x70) = 0x3f800000;
      Ref::autorelease((Ref *)this);
    }
  }
                    /* try { // try from 00ed771c to 00fd7733 has its CatchHandler @ 00ed779c */
  return this;
}

