
/* cocostudio::TextFieldReader::~TextFieldReader() */

void __thiscall cocostudio::TextFieldReader::~TextFieldReader(TextFieldReader *this)

{
  WidgetReader::~WidgetReader((WidgetReader *)this);
  operator_delete(this);
  return;
}

