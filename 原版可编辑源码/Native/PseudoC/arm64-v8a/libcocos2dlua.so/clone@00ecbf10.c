
/* cocos2d::ActionCamera::clone() const */

Action * cocos2d::ActionCamera::clone(void)

{
  Action *this;
  
  this = operator_new(0x80,(nothrow_t *)&std::nothrow);
  if (this != (Action *)0x0) {
    Action::Action(this);
    *(undefined4 *)(this + 0x4c) = 0;
    *(undefined ***)this = &PTR__Action_016f5648;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f56a8;
    Vec3::Vec3((Vec3 *)(this + 0x58),0.0,0.0,0.0);
    Vec3::Vec3((Vec3 *)(this + 100),0.0,0.0,1.1920929e-07);
    Vec3::Vec3((Vec3 *)(this + 0x70),0.0,1.0,0.0);
    Ref::autorelease((Ref *)this);
  }
  return this;
}

