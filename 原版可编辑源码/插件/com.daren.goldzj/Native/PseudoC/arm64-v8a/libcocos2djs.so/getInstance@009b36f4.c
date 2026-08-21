
/* cocos2d::renderer::DeviceGraphics::getInstance() */

DeviceGraphics * cocos2d::renderer::DeviceGraphics::getInstance(void)

{
  DeviceGraphics *this;
  
  this = DAT_01d38078;
  if ((DAT_01d38078 == (DeviceGraphics *)0x0) &&
     (this = operator_new(200,(nothrow_t *)&std::nothrow), this != (DeviceGraphics *)0x0)) {
    DeviceGraphics(this);
  }
  DAT_01d38078 = this;
  return DAT_01d38078;
}

