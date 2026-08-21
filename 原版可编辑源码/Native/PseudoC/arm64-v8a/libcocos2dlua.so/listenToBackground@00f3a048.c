
/* cocos2d::RenderTexture::listenToBackground(cocos2d::EventCustom*) */

void cocos2d::RenderTexture::listenToBackground(EventCustom *param_1)

{
  long lVar1;
  float *pfVar2;
  
  if (*(long **)(param_1 + 0x350) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x350) + 8))();
  }
  *(undefined8 *)(param_1 + 0x350) = 0;
  lVar1 = newImage((RenderTexture *)param_1,false);
  *(long *)(param_1 + 0x350) = lVar1;
  if (lVar1 != 0) {
    pfVar2 = (float *)Texture2D::getContentSizeInPixels(*(Texture2D **)(param_1 + 0x340));
    VolatileTextureMgr::addDataTexture
              (*(undefined8 *)(param_1 + 0x340),*(undefined8 *)(*(long *)(param_1 + 0x350) + 0x28),
               (int)(*pfVar2 * pfVar2[1] * 4.0),2,pfVar2);
    if (*(long *)(param_1 + 0x348) != 0) {
      VolatileTextureMgr::addDataTexture
                (*(long *)(param_1 + 0x348),*(undefined8 *)(*(long *)(param_1 + 0x350) + 0x28),
                 (int)(*pfVar2 * pfVar2[1] * 4.0),2,pfVar2);
    }
  }
  glDeleteFramebuffers(1,param_1 + 0x32c);
  *(undefined4 *)(param_1 + 0x32c) = 0;
  if (*(int *)(param_1 + 0x330) != 0) {
    glDeleteRenderbuffers(1,param_1 + 0x330);
    *(undefined4 *)(param_1 + 0x330) = 0;
  }
  if (*(int *)(param_1 + 0x334) != 0) {
    glDeleteRenderbuffers(1,param_1 + 0x334);
    *(undefined4 *)(param_1 + 0x334) = 0;
  }
  return;
}

