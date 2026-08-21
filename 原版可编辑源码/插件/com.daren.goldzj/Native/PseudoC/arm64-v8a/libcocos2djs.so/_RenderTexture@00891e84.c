
/* cocos2d::RenderTexture::~RenderTexture() */

void __thiscall cocos2d::RenderTexture::~RenderTexture(RenderTexture *this)

{
  RenderTexture *pRVar1;
  
  if (*(int *)(this + 0x20) != 0) {
    glDeleteProgram();
    *(undefined4 *)(this + 0x20) = 0;
  }
  pRVar1 = this + 0xc;
  if (*(int *)pRVar1 != 0) {
    glDeleteBuffers(1,pRVar1);
    *(undefined8 *)pRVar1 = 0;
  }
  if (*(int *)this != 0) {
    glDeleteTextures(1,this);
    *(undefined4 *)this = 0;
  }
  pRVar1 = this + 8;
  if (*(int *)pRVar1 != 0) {
    glDeleteFramebuffers(1,pRVar1);
    *(int *)pRVar1 = 0;
  }
  pRVar1 = this + 0x18;
  if (*(int *)pRVar1 != 0) {
    glDeleteRenderbuffers(1,pRVar1);
    *(int *)pRVar1 = 0;
  }
  pRVar1 = this + 0x1c;
  if (*(int *)pRVar1 != 0) {
    glDeleteRenderbuffers(1,pRVar1);
    *(int *)pRVar1 = 0;
  }
  return;
}

