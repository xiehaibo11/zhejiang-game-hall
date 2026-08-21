
/* cocos2d::kmGLPushMatrix() */

void cocos2d::kmGLPushMatrix(void)

{
  Director *pDVar1;
  
  pDVar1 = (Director *)Director::getInstance();
  Director::pushMatrix(pDVar1,currentActiveStackType);
  return;
}

