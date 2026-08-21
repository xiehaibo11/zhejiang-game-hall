
/* cocos2d::PUParticle3DQuadRender::setTextureCoordsRows(unsigned short) */

void __thiscall
cocos2d::PUParticle3DQuadRender::setTextureCoordsRows(PUParticle3DQuadRender *this,ushort param_1)

{
  *(ushort *)(this + 0x104) = param_1;
  *(float *)(this + 0x108) = 1.0 / (float)param_1;
  return;
}

