
/* cocos2d::PUParticle3DQuadRender::getNumTextureCoords() */

int __thiscall cocos2d::PUParticle3DQuadRender::getNumTextureCoords(PUParticle3DQuadRender *this)

{
  return (uint)*(ushort *)(this + 0x104) * (uint)*(ushort *)(this + 0x106);
}

