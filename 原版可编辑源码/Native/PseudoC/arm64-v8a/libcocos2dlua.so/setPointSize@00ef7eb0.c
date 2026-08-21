
/* cocos2d::DrawPrimitives::setPointSize(float) */

void cocos2d::DrawPrimitives::setPointSize(float param_1)

{
  long lVar1;
  
  lVar1 = Director::getInstance();
  DAT_01777930 = *(float *)(lVar1 + 0x1a0) * param_1;
  return;
}

