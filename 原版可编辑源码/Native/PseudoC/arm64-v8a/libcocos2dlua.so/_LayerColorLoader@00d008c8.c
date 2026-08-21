
/* cocosbuilder::LayerColorLoader::~LayerColorLoader() */

void __thiscall cocosbuilder::LayerColorLoader::~LayerColorLoader(LayerColorLoader *this)

{
  NodeLoader::~NodeLoader((NodeLoader *)this);
  operator_delete(this);
  return;
}

