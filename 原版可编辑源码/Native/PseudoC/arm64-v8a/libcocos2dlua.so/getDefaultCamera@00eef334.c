
/* cocos2d::Camera::getDefaultCamera() */

undefined8 cocos2d::Camera::getDefaultCamera(void)

{
  long lVar1;
  
  lVar1 = Director::getInstance();
  if (*(long *)(lVar1 + 0x158) != 0) {
    return *(undefined8 *)(*(long *)(lVar1 + 0x158) + 0x310);
  }
  return 0;
}

