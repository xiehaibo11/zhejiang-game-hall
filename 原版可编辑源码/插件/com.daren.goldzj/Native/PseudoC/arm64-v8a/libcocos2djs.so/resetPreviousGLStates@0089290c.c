
/* cocos2d::RenderTexture::resetPreviousGLStates(bool) const */

void __thiscall cocos2d::RenderTexture::resetPreviousGLStates(RenderTexture *this,bool param_1)

{
  undefined4 *puVar1;
  
  glUseProgram(*(undefined4 *)(this + 100));
  if (param_1) {
    (*glBindVertexArrayOESEXT)(0);
  }
  else {
    if (*(long *)(this + 0x48) != 0) {
      glBindBuffer(0x8892,*(undefined4 *)(*(long *)(this + 0x48) + 4));
      puVar1 = *(undefined4 **)(this + 0x48);
      glVertexAttribPointer
                (*puVar1,puVar1[2],puVar1[3],*(undefined1 *)(puVar1 + 4),puVar1[5],
                 *(undefined8 *)(puVar1 + 6));
    }
    if (*(long *)(this + 0x50) != 0) {
      glBindBuffer(0x8892,*(undefined4 *)(*(long *)(this + 0x50) + 4));
      puVar1 = *(undefined4 **)(this + 0x50);
      glVertexAttribPointer
                (*puVar1,puVar1[2],puVar1[3],*(undefined1 *)(puVar1 + 4),puVar1[5],
                 *(undefined8 *)(puVar1 + 6));
    }
    glBindBuffer(0x8892,*(undefined4 *)(this + 0x40));
    glBindBuffer(0x8893,*(undefined4 *)(this + 0x44));
  }
  glColorMask(this[0x58],this[0x59],this[0x5a],this[0x5b]);
  if (this[0x5c] == (RenderTexture)0x1) {
    glEnable(0xb71);
  }
  if (this[0x5d] == (RenderTexture)0x1) {
    glEnable(0xbe2);
  }
  if (this[0x5e] == (RenderTexture)0x1) {
    glEnable(0xb44);
  }
  if (this[0x5f] == (RenderTexture)0x1) {
    glEnable(0xb90);
  }
  if (this[0x60] == (RenderTexture)0x1) {
    glEnable(0xc11);
  }
  if (*(long *)(this + 0x68) != 0) {
    glActiveTexture(0x84c0);
    glBindTexture(**(undefined4 **)(this + 0x68),(*(undefined4 **)(this + 0x68))[1]);
    return;
  }
  return;
}

