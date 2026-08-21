
/* cocos2d::EventMouse::getDelta() const */

float __thiscall cocos2d::EventMouse::getDelta(EventMouse *this)

{
  Director *pDVar1;
  float fVar2;
  float fVar3;
  
  pDVar1 = (Director *)Director::getInstance();
  fVar2 = (float)Director::convertToGL(pDVar1,this + 0x5c);
  pDVar1 = (Director *)Director::getInstance();
  fVar3 = (float)Director::convertToGL(pDVar1,this + 100);
  return fVar2 - fVar3;
}

