
/* cocosbuilder::ScrollViewLoader::~ScrollViewLoader() */

void __thiscall cocosbuilder::ScrollViewLoader::~ScrollViewLoader(ScrollViewLoader *this)

{
  NodeLoader::~NodeLoader((NodeLoader *)this);
  operator_delete(this);
  return;
}

