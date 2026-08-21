
/* cocosbuilder::CCBFileLoader::~CCBFileLoader() */

void __thiscall cocosbuilder::CCBFileLoader::~CCBFileLoader(CCBFileLoader *this)

{
  NodeLoader::~NodeLoader((NodeLoader *)this);
  operator_delete(this);
  return;
}

