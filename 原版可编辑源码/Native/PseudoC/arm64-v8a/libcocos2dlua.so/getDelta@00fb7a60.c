
/* cocos2d::Touch::getDelta() const */

float __thiscall cocos2d::Touch::getDelta(Touch *this)

{
  Director *pDVar1;
  float fVar2;
  float fVar3;
  
  pDVar1 = (Director *)Director::getInstance();
  fVar2 = (float)Director::convertToGL(pDVar1,this + 0x34);
  pDVar1 = (Director *)Director::getInstance();
  fVar3 = (float)Director::convertToGL(pDVar1,this + 0x3c);
  return fVar2 - fVar3;
}

