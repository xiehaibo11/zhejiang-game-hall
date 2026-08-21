
/* cocos2d::kmGLMultMatrix(cocos2d::Mat4 const*) */

void cocos2d::kmGLMultMatrix(Mat4 *param_1)

{
  Director *pDVar1;
  
  pDVar1 = (Director *)Director::getInstance();
  Director::multiplyMatrix(pDVar1,currentActiveStackType,param_1);
  return;
}

