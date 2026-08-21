
/* cocosbuilder::ParticleSystemQuadLoader::~ParticleSystemQuadLoader() */

void __thiscall
cocosbuilder::ParticleSystemQuadLoader::~ParticleSystemQuadLoader(ParticleSystemQuadLoader *this)

{
  NodeLoader::~NodeLoader((NodeLoader *)this);
  operator_delete(this);
  return;
}

