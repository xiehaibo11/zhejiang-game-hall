
/* cocos2d::PUParticle3DQuadRender::setType(cocos2d::PUParticle3DQuadRender::Type) */

void __thiscall cocos2d::PUParticle3DQuadRender::setType(PUParticle3DQuadRender *this,uint param_2)

{
  *(uint *)(this + 0xe0) = param_2;
  RenderState::StateBlock::setCullFace(*(StateBlock **)(this + 0x70),(param_2 & 0xfffffffe) != 4);
  return;
}

