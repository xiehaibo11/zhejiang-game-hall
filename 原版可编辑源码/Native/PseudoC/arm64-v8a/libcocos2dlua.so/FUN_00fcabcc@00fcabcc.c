
void FUN_00fcabcc(void)

{
  long lVar1;
  
  lVar1 = cocos2d::Director::getInstance();
  cocos2d::EventDispatcher::removeEventListener(*(EventDispatcher **)(lVar1 + 0xb0),DAT_01792580);
  DAT_01792580 = (EventListener *)0x0;
  cocos2d::Renderer::addCommand(*(Renderer **)(lVar1 + 0x1b0),(RenderCommand *)&DAT_01792530);
  cocos2d::Renderer::render(*(Renderer **)(lVar1 + 0x1b0));
  return;
}

