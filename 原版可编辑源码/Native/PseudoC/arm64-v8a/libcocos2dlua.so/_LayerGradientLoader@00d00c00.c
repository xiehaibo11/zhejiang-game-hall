
/* cocosbuilder::LayerGradientLoader::~LayerGradientLoader() */

void __thiscall cocosbuilder::LayerGradientLoader::~LayerGradientLoader(LayerGradientLoader *this)

{
  NodeLoader::~NodeLoader((NodeLoader *)this);
  operator_delete(this);
  return;
}

