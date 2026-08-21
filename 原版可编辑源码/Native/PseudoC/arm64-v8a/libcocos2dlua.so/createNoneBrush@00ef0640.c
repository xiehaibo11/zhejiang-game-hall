
/* cocos2d::CameraBackgroundBrush::createNoneBrush() */

Ref * cocos2d::CameraBackgroundBrush::createNoneBrush(void)

{
  Ref *this;
  
  this = operator_new(0x30,(nothrow_t *)&std::nothrow);
  if (this != (Ref *)0x0) {
    Ref::Ref(this);
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined ***)this = &PTR__CameraBackgroundBrush_016fb068;
  }
  (**(code **)(*(long *)this + 0x28))(this);
  Ref::autorelease(this);
  return this;
}

