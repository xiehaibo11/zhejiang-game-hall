
/* cocos2d::EventMouse::getPreviousLocation() const */

void __thiscall cocos2d::EventMouse::getPreviousLocation(EventMouse *this)

{
  Director *this_00;
  
  this_00 = (Director *)Director::getInstance();
  Director::convertToGL(this_00,this + 100);
  return;
}

