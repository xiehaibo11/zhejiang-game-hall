
/* cocos2d::GLView::isScissorEnabled() */

bool cocos2d::GLView::isScissorEnabled(void)

{
  char cVar1;
  
  cVar1 = glIsEnabled(0xc11);
  return cVar1 != '\0';
}

