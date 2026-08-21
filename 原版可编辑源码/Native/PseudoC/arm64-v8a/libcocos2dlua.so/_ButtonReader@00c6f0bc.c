
/* non-virtual thunk to cocostudio::ButtonReader::~ButtonReader() */

void __thiscall cocostudio::ButtonReader::~ButtonReader(ButtonReader *this)

{
  WidgetReader::~WidgetReader((WidgetReader *)(this + -0x30));
  operator_delete((WidgetReader *)(this + -0x30));
  return;
}

