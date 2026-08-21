
/* cocostudio::DisplayManager::getContentSize() const */

void cocostudio::DisplayManager::getContentSize(void)

{
  long in_x0;
  Size *pSVar1;
  Size *in_x8;
  
  if (*(long **)(in_x0 + 0x40) != (long *)0x0) {
    pSVar1 = (Size *)(**(code **)(**(long **)(in_x0 + 0x40) + 0x168))();
    cocos2d::Size::Size(in_x8,pSVar1);
    return;
  }
  cocos2d::Size::Size(in_x8,0.0,0.0);
  return;
}

