
/* cocos2d::Grabber::afterRender(cocos2d::Texture2D*) */

void cocos2d::Grabber::afterRender(Texture2D *param_1)

{
  glBindFramebuffer(0x8d40,*(undefined4 *)(param_1 + 0x28));
  glClearColor(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30),
               *(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38));
  return;
}

