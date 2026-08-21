
/* cocostudio::timeline::ScaleFrame::create() */

Ref * cocostudio::timeline::ScaleFrame::create(void)

{
  Ref *this;
  undefined8 uVar1;
  
  this = operator_new(0x68,(nothrow_t *)&std::nothrow);
  if (this != (Ref *)0x0) {
    cocos2d::Ref::Ref(this);
    *(undefined4 *)(this + 0x24) = 0;
    uVar1 = NEON_fmov(0x3f800000,4);
    *(undefined2 *)(this + 0x28) = 1;
    *(undefined8 *)(this + 0x34) = 0;
    *(undefined8 *)(this + 0x2c) = 0;
    *(undefined8 *)(this + 0x44) = 0;
    *(undefined8 *)(this + 0x3c) = 0;
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined ***)this = &PTR__Frame_016cbba0;
    *(undefined8 *)(this + 0x58) = uVar1;
    cocos2d::Ref::autorelease(this);
  }
  return this;
}

