
/* cocostudio::TextBMFontReader::~TextBMFontReader() */

void __thiscall cocostudio::TextBMFontReader::~TextBMFontReader(TextBMFontReader *this)

{
  WidgetReader::~WidgetReader((WidgetReader *)this);
  operator_delete(this);
  return;
}

