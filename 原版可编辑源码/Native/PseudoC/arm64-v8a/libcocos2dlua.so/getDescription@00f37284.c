
/* cocos2d::ParticleSystemQuad::getDescription() const */

void __thiscall cocos2d::ParticleSystemQuad::getDescription(ParticleSystemQuad *this)

{
  StringUtils::format("<ParticleSystemQuad | Tag = %d, Total Particles = %d>",
                      (ulong)*(uint *)(this + 0x1a0),(ulong)*(uint *)(this + 0x508));
  return;
}

