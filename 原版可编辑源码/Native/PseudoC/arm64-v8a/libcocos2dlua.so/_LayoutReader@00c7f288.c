
/* cocostudio::LayoutReader::~LayoutReader() */

void __thiscall cocostudio::LayoutReader::~LayoutReader(LayoutReader *this)

{
  WidgetReader::~WidgetReader((WidgetReader *)this);
  operator_delete(this);
  return;
}

