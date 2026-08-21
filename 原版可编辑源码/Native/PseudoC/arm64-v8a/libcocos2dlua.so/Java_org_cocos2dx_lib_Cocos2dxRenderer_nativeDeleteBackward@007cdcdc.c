
void Java_org_cocos2dx_lib_Cocos2dxRenderer_nativeDeleteBackward(void)

{
  IMEDispatcher *this;
  
  this = (IMEDispatcher *)cocos2d::IMEDispatcher::sharedDispatcher();
  cocos2d::IMEDispatcher::dispatchDeleteBackward(this);
  return;
}

