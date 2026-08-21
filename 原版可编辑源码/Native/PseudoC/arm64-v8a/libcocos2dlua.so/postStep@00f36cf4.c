
/* cocos2d::ParticleSystemQuad::postStep() */

void __thiscall cocos2d::ParticleSystemQuad::postStep(ParticleSystemQuad *this)

{
  glBindBuffer(0x8892,*(undefined4 *)(this + 0x544));
  glBufferSubData(0x8892,0,(long)*(int *)(this + 0x508) * 0x60,*(undefined8 *)(this + 0x530));
  glBindBuffer(0x8892,0);
  return;
}

