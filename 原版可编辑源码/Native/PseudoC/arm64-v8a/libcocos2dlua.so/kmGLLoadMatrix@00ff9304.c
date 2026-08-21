
/* cocos2d::kmGLLoadMatrix(cocos2d::Mat4 const*) */

void cocos2d::kmGLLoadMatrix(Mat4 *param_1)

{
  Director *pDVar1;
  
  pDVar1 = (Director *)Director::getInstance();
  Director::loadMatrix(pDVar1,currentActiveStackType,param_1);
  return;
}

