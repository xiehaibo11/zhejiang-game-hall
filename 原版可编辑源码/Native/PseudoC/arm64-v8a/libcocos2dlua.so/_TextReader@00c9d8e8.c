
/* non-virtual thunk to cocostudio::TextReader::~TextReader() */

void __thiscall cocostudio::TextReader::~TextReader(TextReader *this)

{
  WidgetReader::~WidgetReader((WidgetReader *)(this + -0x30));
  operator_delete((WidgetReader *)(this + -0x30));
  return;
}

