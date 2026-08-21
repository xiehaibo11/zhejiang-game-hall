
/* cocostudio::ComController::create() */

ComController * cocostudio::ComController::create(void)

{
  ComController *this;
  ulong uVar1;
  
  this = operator_new(0x90,(nothrow_t *)&std::nothrow);
  if (this != (ComController *)0x0) {
    ComController(this);
    uVar1 = (**(code **)(*(long *)this + 0x10))(this);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (ComController *)0x0;
    }
    else {
      cocos2d::Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

