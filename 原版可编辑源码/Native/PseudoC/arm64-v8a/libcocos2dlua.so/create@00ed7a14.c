
/* cocos2d::Waves::create(float, cocos2d::Size const&, unsigned int, float, bool, bool) */

Action * cocos2d::Waves::create
                   (float param_1,Size *param_2,uint param_3,float param_4,bool param_5,bool param_6
                   )

{
  Action *this;
  ulong uVar1;
  
  this = operator_new(0x78,(nothrow_t *)&std::nothrow);
  if (this != (Action *)0x0) {
    Action::Action(this);
                    /* try { // try from 00ed7a64 to 00fd7a67 has its CatchHandler @ 00ed85e4 */
    *(undefined4 *)(this + 0x4c) = 0;
                    /* try { // try from 00ed7a78 to 00fd7aaf has its CatchHandler @ 00ed85ec */
    *(undefined ***)this = &PTR__Action_016f7408;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f7470;
    Size::Size((Size *)(this + 0x58));
    *(undefined ***)this = &PTR__Action_016f7c30;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f7c98;
    uVar1 = GridAction::initWithDuration((GridAction *)this,param_1,param_2);
    if ((uVar1 & 1) == 0) {
      Ref::release((Ref *)this);
      this = (Action *)0x0;
    }
    else {
                    /* try { // try from 00ed7ab8 to 00fd7ac7 has its CatchHandler @ 00ed85e8 */
      *(uint *)(this + 0x68) = param_3;
      *(float *)(this + 0x6c) = param_4;
      *(undefined4 *)(this + 0x70) = 0x3f800000;
      this[0x75] = (Action)param_5;
      this[0x74] = (Action)param_6;
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

