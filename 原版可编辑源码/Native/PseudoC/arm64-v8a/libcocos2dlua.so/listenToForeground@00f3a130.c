
/* cocos2d::RenderTexture::listenToForeground(cocos2d::EventCustom*) */

void cocos2d::RenderTexture::listenToForeground(EventCustom *param_1)

{
  long lVar1;
  undefined4 uVar2;
  float *pfVar3;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  glGetIntegerv(0x8ca6,param_1 + 0x338);
  glGetIntegerv(0x8ca7,&local_2c);
  glGenFramebuffers(1,param_1 + 0x32c);
  glBindFramebuffer(0x8d40,*(undefined4 *)(param_1 + 0x32c));
  pfVar3 = (float *)Texture2D::getContentSizeInPixels(*(Texture2D **)(param_1 + 0x340));
  if (*(int *)(param_1 + 0x35c) != 0) {
    setupDepthAndStencil((RenderTexture *)param_1,(int)*pfVar3,(int)pfVar3[1]);
  }
  Texture2D::setAntiAliasTexParameters(*(Texture2D **)(param_1 + 0x340));
  if (*(Texture2D **)(param_1 + 0x348) != (Texture2D *)0x0) {
    Texture2D::setAntiAliasTexParameters(*(Texture2D **)(param_1 + 0x348));
  }
  uVar2 = Texture2D::getName(*(Texture2D **)(param_1 + 0x340));
  glFramebufferTexture2D(0x8d40,0x8ce0,0xde1,uVar2,0);
  glBindRenderbuffer(0x8d41,local_2c);
  glBindFramebuffer(0x8d40,*(undefined4 *)(param_1 + 0x338));
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

