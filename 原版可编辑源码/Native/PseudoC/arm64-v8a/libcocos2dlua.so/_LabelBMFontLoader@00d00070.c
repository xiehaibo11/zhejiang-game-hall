
/* cocosbuilder::LabelBMFontLoader::~LabelBMFontLoader() */

void __thiscall cocosbuilder::LabelBMFontLoader::~LabelBMFontLoader(LabelBMFontLoader *this)

{
  NodeLoader::~NodeLoader((NodeLoader *)this);
  operator_delete(this);
  return;
}

