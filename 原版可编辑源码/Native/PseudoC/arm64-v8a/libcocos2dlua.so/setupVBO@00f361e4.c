
/* cocos2d::ParticleSystemQuad::setupVBO() */

void __thiscall cocos2d::ParticleSystemQuad::setupVBO(ParticleSystemQuad *this)

{
  glDeleteBuffers(2,this + 0x544);
  glGenBuffers(2,this + 0x544);
  glBindBuffer(0x8892,*(undefined4 *)(this + 0x544));
  glBufferData(0x8892,(long)*(int *)(this + 0x508) * 0x60,*(undefined8 *)(this + 0x530),0x88e8);
  glBindBuffer(0x8892,0);
  glBindBuffer(0x8893,*(undefined4 *)(this + 0x548));
  glBufferData(0x8893,(long)*(int *)(this + 0x508) * 0xc,*(undefined8 *)(this + 0x538),0x88e4);
  glBindBuffer(0x8893,0);
  return;
}

