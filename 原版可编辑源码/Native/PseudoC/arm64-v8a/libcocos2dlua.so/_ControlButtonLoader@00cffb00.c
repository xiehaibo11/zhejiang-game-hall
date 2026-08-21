
/* cocosbuilder::ControlButtonLoader::~ControlButtonLoader() */

void __thiscall cocosbuilder::ControlButtonLoader::~ControlButtonLoader(ControlButtonLoader *this)

{
  NodeLoader::~NodeLoader((NodeLoader *)this);
  operator_delete(this);
  return;
}

