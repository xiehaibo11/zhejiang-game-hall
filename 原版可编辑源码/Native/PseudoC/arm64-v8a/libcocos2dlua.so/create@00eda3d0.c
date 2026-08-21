
/* cocos2d::Place::create(cocos2d::Vec2 const&) */

Action * cocos2d::Place::create(Vec2 *param_1)

{
  Action *this;
  
  this = operator_new(0x60,(nothrow_t *)&std::nothrow);
  if (this != (Action *)0x0) {
    Action::Action(this);
    *(undefined4 *)(this + 0x4c) = 0;
    *(undefined ***)this = &PTR__Action_016f8300;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f8360;
    *(undefined8 *)(this + 0x54) = *(undefined8 *)param_1;
    Ref::autorelease((Ref *)this);
  }
  return this;
}

