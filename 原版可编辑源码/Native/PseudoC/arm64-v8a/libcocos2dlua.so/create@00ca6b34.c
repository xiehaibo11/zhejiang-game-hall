
/* cocostudio::timeline::RotationSkewFrame::create() */

Ref * cocostudio::timeline::RotationSkewFrame::create(void)

{
  Ref *this;
  
  this = operator_new(0x68,(nothrow_t *)&std::nothrow);
  if (this != (Ref *)0x0) {
    cocos2d::Ref::Ref(this);
    *(undefined4 *)(this + 0x24) = 0;
    *(undefined4 *)(this + 0x5c) = 0;
    *(undefined2 *)(this + 0x28) = 1;
    *(undefined8 *)(this + 0x34) = 0;
    *(undefined8 *)(this + 0x2c) = 0;
    *(undefined8 *)(this + 0x44) = 0;
    *(undefined8 *)(this + 0x3c) = 0;
    *(undefined8 *)(this + 0x54) = 0;
    *(undefined8 *)(this + 0x4c) = 0;
    *(undefined ***)this = &PTR__Frame_016cba20;
    cocos2d::Ref::autorelease(this);
  }
  return this;
}

