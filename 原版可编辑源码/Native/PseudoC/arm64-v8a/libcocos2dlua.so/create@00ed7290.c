
/* cocos2d::Shaky3D::create(float, cocos2d::Size const&, int, bool) */

Action * cocos2d::Shaky3D::create(float param_1,Size *param_2,int param_3,bool param_4)

{
  Action *this;
  ulong uVar1;
  
  this = operator_new(0x70,(nothrow_t *)&std::nothrow);
  if (this != (Action *)0x0) {
    Action::Action(this);
    *(undefined4 *)(this + 0x4c) = 0;
    *(undefined ***)this = &PTR__Action_016f7408;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f7470;
    Size::Size((Size *)(this + 0x58));
    *(undefined ***)this = &PTR__Action_016f7ae0;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f7b48;
    uVar1 = GridAction::initWithDuration((GridAction *)this,param_1,param_2);
    if ((uVar1 & 1) == 0) {
      Ref::release((Ref *)this);
      this = (Action *)0x0;
    }
    else {
      *(int *)(this + 0x68) = param_3;
      this[0x6c] = (Action)param_4;
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

