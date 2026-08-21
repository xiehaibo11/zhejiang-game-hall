
/* cocos2d::EventMouse::getLocation() const */

void __thiscall cocos2d::EventMouse::getLocation(EventMouse *this)

{
  Director *this_00;
  
  this_00 = (Director *)Director::getInstance();
  Director::convertToGL(this_00,this + 0x5c);
  return;
}

