
/* cocos2d::kmGLLoadIdentity() */

void cocos2d::kmGLLoadIdentity(void)

{
  Director *pDVar1;
  
  pDVar1 = (Director *)Director::getInstance();
  Director::loadIdentityMatrix(pDVar1,currentActiveStackType);
  return;
}

