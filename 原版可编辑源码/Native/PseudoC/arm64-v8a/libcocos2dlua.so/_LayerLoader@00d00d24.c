
/* cocosbuilder::LayerLoader::~LayerLoader() */

void __thiscall cocosbuilder::LayerLoader::~LayerLoader(LayerLoader *this)

{
  NodeLoader::~NodeLoader((NodeLoader *)this);
  operator_delete(this);
  return;
}

