
/* cocosbuilder::MenuItemImageLoader::~MenuItemImageLoader() */

void __thiscall cocosbuilder::MenuItemImageLoader::~MenuItemImageLoader(MenuItemImageLoader *this)

{
  NodeLoader::~NodeLoader((NodeLoader *)this);
  operator_delete(this);
  return;
}

