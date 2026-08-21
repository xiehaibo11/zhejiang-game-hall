
/* cocosbuilder::MenuLoader::~MenuLoader() */

void __thiscall cocosbuilder::MenuLoader::~MenuLoader(MenuLoader *this)

{
  NodeLoader::~NodeLoader((NodeLoader *)this);
  operator_delete(this);
  return;
}

