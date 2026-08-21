
/* cocos2d::RenderTexture::draw() */

void __thiscall cocos2d::RenderTexture::draw(RenderTexture *this)

{
  byte bVar1;
  
  Configuration::getInstance();
  bVar1 = Configuration::supportsShareableVAO();
  recordPreviousGLStates(this,(bool)(bVar1 & 1));
  glBindFramebuffer(0x8d40,*(undefined4 *)(this + 4));
  ccViewport(0,0,(int)*(float *)(this + 0x38),(int)*(float *)(this + 0x3c));
  glClearColor(0,0,0,0x3f800000);
  glClear(0x4000);
  glColorMask(1,1,1,0);
  glDisable(0xb71);
  glDisable(0xb90);
  glDisable(0xbe2);
  glDisable(0xb44);
  glDisable(0xc11);
  glActiveTexture(0x84c0);
  glBindTexture(0xde1,*(undefined4 *)this);
  glUseProgram(*(undefined4 *)(this + 0x20));
  glUniform1i(*(undefined4 *)(this + 0x2c),0);
  if ((bVar1 & 1) == 0) {
    glBindBuffer(0x8892,*(undefined4 *)(this + 0xc));
    glEnableVertexAttribArray(*(undefined4 *)(this + 0x24));
    glVertexAttribPointer(*(undefined4 *)(this + 0x24),2,0x1406,0,0x10,0);
    glEnableVertexAttribArray(*(undefined4 *)(this + 0x28));
    glVertexAttribPointer(*(undefined4 *)(this + 0x28),2,0x1406,0,0x10,8);
    glBindBuffer(0x8893,*(undefined4 *)(this + 0x10));
  }
  else {
    (*glBindVertexArrayOESEXT)(*(undefined4 *)(this + 0x14));
  }
  glDrawElements(4,6,0x1405,0);
  resetPreviousGLStates(this,(bool)(bVar1 & 1));
  return;
}

