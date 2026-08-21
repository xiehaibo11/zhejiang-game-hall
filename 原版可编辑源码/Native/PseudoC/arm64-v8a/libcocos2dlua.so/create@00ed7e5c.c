
/* cocos2d::Twirl::create(float, cocos2d::Size const&, cocos2d::Vec2 const&, unsigned int, float) */

Action * cocos2d::Twirl::create
                   (float param_1,Size *param_2,Vec2 *param_3,uint param_4,float param_5)

{
  Action *this;
  ulong uVar1;
  undefined8 uVar2;
  
                    /* try { // try from 00ed7e64 to 00fd7e7f has its CatchHandler @ 00ed86c8 */
  this = operator_new(0x80,(nothrow_t *)&std::nothrow);
  if (this != (Action *)0x0) {
    Action::Action(this);
    *(undefined4 *)(this + 0x4c) = 0;
    *(undefined ***)this = &PTR__Action_016f7408;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f7470;
    Size::Size((Size *)(this + 0x58));
                    /* try { // try from 00ed7ee4 to 00fd7ef3 has its CatchHandler @ 00ed8688 */
    *(undefined ***)this = &PTR__Action_016f7cd8;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f7d40;
    *(undefined8 *)(this + 0x68) = 0;
    uVar1 = GridAction::initWithDuration((GridAction *)this,param_1,param_2);
    if ((uVar1 & 1) == 0) {
      Ref::release((Ref *)this);
      this = (Action *)0x0;
    }
    else {
      uVar2 = *(undefined8 *)param_3;
      *(uint *)(this + 0x70) = param_4;
      *(float *)(this + 0x74) = param_5;
      *(undefined8 *)(this + 0x68) = uVar2;
      *(undefined4 *)(this + 0x78) = 0x3f800000;
      Ref::autorelease((Ref *)this);
    }
  }
                    /* try { // try from 00ed7f30 to 00fd7f37 has its CatchHandler @ 00ed8684 */
  return this;
}

