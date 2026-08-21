
/* cocos2d::Grabber::grab(cocos2d::Texture2D*) */

void __thiscall cocos2d::Grabber::grab(Grabber *this,Texture2D *param_1)

{
  undefined4 uVar1;
  
  glGetIntegerv(0x8ca6,this + 0x28);
  glBindFramebuffer(0x8d40,*(undefined4 *)(this + 0x24));
  uVar1 = Texture2D::getName(param_1);
  glFramebufferTexture2D(0x8d40,0x8ce0,0xde1,uVar1,0);
  glCheckFramebufferStatus(0x8d40);
  glBindFramebuffer(0x8d40,*(undefined4 *)(this + 0x28));
  return;
}

