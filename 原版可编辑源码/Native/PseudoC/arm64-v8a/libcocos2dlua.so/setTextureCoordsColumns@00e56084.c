
/* cocos2d::PUParticle3DQuadRender::setTextureCoordsColumns(unsigned short) */

void __thiscall
cocos2d::PUParticle3DQuadRender::setTextureCoordsColumns
          (PUParticle3DQuadRender *this,ushort param_1)

{
  *(ushort *)(this + 0x106) = param_1;
  *(float *)(this + 0x10c) = 1.0 / (float)param_1;
  return;
}

