
/* cocostudio::timeline::ZOrderFrame::create() */

Ref * cocostudio::timeline::ZOrderFrame::create(void)

{
  Ref *this;
  
  this = operator_new(0x60,(nothrow_t *)&std::nothrow);
  if (this != (Ref *)0x0) {
    cocos2d::Ref::Ref(this);
    *(undefined4 *)(this + 0x24) = 0;
    *(undefined2 *)(this + 0x28) = 1;
    *(undefined8 *)(this + 0x34) = 0;
    *(undefined8 *)(this + 0x2c) = 0;
    *(undefined8 *)(this + 0x44) = 0;
    *(undefined8 *)(this + 0x3c) = 0;
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined ***)this = &PTR__Frame_016cc020;
    *(undefined4 *)(this + 0x58) = 0;
    cocos2d::Ref::autorelease(this);
  }
  return this;
}

