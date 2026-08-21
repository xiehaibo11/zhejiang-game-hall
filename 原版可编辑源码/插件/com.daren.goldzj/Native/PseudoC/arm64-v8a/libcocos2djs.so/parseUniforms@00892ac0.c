
/* cocos2d::RenderTexture::parseUniforms() */

bool __thiscall cocos2d::RenderTexture::parseUniforms(RenderTexture *this)

{
  int iVar1;
  
  iVar1 = glGetUniformLocation(*(undefined4 *)(this + 0x20),"u_texture");
  *(int *)(this + 0x2c) = iVar1;
  return iVar1 != -1;
}

