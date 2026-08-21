
/* cocostudio::ParticleReader::~ParticleReader() */

void __thiscall cocostudio::ParticleReader::~ParticleReader(ParticleReader *this)

{
  cocos2d::Ref::~Ref((Ref *)this);
  operator_delete(this);
  return;
}

