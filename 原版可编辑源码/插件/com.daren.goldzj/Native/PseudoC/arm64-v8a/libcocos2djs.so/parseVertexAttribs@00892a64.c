
/* cocos2d::RenderTexture::parseVertexAttribs() */

bool __thiscall cocos2d::RenderTexture::parseVertexAttribs(RenderTexture *this)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = glGetAttribLocation(*(undefined4 *)(this + 0x20),"a_position");
  *(int *)(this + 0x24) = iVar2;
  if (iVar2 == -1) {
    bVar1 = false;
  }
  else {
    iVar2 = glGetAttribLocation(*(undefined4 *)(this + 0x20),"a_texCoord");
    bVar1 = iVar2 != -1;
    *(int *)(this + 0x28) = iVar2;
  }
  return bVar1;
}

