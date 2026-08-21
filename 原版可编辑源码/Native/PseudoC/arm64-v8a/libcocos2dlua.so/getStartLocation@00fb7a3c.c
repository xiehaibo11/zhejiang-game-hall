
/* cocos2d::Touch::getStartLocation() const */

void __thiscall cocos2d::Touch::getStartLocation(Touch *this)

{
  Director *this_00;
  
  this_00 = (Director *)Director::getInstance();
  Director::convertToGL(this_00,this + 0x2c);
  return;
}

