
void Java_org_cocos2dx_lib_Cocos2dxRenderer_nativeRender(void)

{
  Director *this;
  
  this = (Director *)cocos2d::Director::getInstance();
  cocos2d::Director::mainLoop(this);
  return;
}

