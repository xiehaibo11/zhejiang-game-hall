
/* cocosbuilder::SpriteLoader::~SpriteLoader() */

void __thiscall cocosbuilder::SpriteLoader::~SpriteLoader(SpriteLoader *this)

{
  NodeLoader::~NodeLoader((NodeLoader *)this);
  operator_delete(this);
  return;
}

