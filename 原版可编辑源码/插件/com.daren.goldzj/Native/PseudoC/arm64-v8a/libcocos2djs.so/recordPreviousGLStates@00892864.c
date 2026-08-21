
/* cocos2d::RenderTexture::recordPreviousGLStates(bool) */

void __thiscall cocos2d::RenderTexture::recordPreviousGLStates(RenderTexture *this,bool param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (!param_1) {
    uVar2 = getVertexAttribPointerInfo(*(uint *)(this + 0x24));
    *(undefined8 *)(this + 0x48) = uVar2;
    uVar2 = getVertexAttribPointerInfo(*(uint *)(this + 0x28));
    *(undefined8 *)(this + 0x50) = uVar2;
    uVar1 = ccGetBoundVertexBuffer();
    *(undefined4 *)(this + 0x40) = uVar1;
    uVar1 = ccGetBoundIndexBuffer();
    *(undefined4 *)(this + 0x44) = uVar1;
  }
  uVar2 = getBoundTextureInfo(0);
  *(undefined8 *)(this + 0x68) = uVar2;
  glGetBooleanv(0xc23,this + 0x58);
  glGetBooleanv(0xb71,this + 0x5c);
  glGetBooleanv(0xbe2,this + 0x5d);
  glGetBooleanv(0xb44,this + 0x5e);
  glGetBooleanv(0xb90,this + 0x5f);
  glGetBooleanv(0xc11,this + 0x60);
  glGetIntegerv(0x8b8d,this + 100);
  return;
}

