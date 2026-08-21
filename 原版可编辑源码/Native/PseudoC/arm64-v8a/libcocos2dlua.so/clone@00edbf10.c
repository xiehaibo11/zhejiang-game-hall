
/* cocos2d::ExtraAction::clone() const */

Action * cocos2d::ExtraAction::clone(void)

{
  Action *this;
  
  this = operator_new(0x50,(nothrow_t *)&std::nothrow);
  if (this != (Action *)0x0) {
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)this = 0;
    Action::Action(this);
    *(undefined4 *)(this + 0x4c) = 0;
    *(undefined ***)this = &PTR__Action_016f9768;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f97c8;
    Ref::autorelease((Ref *)this);
  }
  return this;
}

