
/* cocosbuilder::LabelTTFLoader::~LabelTTFLoader() */

void __thiscall cocosbuilder::LabelTTFLoader::~LabelTTFLoader(LabelTTFLoader *this)

{
  NodeLoader::~NodeLoader((NodeLoader *)this);
  operator_delete(this);
  return;
}

