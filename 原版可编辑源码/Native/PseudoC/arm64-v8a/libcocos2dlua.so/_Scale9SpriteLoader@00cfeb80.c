
/* cocosbuilder::Scale9SpriteLoader::~Scale9SpriteLoader() */

void __thiscall cocosbuilder::Scale9SpriteLoader::~Scale9SpriteLoader(Scale9SpriteLoader *this)

{
  NodeLoader::~NodeLoader((NodeLoader *)this);
  operator_delete(this);
  return;
}

