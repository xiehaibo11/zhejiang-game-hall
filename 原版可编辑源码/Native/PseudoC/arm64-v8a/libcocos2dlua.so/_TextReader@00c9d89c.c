
/* cocostudio::TextReader::~TextReader() */

void __thiscall cocostudio::TextReader::~TextReader(TextReader *this)

{
  WidgetReader::~WidgetReader((WidgetReader *)this);
  operator_delete(this);
  return;
}

