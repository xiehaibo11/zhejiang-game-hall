
/* cocos2d::ParticleSystemQuad::setupVBOandVAO() */

void __thiscall cocos2d::ParticleSystemQuad::setupVBOandVAO(ParticleSystemQuad *this)

{
  glDeleteBuffers(2,this + 0x544);
  (*glDeleteVertexArraysOESEXT)(1,this + 0x540);
  GL::bindVAO(0);
  (*glGenVertexArraysOESEXT)(1,this + 0x540);
  GL::bindVAO(*(uint *)(this + 0x540));
  glGenBuffers(2,this + 0x544);
  glBindBuffer(0x8892,*(undefined4 *)(this + 0x544));
  glBufferData(0x8892,(long)*(int *)(this + 0x508) * 0x60,*(undefined8 *)(this + 0x530),0x88e8);
  glEnableVertexAttribArray(0);
  glVertexAttribPointer(0,2,0x1406,0,0x18,0);
  glEnableVertexAttribArray(1);
  glVertexAttribPointer(1,4,0x1401,1,0x18,0xc);
  glEnableVertexAttribArray(2);
  glVertexAttribPointer(2,2,0x1406,0,0x18,0x10);
  glBindBuffer(0x8893,*(undefined4 *)(this + 0x548));
  glBufferData(0x8893,(long)*(int *)(this + 0x508) * 0xc,*(undefined8 *)(this + 0x538),0x88e4);
  GL::bindVAO(0);
  glBindBuffer(0x8893,0);
  glBindBuffer(0x8892,0);
  return;
}

