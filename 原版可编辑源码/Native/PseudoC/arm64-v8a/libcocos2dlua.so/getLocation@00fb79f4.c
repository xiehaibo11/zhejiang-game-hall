
/* cocos2d::Touch::getLocation() const */

void __thiscall cocos2d::Touch::getLocation(Touch *this)

{
  Director *this_00;
  
  this_00 = (Director *)Director::getInstance();
  Director::convertToGL(this_00,this + 0x34);
  return;
}

