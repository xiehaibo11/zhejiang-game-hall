
/* cocos2d::PUParticle3DBeamVisualData::~PUParticle3DBeamVisualData() */

void __thiscall
cocos2d::PUParticle3DBeamVisualData::~PUParticle3DBeamVisualData(PUParticle3DBeamVisualData *this)

{
  Ref::~Ref((Ref *)this);
  operator_delete(this);
  return;
}

