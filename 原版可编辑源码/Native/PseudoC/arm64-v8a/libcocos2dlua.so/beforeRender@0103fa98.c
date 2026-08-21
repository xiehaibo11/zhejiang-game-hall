
/* cocos2d::Grabber::beforeRender(cocos2d::Texture2D*) */

void cocos2d::Grabber::beforeRender(Texture2D *param_1)

{
  glGetIntegerv(0x8ca6,param_1 + 0x28);
  glBindFramebuffer(0x8d40,*(undefined4 *)(param_1 + 0x24));
  glGetFloatv(0xc22,param_1 + 0x2c);
  glClearColor(0,0,0,0);
  glClear(0x4100);
  return;
}

