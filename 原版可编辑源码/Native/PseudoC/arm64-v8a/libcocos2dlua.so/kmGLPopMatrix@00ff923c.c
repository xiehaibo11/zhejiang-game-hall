
/* cocos2d::kmGLPopMatrix() */

void cocos2d::kmGLPopMatrix(void)

{
  Director *pDVar1;
  
  pDVar1 = (Director *)Director::getInstance();
  Director::popMatrix(pDVar1,currentActiveStackType);
  return;
}

