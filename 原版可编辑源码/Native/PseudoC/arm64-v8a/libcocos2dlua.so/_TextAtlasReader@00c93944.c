
/* cocostudio::TextAtlasReader::~TextAtlasReader() */

void __thiscall cocostudio::TextAtlasReader::~TextAtlasReader(TextAtlasReader *this)

{
  WidgetReader::~WidgetReader((WidgetReader *)this);
  operator_delete(this);
  return;
}

