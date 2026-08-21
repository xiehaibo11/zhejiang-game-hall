
/* cocostudio::ActionManagerEx::getInstance() */

Ref * cocostudio::ActionManagerEx::getInstance(void)

{
  Ref *this;
  
  this = DAT_017856f0;
  if ((DAT_017856f0 == (Ref *)0x0) &&
     (this = operator_new(0x58,(nothrow_t *)&std::nothrow), this != (Ref *)0x0)) {
    cocos2d::Ref::Ref(this);
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined ***)this = &PTR__ActionManagerEx_016c7c90;
    *(undefined4 *)(this + 0x48) = 0x3f800000;
  }
  DAT_017856f0 = this;
  return DAT_017856f0;
}

