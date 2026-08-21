
/* cocos2d::PUParticle3DQuadRender::~PUParticle3DQuadRender() */

void __thiscall
cocos2d::PUParticle3DQuadRender::~PUParticle3DQuadRender(PUParticle3DQuadRender *this)

{
  PUParticle3DBoxRender::~PUParticle3DBoxRender((PUParticle3DBoxRender *)this);
  operator_delete(this);
  return;
}

